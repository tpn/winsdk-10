/* Header file automatically generated from windows.ui.xaml.media.imaging.idl */
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
#ifndef __windows2Eui2Examl2Emedia2Eimaging_h__
#define __windows2Eui2Examl2Emedia2Eimaging_h__
#ifndef __windows2Eui2Examl2Emedia2Eimaging_p_h__
#define __windows2Eui2Examl2Emedia2Eimaging_p_h__


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
#include "Windows.ApplicationModel.Background.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Media.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IDownloadProgressEventHandler;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler ABI::Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IBitmapImage;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage ABI::Windows::UI::Xaml::Media::Imaging::IBitmapImage

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IBitmapImage2;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 ABI::Windows::UI::Xaml::Media::Imaging::IBitmapImage2

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IBitmapImage3;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 ABI::Windows::UI::Xaml::Media::Imaging::IBitmapImage3

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IBitmapImageFactory;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory ABI::Windows::UI::Xaml::Media::Imaging::IBitmapImageFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IBitmapImageStatics;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics ABI::Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IBitmapImageStatics2;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 ABI::Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics2

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IBitmapImageStatics3;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 ABI::Windows::UI::Xaml::Media::Imaging::IBitmapImageStatics3

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IBitmapSource;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource ABI::Windows::UI::Xaml::Media::Imaging::IBitmapSource

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IBitmapSourceFactory;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory ABI::Windows::UI::Xaml::Media::Imaging::IBitmapSourceFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IBitmapSourceStatics;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics ABI::Windows::UI::Xaml::Media::Imaging::IBitmapSourceStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IDownloadProgressEventArgs;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs ABI::Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IRenderTargetBitmap;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap ABI::Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmap

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IRenderTargetBitmapStatics;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics ABI::Windows::UI::Xaml::Media::Imaging::IRenderTargetBitmapStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface ISoftwareBitmapSource;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource ABI::Windows::UI::Xaml::Media::Imaging::ISoftwareBitmapSource

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface ISurfaceImageSource;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource ABI::Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface ISurfaceImageSourceFactory;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory ABI::Windows::UI::Xaml::Media::Imaging::ISurfaceImageSourceFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface ISvgImageSource;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSource

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface ISvgImageSourceFactory;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface ISvgImageSourceFailedEventArgs;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface ISvgImageSourceOpenedEventArgs;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface ISvgImageSourceStatics;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IVirtualSurfaceImageSource;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource ABI::Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IVirtualSurfaceImageSourceFactory;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory ABI::Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSourceFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IWriteableBitmap;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap ABI::Windows::UI::Xaml::Media::Imaging::IWriteableBitmap

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IWriteableBitmapFactory;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory ABI::Windows::UI::Xaml::Media::Imaging::IWriteableBitmapFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IXamlRenderingBackgroundTask;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask ABI::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IXamlRenderingBackgroundTaskFactory;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory ABI::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        interface IXamlRenderingBackgroundTaskOverrides;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides ABI::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTaskOverrides

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        enum SvgImageSourceLoadStatus : int;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7c8bc668-4e0b-5924-b7e7-234a11d63d61"))
IAsyncOperationCompletedHandler<enum ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.UI.Xaml.Media.Imaging.SvgImageSourceLoadStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus> __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_USE
#define DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f19df5c2-2b78-53a9-8d38-5ca8dbb5dbc6"))
IAsyncOperation<enum ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus> : IAsyncOperation_impl<enum ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.UI.Xaml.Media.Imaging.SvgImageSourceLoadStatus>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus> __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_t;
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus>
//#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_USE */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        class SvgImageSource;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        class SvgImageSourceFailedEventArgs;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("d723938d-efee-5a0c-ab3e-1e1db3c9a216"))
ITypedEventHandler<ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSource*,ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSource*, ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs*, ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Media.Imaging.SvgImageSource, Windows.UI.Xaml.Media.Imaging.SvgImageSourceFailedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSource*,ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceFailedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSource*,ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSource*,ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceFailedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        class SvgImageSourceOpenedEventArgs;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9e321151-8b27-5e18-9ea3-50520aceb7ef"))
ITypedEventHandler<ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSource*,ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSource*, ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSource*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs*, ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.Xaml.Media.Imaging.SvgImageSource, Windows.UI.Xaml.Media.Imaging.SvgImageSourceOpenedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSource*,ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceOpenedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSource*,ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSource*,ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSourceOpenedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBuffer;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer ABI::Windows::Storage::Streams::IBuffer

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("51c3d2fd-b8a1-5620-b746-7ee6d533aca3"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3bee8834-b9a7-5a80-a746-5ef097227878"))
IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Background {
                interface IBackgroundTaskInstance;
            } /* Windows */
        } /* ApplicationModel */
    } /* Background */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance ABI::Windows::ApplicationModel::Background::IBackgroundTaskInstance

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__





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
        namespace Graphics {
            namespace Imaging {
                class SoftwareBitmap;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */

#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Graphics {
            namespace Imaging {
                interface ISoftwareBitmap;
            } /* Windows */
        } /* Graphics */
    } /* Imaging */} /* ABI */
#define __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap ABI::Windows::Graphics::Imaging::ISoftwareBitmap

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IRandomAccessStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream ABI::Windows::Storage::Streams::IRandomAccessStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__





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


