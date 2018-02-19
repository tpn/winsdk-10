/* Header file automatically generated from windows.ui.xaml.documents.idl */
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
#ifndef __windows2Eui2Examl2Edocuments_h__
#define __windows2Eui2Examl2Edocuments_h__
#ifndef __windows2Eui2Examl2Edocuments_p_h__
#define __windows2Eui2Examl2Edocuments_p_h__


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
#include "Windows.UI.Text.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Input.h"
#include "Windows.UI.Xaml.Media.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IBlock;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock ABI::Windows::UI::Xaml::Documents::IBlock

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IBlock2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 ABI::Windows::UI::Xaml::Documents::IBlock2

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IBlockFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory ABI::Windows::UI::Xaml::Documents::IBlockFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IBlockStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics ABI::Windows::UI::Xaml::Documents::IBlockStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IBlockStatics2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 ABI::Windows::UI::Xaml::Documents::IBlockStatics2

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IBold;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold ABI::Windows::UI::Xaml::Documents::IBold

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IGlyphs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs ABI::Windows::UI::Xaml::Documents::IGlyphs

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IGlyphs2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 ABI::Windows::UI::Xaml::Documents::IGlyphs2

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IGlyphsStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics ABI::Windows::UI::Xaml::Documents::IGlyphsStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IGlyphsStatics2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 ABI::Windows::UI::Xaml::Documents::IGlyphsStatics2

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IHyperlink;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink ABI::Windows::UI::Xaml::Documents::IHyperlink

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IHyperlink2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 ABI::Windows::UI::Xaml::Documents::IHyperlink2

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IHyperlink3;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 ABI::Windows::UI::Xaml::Documents::IHyperlink3

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IHyperlink4;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 ABI::Windows::UI::Xaml::Documents::IHyperlink4

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IHyperlink5;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 ABI::Windows::UI::Xaml::Documents::IHyperlink5

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IHyperlinkClickEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs ABI::Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IHyperlinkStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics ABI::Windows::UI::Xaml::Documents::IHyperlinkStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IHyperlinkStatics2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 ABI::Windows::UI::Xaml::Documents::IHyperlinkStatics2

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IHyperlinkStatics3;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 ABI::Windows::UI::Xaml::Documents::IHyperlinkStatics3

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IHyperlinkStatics4;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 ABI::Windows::UI::Xaml::Documents::IHyperlinkStatics4

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IHyperlinkStatics5;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 ABI::Windows::UI::Xaml::Documents::IHyperlinkStatics5

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IInline;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline ABI::Windows::UI::Xaml::Documents::IInline

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IInlineFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory ABI::Windows::UI::Xaml::Documents::IInlineFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IInlineUIContainer;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer ABI::Windows::UI::Xaml::Documents::IInlineUIContainer

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IItalic;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic ABI::Windows::UI::Xaml::Documents::IItalic

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ILineBreak;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak ABI::Windows::UI::Xaml::Documents::ILineBreak

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IParagraph;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph ABI::Windows::UI::Xaml::Documents::IParagraph

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IParagraphStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics ABI::Windows::UI::Xaml::Documents::IParagraphStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IRun;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun ABI::Windows::UI::Xaml::Documents::IRun

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IRunStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics ABI::Windows::UI::Xaml::Documents::IRunStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ISpan;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan ABI::Windows::UI::Xaml::Documents::ISpan

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ISpanFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory ABI::Windows::UI::Xaml::Documents::ISpanFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextElement;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement ABI::Windows::UI::Xaml::Documents::ITextElement

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextElement2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 ABI::Windows::UI::Xaml::Documents::ITextElement2

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextElement3;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 ABI::Windows::UI::Xaml::Documents::ITextElement3

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextElement4;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 ABI::Windows::UI::Xaml::Documents::ITextElement4

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextElementFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory ABI::Windows::UI::Xaml::Documents::ITextElementFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextElementOverrides;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides ABI::Windows::UI::Xaml::Documents::ITextElementOverrides

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextElementStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics ABI::Windows::UI::Xaml::Documents::ITextElementStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextElementStatics2;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 ABI::Windows::UI::Xaml::Documents::ITextElementStatics2

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextElementStatics3;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 ABI::Windows::UI::Xaml::Documents::ITextElementStatics3

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextElementStatics4;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 ABI::Windows::UI::Xaml::Documents::ITextElementStatics4

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextHighlighter;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter ABI::Windows::UI::Xaml::Documents::ITextHighlighter

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextHighlighterBase;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase ABI::Windows::UI::Xaml::Documents::ITextHighlighterBase

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextHighlighterBaseFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory ABI::Windows::UI::Xaml::Documents::ITextHighlighterBaseFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextHighlighterFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory ABI::Windows::UI::Xaml::Documents::ITextHighlighterFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextHighlighterStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics ABI::Windows::UI::Xaml::Documents::ITextHighlighterStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITextPointer;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer ABI::Windows::UI::Xaml::Documents::ITextPointer

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITypography;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography ABI::Windows::UI::Xaml::Documents::ITypography

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface ITypographyStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics ABI::Windows::UI::Xaml::Documents::ITypographyStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    interface IUnderline;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline ABI::Windows::UI::Xaml::Documents::IUnderline

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class Block;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_USE
#define DEF___FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("798d518e-a9f8-5fc7-8ccc-2a49069aba05"))
IIterator<ABI::Windows::UI::Xaml::Documents::Block*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::Block*, ABI::Windows::UI::Xaml::Documents::IBlock*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Xaml.Documents.Block>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Xaml::Documents::Block*> __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_t;
#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Documents::IBlock*>
//#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Documents::IBlock*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_USE
#define DEF___FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f7023b9a-e6d1-5e2d-8f41-b28c33323e04"))
IIterable<ABI::Windows::UI::Xaml::Documents::Block*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::Block*, ABI::Windows::UI::Xaml::Documents::IBlock*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Xaml.Documents.Block>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Xaml::Documents::Block*> __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_t;
#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Documents::IBlock*>
//#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Documents::IBlock*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class Inline;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_USE
#define DEF___FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f80dc964-2542-5c6a-ba65-b04824b5ed75"))
IIterator<ABI::Windows::UI::Xaml::Documents::Inline*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::Inline*, ABI::Windows::UI::Xaml::Documents::IInline*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Xaml.Documents.Inline>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Xaml::Documents::Inline*> __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_t;
#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Documents::IInline*>
//#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Documents::IInline*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_USE
#define DEF___FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e1d2b910-18c2-5906-8f8a-d62a63f93f18"))
IIterable<ABI::Windows::UI::Xaml::Documents::Inline*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::Inline*, ABI::Windows::UI::Xaml::Documents::IInline*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Xaml.Documents.Inline>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Xaml::Documents::Inline*> __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_t;
#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Documents::IInline*>
//#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Documents::IInline*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class TextHighlighter;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_USE
#define DEF___FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fe6f1eed-e66f-5236-a41f-817544e1e7bd"))
IIterator<ABI::Windows::UI::Xaml::Documents::TextHighlighter*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::TextHighlighter*, ABI::Windows::UI::Xaml::Documents::ITextHighlighter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Xaml.Documents.TextHighlighter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Xaml::Documents::TextHighlighter*> __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_t;
#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Documents::ITextHighlighter*>
//#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Documents::ITextHighlighter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_USE
#define DEF___FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4d7e043f-6697-599a-a13b-8dde71d5537d"))
IIterable<ABI::Windows::UI::Xaml::Documents::TextHighlighter*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::TextHighlighter*, ABI::Windows::UI::Xaml::Documents::ITextHighlighter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Xaml.Documents.TextHighlighter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Xaml::Documents::TextHighlighter*> __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_t;
#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Documents::ITextHighlighter*>
//#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Documents::ITextHighlighter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    struct TextRange;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_USE
#define DEF___FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("71f63622-c0fe-5423-914e-d319d25bcc84"))
IIterator<struct ABI::Windows::UI::Xaml::Documents::TextRange> : IIterator_impl<struct ABI::Windows::UI::Xaml::Documents::TextRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Xaml.Documents.TextRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<struct ABI::Windows::UI::Xaml::Documents::TextRange> __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_t;
#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Documents::TextRange>
//#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Xaml::Documents::TextRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_USE */





#ifndef DEF___FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_USE
#define DEF___FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2ad42fdb-56db-500b-8ea8-3d57edfadfc6"))
IIterable<struct ABI::Windows::UI::Xaml::Documents::TextRange> : IIterable_impl<struct ABI::Windows::UI::Xaml::Documents::TextRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Xaml.Documents.TextRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<struct ABI::Windows::UI::Xaml::Documents::TextRange> __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_t;
#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Documents::TextRange>
//#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Xaml::Documents::TextRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_USE
#define DEF___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("995f73c4-7cf8-5b59-a0fb-7e0c6477172e"))
IVectorView<ABI::Windows::UI::Xaml::Documents::Block*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::Block*, ABI::Windows::UI::Xaml::Documents::IBlock*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Xaml.Documents.Block>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Xaml::Documents::Block*> __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_t;
#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Documents::IBlock*>
//#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Documents::IBlock*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_USE
#define DEF___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c2dd082f-8cb4-51d6-b91b-7e2377780cee"))
IVectorView<ABI::Windows::UI::Xaml::Documents::Inline*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::Inline*, ABI::Windows::UI::Xaml::Documents::IInline*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Xaml.Documents.Inline>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Xaml::Documents::Inline*> __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_t;
#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Documents::IInline*>
//#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Documents::IInline*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_USE
#define DEF___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a74372d7-45e1-55f0-a29c-15ca0992eb78"))
IVectorView<ABI::Windows::UI::Xaml::Documents::TextHighlighter*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::TextHighlighter*, ABI::Windows::UI::Xaml::Documents::ITextHighlighter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Xaml.Documents.TextHighlighter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Xaml::Documents::TextHighlighter*> __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_t;
#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Documents::ITextHighlighter*>
//#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Documents::ITextHighlighter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



#ifndef DEF___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_USE
#define DEF___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c824d1d0-771a-5123-90cc-52281f0f287a"))
IVectorView<struct ABI::Windows::UI::Xaml::Documents::TextRange> : IVectorView_impl<struct ABI::Windows::UI::Xaml::Documents::TextRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Xaml.Documents.TextRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<struct ABI::Windows::UI::Xaml::Documents::TextRange> __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_t;
#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Documents::TextRange>
//#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Xaml::Documents::TextRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_USE
#define DEF___FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3ee78a34-160e-50ff-b5aa-09f263a669f8"))
IVector<ABI::Windows::UI::Xaml::Documents::Block*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::Block*, ABI::Windows::UI::Xaml::Documents::IBlock*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Xaml.Documents.Block>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::Xaml::Documents::Block*> __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_t;
#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Documents::IBlock*>
//#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Documents::IBlock*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_USE
#define DEF___FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("92ec9252-8ee3-55d6-84b4-30b635077778"))
IVector<ABI::Windows::UI::Xaml::Documents::Inline*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::Inline*, ABI::Windows::UI::Xaml::Documents::IInline*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Xaml.Documents.Inline>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::Xaml::Documents::Inline*> __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_t;
#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Documents::IInline*>
//#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Documents::IInline*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_USE
#define DEF___FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("64905558-d062-5f31-84af-4a5fa896ae50"))
IVector<ABI::Windows::UI::Xaml::Documents::TextHighlighter*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::TextHighlighter*, ABI::Windows::UI::Xaml::Documents::ITextHighlighter*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Xaml.Documents.TextHighlighter>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::Xaml::Documents::TextHighlighter*> __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_t;
#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Documents::ITextHighlighter*>
//#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Documents::ITextHighlighter*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



