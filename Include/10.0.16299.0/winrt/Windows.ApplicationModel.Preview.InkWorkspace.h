/* Header file automatically generated from windows.applicationmodel.preview.inkworkspace.idl */
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
#ifndef __windows2Eapplicationmodel2Epreview2Einkworkspace_h__
#define __windows2Eapplicationmodel2Epreview2Einkworkspace_h__
#ifndef __windows2Eapplicationmodel2Epreview2Einkworkspace_p_h__
#define __windows2Eapplicationmodel2Epreview2Einkworkspace_p_h__


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

#if !defined(WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION)

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
#include "Windows.Graphics.Imaging.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace InkWorkspace {
                    interface IInkWorkspaceHostedAppManager;
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* InkWorkspace */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager ABI::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace InkWorkspace {
                    interface IInkWorkspaceHostedAppManagerStatics;
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* InkWorkspace */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics ABI::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManagerStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_FWD_DEFINED__


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








namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace InkWorkspace {
                    class InkWorkspaceHostedAppManager;
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* InkWorkspace */} /* ABI */








/*
 *
 * Interface Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManager
 *
 * Introduced to Windows.ApplicationModel.Preview.InkWorkspace.PreviewInkWorkspaceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManager[] = L"Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManager";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace InkWorkspace {
                    /* [object, uuid("FE0A7990-5E59-4BB7-8A63-7D218CD96300"), exclusiveto, contract] */
                    MIDL_INTERFACE("FE0A7990-5E59-4BB7-8A63-7D218CD96300")
                    IInkWorkspaceHostedAppManager : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SetThumbnailAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * bitmap,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkWorkspaceHostedAppManager=_uuidof(IInkWorkspaceHostedAppManager);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* InkWorkspace */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManagerStatics
 *
 * Introduced to Windows.ApplicationModel.Preview.InkWorkspace.PreviewInkWorkspaceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManagerStatics[] = L"Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManagerStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace InkWorkspace {
                    /* [object, uuid("CBFD8CC5-A162-4BC4-84EE-E8716D5233C5"), exclusiveto, contract] */
                    MIDL_INTERFACE("CBFD8CC5-A162-4BC4-84EE-E8716D5233C5")
                    IInkWorkspaceHostedAppManagerStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetForCurrentApp(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Preview::InkWorkspace::IInkWorkspaceHostedAppManager * * current
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInkWorkspaceHostedAppManagerStatics=_uuidof(IInkWorkspaceHostedAppManagerStatics);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* InkWorkspace */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager
 *
 * Introduced to Windows.ApplicationModel.Preview.InkWorkspace.PreviewInkWorkspaceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManagerStatics interface starting with version 1.0 of the Windows.ApplicationModel.Preview.InkWorkspace.PreviewInkWorkspaceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Preview_InkWorkspace_InkWorkspaceHostedAppManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Preview_InkWorkspace_InkWorkspaceHostedAppManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_InkWorkspace_InkWorkspaceHostedAppManager[] = L"Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager";
#endif
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__















/*
 *
 * Interface Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManager
 *
 * Introduced to Windows.ApplicationModel.Preview.InkWorkspace.PreviewInkWorkspaceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManager[] = L"Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManager";
/* [object, uuid("FE0A7990-5E59-4BB7-8A63-7D218CD96300"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetThumbnailAsync )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * bitmap,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_SetThumbnailAsync(This,bitmap,action) \
    ( (This)->lpVtbl->SetThumbnailAsync(This,bitmap,action) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManagerStatics
 *
 * Introduced to Windows.ApplicationModel.Preview.InkWorkspace.PreviewInkWorkspaceContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_InkWorkspace_IInkWorkspaceHostedAppManagerStatics[] = L"Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManagerStatics";
/* [object, uuid("CBFD8CC5-A162-4BC4-84EE-E8716D5233C5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentApp )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManager * * current
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_GetForCurrentApp(This,current) \
    ( (This)->lpVtbl->GetForCurrentApp(This,current) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CInkWorkspace_CIInkWorkspaceHostedAppManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager
 *
 * Introduced to Windows.ApplicationModel.Preview.InkWorkspace.PreviewInkWorkspaceContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManagerStatics interface starting with version 1.0 of the Windows.ApplicationModel.Preview.InkWorkspace.PreviewInkWorkspaceContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Preview.InkWorkspace.IInkWorkspaceHostedAppManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Preview_InkWorkspace_InkWorkspaceHostedAppManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Preview_InkWorkspace_InkWorkspaceHostedAppManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_InkWorkspace_InkWorkspaceHostedAppManager[] = L"Windows.ApplicationModel.Preview.InkWorkspace.InkWorkspaceHostedAppManager";
#endif
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_INKWORKSPACE_PREVIEWINKWORKSPACECONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eapplicationmodel2Epreview2Einkworkspace_p_h__

#endif // __windows2Eapplicationmodel2Epreview2Einkworkspace_h__