#ifndef ____x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                interface IExceptionRoutedEventHandler;
            } /* Windows */
        } /* UI */
    } /* Xaml */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler ABI::Windows::UI::Xaml::IExceptionRoutedEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler_FWD_DEFINED__


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
                namespace Media {
                    namespace Imaging {
                        
                        typedef enum BitmapCreateOptions : unsigned int BitmapCreateOptions;
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        
                        typedef enum DecodePixelType : int DecodePixelType;
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        
                        typedef enum SvgImageSourceLoadStatus : int SvgImageSourceLoadStatus;
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */






























namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        class BitmapImage;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        class BitmapSource;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        class DownloadProgressEventArgs;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        class RenderTargetBitmap;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        class SoftwareBitmapSource;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        class SurfaceImageSource;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        class VirtualSurfaceImageSource;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        class WriteableBitmap;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        class XamlRenderingBackgroundTask;
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */














/*
 *
 * Struct Windows.UI.Xaml.Media.Imaging.BitmapCreateOptions
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
                namespace Media {
                    namespace Imaging {
                        /* [v1_enum, flags, contract] */
                        enum BitmapCreateOptions : unsigned int
                        {
                            BitmapCreateOptions_None = 0,
                            BitmapCreateOptions_IgnoreImageCache = 0x8,
                        };
                        
                        DEFINE_ENUM_FLAG_OPERATORS(BitmapCreateOptions)
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Media.Imaging.DecodePixelType
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
                namespace Media {
                    namespace Imaging {
                        /* [v1_enum, contract] */
                        enum DecodePixelType : int
                        {
                            DecodePixelType_Physical = 0,
                            DecodePixelType_Logical = 1,
                        };
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Media.Imaging.SvgImageSourceLoadStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [v1_enum, contract] */
                        enum SvgImageSourceLoadStatus : int
                        {
                            SvgImageSourceLoadStatus_Success = 0,
                            SvgImageSourceLoadStatus_NetworkError = 1,
                            SvgImageSourceLoadStatus_InvalidFormat = 2,
                            SvgImageSourceLoadStatus_Other = 3,
                        };
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Delegate Windows.UI.Xaml.Media.Imaging.DownloadProgressEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("1ABAEE23-74EE-4CC7-99BA-B171E3CDA61E"), contract] */
                        MIDL_INTERFACE("1ABAEE23-74EE-4CC7-99BA-B171E3CDA61E")
                        IDownloadProgressEventHandler : IUnknown
                        {
                            virtual HRESULT STDMETHODCALLTYPE Invoke(
                                /* [in] */__RPC__in_opt IInspectable * sender,
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventArgs * e
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IDownloadProgressEventHandler=_uuidof(IDownloadProgressEventHandler);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImage[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImage";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("31AF3271-E3B4-442D-A341-4C0226B2725B"), exclusiveto, contract] */
                        MIDL_INTERFACE("31AF3271-E3B4-442D-A341-4C0226B2725B")
                        IBitmapImage : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CreateOptions(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CreateOptions(
                                /* [in] */ABI::Windows::UI::Xaml::Media::Imaging::BitmapCreateOptions value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UriSource(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UriSource(
                                /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DecodePixelWidth(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DecodePixelWidth(
                                /* [in] */INT32 value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DecodePixelHeight(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DecodePixelHeight(
                                /* [in] */INT32 value
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_DownloadProgress(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Media::Imaging::IDownloadProgressEventHandler  * value,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_DownloadProgress(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ImageOpened(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IRoutedEventHandler  * value,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ImageOpened(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_ImageFailed(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IExceptionRoutedEventHandler  * value,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_ImageFailed(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IBitmapImage=_uuidof(IBitmapImage);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImage2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImage2[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImage2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("1069C1B6-8C9B-4762-BE3D-759F5698F2B3"), exclusiveto, contract] */
                        MIDL_INTERFACE("1069C1B6-8C9B-4762-BE3D-759F5698F2B3")
                        IBitmapImage2 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DecodePixelType(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Media::Imaging::DecodePixelType * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DecodePixelType(
                                /* [in] */ABI::Windows::UI::Xaml::Media::Imaging::DecodePixelType value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IBitmapImage2=_uuidof(IBitmapImage2);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImage3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImage3[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImage3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("F1DE6F26-3C73-453F-A7BA-9B85C18B3733"), exclusiveto, contract] */
                        MIDL_INTERFACE("F1DE6F26-3C73-453F-A7BA-9B85C18B3733")
                        IBitmapImage3 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAnimatedBitmap(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPlaying(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoPlay(
                                /* [retval, out] */__RPC__out boolean * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AutoPlay(
                                /* [in] */boolean value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Play(void) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Stop(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IBitmapImage3=_uuidof(IBitmapImage3);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImageFactory[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImageFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("C9132978-4810-4E5E-8087-03671EE60D85"), exclusiveto, contract] */
                        MIDL_INTERFACE("C9132978-4810-4E5E-8087-03671EE60D85")
                        IBitmapImageFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithUriSource(
                                /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uriSource,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::Imaging::IBitmapImage * * instance
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IBitmapImageFactory=_uuidof(IBitmapImageFactory);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("9E282143-70E8-437C-9FA4-2CBF295CFF84"), exclusiveto, contract] */
                        MIDL_INTERFACE("9E282143-70E8-437C-9FA4-2CBF295CFF84")
                        IBitmapImageStatics : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CreateOptionsProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UriSourceProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DecodePixelWidthProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DecodePixelHeightProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IBitmapImageStatics=_uuidof(IBitmapImageStatics);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics2[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("C5F5576A-75AF-41A4-B893-8FE91FEE2882"), exclusiveto, contract] */
                        MIDL_INTERFACE("C5F5576A-75AF-41A4-B893-8FE91FEE2882")
                        IBitmapImageStatics2 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DecodePixelTypeProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IBitmapImageStatics2=_uuidof(IBitmapImageStatics2);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics3[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics3";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("2B44E30D-F6D5-4411-A8CD-BF7603C4FAA0"), exclusiveto, contract] */
                        MIDL_INTERFACE("2B44E30D-F6D5-4411-A8CD-BF7603C4FAA0")
                        IBitmapImageStatics3 : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsAnimatedBitmapProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPlayingProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoPlayProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IBitmapImageStatics3=_uuidof(IBitmapImageStatics3);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapSource[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("23D86411-202F-41B2-8C5B-A8A3B333800B"), exclusiveto, contract] */
                        MIDL_INTERFACE("23D86411-202F-41B2-8C5B-A8A3B333800B")
                        IBitmapSource : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelWidth(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelHeight(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetSource(
                                /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * streamSource
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetSourceAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * streamSource,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IBitmapSource=_uuidof(IBitmapSource);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapSourceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapSourceFactory[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapSourceFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("E240420E-D4A7-49A4-A0B4-A59FDD77E508"), exclusiveto, contract] */
                        MIDL_INTERFACE("E240420E-D4A7-49A4-A0B4-A59FDD77E508")
                        IBitmapSourceFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                                /* [in] */__RPC__in_opt IInspectable * outer,
                                /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::Imaging::IBitmapSource * * instance
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IBitmapSourceFactory=_uuidof(IBitmapSourceFactory);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapSourceStatics[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapSourceStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("9A9C9981-827B-4E51-891B-8A15B511842D"), exclusiveto, contract] */
                        MIDL_INTERFACE("9A9C9981-827B-4E51-891B-8A15B511842D")
                        IBitmapSourceStatics : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelWidthProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelHeightProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IBitmapSourceStatics=_uuidof(IBitmapSourceStatics);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IDownloadProgressEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.DownloadProgressEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IDownloadProgressEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.IDownloadProgressEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("7311E0D4-FE94-4E70-9B90-CDD47AC23AFB"), exclusiveto, contract] */
                        MIDL_INTERFACE("7311E0D4-FE94-4E70-9B90-CDD47AC23AFB")
                        IDownloadProgressEventArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Progress(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Progress(
                                /* [in] */INT32 value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IDownloadProgressEventArgs=_uuidof(IDownloadProgressEventArgs);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.RenderTargetBitmap
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmap[] = L"Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmap";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("500DEE81-893C-4C0A-8FEC-4678AC717589"), exclusiveto, contract] */
                        MIDL_INTERFACE("500DEE81-893C-4C0A-8FEC-4678AC717589")
                        IRenderTargetBitmap : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelWidth(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelHeight(
                                /* [retval, out] */__RPC__out INT32 * value
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE RenderAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * element,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * returnValue
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE RenderToSizeAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::IUIElement * element,
                                /* [in] */INT32 scaledWidth,
                                /* [in] */INT32 scaledHeight,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * returnValue
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetPixelsAsync(
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRenderTargetBitmap=_uuidof(IRenderTargetBitmap);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmapStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.RenderTargetBitmap
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmapStatics[] = L"Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmapStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("F0A1EFEE-C131-4D40-9C47-F7D7CF2B077F"), exclusiveto, contract] */
                        MIDL_INTERFACE("F0A1EFEE-C131-4D40-9C47-F7D7CF2B077F")
                        IRenderTargetBitmapStatics : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelWidthProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelHeightProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IRenderTargetBitmapStatics=_uuidof(IRenderTargetBitmapStatics);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISoftwareBitmapSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SoftwareBitmapSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISoftwareBitmapSource[] = L"Windows.UI.Xaml.Media.Imaging.ISoftwareBitmapSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("D2DD9ED0-D3C5-4056-91B5-B7C1D1E8130E"), exclusiveto, contract] */
                        MIDL_INTERFACE("D2DD9ED0-D3C5-4056-91B5-B7C1D1E8130E")
                        ISoftwareBitmapSource : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE SetBitmapAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * softwareBitmap,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISoftwareBitmapSource=_uuidof(ISoftwareBitmapSource);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISurfaceImageSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SurfaceImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSource[] = L"Windows.UI.Xaml.Media.Imaging.ISurfaceImageSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("62F7D416-C714-4C4C-8273-F839BC58135C"), exclusiveto, contract] */
                        MIDL_INTERFACE("62F7D416-C714-4C4C-8273-F839BC58135C")
                        ISurfaceImageSource : IInspectable
                        {
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISurfaceImageSource=_uuidof(ISurfaceImageSource);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISurfaceImageSourceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SurfaceImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSourceFactory[] = L"Windows.UI.Xaml.Media.Imaging.ISurfaceImageSourceFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("3AB2212A-EF65-4A5F-BFAC-73993E8C12C9"), exclusiveto, contract] */
                        MIDL_INTERFACE("3AB2212A-EF65-4A5F-BFAC-73993E8C12C9")
                        ISurfaceImageSourceFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithDimensions(
                                /* [in] */INT32 pixelWidth,
                                /* [in] */INT32 pixelHeight,
                                /* [in] */__RPC__in_opt IInspectable * outer,
                                /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource * * instance
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithDimensionsAndOpacity(
                                /* [in] */INT32 pixelWidth,
                                /* [in] */INT32 pixelHeight,
                                /* [in] */boolean isOpaque,
                                /* [in] */__RPC__in_opt IInspectable * outer,
                                /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::Imaging::ISurfaceImageSource * * instance
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISurfaceImageSourceFactory=_uuidof(ISurfaceImageSourceFactory);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISvgImageSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SvgImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSource[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("03E1CEC3-0CA8-4A4E-8D7C-C808A0838586"), exclusiveto, contract] */
                        MIDL_INTERFACE("03E1CEC3-0CA8-4A4E-8D7C-C808A0838586")
                        ISvgImageSource : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UriSource(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UriSource(
                                /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RasterizePixelWidth(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RasterizePixelWidth(
                                /* [in] */DOUBLE value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RasterizePixelHeight(
                                /* [retval, out] */__RPC__out DOUBLE * value
                                ) = 0;
                            /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RasterizePixelHeight(
                                /* [in] */DOUBLE value
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_Opened(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs * value,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_Opened(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_OpenFailed(
                                /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs * value,
                                /* [retval, out] */__RPC__out EventRegistrationToken * token
                                ) = 0;
                            /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_OpenFailed(
                                /* [in] */EventRegistrationToken token
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE SetSourceAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * streamSource,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * * returnValue
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISvgImageSource=_uuidof(ISvgImageSource);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SvgImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFactory[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("C794E9E7-CF23-4D72-BF1A-DFAA16D8EA52"), exclusiveto, contract] */
                        MIDL_INTERFACE("C794E9E7-CF23-4D72-BF1A-DFAA16D8EA52")
                        ISvgImageSourceFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                                /* [in] */__RPC__in_opt IInspectable * outer,
                                /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSource * * instance
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithUriSource(
                                /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uriSource,
                                /* [in] */__RPC__in_opt IInspectable * outer,
                                /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::Imaging::ISvgImageSource * * instance
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISvgImageSourceFactory=_uuidof(ISvgImageSourceFactory);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SvgImageSourceFailedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFailedEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFailedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("68BB3170-3CCC-4035-AC01-9834543D744E"), exclusiveto, contract] */
                        MIDL_INTERFACE("68BB3170-3CCC-4035-AC01-9834543D744E")
                        ISvgImageSourceFailedEventArgs : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                                /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Media::Imaging::SvgImageSourceLoadStatus * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISvgImageSourceFailedEventArgs=_uuidof(ISvgImageSourceFailedEventArgs);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISvgImageSourceOpenedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SvgImageSourceOpenedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceOpenedEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceOpenedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("85EF4C16-748E-4008-95C7-6A23DD7316DB"), exclusiveto, contract] */
                        MIDL_INTERFACE("85EF4C16-748E-4008-95C7-6A23DD7316DB")
                        ISvgImageSourceOpenedEventArgs : IInspectable
                        {
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISvgImageSourceOpenedEventArgs=_uuidof(ISvgImageSourceOpenedEventArgs);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISvgImageSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SvgImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceStatics[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("9C6638CE-BED1-4AAB-ACBB-D3E2185D315A"), exclusiveto, contract] */
                        MIDL_INTERFACE("9C6638CE-BED1-4AAB-ACBB-D3E2185D315A")
                        ISvgImageSourceStatics : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UriSourceProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RasterizePixelWidthProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RasterizePixelHeightProperty(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::IDependencyProperty * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_ISvgImageSourceStatics=_uuidof(ISvgImageSourceStatics);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSource[] = L"Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSource";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("4A711FEA-BFAC-11E0-A06A-9DE44724019B"), exclusiveto, contract] */
                        MIDL_INTERFACE("4A711FEA-BFAC-11E0-A06A-9DE44724019B")
                        IVirtualSurfaceImageSource : IInspectable
                        {
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IVirtualSurfaceImageSource=_uuidof(IVirtualSurfaceImageSource);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSourceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSourceFactory[] = L"Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSourceFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("3AB2212A-BFAC-11E0-8A92-69E44724019B"), exclusiveto, contract] */
                        MIDL_INTERFACE("3AB2212A-BFAC-11E0-8A92-69E44724019B")
                        IVirtualSurfaceImageSourceFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithDimensions(
                                /* [in] */INT32 pixelWidth,
                                /* [in] */INT32 pixelHeight,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource * * instance
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithDimensionsAndOpacity(
                                /* [in] */INT32 pixelWidth,
                                /* [in] */INT32 pixelHeight,
                                /* [in] */boolean isOpaque,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::Imaging::IVirtualSurfaceImageSource * * instance
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IVirtualSurfaceImageSourceFactory=_uuidof(IVirtualSurfaceImageSourceFactory);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IWriteableBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.WriteableBitmap
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IWriteableBitmap[] = L"Windows.UI.Xaml.Media.Imaging.IWriteableBitmap";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("BF0B7E6F-DF7C-4A85-8413-A1216285835C"), exclusiveto, contract] */
                        MIDL_INTERFACE("BF0B7E6F-DF7C-4A85-8413-A1216285835C")
                        IWriteableBitmap : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PixelBuffer(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE Invalidate(void) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWriteableBitmap=_uuidof(IWriteableBitmap);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IWriteableBitmapFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.WriteableBitmap
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IWriteableBitmapFactory[] = L"Windows.UI.Xaml.Media.Imaging.IWriteableBitmapFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("5563EBB1-3EF2-42C5-9C6D-1CF5DCC041FF"), exclusiveto, contract] */
                        MIDL_INTERFACE("5563EBB1-3EF2-42C5-9C6D-1CF5DCC041FF")
                        IWriteableBitmapFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithDimensions(
                                /* [in] */INT32 pixelWidth,
                                /* [in] */INT32 pixelHeight,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::Imaging::IWriteableBitmap * * instance
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IWriteableBitmapFactory=_uuidof(IWriteableBitmapFactory);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTask
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTask[] = L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTask";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("5D5FE9AA-533E-44B8-A975-FC5F1E3BFF52"), exclusiveto, contract] */
                        MIDL_INTERFACE("5D5FE9AA-533E-44B8-A975-FC5F1E3BFF52")
                        IXamlRenderingBackgroundTask : IInspectable
                        {
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IXamlRenderingBackgroundTask=_uuidof(IXamlRenderingBackgroundTask);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskFactory[] = L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("A3D1BB63-38F8-4DA3-9FCA-FD8128A2CBF9"), exclusiveto, contract] */
                        MIDL_INTERFACE("A3D1BB63-38F8-4DA3-9FCA-FD8128A2CBF9")
                        IXamlRenderingBackgroundTaskFactory : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                                /* [in] */__RPC__in_opt IInspectable * outer,
                                /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Media::Imaging::IXamlRenderingBackgroundTask * * instance
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IXamlRenderingBackgroundTaskFactory=_uuidof(IXamlRenderingBackgroundTaskFactory);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskOverrides
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskOverrides[] = L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskOverrides";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Media {
                    namespace Imaging {
                        /* [object, uuid("9C2A6997-A908-4711-B4B2-A960DB3D8E5A"), exclusiveto, contract] */
                        MIDL_INTERFACE("9C2A6997-A908-4711-B4B2-A960DB3D8E5A")
                        IXamlRenderingBackgroundTaskOverrides : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE OnRun(
                                /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Background::IBackgroundTaskInstance * taskInstance
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IXamlRenderingBackgroundTaskOverrides=_uuidof(IXamlRenderingBackgroundTaskOverrides);
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Media */
    } /* Imaging */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Media.Imaging.IBitmapImageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics3 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IBitmapImage ** Default Interface **
 *    Windows.UI.Xaml.Media.Imaging.IBitmapImage2
 *    Windows.UI.Xaml.Media.Imaging.IBitmapImage3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_BitmapImage_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_BitmapImage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_BitmapImage[] = L"Windows.UI.Xaml.Media.Imaging.BitmapImage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.BitmapSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Media.Imaging.IBitmapSourceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IBitmapSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_BitmapSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_BitmapSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_BitmapSource[] = L"Windows.UI.Xaml.Media.Imaging.BitmapSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.DownloadProgressEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IDownloadProgressEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_DownloadProgressEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_DownloadProgressEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_DownloadProgressEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.DownloadProgressEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.RenderTargetBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmapStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmap ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_RenderTargetBitmap_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_RenderTargetBitmap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_RenderTargetBitmap[] = L"Windows.UI.Xaml.Media.Imaging.RenderTargetBitmap";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.SoftwareBitmapSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.ISoftwareBitmapSource ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SoftwareBitmapSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SoftwareBitmapSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SoftwareBitmapSource[] = L"Windows.UI.Xaml.Media.Imaging.SoftwareBitmapSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.SurfaceImageSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.ISurfaceImageSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SurfaceImageSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SurfaceImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SurfaceImageSource[] = L"Windows.UI.Xaml.Media.Imaging.SurfaceImageSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.SvgImageSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Media.Imaging.ISvgImageSourceStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.ISvgImageSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SvgImageSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SvgImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SvgImageSource[] = L"Windows.UI.Xaml.Media.Imaging.SvgImageSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.SvgImageSourceFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFailedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SvgImageSourceFailedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SvgImageSourceFailedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SvgImageSourceFailedEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.SvgImageSourceFailedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.SvgImageSourceOpenedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.ISvgImageSourceOpenedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SvgImageSourceOpenedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SvgImageSourceOpenedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SvgImageSourceOpenedEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.SvgImageSourceOpenedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSourceFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_VirtualSurfaceImageSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_VirtualSurfaceImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_VirtualSurfaceImageSource[] = L"Windows.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.WriteableBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Media.Imaging.IWriteableBitmapFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IWriteableBitmap ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_WriteableBitmap_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_WriteableBitmap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_WriteableBitmap[] = L"Windows.UI.Xaml.Media.Imaging.WriteableBitmap";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTask ** Default Interface **
 *    Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskOverrides
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_XamlRenderingBackgroundTask_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_XamlRenderingBackgroundTask_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_XamlRenderingBackgroundTask[] = L"Windows.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides;

#endif // ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CSvgImageSourceLoadStatus;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatusVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatusVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus;

typedef struct __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CSvgImageSourceLoadStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatusVtbl;

interface __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatusVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus_INTERFACE_DEFINED__




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance;

#endif // ____x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__






#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIDependencyProperty_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;

#endif // ____x_ABI_CWindows_CUI_CXaml_CIUIElement_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CBitmapCreateOptions __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CBitmapCreateOptions;


typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CDecodePixelType __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CDecodePixelType;


typedef enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CSvgImageSourceLoadStatus __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CSvgImageSourceLoadStatus;






















































/*
 *
 * Struct Windows.UI.Xaml.Media.Imaging.BitmapCreateOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CBitmapCreateOptions
{
    BitmapCreateOptions_None = 0,
    BitmapCreateOptions_IgnoreImageCache = 0x8,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Media.Imaging.DecodePixelType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CDecodePixelType
{
    DecodePixelType_Physical = 0,
    DecodePixelType_Logical = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Media.Imaging.SvgImageSourceLoadStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CSvgImageSourceLoadStatus
{
    SvgImageSourceLoadStatus_Success = 0,
    SvgImageSourceLoadStatus_NetworkError = 1,
    SvgImageSourceLoadStatus_InvalidFormat = 2,
    SvgImageSourceLoadStatus_Other = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Delegate Windows.UI.Xaml.Media.Imaging.DownloadProgressEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_INTERFACE_DEFINED__
/* [object, uuid("1ABAEE23-74EE-4CC7-99BA-B171E3CDA61E"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImage[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImage";
/* [object, uuid("31AF3271-E3B4-442D-A341-4C0226B2725B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CreateOptions )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CBitmapCreateOptions * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CreateOptions )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CBitmapCreateOptions value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UriSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UriSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DecodePixelWidth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DecodePixelWidth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DecodePixelHeight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DecodePixelHeight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [in] */INT32 value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_DownloadProgress )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventHandler  * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_DownloadProgress )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ImageOpened )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIRoutedEventHandler  * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ImageOpened )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_ImageFailed )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIExceptionRoutedEventHandler  * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_ImageFailed )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_get_CreateOptions(This,value) \
    ( (This)->lpVtbl->get_CreateOptions(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_put_CreateOptions(This,value) \
    ( (This)->lpVtbl->put_CreateOptions(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_get_UriSource(This,value) \
    ( (This)->lpVtbl->get_UriSource(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_put_UriSource(This,value) \
    ( (This)->lpVtbl->put_UriSource(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_get_DecodePixelWidth(This,value) \
    ( (This)->lpVtbl->get_DecodePixelWidth(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_put_DecodePixelWidth(This,value) \
    ( (This)->lpVtbl->put_DecodePixelWidth(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_get_DecodePixelHeight(This,value) \
    ( (This)->lpVtbl->get_DecodePixelHeight(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_put_DecodePixelHeight(This,value) \
    ( (This)->lpVtbl->put_DecodePixelHeight(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_add_DownloadProgress(This,value,token) \
    ( (This)->lpVtbl->add_DownloadProgress(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_remove_DownloadProgress(This,token) \
    ( (This)->lpVtbl->remove_DownloadProgress(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_add_ImageOpened(This,value,token) \
    ( (This)->lpVtbl->add_ImageOpened(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_remove_ImageOpened(This,token) \
    ( (This)->lpVtbl->remove_ImageOpened(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_add_ImageFailed(This,value,token) \
    ( (This)->lpVtbl->add_ImageFailed(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_remove_ImageFailed(This,token) \
    ( (This)->lpVtbl->remove_ImageFailed(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImage2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImage2[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImage2";
/* [object, uuid("1069C1B6-8C9B-4762-BE3D-759F5698F2B3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DecodePixelType )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CDecodePixelType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DecodePixelType )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CDecodePixelType value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_get_DecodePixelType(This,value) \
    ( (This)->lpVtbl->get_DecodePixelType(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_put_DecodePixelType(This,value) \
    ( (This)->lpVtbl->put_DecodePixelType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImage3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImage3[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImage3";
/* [object, uuid("F1DE6F26-3C73-453F-A7BA-9B85C18B3733"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAnimatedBitmap )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPlaying )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoPlay )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AutoPlay )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *Play )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3 * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_get_IsAnimatedBitmap(This,value) \
    ( (This)->lpVtbl->get_IsAnimatedBitmap(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_get_IsPlaying(This,value) \
    ( (This)->lpVtbl->get_IsPlaying(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_get_AutoPlay(This,value) \
    ( (This)->lpVtbl->get_AutoPlay(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_put_AutoPlay(This,value) \
    ( (This)->lpVtbl->put_AutoPlay(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_Play(This) \
    ( (This)->lpVtbl->Play(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_Stop(This) \
    ( (This)->lpVtbl->Stop(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImageFactory[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImageFactory";
/* [object, uuid("C9132978-4810-4E5E-8087-03671EE60D85"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithUriSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uriSource,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImage * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_CreateInstanceWithUriSource(This,uriSource,instance) \
    ( (This)->lpVtbl->CreateInstanceWithUriSource(This,uriSource,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics";
/* [object, uuid("9E282143-70E8-437C-9FA4-2CBF295CFF84"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CreateOptionsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UriSourceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DecodePixelWidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DecodePixelHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_get_CreateOptionsProperty(This,value) \
    ( (This)->lpVtbl->get_CreateOptionsProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_get_UriSourceProperty(This,value) \
    ( (This)->lpVtbl->get_UriSourceProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_get_DecodePixelWidthProperty(This,value) \
    ( (This)->lpVtbl->get_DecodePixelWidthProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_get_DecodePixelHeightProperty(This,value) \
    ( (This)->lpVtbl->get_DecodePixelHeightProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics2[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics2";
/* [object, uuid("C5F5576A-75AF-41A4-B893-8FE91FEE2882"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DecodePixelTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_get_DecodePixelTypeProperty(This,value) \
    ( (This)->lpVtbl->get_DecodePixelTypeProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapImageStatics3[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics3";
/* [object, uuid("2B44E30D-F6D5-4411-A8CD-BF7603C4FAA0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsAnimatedBitmapProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPlayingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoPlayProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3Vtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_get_IsAnimatedBitmapProperty(This,value) \
    ( (This)->lpVtbl->get_IsAnimatedBitmapProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_get_IsPlayingProperty(This,value) \
    ( (This)->lpVtbl->get_IsPlayingProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_get_AutoPlayProperty(This,value) \
    ( (This)->lpVtbl->get_AutoPlayProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapImageStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapSource[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapSource";
/* [object, uuid("23D86411-202F-41B2-8C5B-A8A3B333800B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelWidth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelHeight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * streamSource
        );
    HRESULT ( STDMETHODCALLTYPE *SetSourceAsync )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * streamSource,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_get_PixelWidth(This,value) \
    ( (This)->lpVtbl->get_PixelWidth(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_get_PixelHeight(This,value) \
    ( (This)->lpVtbl->get_PixelHeight(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_SetSource(This,streamSource) \
    ( (This)->lpVtbl->SetSource(This,streamSource) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_SetSourceAsync(This,streamSource,returnValue) \
    ( (This)->lpVtbl->SetSourceAsync(This,streamSource,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapSourceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapSourceFactory[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapSourceFactory";
/* [object, uuid("E240420E-D4A7-49A4-A0B4-A59FDD77E508"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSource * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IBitmapSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.BitmapSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IBitmapSourceStatics[] = L"Windows.UI.Xaml.Media.Imaging.IBitmapSourceStatics";
/* [object, uuid("9A9C9981-827B-4E51-891B-8A15B511842D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelWidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_get_PixelWidthProperty(This,value) \
    ( (This)->lpVtbl->get_PixelWidthProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_get_PixelHeightProperty(This,value) \
    ( (This)->lpVtbl->get_PixelHeightProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIBitmapSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IDownloadProgressEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.DownloadProgressEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IDownloadProgressEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.IDownloadProgressEventArgs";
/* [object, uuid("7311E0D4-FE94-4E70-9B90-CDD47AC23AFB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Progress )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Progress )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs * This,
        /* [in] */INT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_get_Progress(This,value) \
    ( (This)->lpVtbl->get_Progress(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_put_Progress(This,value) \
    ( (This)->lpVtbl->put_Progress(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIDownloadProgressEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.RenderTargetBitmap
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmap[] = L"Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmap";
/* [object, uuid("500DEE81-893C-4C0A-8FEC-4678AC717589"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelWidth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelHeight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RenderAsync )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * returnValue
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RenderToSizeAsync )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
        /* [in] */INT32 scaledWidth,
        /* [in] */INT32 scaledHeight,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetPixelsAsync )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_get_PixelWidth(This,value) \
    ( (This)->lpVtbl->get_PixelWidth(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_get_PixelHeight(This,value) \
    ( (This)->lpVtbl->get_PixelHeight(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_RenderAsync(This,element,returnValue) \
    ( (This)->lpVtbl->RenderAsync(This,element,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_RenderToSizeAsync(This,element,scaledWidth,scaledHeight,returnValue) \
    ( (This)->lpVtbl->RenderToSizeAsync(This,element,scaledWidth,scaledHeight,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_GetPixelsAsync(This,returnValue) \
    ( (This)->lpVtbl->GetPixelsAsync(This,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmapStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.RenderTargetBitmap
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IRenderTargetBitmapStatics[] = L"Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmapStatics";
/* [object, uuid("F0A1EFEE-C131-4D40-9C47-F7D7CF2B077F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelWidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_get_PixelWidthProperty(This,value) \
    ( (This)->lpVtbl->get_PixelWidthProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_get_PixelHeightProperty(This,value) \
    ( (This)->lpVtbl->get_PixelHeightProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIRenderTargetBitmapStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISoftwareBitmapSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SoftwareBitmapSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISoftwareBitmapSource[] = L"Windows.UI.Xaml.Media.Imaging.ISoftwareBitmapSource";
/* [object, uuid("D2DD9ED0-D3C5-4056-91B5-B7C1D1E8130E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetBitmapAsync )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * softwareBitmap,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSourceVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_SetBitmapAsync(This,softwareBitmap,returnValue) \
    ( (This)->lpVtbl->SetBitmapAsync(This,softwareBitmap,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISoftwareBitmapSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISurfaceImageSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SurfaceImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSource[] = L"Windows.UI.Xaml.Media.Imaging.ISurfaceImageSource";
/* [object, uuid("62F7D416-C714-4C4C-8273-F839BC58135C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISurfaceImageSourceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SurfaceImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISurfaceImageSourceFactory[] = L"Windows.UI.Xaml.Media.Imaging.ISurfaceImageSourceFactory";
/* [object, uuid("3AB2212A-EF65-4A5F-BFAC-73993E8C12C9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDimensions )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This,
        /* [in] */INT32 pixelWidth,
        /* [in] */INT32 pixelHeight,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDimensionsAndOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory * This,
        /* [in] */INT32 pixelWidth,
        /* [in] */INT32 pixelHeight,
        /* [in] */boolean isOpaque,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSource * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_CreateInstanceWithDimensions(This,pixelWidth,pixelHeight,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstanceWithDimensions(This,pixelWidth,pixelHeight,outer,inner,instance) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_CreateInstanceWithDimensionsAndOpacity(This,pixelWidth,pixelHeight,isOpaque,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstanceWithDimensionsAndOpacity(This,pixelWidth,pixelHeight,isOpaque,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISurfaceImageSourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISvgImageSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SvgImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSource[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSource";
/* [object, uuid("03E1CEC3-0CA8-4A4E-8D7C-C808A0838586"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UriSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UriSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RasterizePixelWidth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RasterizePixelWidth )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
        /* [in] */DOUBLE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RasterizePixelHeight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RasterizePixelHeight )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
        /* [in] */DOUBLE value
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_Opened )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceOpenedEventArgs * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_Opened )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_OpenFailed )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSource_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceFailedEventArgs * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_OpenFailed )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *SetSourceAsync )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * streamSource,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CMedia__CImaging__CSvgImageSourceLoadStatus * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_get_UriSource(This,value) \
    ( (This)->lpVtbl->get_UriSource(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_put_UriSource(This,value) \
    ( (This)->lpVtbl->put_UriSource(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_get_RasterizePixelWidth(This,value) \
    ( (This)->lpVtbl->get_RasterizePixelWidth(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_put_RasterizePixelWidth(This,value) \
    ( (This)->lpVtbl->put_RasterizePixelWidth(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_get_RasterizePixelHeight(This,value) \
    ( (This)->lpVtbl->get_RasterizePixelHeight(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_put_RasterizePixelHeight(This,value) \
    ( (This)->lpVtbl->put_RasterizePixelHeight(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_add_Opened(This,value,token) \
    ( (This)->lpVtbl->add_Opened(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_remove_Opened(This,token) \
    ( (This)->lpVtbl->remove_Opened(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_add_OpenFailed(This,value,token) \
    ( (This)->lpVtbl->add_OpenFailed(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_remove_OpenFailed(This,token) \
    ( (This)->lpVtbl->remove_OpenFailed(This,token) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_SetSourceAsync(This,streamSource,returnValue) \
    ( (This)->lpVtbl->SetSourceAsync(This,streamSource,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SvgImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFactory[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFactory";
/* [object, uuid("C794E9E7-CF23-4D72-BF1A-DFAA16D8EA52"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithUriSource )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uriSource,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSource * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_CreateInstanceWithUriSource(This,uriSource,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstanceWithUriSource(This,uriSource,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SvgImageSourceFailedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceFailedEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFailedEventArgs";
/* [object, uuid("68BB3170-3CCC-4035-AC01-9834543D744E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CSvgImageSourceLoadStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceFailedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISvgImageSourceOpenedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SvgImageSourceOpenedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceOpenedEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceOpenedEventArgs";
/* [object, uuid("85EF4C16-748E-4008-95C7-6A23DD7316DB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceOpenedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.ISvgImageSourceStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.SvgImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_ISvgImageSourceStatics[] = L"Windows.UI.Xaml.Media.Imaging.ISvgImageSourceStatics";
/* [object, uuid("9C6638CE-BED1-4AAB-ACBB-D3E2185D315A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UriSourceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RasterizePixelWidthProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RasterizePixelHeightProperty )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_get_UriSourceProperty(This,value) \
    ( (This)->lpVtbl->get_UriSourceProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_get_RasterizePixelWidthProperty(This,value) \
    ( (This)->lpVtbl->get_RasterizePixelWidthProperty(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_get_RasterizePixelHeightProperty(This,value) \
    ( (This)->lpVtbl->get_RasterizePixelHeightProperty(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CISvgImageSourceStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSource[] = L"Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSource";
/* [object, uuid("4A711FEA-BFAC-11E0-A06A-9DE44724019B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSourceFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IVirtualSurfaceImageSourceFactory[] = L"Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSourceFactory";
/* [object, uuid("3AB2212A-BFAC-11E0-8A92-69E44724019B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDimensions )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This,
        /* [in] */INT32 pixelWidth,
        /* [in] */INT32 pixelHeight,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDimensionsAndOpacity )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory * This,
        /* [in] */INT32 pixelWidth,
        /* [in] */INT32 pixelHeight,
        /* [in] */boolean isOpaque,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSource * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_CreateInstanceWithDimensions(This,pixelWidth,pixelHeight,instance) \
    ( (This)->lpVtbl->CreateInstanceWithDimensions(This,pixelWidth,pixelHeight,instance) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_CreateInstanceWithDimensionsAndOpacity(This,pixelWidth,pixelHeight,isOpaque,instance) \
    ( (This)->lpVtbl->CreateInstanceWithDimensionsAndOpacity(This,pixelWidth,pixelHeight,isOpaque,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIVirtualSurfaceImageSourceFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IWriteableBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.WriteableBitmap
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IWriteableBitmap[] = L"Windows.UI.Xaml.Media.Imaging.IWriteableBitmap";
/* [object, uuid("BF0B7E6F-DF7C-4A85-8413-A1216285835C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PixelBuffer )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Invalidate )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_get_PixelBuffer(This,value) \
    ( (This)->lpVtbl->get_PixelBuffer(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_Invalidate(This) \
    ( (This)->lpVtbl->Invalidate(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IWriteableBitmapFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.WriteableBitmap
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IWriteableBitmapFactory[] = L"Windows.UI.Xaml.Media.Imaging.IWriteableBitmapFactory";
/* [object, uuid("5563EBB1-3EF2-42C5-9C6D-1CF5DCC041FF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithDimensions )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory * This,
        /* [in] */INT32 pixelWidth,
        /* [in] */INT32 pixelHeight,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmap * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_CreateInstanceWithDimensions(This,pixelWidth,pixelHeight,instance) \
    ( (This)->lpVtbl->CreateInstanceWithDimensions(This,pixelWidth,pixelHeight,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIWriteableBitmapFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTask
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTask[] = L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTask";
/* [object, uuid("5D5FE9AA-533E-44B8-A975-FC5F1E3BFF52"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskFactory[] = L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskFactory";
/* [object, uuid("A3D1BB63-38F8-4DA3-9FCA-FD8128A2CBF9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTask * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskOverrides
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Media_Imaging_IXamlRenderingBackgroundTaskOverrides[] = L"Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskOverrides";
/* [object, uuid("9C2A6997-A908-4711-B4B2-A960DB3D8E5A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OnRun )(
        __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTaskInstance * taskInstance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverridesVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverridesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_OnRun(This,taskInstance) \
    ( (This)->lpVtbl->OnRun(This,taskInstance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CMedia_CImaging_CIXamlRenderingBackgroundTaskOverrides_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.BitmapImage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Media.Imaging.IBitmapImageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics3 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.Xaml.Media.Imaging.IBitmapImageStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IBitmapImage ** Default Interface **
 *    Windows.UI.Xaml.Media.Imaging.IBitmapImage2
 *    Windows.UI.Xaml.Media.Imaging.IBitmapImage3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_BitmapImage_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_BitmapImage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_BitmapImage[] = L"Windows.UI.Xaml.Media.Imaging.BitmapImage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.BitmapSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Media.Imaging.IBitmapSourceStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IBitmapSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_BitmapSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_BitmapSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_BitmapSource[] = L"Windows.UI.Xaml.Media.Imaging.BitmapSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.DownloadProgressEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IDownloadProgressEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_DownloadProgressEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_DownloadProgressEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_DownloadProgressEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.DownloadProgressEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.RenderTargetBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmapStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IRenderTargetBitmap ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_RenderTargetBitmap_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_RenderTargetBitmap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_RenderTargetBitmap[] = L"Windows.UI.Xaml.Media.Imaging.RenderTargetBitmap";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.SoftwareBitmapSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.ISoftwareBitmapSource ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SoftwareBitmapSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SoftwareBitmapSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SoftwareBitmapSource[] = L"Windows.UI.Xaml.Media.Imaging.SoftwareBitmapSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.SurfaceImageSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.ISurfaceImageSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SurfaceImageSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SurfaceImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SurfaceImageSource[] = L"Windows.UI.Xaml.Media.Imaging.SurfaceImageSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.SvgImageSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Media.Imaging.ISvgImageSourceStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.ISvgImageSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SvgImageSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SvgImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SvgImageSource[] = L"Windows.UI.Xaml.Media.Imaging.SvgImageSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.SvgImageSourceFailedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.ISvgImageSourceFailedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SvgImageSourceFailedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SvgImageSourceFailedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SvgImageSourceFailedEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.SvgImageSourceFailedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.SvgImageSourceOpenedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.ISvgImageSourceOpenedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SvgImageSourceOpenedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_SvgImageSourceOpenedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_SvgImageSourceOpenedEventArgs[] = L"Windows.UI.Xaml.Media.Imaging.SvgImageSourceOpenedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSourceFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IVirtualSurfaceImageSource ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_VirtualSurfaceImageSource_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_VirtualSurfaceImageSource_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_VirtualSurfaceImageSource[] = L"Windows.UI.Xaml.Media.Imaging.VirtualSurfaceImageSource";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.WriteableBitmap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Xaml.Media.Imaging.IWriteableBitmapFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IWriteableBitmap ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_WriteableBitmap_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_WriteableBitmap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_WriteableBitmap[] = L"Windows.UI.Xaml.Media.Imaging.WriteableBitmap";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTask ** Default Interface **
 *    Windows.UI.Xaml.Media.Imaging.IXamlRenderingBackgroundTaskOverrides
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_XamlRenderingBackgroundTask_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Media_Imaging_XamlRenderingBackgroundTask_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Media_Imaging_XamlRenderingBackgroundTask[] = L"Windows.UI.Xaml.Media.Imaging.XamlRenderingBackgroundTask";
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
#endif // __windows2Eui2Examl2Emedia2Eimaging_p_h__

#endif // __windows2Eui2Examl2Emedia2Eimaging_h__