#ifndef DEF___FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_USE
#define DEF___FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ee9d4cda-0750-5c1f-93aa-59add8c1421b"))
IVector<struct ABI::Windows::UI::Xaml::Documents::TextRange> : IVector_impl<struct ABI::Windows::UI::Xaml::Documents::TextRange> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Xaml.Documents.TextRange>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<struct ABI::Windows::UI::Xaml::Documents::TextRange> __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_t;
#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Documents::TextRange>
//#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Xaml::Documents::TextRange>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_USE */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class Hyperlink;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class HyperlinkClickEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5fead0d2-e657-5aef-a91b-7f52ead17fe3"))
ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::Hyperlink*,ABI::Windows::UI::Xaml::Documents::HyperlinkClickEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::Hyperlink*, ABI::Windows::UI::Xaml::Documents::IHyperlink*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::HyperlinkClickEventArgs*, ABI::Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Documents.Hyperlink, Windows.UI.Xaml.Documents.HyperlinkClickEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::Hyperlink*,ABI::Windows::UI::Xaml::Documents::HyperlinkClickEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::IHyperlink*,ABI::Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::IHyperlink*,ABI::Windows::UI::Xaml::Documents::IHyperlinkClickEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class TextElement;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class AccessKeyDisplayRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IAccessKeyDisplayRequestedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("39ad7708-254e-560a-9e2e-73b1db31f935"))
ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::TextElement*,ABI::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::TextElement*, ABI::Windows::UI::Xaml::Documents::ITextElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs*, ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Documents.TextElement, Windows.UI.Xaml.Input.AccessKeyDisplayRequestedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::TextElement*,ABI::Windows::UI::Xaml::Input::AccessKeyDisplayRequestedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::ITextElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::ITextElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayRequestedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class AccessKeyDisplayDismissedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IAccessKeyDisplayDismissedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a8c9544b-7078-5316-beb6-d9ec916ab88a"))
ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::TextElement*,ABI::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::TextElement*, ABI::Windows::UI::Xaml::Documents::ITextElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs*, ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Documents.TextElement, Windows.UI.Xaml.Input.AccessKeyDisplayDismissedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::TextElement*,ABI::Windows::UI::Xaml::Input::AccessKeyDisplayDismissedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::ITextElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::ITextElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyDisplayDismissedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    class AccessKeyInvokedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    interface IAccessKeyInvokedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs ABI::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a72c6b01-2e3c-57b5-9ec4-948f6c6d930a"))
ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::TextElement*,ABI::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Documents::TextElement*, ABI::Windows::UI::Xaml::Documents::ITextElement*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs*, ABI::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Documents.TextElement, Windows.UI.Xaml.Input.AccessKeyInvokedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::TextElement*,ABI::Windows::UI::Xaml::Input::AccessKeyInvokedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::ITextElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Documents::ITextElement*,ABI::Windows::UI::Xaml::Input::IAccessKeyInvokedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
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
        namespace UI {
            namespace Text {
                
                typedef enum FontStretch : int FontStretch;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum FontStyle : int FontStyle;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef struct FontWeight FontWeight;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum TextDecorations : unsigned int TextDecorations;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                class DependencyObject;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IDependencyObject;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIDependencyObject ABI::Windows::UI::Xaml::IDependencyObject

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                class DependencyProperty;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IDependencyProperty;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty ABI::Windows::UI::Xaml::IDependencyProperty

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef enum ElementSoundMode : int ElementSoundMode;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef enum FlowDirection : int FlowDirection;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef enum FocusState : int FocusState;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef enum FontCapitals : int FontCapitals;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef enum FontEastAsianLanguage : int FontEastAsianLanguage;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef enum FontEastAsianWidths : int FontEastAsianWidths;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef enum FontFraction : int FontFraction;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef enum FontNumeralAlignment : int FontNumeralAlignment;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef enum FontNumeralStyle : int FontNumeralStyle;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef enum FontVariants : int FontVariants;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                class FrameworkElement;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIFrameworkElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIFrameworkElement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IFrameworkElement;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement ABI::Windows::UI::Xaml::IFrameworkElement

#endif // ____x_ABI_CWindows_CUI_CXaml_CIFrameworkElement_FWD_DEFINED__








namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    
                    typedef enum KeyTipPlacementMode : int KeyTipPlacementMode;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Input {
                    
                    typedef enum XYFocusNavigationStrategy : int XYFocusNavigationStrategy;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Input */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef enum LineStackingStrategy : int LineStackingStrategy;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    class Brush;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Media */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    interface IBrush;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush ABI::Windows::UI::Xaml::Media::IBrush

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    class FontFamily;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Media */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    interface IFontFamily;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Media */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily ABI::Windows::UI::Xaml::Media::IFontFamily

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    
                    typedef enum StyleSimulations : int StyleSimulations;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Media */} /* ABI */





#ifndef ____x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IRoutedEventHandler;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler ABI::Windows::UI::Xaml::IRoutedEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef enum TextAlignment : int TextAlignment;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                
                typedef struct Thickness Thickness;
                
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                class UIElement;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IUIElement;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIUIElement ABI::Windows::UI::Xaml::IUIElement

#endif // ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    
                    typedef enum LogicalDirection : int LogicalDirection;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    
                    typedef enum UnderlineStyle : int UnderlineStyle;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    
                    typedef struct TextRange TextRange;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */





















































namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class BlockCollection;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class Bold;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class Glyphs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class InlineCollection;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class InlineUIContainer;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class Italic;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class LineBreak;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class Paragraph;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class Run;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class Span;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class TextHighlighterBase;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class TextPointer;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class Typography;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    class Underline;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */












/*
 *
 * Struct Windows.UI.Xaml.Documents.LogicalDirection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [v1_enum, contract] */
                    enum LogicalDirection : int
                    {
                        LogicalDirection_Backward = 0,
                        LogicalDirection_Forward = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Documents.UnderlineStyle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [v1_enum, contract] */
                    enum UnderlineStyle : int
                    {
                        UnderlineStyle_None = 0,
                        UnderlineStyle_Single = 1,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Documents.TextRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [contract] */
                    struct TextRange
                    {
                        INT32 StartIndex;
                        INT32 Length;
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IBlock
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Block
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlock[] = L"Windows.UI.Xaml.Documents.IBlock";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("4BCE0016-DD47-4350-8CB0-E171600AC896"), exclusiveto, contract] */
                    MIDL_INTERFACE("4BCE0016-DD47-4350-8CB0-E171600AC896")
                    IBlock : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextAlignment(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::TextAlignment * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TextAlignment(
                            /* [in] */ABI::Windows::UI::Xaml::TextAlignment value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LineHeight(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LineHeight(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LineStackingStrategy(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::LineStackingStrategy * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LineStackingStrategy(
                            /* [in] */ABI::Windows::UI::Xaml::LineStackingStrategy value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Margin(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Thickness * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Margin(
                            /* [in] */ABI::Windows::UI::Xaml::Thickness value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBlock=_uuidof(IBlock);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IBlock2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Block
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlock2[] = L"Windows.UI.Xaml.Documents.IBlock2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("5EC7BDF3-1333-4A92-8318-6CAEDC12EF89"), exclusiveto, contract] */
                    MIDL_INTERFACE("5EC7BDF3-1333-4A92-8318-6CAEDC12EF89")
                    IBlock2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HorizontalTextAlignment(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::TextAlignment * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HorizontalTextAlignment(
                            /* [in] */ABI::Windows::UI::Xaml::TextAlignment value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBlock2=_uuidof(IBlock2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IBlockFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Block
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlockFactory[] = L"Windows.UI.Xaml.Documents.IBlockFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("07110532-4F59-4F3B-9CE5-25784C430507"), exclusiveto, contract] */
                    MIDL_INTERFACE("07110532-4F59-4F3B-9CE5-25784C430507")
                    IBlockFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Documents::IBlock * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBlockFactory=_uuidof(IBlockFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IBlockStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Block
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlockStatics[] = L"Windows.UI.Xaml.Documents.IBlockStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("F86A8C34-8D18-4C53-AEBD-91E610A5E010"), exclusiveto, contract] */
                    MIDL_INTERFACE("F86A8C34-8D18-4C53-AEBD-91E610A5E010")
                    IBlockStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextAlignmentProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LineHeightProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LineStackingStrategyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MarginProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBlockStatics=_uuidof(IBlockStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IBlockStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Block
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlockStatics2[] = L"Windows.UI.Xaml.Documents.IBlockStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("AF01A4D6-03E3-4CEE-9B02-2BFC308B27A9"), exclusiveto, contract] */
                    MIDL_INTERFACE("AF01A4D6-03E3-4CEE-9B02-2BFC308B27A9")
                    IBlockStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HorizontalTextAlignmentProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBlockStatics2=_uuidof(IBlockStatics2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IBold
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Bold
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBold[] = L"Windows.UI.Xaml.Documents.IBold";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("ADE73784-1B59-4DA4-BB23-0F20E885B4BF"), exclusiveto, contract] */
                    MIDL_INTERFACE("ADE73784-1B59-4DA4-BB23-0F20E885B4BF")
                    IBold : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBold=_uuidof(IBold);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IGlyphs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Glyphs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IGlyphs[] = L"Windows.UI.Xaml.Documents.IGlyphs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("D079498B-F2B1-4281-99A2-E4D05932B2B5"), exclusiveto, contract] */
                    MIDL_INTERFACE("D079498B-F2B1-4281-99A2-E4D05932B2B5")
                    IGlyphs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnicodeString(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UnicodeString(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Indices(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Indices(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontUri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FontUri(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StyleSimulations(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Media::StyleSimulations * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StyleSimulations(
                            /* [in] */ABI::Windows::UI::Xaml::Media::StyleSimulations value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontRenderingEmSize(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FontRenderingEmSize(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OriginX(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OriginX(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OriginY(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_OriginY(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Fill(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::IBrush * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Fill(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Media::IBrush * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGlyphs=_uuidof(IGlyphs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IGlyphs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Glyphs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IGlyphs2[] = L"Windows.UI.Xaml.Documents.IGlyphs2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("AA8BFE5C-3754-4BEE-BBE1-4403EE9B86F0"), exclusiveto, contract] */
                    MIDL_INTERFACE("AA8BFE5C-3754-4BEE-BBE1-4403EE9B86F0")
                    IGlyphs2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsColorFontEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsColorFontEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColorFontPaletteIndex(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ColorFontPaletteIndex(
                            /* [in] */INT32 value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGlyphs2=_uuidof(IGlyphs2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IGlyphsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Glyphs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IGlyphsStatics[] = L"Windows.UI.Xaml.Documents.IGlyphsStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("225CF4C5-FDF1-43ED-958F-414E86F103F2"), exclusiveto, contract] */
                    MIDL_INTERFACE("225CF4C5-FDF1-43ED-958F-414E86F103F2")
                    IGlyphsStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnicodeStringProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IndicesProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontUriProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StyleSimulationsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontRenderingEmSizeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OriginXProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OriginYProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FillProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGlyphsStatics=_uuidof(IGlyphsStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IGlyphsStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Glyphs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IGlyphsStatics2[] = L"Windows.UI.Xaml.Documents.IGlyphsStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("10489AA7-1615-4A33-AA02-D7EF2AEFC739"), exclusiveto, contract] */
                    MIDL_INTERFACE("10489AA7-1615-4A33-AA02-D7EF2AEFC739")
                    IGlyphsStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsColorFontEnabledProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ColorFontPaletteIndexProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGlyphsStatics2=_uuidof(IGlyphsStatics2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink[] = L"Windows.UI.Xaml.Documents.IHyperlink";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("0FE2363B-14E9-4152-9E58-5AEA5B21F08D"), exclusiveto, contract] */
                    MIDL_INTERFACE("0FE2363B-14E9-4152-9E58-5AEA5B21F08D")
                    IHyperlink : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NavigateUri(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NavigateUri(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Click(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Click(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHyperlink=_uuidof(IHyperlink);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlink2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink2[] = L"Windows.UI.Xaml.Documents.IHyperlink2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("4CE9DA5F-7CFF-4291-B78F-DFEC72490576"), exclusiveto, contract] */
                    MIDL_INTERFACE("4CE9DA5F-7CFF-4291-B78F-DFEC72490576")
                    IHyperlink2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnderlineStyle(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Documents::UnderlineStyle * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UnderlineStyle(
                            /* [in] */ABI::Windows::UI::Xaml::Documents::UnderlineStyle value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHyperlink2=_uuidof(IHyperlink2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlink3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink3[] = L"Windows.UI.Xaml.Documents.IHyperlink3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("C3F157D9-E5D3-4FB7-8702-4F6D85DD9E0A"), exclusiveto, contract] */
                    MIDL_INTERFACE("C3F157D9-E5D3-4FB7-8702-4F6D85DD9E0A")
                    IHyperlink3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusLeft(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_XYFocusLeft(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusRight(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_XYFocusRight(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusUp(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_XYFocusUp(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusDown(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_XYFocusDown(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElementSoundMode(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::ElementSoundMode * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ElementSoundMode(
                            /* [in] */ABI::Windows::UI::Xaml::ElementSoundMode value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHyperlink3=_uuidof(IHyperlink3);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlink4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink4[] = L"Windows.UI.Xaml.Documents.IHyperlink4";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("F7D02959-82FB-400A-A407-5A4EE677988A"), exclusiveto, contract] */
                    MIDL_INTERFACE("F7D02959-82FB-400A-A407-5A4EE677988A")
                    IHyperlink4 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FocusState(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::FocusState * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusUpNavigationStrategy(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::XYFocusNavigationStrategy * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_XYFocusUpNavigationStrategy(
                            /* [in] */ABI::Windows::UI::Xaml::Input::XYFocusNavigationStrategy value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusDownNavigationStrategy(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::XYFocusNavigationStrategy * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_XYFocusDownNavigationStrategy(
                            /* [in] */ABI::Windows::UI::Xaml::Input::XYFocusNavigationStrategy value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusLeftNavigationStrategy(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::XYFocusNavigationStrategy * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_XYFocusLeftNavigationStrategy(
                            /* [in] */ABI::Windows::UI::Xaml::Input::XYFocusNavigationStrategy value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusRightNavigationStrategy(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::XYFocusNavigationStrategy * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_XYFocusRightNavigationStrategy(
                            /* [in] */ABI::Windows::UI::Xaml::Input::XYFocusNavigationStrategy value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_GotFocus(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IRoutedEventHandler  * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_GotFocus(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_LostFocus(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IRoutedEventHandler  * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_LostFocus(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Focus(
                            /* [in] */ABI::Windows::UI::Xaml::FocusState value,
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHyperlink4=_uuidof(IHyperlink4);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlink5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink5[] = L"Windows.UI.Xaml.Documents.IHyperlink5";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("607DD7D2-0945-4328-91EE-94CCEC2EA6C3"), exclusiveto, contract] */
                    MIDL_INTERFACE("607DD7D2-0945-4328-91EE-94CCEC2EA6C3")
                    IHyperlink5 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTabStop(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsTabStop(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TabIndex(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TabIndex(
                            /* [in] */INT32 value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHyperlink5=_uuidof(IHyperlink5);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlinkClickEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.HyperlinkClickEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkClickEventArgs[] = L"Windows.UI.Xaml.Documents.IHyperlinkClickEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("C755916B-7BDC-4BE7-B373-9240A503D870"), exclusiveto, contract] */
                    MIDL_INTERFACE("C755916B-7BDC-4BE7-B373-9240A503D870")
                    IHyperlinkClickEventArgs : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHyperlinkClickEventArgs=_uuidof(IHyperlinkClickEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlinkStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("3A44D3D4-FD41-41DB-8C72-3B790ACD9FD3"), exclusiveto, contract] */
                    MIDL_INTERFACE("3A44D3D4-FD41-41DB-8C72-3B790ACD9FD3")
                    IHyperlinkStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NavigateUriProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHyperlinkStatics=_uuidof(IHyperlinkStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlinkStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics2[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("5028D8B7-7ADF-43EE-A4AE-9C925F755716"), exclusiveto, contract] */
                    MIDL_INTERFACE("5028D8B7-7ADF-43EE-A4AE-9C925F755716")
                    IHyperlinkStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnderlineStyleProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHyperlinkStatics2=_uuidof(IHyperlinkStatics2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlinkStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics3[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("3E15DEA0-205E-4947-99A5-74E757E8E1B4"), exclusiveto, contract] */
                    MIDL_INTERFACE("3E15DEA0-205E-4947-99A5-74E757E8E1B4")
                    IHyperlinkStatics3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusLeftProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusRightProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusUpProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusDownProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElementSoundModeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHyperlinkStatics3=_uuidof(IHyperlinkStatics3);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlinkStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics4[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics4";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("0476B378-8FAA-4E24-B3B6-E9DE4D3C708C"), exclusiveto, contract] */
                    MIDL_INTERFACE("0476B378-8FAA-4E24-B3B6-E9DE4D3C708C")
                    IHyperlinkStatics4 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FocusStateProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusUpNavigationStrategyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusDownNavigationStrategyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusLeftNavigationStrategyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_XYFocusRightNavigationStrategyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHyperlinkStatics4=_uuidof(IHyperlinkStatics4);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlinkStatics5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics5[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics5";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("59308CEA-1E49-4921-BD88-A2878D07E30E"), exclusiveto, contract] */
                    MIDL_INTERFACE("59308CEA-1E49-4921-BD88-A2878D07E30E")
                    IHyperlinkStatics5 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTabStopProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TabIndexProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHyperlinkStatics5=_uuidof(IHyperlinkStatics5);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IInline
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Inline
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IInline[] = L"Windows.UI.Xaml.Documents.IInline";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("0C92712D-1BC9-4931-8CB1-1AEADF1CC685"), exclusiveto, contract] */
                    MIDL_INTERFACE("0C92712D-1BC9-4931-8CB1-1AEADF1CC685")
                    IInline : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInline=_uuidof(IInline);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IInlineFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Inline
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IInlineFactory[] = L"Windows.UI.Xaml.Documents.IInlineFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("4058ACD1-2F90-4B8F-99DD-4218EF5F03DE"), exclusiveto, contract] */
                    MIDL_INTERFACE("4058ACD1-2F90-4B8F-99DD-4218EF5F03DE")
                    IInlineFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Documents::IInline * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInlineFactory=_uuidof(IInlineFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IInlineUIContainer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.InlineUIContainer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IInlineUIContainer[] = L"Windows.UI.Xaml.Documents.IInlineUIContainer";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("1416CE81-28EE-452E-B121-5FC4F60B86A6"), exclusiveto, contract] */
                    MIDL_INTERFACE("1416CE81-28EE-452E-B121-5FC4F60B86A6")
                    IInlineUIContainer : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Child(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IUIElement * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Child(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInlineUIContainer=_uuidof(IInlineUIContainer);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IItalic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Italic
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IItalic[] = L"Windows.UI.Xaml.Documents.IItalic";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("91F4619C-FCBB-4157-802C-76F63B5FB657"), exclusiveto, contract] */
                    MIDL_INTERFACE("91F4619C-FCBB-4157-802C-76F63B5FB657")
                    IItalic : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IItalic=_uuidof(IItalic);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ILineBreak
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.LineBreak
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ILineBreak[] = L"Windows.UI.Xaml.Documents.ILineBreak";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("645589C4-F769-41ED-895B-8A1B2FB31562"), exclusiveto, contract] */
                    MIDL_INTERFACE("645589C4-F769-41ED-895B-8A1B2FB31562")
                    ILineBreak : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ILineBreak=_uuidof(ILineBreak);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IParagraph
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Paragraph
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IParagraph[] = L"Windows.UI.Xaml.Documents.IParagraph";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("F83EF59A-FA61-4BEF-AE33-0B0AD756A84D"), exclusiveto, contract] */
                    MIDL_INTERFACE("F83EF59A-FA61-4BEF-AE33-0B0AD756A84D")
                    IParagraph : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Inlines(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextIndent(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TextIndent(
                            /* [in] */DOUBLE value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IParagraph=_uuidof(IParagraph);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IParagraphStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Paragraph
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IParagraphStatics[] = L"Windows.UI.Xaml.Documents.IParagraphStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("EF08889A-535B-4E4C-8D84-283B33E98A37"), exclusiveto, contract] */
                    MIDL_INTERFACE("EF08889A-535B-4E4C-8D84-283B33E98A37")
                    IParagraphStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextIndentProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IParagraphStatics=_uuidof(IParagraphStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IRun
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Run
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IRun[] = L"Windows.UI.Xaml.Documents.IRun";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("59553C83-0E14-49BD-B84B-C526F3034349"), exclusiveto, contract] */
                    MIDL_INTERFACE("59553C83-0E14-49BD-B84B-C526F3034349")
                    IRun : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Text(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Text(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlowDirection(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::FlowDirection * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FlowDirection(
                            /* [in] */ABI::Windows::UI::Xaml::FlowDirection value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRun=_uuidof(IRun);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IRunStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Run
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IRunStatics[] = L"Windows.UI.Xaml.Documents.IRunStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("E9303CEF-65A0-4B8D-A7F7-8FDB287B46F3"), exclusiveto, contract] */
                    MIDL_INTERFACE("E9303CEF-65A0-4B8D-A7F7-8FDB287B46F3")
                    IRunStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FlowDirectionProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IRunStatics=_uuidof(IRunStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ISpan
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Span
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ISpan[] = L"Windows.UI.Xaml.Documents.ISpan";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("9839D4A9-02AF-4811-AA15-6BEF3ACAC97A"), exclusiveto, contract] */
                    MIDL_INTERFACE("9839D4A9-02AF-4811-AA15-6BEF3ACAC97A")
                    ISpan : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Inlines(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Inlines(
                            /* [in] */__RPC__in_opt __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpan=_uuidof(ISpan);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ISpanFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Span
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ISpanFactory[] = L"Windows.UI.Xaml.Documents.ISpanFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("5B916F5C-CD2D-40C0-956A-386448322F79"), exclusiveto, contract] */
                    MIDL_INTERFACE("5B916F5C-CD2D-40C0-956A-386448322F79")
                    ISpanFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Documents::ISpan * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISpanFactory=_uuidof(ISpanFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElement[] = L"Windows.UI.Xaml.Documents.ITextElement";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("E83B0062-D776-4F92-BAEA-40E77D4791D5"), exclusiveto, contract] */
                    MIDL_INTERFACE("E83B0062-D776-4F92-BAEA-40E77D4791D5")
                    ITextElement : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontSize(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FontSize(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontFamily(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::IFontFamily * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FontFamily(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Media::IFontFamily * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontWeight(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontWeight * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FontWeight(
                            /* [in] */ABI::Windows::UI::Text::FontWeight value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontStyle(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontStyle * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FontStyle(
                            /* [in] */ABI::Windows::UI::Text::FontStyle value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontStretch(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontStretch * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FontStretch(
                            /* [in] */ABI::Windows::UI::Text::FontStretch value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CharacterSpacing(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CharacterSpacing(
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Foreground(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::IBrush * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Foreground(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Media::IBrush * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Language(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Language(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentStart(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Documents::ITextPointer * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentEnd(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Documents::ITextPointer * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElementStart(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Documents::ITextPointer * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElementEnd(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Documents::ITextPointer * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE FindName(
                            /* [in] */__RPC__in HSTRING name,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextElement=_uuidof(ITextElement);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElement2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElement2[] = L"Windows.UI.Xaml.Documents.ITextElement2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("A8076AA8-F892-49F6-8CD2-89ADDAF06D2D"), exclusiveto, contract] */
                    MIDL_INTERFACE("A8076AA8-F892-49F6-8CD2-89ADDAF06D2D")
                    ITextElement2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTextScaleFactorEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsTextScaleFactorEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextElement2=_uuidof(ITextElement2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElement3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElement3[] = L"Windows.UI.Xaml.Documents.ITextElement3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("D1DB340F-1BC4-4CA8-BCF7-770BFF9B27AB"), exclusiveto, contract] */
                    MIDL_INTERFACE("D1DB340F-1BC4-4CA8-BCF7-770BFF9B27AB")
                    ITextElement3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowFocusOnInteraction(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllowFocusOnInteraction(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccessKey(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AccessKey(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExitDisplayModeOnAccessKeyInvoked(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ExitDisplayModeOnAccessKeyInvoked(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextElement3=_uuidof(ITextElement3);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElement4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElement4[] = L"Windows.UI.Xaml.Documents.ITextElement4";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("B196E222-CA0E-48A9-83BC-36CE50566AC7"), exclusiveto, contract] */
                    MIDL_INTERFACE("B196E222-CA0E-48A9-83BC-36CE50566AC7")
                    ITextElement4 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextDecorations(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Text::TextDecorations * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TextDecorations(
                            /* [in] */ABI::Windows::UI::Text::TextDecorations value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAccessKeyScope(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsAccessKeyScope(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccessKeyScopeOwner(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AccessKeyScopeOwner(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyTipPlacementMode(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Input::KeyTipPlacementMode * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyTipPlacementMode(
                            /* [in] */ABI::Windows::UI::Xaml::Input::KeyTipPlacementMode value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyTipHorizontalOffset(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyTipHorizontalOffset(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyTipVerticalOffset(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyTipVerticalOffset(
                            /* [in] */DOUBLE value
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AccessKeyDisplayRequested(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AccessKeyDisplayRequested(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AccessKeyDisplayDismissed(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AccessKeyDisplayDismissed(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_AccessKeyInvoked(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_AccessKeyInvoked(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextElement4=_uuidof(ITextElement4);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElementFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementFactory[] = L"Windows.UI.Xaml.Documents.ITextElementFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("35007285-CF47-4BFE-B1BC-39C93AF4AE80"), exclusiveto, contract] */
                    MIDL_INTERFACE("35007285-CF47-4BFE-B1BC-39C93AF4AE80")
                    ITextElementFactory : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextElementFactory=_uuidof(ITextElementFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElementOverrides
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementOverrides[] = L"Windows.UI.Xaml.Documents.ITextElementOverrides";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("0CE21EE7-4F76-4DD9-BF91-163BECCF84BC"), exclusiveto, contract] */
                    MIDL_INTERFACE("0CE21EE7-4F76-4DD9-BF91-163BECCF84BC")
                    ITextElementOverrides : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE OnDisconnectVisualChildren(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextElementOverrides=_uuidof(ITextElementOverrides);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElementStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementStatics[] = L"Windows.UI.Xaml.Documents.ITextElementStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("0A2F9B98-6C03-4470-A79B-3298A10482CE"), exclusiveto, contract] */
                    MIDL_INTERFACE("0A2F9B98-6C03-4470-A79B-3298A10482CE")
                    ITextElementStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontSizeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontFamilyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontWeightProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontStyleProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontStretchProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CharacterSpacingProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForegroundProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LanguageProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextElementStatics=_uuidof(ITextElementStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElementStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementStatics2[] = L"Windows.UI.Xaml.Documents.ITextElementStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("164297B2-982B-49E1-8C03-CA43BC4D5B6D"), exclusiveto, contract] */
                    MIDL_INTERFACE("164297B2-982B-49E1-8C03-CA43BC4D5B6D")
                    ITextElementStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsTextScaleFactorEnabledProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextElementStatics2=_uuidof(ITextElementStatics2);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElementStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementStatics3[] = L"Windows.UI.Xaml.Documents.ITextElementStatics3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("CFEFCFAF-0FA1-45EC-9A4E-9B33664DC8B1"), exclusiveto, contract] */
                    MIDL_INTERFACE("CFEFCFAF-0FA1-45EC-9A4E-9B33664DC8B1")
                    ITextElementStatics3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllowFocusOnInteractionProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccessKeyProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExitDisplayModeOnAccessKeyInvokedProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextElementStatics3=_uuidof(ITextElementStatics3);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElementStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementStatics4[] = L"Windows.UI.Xaml.Documents.ITextElementStatics4";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("FD8F641E-6B12-40D5-B6EF-D1BD12AC9066"), exclusiveto, contract] */
                    MIDL_INTERFACE("FD8F641E-6B12-40D5-B6EF-D1BD12AC9066")
                    ITextElementStatics4 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextDecorationsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAccessKeyScopeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AccessKeyScopeOwnerProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyTipPlacementModeProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyTipHorizontalOffsetProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyTipVerticalOffsetProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextElementStatics4=_uuidof(ITextElementStatics4);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextHighlighter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextHighlighter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighter[] = L"Windows.UI.Xaml.Documents.ITextHighlighter";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("BA6CB54B-7D75-4535-B30D-A81A00B637A4"), exclusiveto, contract] */
                    MIDL_INTERFACE("BA6CB54B-7D75-4535-B30D-A81A00B637A4")
                    ITextHighlighter : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ranges(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Foreground(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::IBrush * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Foreground(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Media::IBrush * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Background(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::IBrush * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Background(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Media::IBrush * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextHighlighter=_uuidof(ITextHighlighter);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextHighlighterBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextHighlighterBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighterBase[] = L"Windows.UI.Xaml.Documents.ITextHighlighterBase";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("D957601A-5F0D-4CDF-9758-97E0EB95C8FA"), exclusiveto, contract] */
                    MIDL_INTERFACE("D957601A-5F0D-4CDF-9758-97E0EB95C8FA")
                    ITextHighlighterBase : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextHighlighterBase=_uuidof(ITextHighlighterBase);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextHighlighterBaseFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextHighlighterBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighterBaseFactory[] = L"Windows.UI.Xaml.Documents.ITextHighlighterBaseFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("9592B2D0-EADC-4C74-92C8-6E896E22506D"), exclusiveto, contract] */
                    MIDL_INTERFACE("9592B2D0-EADC-4C74-92C8-6E896E22506D")
                    ITextHighlighterBaseFactory : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextHighlighterBaseFactory=_uuidof(ITextHighlighterBaseFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextHighlighterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextHighlighter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighterFactory[] = L"Windows.UI.Xaml.Documents.ITextHighlighterFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("70125461-9A8F-4FA0-B235-8FFAA507BEF2"), exclusiveto, contract] */
                    MIDL_INTERFACE("70125461-9A8F-4FA0-B235-8FFAA507BEF2")
                    ITextHighlighterFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Documents::ITextHighlighter * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextHighlighterFactory=_uuidof(ITextHighlighterFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextHighlighterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextHighlighter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighterStatics[] = L"Windows.UI.Xaml.Documents.ITextHighlighterStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("B3B009C4-3A7E-49CC-AB84-29C405488765"), exclusiveto, contract] */
                    MIDL_INTERFACE("B3B009C4-3A7E-49CC-AB84-29C405488765")
                    ITextHighlighterStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForegroundProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextHighlighterStatics=_uuidof(ITextHighlighterStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextPointer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextPointer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextPointer[] = L"Windows.UI.Xaml.Documents.ITextPointer";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("AC687AA1-6A41-43FF-851E-45348AA2CF7B"), exclusiveto, contract] */
                    MIDL_INTERFACE("AC687AA1-6A41-43FF-851E-45348AA2CF7B")
                    ITextPointer : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Parent(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyObject * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VisualParent(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IFrameworkElement * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LogicalDirection(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Documents::LogicalDirection * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Offset(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCharacterRect(
                            /* [in] */ABI::Windows::UI::Xaml::Documents::LogicalDirection direction,
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetPositionAtOffset(
                            /* [in] */INT32 offset,
                            /* [in] */ABI::Windows::UI::Xaml::Documents::LogicalDirection direction,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Documents::ITextPointer * * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITextPointer=_uuidof(ITextPointer);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITypography
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Typography
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITypography[] = L"Windows.UI.Xaml.Documents.ITypography";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("866F65D5-EA97-42AB-9288-9C01AEBC7A97"), exclusiveto, contract] */
                    MIDL_INTERFACE("866F65D5-EA97-42AB-9288-9C01AEBC7A97")
                    ITypography : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITypography=_uuidof(ITypography);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITypographyStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Typography
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITypographyStatics[] = L"Windows.UI.Xaml.Documents.ITypographyStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("67B9EC88-6C57-4CE0-95F1-D4B9ED632FB4"), exclusiveto, contract] */
                    MIDL_INTERFACE("67B9EC88-6C57-4CE0-95F1-D4B9ED632FB4")
                    ITypographyStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AnnotationAlternatesProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAnnotationAlternates(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetAnnotationAlternates(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EastAsianExpertFormsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetEastAsianExpertForms(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetEastAsianExpertForms(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EastAsianLanguageProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetEastAsianLanguage(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::FontEastAsianLanguage * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetEastAsianLanguage(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */ABI::Windows::UI::Xaml::FontEastAsianLanguage value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EastAsianWidthsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetEastAsianWidths(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::FontEastAsianWidths * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetEastAsianWidths(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */ABI::Windows::UI::Xaml::FontEastAsianWidths value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StandardLigaturesProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStandardLigatures(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStandardLigatures(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContextualLigaturesProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetContextualLigatures(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetContextualLigatures(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DiscretionaryLigaturesProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetDiscretionaryLigatures(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetDiscretionaryLigatures(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HistoricalLigaturesProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetHistoricalLigatures(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetHistoricalLigatures(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StandardSwashesProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStandardSwashes(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStandardSwashes(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContextualSwashesProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetContextualSwashes(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetContextualSwashes(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContextualAlternatesProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetContextualAlternates(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetContextualAlternates(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticAlternatesProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticAlternates(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticAlternates(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */INT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet1Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet1(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet1(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet2Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet2(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet2(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet3Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet3(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet3(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet4Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet4(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet4(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet5Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet5(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet5(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet6Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet6(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet6(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet7Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet7(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet7(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet8Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet8(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet8(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet9Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet9(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet9(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet10Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet10(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet10(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet11Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet11(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet11(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet12Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet12(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet12(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet13Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet13(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet13(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet14Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet14(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet14(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet15Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet15(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet15(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet16Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet16(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet16(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet17Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet17(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet17(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet18Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet18(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet18(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet19Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet19(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet19(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StylisticSet20Property(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStylisticSet20(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetStylisticSet20(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CapitalsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCapitals(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::FontCapitals * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetCapitals(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */ABI::Windows::UI::Xaml::FontCapitals value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CapitalSpacingProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCapitalSpacing(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetCapitalSpacing(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KerningProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetKerning(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetKerning(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CaseSensitiveFormsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCaseSensitiveForms(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetCaseSensitiveForms(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HistoricalFormsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetHistoricalForms(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetHistoricalForms(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FractionProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetFraction(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::FontFraction * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFraction(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */ABI::Windows::UI::Xaml::FontFraction value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NumeralStyleProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetNumeralStyle(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::FontNumeralStyle * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetNumeralStyle(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */ABI::Windows::UI::Xaml::FontNumeralStyle value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NumeralAlignmentProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetNumeralAlignment(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::FontNumeralAlignment * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetNumeralAlignment(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */ABI::Windows::UI::Xaml::FontNumeralAlignment value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SlashedZeroProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetSlashedZero(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetSlashedZero(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MathematicalGreekProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetMathematicalGreek(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetMathematicalGreek(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VariantsProperty(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetVariants(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::FontVariants * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetVariants(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IDependencyObject * element,
                            /* [in] */ABI::Windows::UI::Xaml::FontVariants value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ITypographyStatics=_uuidof(ITypographyStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IUnderline
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Underline
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IUnderline[] = L"Windows.UI.Xaml.Documents.IUnderline";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Documents {
                    /* [object, uuid("A5FA8202-61C0-47D7-93EF-BC0B577C5F26"), exclusiveto, contract] */
                    MIDL_INTERFACE("A5FA8202-61C0-47D7-93EF-BC0B577C5F26")
                    IUnderline : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUnderline=_uuidof(IUnderline);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Documents */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Block
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IBlockStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IBlockStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IBlock ** Default Interface **
 *    Windows.UI.Xaml.Documents.IBlock2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Block_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Block_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Block[] = L"Windows.UI.Xaml.Documents.Block";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.BlockCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVector_1_Windows.UI.Xaml.Documents.Block ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.UI.Xaml.Documents.Block
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_BlockCollection_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_BlockCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_BlockCollection[] = L"Windows.UI.Xaml.Documents.BlockCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Bold
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IBold ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Bold_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Bold_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Bold[] = L"Windows.UI.Xaml.Documents.Bold";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Glyphs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IGlyphsStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IGlyphsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IGlyphs ** Default Interface **
 *    Windows.UI.Xaml.Documents.IGlyphs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Glyphs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Glyphs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Glyphs[] = L"Windows.UI.Xaml.Documents.Glyphs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Hyperlink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IHyperlinkStatics5 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IHyperlinkStatics4 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IHyperlinkStatics3 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IHyperlinkStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IHyperlinkStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IHyperlink ** Default Interface **
 *    Windows.UI.Xaml.Documents.IHyperlink2
 *    Windows.UI.Xaml.Documents.IHyperlink3
 *    Windows.UI.Xaml.Documents.IHyperlink4
 *    Windows.UI.Xaml.Documents.IHyperlink5
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Hyperlink_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Hyperlink_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Hyperlink[] = L"Windows.UI.Xaml.Documents.Hyperlink";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.HyperlinkClickEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IHyperlinkClickEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_HyperlinkClickEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_HyperlinkClickEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_HyperlinkClickEventArgs[] = L"Windows.UI.Xaml.Documents.HyperlinkClickEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Inline
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IInline ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Inline_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Inline_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Inline[] = L"Windows.UI.Xaml.Documents.Inline";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.InlineCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVector_1_Windows.UI.Xaml.Documents.Inline ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.UI.Xaml.Documents.Inline
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_InlineCollection_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_InlineCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_InlineCollection[] = L"Windows.UI.Xaml.Documents.InlineCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.InlineUIContainer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IInlineUIContainer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_InlineUIContainer_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_InlineUIContainer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_InlineUIContainer[] = L"Windows.UI.Xaml.Documents.InlineUIContainer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Italic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IItalic ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Italic_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Italic_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Italic[] = L"Windows.UI.Xaml.Documents.Italic";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.LineBreak
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ILineBreak ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_LineBreak_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_LineBreak_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_LineBreak[] = L"Windows.UI.Xaml.Documents.LineBreak";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Paragraph
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IParagraphStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IParagraph ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Paragraph_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Paragraph_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Paragraph[] = L"Windows.UI.Xaml.Documents.Paragraph";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Run
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IRunStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IRun ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Run_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Run_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Run[] = L"Windows.UI.Xaml.Documents.Run";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Span
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ISpan ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Span_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Span_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Span[] = L"Windows.UI.Xaml.Documents.Span";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.TextElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.ITextElementStatics4 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.ITextElementStatics3 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.ITextElementStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.ITextElementStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ITextElement ** Default Interface **
 *    Windows.UI.Xaml.Documents.ITextElementOverrides
 *    Windows.UI.Xaml.Documents.ITextElement2
 *    Windows.UI.Xaml.Documents.ITextElement3
 *    Windows.UI.Xaml.Documents.ITextElement4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_TextElement_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_TextElement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_TextElement[] = L"Windows.UI.Xaml.Documents.TextElement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.TextHighlighter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.ITextHighlighterStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ITextHighlighter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_TextHighlighter_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_TextHighlighter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_TextHighlighter[] = L"Windows.UI.Xaml.Documents.TextHighlighter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Documents.TextHighlighterBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ITextHighlighterBase ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_TextHighlighterBase_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_TextHighlighterBase_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_TextHighlighterBase[] = L"Windows.UI.Xaml.Documents.TextHighlighterBase";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Documents.TextPointer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ITextPointer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_TextPointer_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_TextPointer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_TextPointer[] = L"Windows.UI.Xaml.Documents.TextPointer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Typography
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.ITypographyStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ITypography ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Typography_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Typography_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Typography[] = L"Windows.UI.Xaml.Documents.Typography";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Underline
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IUnderline ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Underline_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Underline_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Underline[] = L"Windows.UI.Xaml.Documents.Underline";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline;

#endif // ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock;

typedef struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl;

interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock;

typedef  struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CDocuments__CBlock **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl;

interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CXaml__CDocuments__CBlock_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline;

typedef struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl;

interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline;

typedef  struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CDocuments__CInline **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl;

interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CXaml__CDocuments__CInline_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;

typedef struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl;

interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;

typedef  struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl;

interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange;

#if !defined(____FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange;

typedef struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl;

interface __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange;

typedef  struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CDocuments__CTextRange **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl;

interface __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CXaml__CDocuments__CTextRange_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock;

typedef struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl;

interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline;

typedef struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl;

interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;

typedef struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
            /* [in] */ __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl;

interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if !defined(____FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange;

typedef struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
            /* [in] */ struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl;

interface __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock;

typedef struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CBlock **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl;

interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlockVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CXaml__CDocuments__CBlock_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CDocuments__CInline;

typedef struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CInline **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl;

interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CInlineVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CXaml__CDocuments__CInline_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter;

typedef struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl;

interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighterVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CXaml__CDocuments__CTextHighlighter_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if !defined(____FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange;

typedef struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, /* [out] */ __RPC__deref_out_opt struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CDocuments__CTextRange **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
        /* [in] */ __RPC__in struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This, /* [in] */ __RPC__in struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl;

interface __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRangeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#ifndef ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CUI_CText_CFontStretch __x_ABI_CWindows_CUI_CText_CFontStretch;


typedef enum __x_ABI_CWindows_CUI_CText_CFontStyle __x_ABI_CWindows_CUI_CText_CFontStyle;


typedef struct __x_ABI_CWindows_CUI_CText_CFontWeight __x_ABI_CWindows_CUI_CText_CFontWeight;


typedef enum __x_ABI_CWindows_CUI_CText_CTextDecorations __x_ABI_CWindows_CUI_CText_CTextDecorations;




#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyObject_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CUI_CXaml_CElementSoundMode __x_ABI_CWindows_CUI_CXaml_CElementSoundMode;


typedef enum __x_ABI_CWindows_CUI_CXaml_CFlowDirection __x_ABI_CWindows_CUI_CXaml_CFlowDirection;


typedef enum __x_ABI_CWindows_CUI_CXaml_CFocusState __x_ABI_CWindows_CUI_CXaml_CFocusState;


typedef enum __x_ABI_CWindows_CUI_CXaml_CFontCapitals __x_ABI_CWindows_CUI_CXaml_CFontCapitals;


typedef enum __x_ABI_CWindows_CUI_CXaml_CFontEastAsianLanguage __x_ABI_CWindows_CUI_CXaml_CFontEastAsianLanguage;


typedef enum __x_ABI_CWindows_CUI_CXaml_CFontEastAsianWidths __x_ABI_CWindows_CUI_CXaml_CFontEastAsianWidths;


typedef enum __x_ABI_CWindows_CUI_CXaml_CFontFraction __x_ABI_CWindows_CUI_CXaml_CFontFraction;


typedef enum __x_ABI_CWindows_CUI_CXaml_CFontNumeralAlignment __x_ABI_CWindows_CUI_CXaml_CFontNumeralAlignment;


typedef enum __x_ABI_CWindows_CUI_CXaml_CFontNumeralStyle __x_ABI_CWindows_CUI_CXaml_CFontNumeralStyle;


typedef enum __x_ABI_CWindows_CUI_CXaml_CFontVariants __x_ABI_CWindows_CUI_CXaml_CFontVariants;

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIFrameworkElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIFrameworkElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIFrameworkElement_FWD_DEFINED__









typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode;


typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy;






typedef enum __x_ABI_CWindows_CUI_CXaml_CLineStackingStrategy __x_ABI_CWindows_CUI_CXaml_CLineStackingStrategy;




#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CStyleSimulations __x_ABI_CWindows_CUI_CXaml_CMedia_CStyleSimulations;





#ifndef ____x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CUI_CXaml_CTextAlignment __x_ABI_CWindows_CUI_CXaml_CTextAlignment;


typedef struct __x_ABI_CWindows_CUI_CXaml_CThickness __x_ABI_CWindows_CUI_CXaml_CThickness;

#ifndef ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CUI_CXaml_CDocuments_CLogicalDirection __x_ABI_CWindows_CUI_CXaml_CDocuments_CLogicalDirection;


typedef enum __x_ABI_CWindows_CUI_CXaml_CDocuments_CUnderlineStyle __x_ABI_CWindows_CUI_CXaml_CDocuments_CUnderlineStyle;


typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange;


















































































/*
 *
 * Struct Windows.UI.Xaml.Documents.LogicalDirection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CDocuments_CLogicalDirection
{
    LogicalDirection_Backward = 0,
    LogicalDirection_Forward = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Documents.UnderlineStyle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CDocuments_CUnderlineStyle
{
    UnderlineStyle_None = 0,
    UnderlineStyle_Single = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Documents.TextRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

/* [contract] */
struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CTextRange
{
    INT32 StartIndex;
    INT32 Length;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IBlock
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Block
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlock[] = L"Windows.UI.Xaml.Documents.IBlock";
/* [object, uuid("4BCE0016-DD47-4350-8CB0-E171600AC896"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CTextAlignment * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TextAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CTextAlignment value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LineHeight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LineHeight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LineStackingStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CLineStackingStrategy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LineStackingStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CLineStackingStrategy value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Margin )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CThickness * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Margin )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CThickness value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_get_TextAlignment(This,value) \
    ( (This)->lpVtbl->get_TextAlignment(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_put_TextAlignment(This,value) \
    ( (This)->lpVtbl->put_TextAlignment(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_get_LineHeight(This,value) \
    ( (This)->lpVtbl->get_LineHeight(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_put_LineHeight(This,value) \
    ( (This)->lpVtbl->put_LineHeight(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_get_LineStackingStrategy(This,value) \
    ( (This)->lpVtbl->get_LineStackingStrategy(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_put_LineStackingStrategy(This,value) \
    ( (This)->lpVtbl->put_LineStackingStrategy(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_get_Margin(This,value) \
    ( (This)->lpVtbl->get_Margin(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_put_Margin(This,value) \
    ( (This)->lpVtbl->put_Margin(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IBlock2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Block
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlock2[] = L"Windows.UI.Xaml.Documents.IBlock2";
/* [object, uuid("5EC7BDF3-1333-4A92-8318-6CAEDC12EF89"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HorizontalTextAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CTextAlignment * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HorizontalTextAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CTextAlignment value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_get_HorizontalTextAlignment(This,value) \
    ( (This)->lpVtbl->get_HorizontalTextAlignment(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_put_HorizontalTextAlignment(This,value) \
    ( (This)->lpVtbl->put_HorizontalTextAlignment(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IBlockFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Block
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlockFactory[] = L"Windows.UI.Xaml.Documents.IBlockFactory";
/* [object, uuid("07110532-4F59-4F3B-9CE5-25784C430507"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlock * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IBlockStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Block
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlockStatics[] = L"Windows.UI.Xaml.Documents.IBlockStatics";
/* [object, uuid("F86A8C34-8D18-4C53-AEBD-91E610A5E010"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextAlignmentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LineHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LineStackingStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MarginProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_get_TextAlignmentProperty(This,value) \
    ( (This)->lpVtbl->get_TextAlignmentProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_get_LineHeightProperty(This,value) \
    ( (This)->lpVtbl->get_LineHeightProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_get_LineStackingStrategyProperty(This,value) \
    ( (This)->lpVtbl->get_LineStackingStrategyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_get_MarginProperty(This,value) \
    ( (This)->lpVtbl->get_MarginProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IBlockStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Block
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBlockStatics2[] = L"Windows.UI.Xaml.Documents.IBlockStatics2";
/* [object, uuid("AF01A4D6-03E3-4CEE-9B02-2BFC308B27A9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HorizontalTextAlignmentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_get_HorizontalTextAlignmentProperty(This,value) \
    ( (This)->lpVtbl->get_HorizontalTextAlignmentProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBlockStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IBold
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Bold
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IBold[] = L"Windows.UI.Xaml.Documents.IBold";
/* [object, uuid("ADE73784-1B59-4DA4-BB23-0F20E885B4BF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBoldVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBoldVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBoldVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIBold_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IGlyphs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Glyphs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IGlyphs[] = L"Windows.UI.Xaml.Documents.IGlyphs";
/* [object, uuid("D079498B-F2B1-4281-99A2-E4D05932B2B5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnicodeString )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UnicodeString )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Indices )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Indices )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontUri )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FontUri )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StyleSimulations )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CStyleSimulations * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StyleSimulations )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CMedia_CStyleSimulations value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontRenderingEmSize )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FontRenderingEmSize )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OriginX )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OriginX )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OriginY )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_OriginY )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Fill )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Fill )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_get_UnicodeString(This,value) \
    ( (This)->lpVtbl->get_UnicodeString(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_put_UnicodeString(This,value) \
    ( (This)->lpVtbl->put_UnicodeString(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_get_Indices(This,value) \
    ( (This)->lpVtbl->get_Indices(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_put_Indices(This,value) \
    ( (This)->lpVtbl->put_Indices(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_get_FontUri(This,value) \
    ( (This)->lpVtbl->get_FontUri(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_put_FontUri(This,value) \
    ( (This)->lpVtbl->put_FontUri(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_get_StyleSimulations(This,value) \
    ( (This)->lpVtbl->get_StyleSimulations(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_put_StyleSimulations(This,value) \
    ( (This)->lpVtbl->put_StyleSimulations(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_get_FontRenderingEmSize(This,value) \
    ( (This)->lpVtbl->get_FontRenderingEmSize(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_put_FontRenderingEmSize(This,value) \
    ( (This)->lpVtbl->put_FontRenderingEmSize(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_get_OriginX(This,value) \
    ( (This)->lpVtbl->get_OriginX(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_put_OriginX(This,value) \
    ( (This)->lpVtbl->put_OriginX(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_get_OriginY(This,value) \
    ( (This)->lpVtbl->get_OriginY(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_put_OriginY(This,value) \
    ( (This)->lpVtbl->put_OriginY(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_get_Fill(This,value) \
    ( (This)->lpVtbl->get_Fill(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_put_Fill(This,value) \
    ( (This)->lpVtbl->put_Fill(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IGlyphs2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Glyphs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IGlyphs2[] = L"Windows.UI.Xaml.Documents.IGlyphs2";
/* [object, uuid("AA8BFE5C-3754-4BEE-BBE1-4403EE9B86F0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsColorFontEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsColorFontEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColorFontPaletteIndex )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ColorFontPaletteIndex )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2 * This,
        /* [in] */INT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_get_IsColorFontEnabled(This,value) \
    ( (This)->lpVtbl->get_IsColorFontEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_put_IsColorFontEnabled(This,value) \
    ( (This)->lpVtbl->put_IsColorFontEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_get_ColorFontPaletteIndex(This,value) \
    ( (This)->lpVtbl->get_ColorFontPaletteIndex(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_put_ColorFontPaletteIndex(This,value) \
    ( (This)->lpVtbl->put_ColorFontPaletteIndex(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphs2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IGlyphsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Glyphs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IGlyphsStatics[] = L"Windows.UI.Xaml.Documents.IGlyphsStatics";
/* [object, uuid("225CF4C5-FDF1-43ED-958F-414E86F103F2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnicodeStringProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IndicesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontUriProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StyleSimulationsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontRenderingEmSizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OriginXProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OriginYProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FillProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_get_UnicodeStringProperty(This,value) \
    ( (This)->lpVtbl->get_UnicodeStringProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_get_IndicesProperty(This,value) \
    ( (This)->lpVtbl->get_IndicesProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_get_FontUriProperty(This,value) \
    ( (This)->lpVtbl->get_FontUriProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_get_StyleSimulationsProperty(This,value) \
    ( (This)->lpVtbl->get_StyleSimulationsProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_get_FontRenderingEmSizeProperty(This,value) \
    ( (This)->lpVtbl->get_FontRenderingEmSizeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_get_OriginXProperty(This,value) \
    ( (This)->lpVtbl->get_OriginXProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_get_OriginYProperty(This,value) \
    ( (This)->lpVtbl->get_OriginYProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_get_FillProperty(This,value) \
    ( (This)->lpVtbl->get_FillProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IGlyphsStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Glyphs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IGlyphsStatics2[] = L"Windows.UI.Xaml.Documents.IGlyphsStatics2";
/* [object, uuid("10489AA7-1615-4A33-AA02-D7EF2AEFC739"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsColorFontEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ColorFontPaletteIndexProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_get_IsColorFontEnabledProperty(This,value) \
    ( (This)->lpVtbl->get_IsColorFontEnabledProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_get_ColorFontPaletteIndexProperty(This,value) \
    ( (This)->lpVtbl->get_ColorFontPaletteIndexProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIGlyphsStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink[] = L"Windows.UI.Xaml.Documents.IHyperlink";
/* [object, uuid("0FE2363B-14E9-4152-9E58-5AEA5B21F08D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NavigateUri )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NavigateUri )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Click )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CHyperlink_Windows__CUI__CXaml__CDocuments__CHyperlinkClickEventArgs * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Click )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_get_NavigateUri(This,value) \
    ( (This)->lpVtbl->get_NavigateUri(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_put_NavigateUri(This,value) \
    ( (This)->lpVtbl->put_NavigateUri(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_add_Click(This,value,token) \
    ( (This)->lpVtbl->add_Click(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_remove_Click(This,token) \
    ( (This)->lpVtbl->remove_Click(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlink2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink2[] = L"Windows.UI.Xaml.Documents.IHyperlink2";
/* [object, uuid("4CE9DA5F-7CFF-4291-B78F-DFEC72490576"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnderlineStyle )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CUnderlineStyle * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UnderlineStyle )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CDocuments_CUnderlineStyle value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_get_UnderlineStyle(This,value) \
    ( (This)->lpVtbl->get_UnderlineStyle(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_put_UnderlineStyle(This,value) \
    ( (This)->lpVtbl->put_UnderlineStyle(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlink3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink3[] = L"Windows.UI.Xaml.Documents.IHyperlink3";
/* [object, uuid("C3F157D9-E5D3-4FB7-8702-4F6D85DD9E0A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeft )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_XYFocusLeft )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusRight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_XYFocusRight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusUp )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_XYFocusUp )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusDown )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_XYFocusDown )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElementSoundMode )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CElementSoundMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ElementSoundMode )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CElementSoundMode value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_get_XYFocusLeft(This,value) \
    ( (This)->lpVtbl->get_XYFocusLeft(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_put_XYFocusLeft(This,value) \
    ( (This)->lpVtbl->put_XYFocusLeft(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_get_XYFocusRight(This,value) \
    ( (This)->lpVtbl->get_XYFocusRight(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_put_XYFocusRight(This,value) \
    ( (This)->lpVtbl->put_XYFocusRight(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_get_XYFocusUp(This,value) \
    ( (This)->lpVtbl->get_XYFocusUp(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_put_XYFocusUp(This,value) \
    ( (This)->lpVtbl->put_XYFocusUp(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_get_XYFocusDown(This,value) \
    ( (This)->lpVtbl->get_XYFocusDown(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_put_XYFocusDown(This,value) \
    ( (This)->lpVtbl->put_XYFocusDown(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_get_ElementSoundMode(This,value) \
    ( (This)->lpVtbl->get_ElementSoundMode(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_put_ElementSoundMode(This,value) \
    ( (This)->lpVtbl->put_ElementSoundMode(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlink4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink4[] = L"Windows.UI.Xaml.Documents.IHyperlink4";
/* [object, uuid("F7D02959-82FB-400A-A407-5A4EE677988A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FocusState )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CFocusState * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusUpNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_XYFocusUpNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusDownNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_XYFocusDownNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeftNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_XYFocusLeftNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusRightNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_XYFocusRightNavigationStrategy )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler  * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_LostFocus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler  * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_LostFocus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Focus )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CFocusState value,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_get_FocusState(This,value) \
    ( (This)->lpVtbl->get_FocusState(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_get_XYFocusUpNavigationStrategy(This,value) \
    ( (This)->lpVtbl->get_XYFocusUpNavigationStrategy(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_put_XYFocusUpNavigationStrategy(This,value) \
    ( (This)->lpVtbl->put_XYFocusUpNavigationStrategy(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_get_XYFocusDownNavigationStrategy(This,value) \
    ( (This)->lpVtbl->get_XYFocusDownNavigationStrategy(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_put_XYFocusDownNavigationStrategy(This,value) \
    ( (This)->lpVtbl->put_XYFocusDownNavigationStrategy(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_get_XYFocusLeftNavigationStrategy(This,value) \
    ( (This)->lpVtbl->get_XYFocusLeftNavigationStrategy(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_put_XYFocusLeftNavigationStrategy(This,value) \
    ( (This)->lpVtbl->put_XYFocusLeftNavigationStrategy(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_get_XYFocusRightNavigationStrategy(This,value) \
    ( (This)->lpVtbl->get_XYFocusRightNavigationStrategy(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_put_XYFocusRightNavigationStrategy(This,value) \
    ( (This)->lpVtbl->put_XYFocusRightNavigationStrategy(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_add_GotFocus(This,value,token) \
    ( (This)->lpVtbl->add_GotFocus(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_remove_GotFocus(This,token) \
    ( (This)->lpVtbl->remove_GotFocus(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_add_LostFocus(This,value,token) \
    ( (This)->lpVtbl->add_LostFocus(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_remove_LostFocus(This,token) \
    ( (This)->lpVtbl->remove_LostFocus(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_Focus(This,value,returnValue) \
    ( (This)->lpVtbl->Focus(This,value,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlink5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlink5[] = L"Windows.UI.Xaml.Documents.IHyperlink5";
/* [object, uuid("607DD7D2-0945-4328-91EE-94CCEC2EA6C3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTabStop )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsTabStop )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TabIndex )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TabIndex )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5 * This,
        /* [in] */INT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_get_IsTabStop(This,value) \
    ( (This)->lpVtbl->get_IsTabStop(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_put_IsTabStop(This,value) \
    ( (This)->lpVtbl->put_IsTabStop(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_get_TabIndex(This,value) \
    ( (This)->lpVtbl->get_TabIndex(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_put_TabIndex(This,value) \
    ( (This)->lpVtbl->put_TabIndex(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlink5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlinkClickEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.HyperlinkClickEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkClickEventArgs[] = L"Windows.UI.Xaml.Documents.IHyperlinkClickEventArgs";
/* [object, uuid("C755916B-7BDC-4BE7-B373-9240A503D870"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkClickEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlinkStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics";
/* [object, uuid("3A44D3D4-FD41-41DB-8C72-3B790ACD9FD3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NavigateUriProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_get_NavigateUriProperty(This,value) \
    ( (This)->lpVtbl->get_NavigateUriProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlinkStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics2[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics2";
/* [object, uuid("5028D8B7-7ADF-43EE-A4AE-9C925F755716"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnderlineStyleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_get_UnderlineStyleProperty(This,value) \
    ( (This)->lpVtbl->get_UnderlineStyleProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlinkStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics3[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics3";
/* [object, uuid("3E15DEA0-205E-4947-99A5-74E757E8E1B4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeftProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusRightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusUpProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusDownProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElementSoundModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_get_XYFocusLeftProperty(This,value) \
    ( (This)->lpVtbl->get_XYFocusLeftProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_get_XYFocusRightProperty(This,value) \
    ( (This)->lpVtbl->get_XYFocusRightProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_get_XYFocusUpProperty(This,value) \
    ( (This)->lpVtbl->get_XYFocusUpProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_get_XYFocusDownProperty(This,value) \
    ( (This)->lpVtbl->get_XYFocusDownProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_get_ElementSoundModeProperty(This,value) \
    ( (This)->lpVtbl->get_ElementSoundModeProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlinkStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics4[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics4";
/* [object, uuid("0476B378-8FAA-4E24-B3B6-E9DE4D3C708C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FocusStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusUpNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusDownNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusLeftNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_XYFocusRightNavigationStrategyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_get_FocusStateProperty(This,value) \
    ( (This)->lpVtbl->get_FocusStateProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_get_XYFocusUpNavigationStrategyProperty(This,value) \
    ( (This)->lpVtbl->get_XYFocusUpNavigationStrategyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_get_XYFocusDownNavigationStrategyProperty(This,value) \
    ( (This)->lpVtbl->get_XYFocusDownNavigationStrategyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_get_XYFocusLeftNavigationStrategyProperty(This,value) \
    ( (This)->lpVtbl->get_XYFocusLeftNavigationStrategyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_get_XYFocusRightNavigationStrategyProperty(This,value) \
    ( (This)->lpVtbl->get_XYFocusRightNavigationStrategyProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IHyperlinkStatics5
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Hyperlink
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IHyperlinkStatics5[] = L"Windows.UI.Xaml.Documents.IHyperlinkStatics5";
/* [object, uuid("59308CEA-1E49-4921-BD88-A2878D07E30E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTabStopProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TabIndexProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_get_IsTabStopProperty(This,value) \
    ( (This)->lpVtbl->get_IsTabStopProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_get_TabIndexProperty(This,value) \
    ( (This)->lpVtbl->get_TabIndexProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIHyperlinkStatics5_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IInline
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Inline
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IInline[] = L"Windows.UI.Xaml.Documents.IInline";
/* [object, uuid("0C92712D-1BC9-4931-8CB1-1AEADF1CC685"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IInlineFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Inline
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IInlineFactory[] = L"Windows.UI.Xaml.Documents.IInlineFactory";
/* [object, uuid("4058ACD1-2F90-4B8F-99DD-4218EF5F03DE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInline * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IInlineUIContainer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.InlineUIContainer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IInlineUIContainer[] = L"Windows.UI.Xaml.Documents.IInlineUIContainer";
/* [object, uuid("1416CE81-28EE-452E-B121-5FC4F60B86A6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Child )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Child )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_get_Child(This,value) \
    ( (This)->lpVtbl->get_Child(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_put_Child(This,value) \
    ( (This)->lpVtbl->put_Child(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIInlineUIContainer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IItalic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Italic
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IItalic[] = L"Windows.UI.Xaml.Documents.IItalic";
/* [object, uuid("91F4619C-FCBB-4157-802C-76F63B5FB657"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalicVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalicVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalicVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIItalic_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ILineBreak
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.LineBreak
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ILineBreak[] = L"Windows.UI.Xaml.Documents.ILineBreak";
/* [object, uuid("645589C4-F769-41ED-895B-8A1B2FB31562"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreakVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreakVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreakVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CILineBreak_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IParagraph
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Paragraph
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IParagraph[] = L"Windows.UI.Xaml.Documents.IParagraph";
/* [object, uuid("F83EF59A-FA61-4BEF-AE33-0B0AD756A84D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Inlines )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextIndent )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TextIndent )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_get_Inlines(This,value) \
    ( (This)->lpVtbl->get_Inlines(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_get_TextIndent(This,value) \
    ( (This)->lpVtbl->get_TextIndent(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_put_TextIndent(This,value) \
    ( (This)->lpVtbl->put_TextIndent(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraph_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IParagraphStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Paragraph
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IParagraphStatics[] = L"Windows.UI.Xaml.Documents.IParagraphStatics";
/* [object, uuid("EF08889A-535B-4E4C-8D84-283B33E98A37"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextIndentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_get_TextIndentProperty(This,value) \
    ( (This)->lpVtbl->get_TextIndentProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIParagraphStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IRun
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Run
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IRun[] = L"Windows.UI.Xaml.Documents.IRun";
/* [object, uuid("59553C83-0E14-49BD-B84B-C526F3034349"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlowDirection )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CFlowDirection * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FlowDirection )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CFlowDirection value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_get_Text(This,value) \
    ( (This)->lpVtbl->get_Text(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_put_Text(This,value) \
    ( (This)->lpVtbl->put_Text(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_get_FlowDirection(This,value) \
    ( (This)->lpVtbl->get_FlowDirection(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_put_FlowDirection(This,value) \
    ( (This)->lpVtbl->put_FlowDirection(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRun_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IRunStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Run
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IRunStatics[] = L"Windows.UI.Xaml.Documents.IRunStatics";
/* [object, uuid("E9303CEF-65A0-4B8D-A7F7-8FDB287B46F3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FlowDirectionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_get_FlowDirectionProperty(This,value) \
    ( (This)->lpVtbl->get_FlowDirectionProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIRunStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ISpan
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Span
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ISpan[] = L"Windows.UI.Xaml.Documents.ISpan";
/* [object, uuid("9839D4A9-02AF-4811-AA15-6BEF3ACAC97A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Inlines )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Inlines )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * This,
        /* [in] */__RPC__in_opt __FIVector_1_Windows__CUI__CXaml__CDocuments__CInline * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_get_Inlines(This,value) \
    ( (This)->lpVtbl->get_Inlines(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_put_Inlines(This,value) \
    ( (This)->lpVtbl->put_Inlines(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ISpanFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Span
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ISpanFactory[] = L"Windows.UI.Xaml.Documents.ISpanFactory";
/* [object, uuid("5B916F5C-CD2D-40C0-956A-386448322F79"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpan * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CISpanFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElement[] = L"Windows.UI.Xaml.Documents.ITextElement";
/* [object, uuid("E83B0062-D776-4F92-BAEA-40E77D4791D5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontSize )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FontSize )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontFamily )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FontFamily )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIFontFamily * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontWeight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FontWeight )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFontWeight value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontStyle )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontStyle * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FontStyle )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFontStyle value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontStretch )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontStretch * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FontStretch )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFontStretch value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CharacterSpacing )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CharacterSpacing )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Foreground )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Foreground )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentStart )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentEnd )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElementStart )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElementEnd )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FindName )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_get_FontSize(This,value) \
    ( (This)->lpVtbl->get_FontSize(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_put_FontSize(This,value) \
    ( (This)->lpVtbl->put_FontSize(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_get_FontFamily(This,value) \
    ( (This)->lpVtbl->get_FontFamily(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_put_FontFamily(This,value) \
    ( (This)->lpVtbl->put_FontFamily(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_get_FontWeight(This,value) \
    ( (This)->lpVtbl->get_FontWeight(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_put_FontWeight(This,value) \
    ( (This)->lpVtbl->put_FontWeight(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_get_FontStyle(This,value) \
    ( (This)->lpVtbl->get_FontStyle(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_put_FontStyle(This,value) \
    ( (This)->lpVtbl->put_FontStyle(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_get_FontStretch(This,value) \
    ( (This)->lpVtbl->get_FontStretch(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_put_FontStretch(This,value) \
    ( (This)->lpVtbl->put_FontStretch(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_get_CharacterSpacing(This,value) \
    ( (This)->lpVtbl->get_CharacterSpacing(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_put_CharacterSpacing(This,value) \
    ( (This)->lpVtbl->put_CharacterSpacing(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_get_Foreground(This,value) \
    ( (This)->lpVtbl->get_Foreground(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_put_Foreground(This,value) \
    ( (This)->lpVtbl->put_Foreground(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_get_Language(This,value) \
    ( (This)->lpVtbl->get_Language(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_put_Language(This,value) \
    ( (This)->lpVtbl->put_Language(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_get_ContentStart(This,value) \
    ( (This)->lpVtbl->get_ContentStart(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_get_ContentEnd(This,value) \
    ( (This)->lpVtbl->get_ContentEnd(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_get_ElementStart(This,value) \
    ( (This)->lpVtbl->get_ElementStart(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_get_ElementEnd(This,value) \
    ( (This)->lpVtbl->get_ElementEnd(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_FindName(This,name,returnValue) \
    ( (This)->lpVtbl->FindName(This,name,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElement2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElement2[] = L"Windows.UI.Xaml.Documents.ITextElement2";
/* [object, uuid("A8076AA8-F892-49F6-8CD2-89ADDAF06D2D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTextScaleFactorEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsTextScaleFactorEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_get_IsTextScaleFactorEnabled(This,value) \
    ( (This)->lpVtbl->get_IsTextScaleFactorEnabled(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_put_IsTextScaleFactorEnabled(This,value) \
    ( (This)->lpVtbl->put_IsTextScaleFactorEnabled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElement3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElement3[] = L"Windows.UI.Xaml.Documents.ITextElement3";
/* [object, uuid("D1DB340F-1BC4-4CA8-BCF7-770BFF9B27AB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowFocusOnInteraction )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllowFocusOnInteraction )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccessKey )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AccessKey )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExitDisplayModeOnAccessKeyInvoked )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ExitDisplayModeOnAccessKeyInvoked )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_get_AllowFocusOnInteraction(This,value) \
    ( (This)->lpVtbl->get_AllowFocusOnInteraction(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_put_AllowFocusOnInteraction(This,value) \
    ( (This)->lpVtbl->put_AllowFocusOnInteraction(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_get_AccessKey(This,value) \
    ( (This)->lpVtbl->get_AccessKey(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_put_AccessKey(This,value) \
    ( (This)->lpVtbl->put_AccessKey(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_get_ExitDisplayModeOnAccessKeyInvoked(This,value) \
    ( (This)->lpVtbl->get_ExitDisplayModeOnAccessKeyInvoked(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_put_ExitDisplayModeOnAccessKeyInvoked(This,value) \
    ( (This)->lpVtbl->put_ExitDisplayModeOnAccessKeyInvoked(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElement4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElement4[] = L"Windows.UI.Xaml.Documents.ITextElement4";
/* [object, uuid("B196E222-CA0E-48A9-83BC-36CE50566AC7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextDecorations )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CTextDecorations * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TextDecorations )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextDecorations value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAccessKeyScope )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsAccessKeyScope )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccessKeyScopeOwner )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AccessKeyScopeOwner )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyTipPlacementMode )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyTipPlacementMode )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyTipHorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyTipHorizontalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyTipVerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyTipVerticalOffset )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [in] */DOUBLE value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AccessKeyDisplayRequested )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AccessKeyDisplayRequested )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AccessKeyDisplayDismissed )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AccessKeyDisplayDismissed )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_AccessKeyInvoked )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_AccessKeyInvoked )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4 * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_get_TextDecorations(This,value) \
    ( (This)->lpVtbl->get_TextDecorations(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_put_TextDecorations(This,value) \
    ( (This)->lpVtbl->put_TextDecorations(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_get_IsAccessKeyScope(This,value) \
    ( (This)->lpVtbl->get_IsAccessKeyScope(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_put_IsAccessKeyScope(This,value) \
    ( (This)->lpVtbl->put_IsAccessKeyScope(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_get_AccessKeyScopeOwner(This,value) \
    ( (This)->lpVtbl->get_AccessKeyScopeOwner(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_put_AccessKeyScopeOwner(This,value) \
    ( (This)->lpVtbl->put_AccessKeyScopeOwner(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_get_KeyTipPlacementMode(This,value) \
    ( (This)->lpVtbl->get_KeyTipPlacementMode(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_put_KeyTipPlacementMode(This,value) \
    ( (This)->lpVtbl->put_KeyTipPlacementMode(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_get_KeyTipHorizontalOffset(This,value) \
    ( (This)->lpVtbl->get_KeyTipHorizontalOffset(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_put_KeyTipHorizontalOffset(This,value) \
    ( (This)->lpVtbl->put_KeyTipHorizontalOffset(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_get_KeyTipVerticalOffset(This,value) \
    ( (This)->lpVtbl->get_KeyTipVerticalOffset(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_put_KeyTipVerticalOffset(This,value) \
    ( (This)->lpVtbl->put_KeyTipVerticalOffset(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_add_AccessKeyDisplayRequested(This,value,token) \
    ( (This)->lpVtbl->add_AccessKeyDisplayRequested(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_remove_AccessKeyDisplayRequested(This,token) \
    ( (This)->lpVtbl->remove_AccessKeyDisplayRequested(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_add_AccessKeyDisplayDismissed(This,value,token) \
    ( (This)->lpVtbl->add_AccessKeyDisplayDismissed(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_remove_AccessKeyDisplayDismissed(This,token) \
    ( (This)->lpVtbl->remove_AccessKeyDisplayDismissed(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_add_AccessKeyInvoked(This,value,token) \
    ( (This)->lpVtbl->add_AccessKeyInvoked(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_remove_AccessKeyInvoked(This,token) \
    ( (This)->lpVtbl->remove_AccessKeyInvoked(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElementFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementFactory[] = L"Windows.UI.Xaml.Documents.ITextElementFactory";
/* [object, uuid("35007285-CF47-4BFE-B1BC-39C93AF4AE80"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElementOverrides
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementOverrides[] = L"Windows.UI.Xaml.Documents.ITextElementOverrides";
/* [object, uuid("0CE21EE7-4F76-4DD9-BF91-163BECCF84BC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnDisconnectVisualChildren )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverridesVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverridesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_OnDisconnectVisualChildren(This) \
    ( (This)->lpVtbl->OnDisconnectVisualChildren(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementOverrides_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElementStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementStatics[] = L"Windows.UI.Xaml.Documents.ITextElementStatics";
/* [object, uuid("0A2F9B98-6C03-4470-A79B-3298A10482CE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontSizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontFamilyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontWeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontStyleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontStretchProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CharacterSpacingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForegroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LanguageProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_get_FontSizeProperty(This,value) \
    ( (This)->lpVtbl->get_FontSizeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_get_FontFamilyProperty(This,value) \
    ( (This)->lpVtbl->get_FontFamilyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_get_FontWeightProperty(This,value) \
    ( (This)->lpVtbl->get_FontWeightProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_get_FontStyleProperty(This,value) \
    ( (This)->lpVtbl->get_FontStyleProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_get_FontStretchProperty(This,value) \
    ( (This)->lpVtbl->get_FontStretchProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_get_CharacterSpacingProperty(This,value) \
    ( (This)->lpVtbl->get_CharacterSpacingProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_get_ForegroundProperty(This,value) \
    ( (This)->lpVtbl->get_ForegroundProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_get_LanguageProperty(This,value) \
    ( (This)->lpVtbl->get_LanguageProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElementStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementStatics2[] = L"Windows.UI.Xaml.Documents.ITextElementStatics2";
/* [object, uuid("164297B2-982B-49E1-8C03-CA43BC4D5B6D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsTextScaleFactorEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_get_IsTextScaleFactorEnabledProperty(This,value) \
    ( (This)->lpVtbl->get_IsTextScaleFactorEnabledProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElementStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementStatics3[] = L"Windows.UI.Xaml.Documents.ITextElementStatics3";
/* [object, uuid("CFEFCFAF-0FA1-45EC-9A4E-9B33664DC8B1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllowFocusOnInteractionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccessKeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExitDisplayModeOnAccessKeyInvokedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_get_AllowFocusOnInteractionProperty(This,value) \
    ( (This)->lpVtbl->get_AllowFocusOnInteractionProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_get_AccessKeyProperty(This,value) \
    ( (This)->lpVtbl->get_AccessKeyProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_get_ExitDisplayModeOnAccessKeyInvokedProperty(This,value) \
    ( (This)->lpVtbl->get_ExitDisplayModeOnAccessKeyInvokedProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextElementStatics4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextElement
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextElementStatics4[] = L"Windows.UI.Xaml.Documents.ITextElementStatics4";
/* [object, uuid("FD8F641E-6B12-40D5-B6EF-D1BD12AC9066"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextDecorationsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAccessKeyScopeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AccessKeyScopeOwnerProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyTipPlacementModeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyTipHorizontalOffsetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyTipVerticalOffsetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_get_TextDecorationsProperty(This,value) \
    ( (This)->lpVtbl->get_TextDecorationsProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_get_IsAccessKeyScopeProperty(This,value) \
    ( (This)->lpVtbl->get_IsAccessKeyScopeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_get_AccessKeyScopeOwnerProperty(This,value) \
    ( (This)->lpVtbl->get_AccessKeyScopeOwnerProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_get_KeyTipPlacementModeProperty(This,value) \
    ( (This)->lpVtbl->get_KeyTipPlacementModeProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_get_KeyTipHorizontalOffsetProperty(This,value) \
    ( (This)->lpVtbl->get_KeyTipHorizontalOffsetProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_get_KeyTipVerticalOffsetProperty(This,value) \
    ( (This)->lpVtbl->get_KeyTipVerticalOffsetProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElementStatics4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextHighlighter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextHighlighter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighter[] = L"Windows.UI.Xaml.Documents.ITextHighlighter";
/* [object, uuid("BA6CB54B-7D75-4535-B30D-A81A00B637A4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ranges )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDocuments__CTextRange * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Foreground )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Foreground )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Background )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Background )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CIBrush * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_get_Ranges(This,value) \
    ( (This)->lpVtbl->get_Ranges(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_get_Foreground(This,value) \
    ( (This)->lpVtbl->get_Foreground(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_put_Foreground(This,value) \
    ( (This)->lpVtbl->put_Foreground(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_get_Background(This,value) \
    ( (This)->lpVtbl->get_Background(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_put_Background(This,value) \
    ( (This)->lpVtbl->put_Background(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextHighlighterBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextHighlighterBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighterBase[] = L"Windows.UI.Xaml.Documents.ITextHighlighterBase";
/* [object, uuid("D957601A-5F0D-4CDF-9758-97E0EB95C8FA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBase_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextHighlighterBaseFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextHighlighterBase
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighterBaseFactory[] = L"Windows.UI.Xaml.Documents.ITextHighlighterBaseFactory";
/* [object, uuid("9592B2D0-EADC-4C74-92C8-6E896E22506D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterBaseFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextHighlighterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextHighlighter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighterFactory[] = L"Windows.UI.Xaml.Documents.ITextHighlighterFactory";
/* [object, uuid("70125461-9A8F-4FA0-B235-8FFAA507BEF2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighter * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextHighlighterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextHighlighter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextHighlighterStatics[] = L"Windows.UI.Xaml.Documents.ITextHighlighterStatics";
/* [object, uuid("B3B009C4-3A7E-49CC-AB84-29C405488765"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForegroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_get_ForegroundProperty(This,value) \
    ( (This)->lpVtbl->get_ForegroundProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_get_BackgroundProperty(This,value) \
    ( (This)->lpVtbl->get_BackgroundProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextHighlighterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITextPointer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.TextPointer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITextPointer[] = L"Windows.UI.Xaml.Documents.ITextPointer";
/* [object, uuid("AC687AA1-6A41-43FF-851E-45348AA2CF7B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Parent )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VisualParent )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIFrameworkElement * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LogicalDirection )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CDocuments_CLogicalDirection * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Offset )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCharacterRect )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CDocuments_CLogicalDirection direction,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetPositionAtOffset )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * This,
        /* [in] */INT32 offset,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CDocuments_CLogicalDirection direction,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_get_Parent(This,value) \
    ( (This)->lpVtbl->get_Parent(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_get_VisualParent(This,value) \
    ( (This)->lpVtbl->get_VisualParent(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_get_LogicalDirection(This,value) \
    ( (This)->lpVtbl->get_LogicalDirection(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_get_Offset(This,value) \
    ( (This)->lpVtbl->get_Offset(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_GetCharacterRect(This,direction,returnValue) \
    ( (This)->lpVtbl->GetCharacterRect(This,direction,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_GetPositionAtOffset(This,offset,direction,returnValue) \
    ( (This)->lpVtbl->GetPositionAtOffset(This,offset,direction,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITextPointer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITypography
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Typography
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITypography[] = L"Windows.UI.Xaml.Documents.ITypography";
/* [object, uuid("866F65D5-EA97-42AB-9288-9C01AEBC7A97"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypography_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.ITypographyStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Typography
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_ITypographyStatics[] = L"Windows.UI.Xaml.Documents.ITypographyStatics";
/* [object, uuid("67B9EC88-6C57-4CE0-95F1-D4B9ED632FB4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AnnotationAlternatesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAnnotationAlternates )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetAnnotationAlternates )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EastAsianExpertFormsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetEastAsianExpertForms )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetEastAsianExpertForms )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EastAsianLanguageProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetEastAsianLanguage )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CFontEastAsianLanguage * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetEastAsianLanguage )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CFontEastAsianLanguage value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EastAsianWidthsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetEastAsianWidths )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CFontEastAsianWidths * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetEastAsianWidths )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CFontEastAsianWidths value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StandardLigaturesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStandardLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStandardLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContextualLigaturesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetContextualLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetContextualLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DiscretionaryLigaturesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDiscretionaryLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDiscretionaryLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HistoricalLigaturesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHistoricalLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetHistoricalLigatures )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StandardSwashesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStandardSwashes )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStandardSwashes )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContextualSwashesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetContextualSwashes )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetContextualSwashes )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContextualAlternatesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetContextualAlternates )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetContextualAlternates )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticAlternatesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticAlternates )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticAlternates )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet1Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet1 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet1 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet2Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet2 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet2 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet3Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet3 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet3 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet4Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet4 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet4 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet5Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet5 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet5 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet6Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet6 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet6 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet7Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet7 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet7 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet8Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet8 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet8 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet9Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet9 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet9 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet10Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet10 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet10 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet11Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet11 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet11 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet12Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet12 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet12 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet13Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet13 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet13 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet14Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet14 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet14 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet15Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet15 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet15 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet16Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet16 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet16 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet17Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet17 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet17 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet18Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet18 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet18 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet19Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet19 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet19 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StylisticSet20Property )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStylisticSet20 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetStylisticSet20 )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CapitalsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCapitals )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CFontCapitals * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetCapitals )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CFontCapitals value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CapitalSpacingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCapitalSpacing )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetCapitalSpacing )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KerningProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetKerning )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetKerning )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CaseSensitiveFormsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCaseSensitiveForms )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetCaseSensitiveForms )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HistoricalFormsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHistoricalForms )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetHistoricalForms )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FractionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFraction )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CFontFraction * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetFraction )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CFontFraction value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NumeralStyleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumeralStyle )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CFontNumeralStyle * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetNumeralStyle )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CFontNumeralStyle value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NumeralAlignmentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetNumeralAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CFontNumeralAlignment * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetNumeralAlignment )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CFontNumeralAlignment value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SlashedZeroProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSlashedZero )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSlashedZero )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MathematicalGreekProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetMathematicalGreek )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetMathematicalGreek )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VariantsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetVariants )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CFontVariants * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetVariants )(
        __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CFontVariants value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_AnnotationAlternatesProperty(This,value) \
    ( (This)->lpVtbl->get_AnnotationAlternatesProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetAnnotationAlternates(This,element,value) \
    ( (This)->lpVtbl->GetAnnotationAlternates(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetAnnotationAlternates(This,element,value) \
    ( (This)->lpVtbl->SetAnnotationAlternates(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_EastAsianExpertFormsProperty(This,value) \
    ( (This)->lpVtbl->get_EastAsianExpertFormsProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetEastAsianExpertForms(This,element,value) \
    ( (This)->lpVtbl->GetEastAsianExpertForms(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetEastAsianExpertForms(This,element,value) \
    ( (This)->lpVtbl->SetEastAsianExpertForms(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_EastAsianLanguageProperty(This,value) \
    ( (This)->lpVtbl->get_EastAsianLanguageProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetEastAsianLanguage(This,element,value) \
    ( (This)->lpVtbl->GetEastAsianLanguage(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetEastAsianLanguage(This,element,value) \
    ( (This)->lpVtbl->SetEastAsianLanguage(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_EastAsianWidthsProperty(This,value) \
    ( (This)->lpVtbl->get_EastAsianWidthsProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetEastAsianWidths(This,element,value) \
    ( (This)->lpVtbl->GetEastAsianWidths(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetEastAsianWidths(This,element,value) \
    ( (This)->lpVtbl->SetEastAsianWidths(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StandardLigaturesProperty(This,value) \
    ( (This)->lpVtbl->get_StandardLigaturesProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStandardLigatures(This,element,value) \
    ( (This)->lpVtbl->GetStandardLigatures(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStandardLigatures(This,element,value) \
    ( (This)->lpVtbl->SetStandardLigatures(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_ContextualLigaturesProperty(This,value) \
    ( (This)->lpVtbl->get_ContextualLigaturesProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetContextualLigatures(This,element,value) \
    ( (This)->lpVtbl->GetContextualLigatures(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetContextualLigatures(This,element,value) \
    ( (This)->lpVtbl->SetContextualLigatures(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_DiscretionaryLigaturesProperty(This,value) \
    ( (This)->lpVtbl->get_DiscretionaryLigaturesProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetDiscretionaryLigatures(This,element,value) \
    ( (This)->lpVtbl->GetDiscretionaryLigatures(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetDiscretionaryLigatures(This,element,value) \
    ( (This)->lpVtbl->SetDiscretionaryLigatures(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_HistoricalLigaturesProperty(This,value) \
    ( (This)->lpVtbl->get_HistoricalLigaturesProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetHistoricalLigatures(This,element,value) \
    ( (This)->lpVtbl->GetHistoricalLigatures(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetHistoricalLigatures(This,element,value) \
    ( (This)->lpVtbl->SetHistoricalLigatures(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StandardSwashesProperty(This,value) \
    ( (This)->lpVtbl->get_StandardSwashesProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStandardSwashes(This,element,value) \
    ( (This)->lpVtbl->GetStandardSwashes(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStandardSwashes(This,element,value) \
    ( (This)->lpVtbl->SetStandardSwashes(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_ContextualSwashesProperty(This,value) \
    ( (This)->lpVtbl->get_ContextualSwashesProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetContextualSwashes(This,element,value) \
    ( (This)->lpVtbl->GetContextualSwashes(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetContextualSwashes(This,element,value) \
    ( (This)->lpVtbl->SetContextualSwashes(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_ContextualAlternatesProperty(This,value) \
    ( (This)->lpVtbl->get_ContextualAlternatesProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetContextualAlternates(This,element,value) \
    ( (This)->lpVtbl->GetContextualAlternates(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetContextualAlternates(This,element,value) \
    ( (This)->lpVtbl->SetContextualAlternates(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticAlternatesProperty(This,value) \
    ( (This)->lpVtbl->get_StylisticAlternatesProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticAlternates(This,element,value) \
    ( (This)->lpVtbl->GetStylisticAlternates(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticAlternates(This,element,value) \
    ( (This)->lpVtbl->SetStylisticAlternates(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet1Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet1Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet1(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet1(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet1(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet1(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet2Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet2Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet2(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet2(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet2(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet2(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet3Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet3Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet3(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet3(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet3(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet3(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet4Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet4Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet4(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet4(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet4(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet4(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet5Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet5Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet5(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet5(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet5(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet5(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet6Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet6Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet6(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet6(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet6(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet6(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet7Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet7Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet7(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet7(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet7(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet7(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet8Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet8Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet8(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet8(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet8(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet8(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet9Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet9Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet9(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet9(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet9(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet9(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet10Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet10Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet10(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet10(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet10(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet10(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet11Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet11Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet11(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet11(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet11(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet11(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet12Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet12Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet12(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet12(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet12(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet12(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet13Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet13Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet13(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet13(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet13(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet13(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet14Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet14Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet14(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet14(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet14(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet14(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet15Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet15Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet15(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet15(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet15(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet15(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet16Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet16Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet16(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet16(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet16(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet16(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet17Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet17Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet17(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet17(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet17(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet17(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet18Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet18Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet18(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet18(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet18(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet18(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet19Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet19Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet19(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet19(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet19(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet19(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_StylisticSet20Property(This,value) \
    ( (This)->lpVtbl->get_StylisticSet20Property(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetStylisticSet20(This,element,value) \
    ( (This)->lpVtbl->GetStylisticSet20(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetStylisticSet20(This,element,value) \
    ( (This)->lpVtbl->SetStylisticSet20(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_CapitalsProperty(This,value) \
    ( (This)->lpVtbl->get_CapitalsProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetCapitals(This,element,value) \
    ( (This)->lpVtbl->GetCapitals(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetCapitals(This,element,value) \
    ( (This)->lpVtbl->SetCapitals(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_CapitalSpacingProperty(This,value) \
    ( (This)->lpVtbl->get_CapitalSpacingProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetCapitalSpacing(This,element,value) \
    ( (This)->lpVtbl->GetCapitalSpacing(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetCapitalSpacing(This,element,value) \
    ( (This)->lpVtbl->SetCapitalSpacing(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_KerningProperty(This,value) \
    ( (This)->lpVtbl->get_KerningProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetKerning(This,element,value) \
    ( (This)->lpVtbl->GetKerning(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetKerning(This,element,value) \
    ( (This)->lpVtbl->SetKerning(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_CaseSensitiveFormsProperty(This,value) \
    ( (This)->lpVtbl->get_CaseSensitiveFormsProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetCaseSensitiveForms(This,element,value) \
    ( (This)->lpVtbl->GetCaseSensitiveForms(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetCaseSensitiveForms(This,element,value) \
    ( (This)->lpVtbl->SetCaseSensitiveForms(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_HistoricalFormsProperty(This,value) \
    ( (This)->lpVtbl->get_HistoricalFormsProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetHistoricalForms(This,element,value) \
    ( (This)->lpVtbl->GetHistoricalForms(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetHistoricalForms(This,element,value) \
    ( (This)->lpVtbl->SetHistoricalForms(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_FractionProperty(This,value) \
    ( (This)->lpVtbl->get_FractionProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetFraction(This,element,value) \
    ( (This)->lpVtbl->GetFraction(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetFraction(This,element,value) \
    ( (This)->lpVtbl->SetFraction(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_NumeralStyleProperty(This,value) \
    ( (This)->lpVtbl->get_NumeralStyleProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetNumeralStyle(This,element,value) \
    ( (This)->lpVtbl->GetNumeralStyle(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetNumeralStyle(This,element,value) \
    ( (This)->lpVtbl->SetNumeralStyle(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_NumeralAlignmentProperty(This,value) \
    ( (This)->lpVtbl->get_NumeralAlignmentProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetNumeralAlignment(This,element,value) \
    ( (This)->lpVtbl->GetNumeralAlignment(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetNumeralAlignment(This,element,value) \
    ( (This)->lpVtbl->SetNumeralAlignment(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_SlashedZeroProperty(This,value) \
    ( (This)->lpVtbl->get_SlashedZeroProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetSlashedZero(This,element,value) \
    ( (This)->lpVtbl->GetSlashedZero(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetSlashedZero(This,element,value) \
    ( (This)->lpVtbl->SetSlashedZero(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_MathematicalGreekProperty(This,value) \
    ( (This)->lpVtbl->get_MathematicalGreekProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetMathematicalGreek(This,element,value) \
    ( (This)->lpVtbl->GetMathematicalGreek(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetMathematicalGreek(This,element,value) \
    ( (This)->lpVtbl->SetMathematicalGreek(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_get_VariantsProperty(This,value) \
    ( (This)->lpVtbl->get_VariantsProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_GetVariants(This,element,value) \
    ( (This)->lpVtbl->GetVariants(This,element,value) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_SetVariants(This,element,value) \
    ( (This)->lpVtbl->SetVariants(This,element,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CITypographyStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Documents.IUnderline
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Documents.Underline
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Documents_IUnderline[] = L"Windows.UI.Xaml.Documents.IUnderline";
/* [object, uuid("A5FA8202-61C0-47D7-93EF-BC0B577C5F26"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderlineVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderlineVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderlineVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CDocuments_CIUnderline_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Block
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IBlockStatics2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IBlockStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IBlock ** Default Interface **
 *    Windows.UI.Xaml.Documents.IBlock2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Block_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Block_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Block[] = L"Windows.UI.Xaml.Documents.Block";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.BlockCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVector_1_Windows.UI.Xaml.Documents.Block ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.UI.Xaml.Documents.Block
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_BlockCollection_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_BlockCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_BlockCollection[] = L"Windows.UI.Xaml.Documents.BlockCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Bold
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IBold ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Bold_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Bold_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Bold[] = L"Windows.UI.Xaml.Documents.Bold";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Glyphs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IGlyphsStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IGlyphsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IGlyphs ** Default Interface **
 *    Windows.UI.Xaml.Documents.IGlyphs2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Glyphs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Glyphs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Glyphs[] = L"Windows.UI.Xaml.Documents.Glyphs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Hyperlink
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IHyperlinkStatics5 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IHyperlinkStatics4 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IHyperlinkStatics3 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IHyperlinkStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IHyperlinkStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IHyperlink ** Default Interface **
 *    Windows.UI.Xaml.Documents.IHyperlink2
 *    Windows.UI.Xaml.Documents.IHyperlink3
 *    Windows.UI.Xaml.Documents.IHyperlink4
 *    Windows.UI.Xaml.Documents.IHyperlink5
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Hyperlink_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Hyperlink_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Hyperlink[] = L"Windows.UI.Xaml.Documents.Hyperlink";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.HyperlinkClickEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IHyperlinkClickEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_HyperlinkClickEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_HyperlinkClickEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_HyperlinkClickEventArgs[] = L"Windows.UI.Xaml.Documents.HyperlinkClickEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Inline
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IInline ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Inline_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Inline_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Inline[] = L"Windows.UI.Xaml.Documents.Inline";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.InlineCollection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Foundation.Collections.IVector_1_Windows.UI.Xaml.Documents.Inline ** Default Interface **
 *    Windows.Foundation.Collections.IIterable_1_Windows.UI.Xaml.Documents.Inline
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_InlineCollection_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_InlineCollection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_InlineCollection[] = L"Windows.UI.Xaml.Documents.InlineCollection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.InlineUIContainer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IInlineUIContainer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_InlineUIContainer_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_InlineUIContainer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_InlineUIContainer[] = L"Windows.UI.Xaml.Documents.InlineUIContainer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Italic
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IItalic ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Italic_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Italic_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Italic[] = L"Windows.UI.Xaml.Documents.Italic";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.LineBreak
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ILineBreak ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_LineBreak_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_LineBreak_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_LineBreak[] = L"Windows.UI.Xaml.Documents.LineBreak";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Paragraph
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IParagraphStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IParagraph ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Paragraph_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Paragraph_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Paragraph[] = L"Windows.UI.Xaml.Documents.Paragraph";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Run
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.IRunStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IRun ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Run_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Run_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Run[] = L"Windows.UI.Xaml.Documents.Run";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Span
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ISpan ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Span_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Span_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Span[] = L"Windows.UI.Xaml.Documents.Span";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.TextElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.ITextElementStatics4 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.ITextElementStatics3 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.ITextElementStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Documents.ITextElementStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ITextElement ** Default Interface **
 *    Windows.UI.Xaml.Documents.ITextElementOverrides
 *    Windows.UI.Xaml.Documents.ITextElement2
 *    Windows.UI.Xaml.Documents.ITextElement3
 *    Windows.UI.Xaml.Documents.ITextElement4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_TextElement_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_TextElement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_TextElement[] = L"Windows.UI.Xaml.Documents.TextElement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.TextHighlighter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.ITextHighlighterStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ITextHighlighter ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_TextHighlighter_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_TextHighlighter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_TextHighlighter[] = L"Windows.UI.Xaml.Documents.TextHighlighter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Documents.TextHighlighterBase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ITextHighlighterBase ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_TextHighlighterBase_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_TextHighlighterBase_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_TextHighlighterBase[] = L"Windows.UI.Xaml.Documents.TextHighlighterBase";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.Xaml.Documents.TextPointer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ITextPointer ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_TextPointer_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_TextPointer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_TextPointer[] = L"Windows.UI.Xaml.Documents.TextPointer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Typography
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Documents.ITypographyStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.ITypography ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Typography_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Typography_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Typography[] = L"Windows.UI.Xaml.Documents.Typography";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Documents.Underline
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Documents.IUnderline ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Documents_Underline_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Documents_Underline_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Documents_Underline[] = L"Windows.UI.Xaml.Documents.Underline";
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
#endif // __windows2Eui2Examl2Edocuments_p_h__

#endif // __windows2Eui2Examl2Edocuments_h__
