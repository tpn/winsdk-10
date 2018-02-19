/* Header file automatically generated from windows.applicationmodel.preview.notes.idl */
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
#ifndef __windows2Eapplicationmodel2Epreview2Enotes_h__
#define __windows2Eapplicationmodel2Epreview2Enotes_h__
#ifndef __windows2Eapplicationmodel2Epreview2Enotes_p_h__
#define __windows2Eapplicationmodel2Epreview2Enotes_p_h__


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

#if !defined(WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION)

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
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    interface INotePlacementChangedPreviewEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs ABI::Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    interface INoteVisibilityChangedPreviewEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs ABI::Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    interface INotesWindowManagerPreview;
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    interface INotesWindowManagerPreview2;
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview2

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    interface INotesWindowManagerPreviewShowNoteOptions;
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    interface INotesWindowManagerPreviewStatics;
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    class NotesWindowManagerPreview;
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */



#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6f2755fb-6c33-543c-9ab4-de486bc7bfe2"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview*,IInspectable*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview*, ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview*>,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview*,IInspectable*> __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview*,IInspectable*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview*,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_USE */


#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    class NotePlacementChangedPreviewEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */


#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a28af2c7-4012-5999-a322-5236b30d995f"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview*,ABI::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview*, ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs*, ABI::Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview, Windows.ApplicationModel.Preview.Notes.NotePlacementChangedPreviewEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview*,ABI::Windows::ApplicationModel::Preview::Notes::NotePlacementChangedPreviewEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview*,ABI::Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview*,ABI::Windows::ApplicationModel::Preview::Notes::INotePlacementChangedPreviewEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_USE */


#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    class NoteVisibilityChangedPreviewEventArgs;
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */


#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("16d825c8-5271-51c8-a00f-0cfb1b029ab6"))
ITypedEventHandler<ABI::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview*,ABI::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview*, ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs*, ABI::Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview, Windows.ApplicationModel.Preview.Notes.NoteVisibilityChangedPreviewEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::Preview::Notes::NotesWindowManagerPreview*,ABI::Windows::ApplicationModel::Preview::Notes::NoteVisibilityChangedPreviewEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview*,ABI::Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview*,ABI::Windows::ApplicationModel::Preview::Notes::INoteVisibilityChangedPreviewEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_USE */


#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000



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
        namespace Foundation {
            
            typedef struct Size Size;
            
        } /* Windows */
    } /* Foundation */} /* ABI */



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















namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    class NotesWindowManagerPreviewShowNoteOptions;
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */













/*
 *
 * Interface Windows.ApplicationModel.Preview.Notes.INotePlacementChangedPreviewEventArgs
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.Notes.NotePlacementChangedPreviewEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotePlacementChangedPreviewEventArgs[] = L"Windows.ApplicationModel.Preview.Notes.INotePlacementChangedPreviewEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    /* [object, uuid("491D57B7-F780-4E7F-A939-9A4CAF965214"), exclusiveto, contract] */
                    MIDL_INTERFACE("491D57B7-F780-4E7F-A939-9A4CAF965214")
                    INotePlacementChangedPreviewEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ViewId(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INotePlacementChangedPreviewEventArgs=_uuidof(INotePlacementChangedPreviewEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Preview.Notes.INoteVisibilityChangedPreviewEventArgs
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.Notes.NoteVisibilityChangedPreviewEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INoteVisibilityChangedPreviewEventArgs[] = L"Windows.ApplicationModel.Preview.Notes.INoteVisibilityChangedPreviewEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    /* [object, uuid("0E34649E-3815-4FF6-83B3-A14D17120E24"), exclusiveto, contract] */
                    MIDL_INTERFACE("0E34649E-3815-4FF6-83B3-A14D17120E24")
                    INoteVisibilityChangedPreviewEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ViewId(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsVisible(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INoteVisibilityChangedPreviewEventArgs=_uuidof(INoteVisibilityChangedPreviewEventArgs);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview[] = L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    /* [object, uuid("DC2AC23E-4850-4F13-9CC7-FF487EFDFCDE"), exclusiveto, contract] */
                    MIDL_INTERFACE("DC2AC23E-4850-4F13-9CC7-FF487EFDFCDE")
                    INotesWindowManagerPreview : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsScreenLocked(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ShowNote(
                            /* [in] */INT32 noteViewId
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ShowNoteRelativeTo(
                            /* [in] */INT32 noteViewId,
                            /* [in] */INT32 anchorNoteViewId
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ShowNoteWithPlacement(
                            /* [in] */INT32 noteViewId,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE HideNote(
                            /* [in] */INT32 noteViewId
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetNotePlacement(
                            /* [in] */INT32 noteViewId,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * data
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TrySetNoteSize(
                            /* [in] */INT32 noteViewId,
                            /* [in] */ABI::Windows::Foundation::Size size,
                            /* [retval, out] */__RPC__out boolean * succeeded
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFocusToNextView(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetNotesThumbnailAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * thumbnail,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_SystemLockStateChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_SystemLockStateChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NotePlacementChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NotePlacementChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_NoteVisibilityChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_NoteVisibilityChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INotesWindowManagerPreview=_uuidof(INotesWindowManagerPreview);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview2
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview2[] = L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    /* [object, uuid("EDFE864A-1F54-4B09-9823-FF477F6FA3BC"), exclusiveto, contract] */
                    MIDL_INTERFACE("EDFE864A-1F54-4B09-9823-FF477F6FA3BC")
                    INotesWindowManagerPreview2 : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowNoteRelativeToWithOptions(
                            /* [in] */INT32 noteViewId,
                            /* [in] */INT32 anchorNoteViewId,
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions * options
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowNoteWithPlacementWithOptions(
                            /* [in] */INT32 noteViewId,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreviewShowNoteOptions * options
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetFocusToPreviousView(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetThumbnailImageForTaskSwitcherAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Graphics::Imaging::ISoftwareBitmap * bitmap,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INotesWindowManagerPreview2=_uuidof(INotesWindowManagerPreview2);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewShowNoteOptions
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreviewShowNoteOptions
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreviewShowNoteOptions[] = L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewShowNoteOptions";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    /* [object, uuid("886B09D6-A6AE-4007-A56D-1CA70C84C0D2"), exclusiveto, contract] */
                    MIDL_INTERFACE("886B09D6-A6AE-4007-A56D-1CA70C84C0D2")
                    INotesWindowManagerPreviewShowNoteOptions : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShowWithFocus(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShowWithFocus(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INotesWindowManagerPreviewShowNoteOptions=_uuidof(INotesWindowManagerPreviewShowNoteOptions);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewStatics
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreviewStatics[] = L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Preview {
                namespace Notes {
                    /* [object, uuid("6668CC88-0A8E-4127-A38E-995445868A78"), exclusiveto, contract] */
                    MIDL_INTERFACE("6668CC88-0A8E-4127-A38E-995445868A78")
                    INotesWindowManagerPreviewStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetForCurrentApp(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Preview::Notes::INotesWindowManagerPreview * * current
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INotesWindowManagerPreviewStatics=_uuidof(INotesWindowManagerPreviewStatics);
                    
                } /* Windows */
            } /* ApplicationModel */
        } /* Preview */
    } /* Notes */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Preview.Notes.NotePlacementChangedPreviewEventArgs
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Preview.Notes.INotePlacementChangedPreviewEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NotePlacementChangedPreviewEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NotePlacementChangedPreviewEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Notes_NotePlacementChangedPreviewEventArgs[] = L"Windows.ApplicationModel.Preview.Notes.NotePlacementChangedPreviewEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Preview.Notes.NoteVisibilityChangedPreviewEventArgs
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Preview.Notes.INoteVisibilityChangedPreviewEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NoteVisibilityChangedPreviewEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NoteVisibilityChangedPreviewEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Notes_NoteVisibilityChangedPreviewEventArgs[] = L"Windows.ApplicationModel.Preview.Notes.NoteVisibilityChangedPreviewEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewStatics interface starting with version 1.0 of the Windows.ApplicationModel.Preview.Notes.PreviewNotesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview ** Default Interface **
 *    Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreview_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreview_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreview[] = L"Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview";
#endif
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreviewShowNoteOptions
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 2.0 of the Windows.ApplicationModel.Preview.Notes.PreviewNotesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewShowNoteOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreviewShowNoteOptions_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreviewShowNoteOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreviewShowNoteOptions[] = L"Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreviewShowNoteOptions";
#endif
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x20000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions


#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * sender,/* [in] */ __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectableVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000



#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000



#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;



#ifndef ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
#define ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;

#endif // ____x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__



























/*
 *
 * Interface Windows.ApplicationModel.Preview.Notes.INotePlacementChangedPreviewEventArgs
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.Notes.NotePlacementChangedPreviewEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotePlacementChangedPreviewEventArgs[] = L"Windows.ApplicationModel.Preview.Notes.INotePlacementChangedPreviewEventArgs";
/* [object, uuid("491D57B7-F780-4E7F-A939-9A4CAF965214"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ViewId )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_get_ViewId(This,value) \
    ( (This)->lpVtbl->get_ViewId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotePlacementChangedPreviewEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Preview.Notes.INoteVisibilityChangedPreviewEventArgs
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.Notes.NoteVisibilityChangedPreviewEventArgs
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INoteVisibilityChangedPreviewEventArgs[] = L"Windows.ApplicationModel.Preview.Notes.INoteVisibilityChangedPreviewEventArgs";
/* [object, uuid("0E34649E-3815-4FF6-83B3-A14D17120E24"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ViewId )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsVisible )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_get_ViewId(This,value) \
    ( (This)->lpVtbl->get_ViewId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_get_IsVisible(This,value) \
    ( (This)->lpVtbl->get_IsVisible(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINoteVisibilityChangedPreviewEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview[] = L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview";
/* [object, uuid("DC2AC23E-4850-4F13-9CC7-FF487EFDFCDE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsScreenLocked )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowNote )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [in] */INT32 noteViewId
        );
    HRESULT ( STDMETHODCALLTYPE *ShowNoteRelativeTo )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [in] */INT32 noteViewId,
        /* [in] */INT32 anchorNoteViewId
        );
    HRESULT ( STDMETHODCALLTYPE *ShowNoteWithPlacement )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [in] */INT32 noteViewId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data
        );
    HRESULT ( STDMETHODCALLTYPE *HideNote )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [in] */INT32 noteViewId
        );
    HRESULT ( STDMETHODCALLTYPE *GetNotePlacement )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [in] */INT32 noteViewId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * data
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetNoteSize )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [in] */INT32 noteViewId,
        /* [in] */__x_ABI_CWindows_CFoundation_CSize size,
        /* [retval, out] */__RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *SetFocusToNextView )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetNotesThumbnailAsync )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * thumbnail,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_SystemLockStateChanged )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_IInspectable * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_SystemLockStateChanged )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NotePlacementChanged )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNotePlacementChangedPreviewEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NotePlacementChanged )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [in] */EventRegistrationToken token
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_NoteVisibilityChanged )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CPreview__CNotes__CNotesWindowManagerPreview_Windows__CApplicationModel__CPreview__CNotes__CNoteVisibilityChangedPreviewEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_NoteVisibilityChanged )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_get_IsScreenLocked(This,value) \
    ( (This)->lpVtbl->get_IsScreenLocked(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_ShowNote(This,noteViewId) \
    ( (This)->lpVtbl->ShowNote(This,noteViewId) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_ShowNoteRelativeTo(This,noteViewId,anchorNoteViewId) \
    ( (This)->lpVtbl->ShowNoteRelativeTo(This,noteViewId,anchorNoteViewId) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_ShowNoteWithPlacement(This,noteViewId,data) \
    ( (This)->lpVtbl->ShowNoteWithPlacement(This,noteViewId,data) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_HideNote(This,noteViewId) \
    ( (This)->lpVtbl->HideNote(This,noteViewId) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_GetNotePlacement(This,noteViewId,data) \
    ( (This)->lpVtbl->GetNotePlacement(This,noteViewId,data) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_TrySetNoteSize(This,noteViewId,size,succeeded) \
    ( (This)->lpVtbl->TrySetNoteSize(This,noteViewId,size,succeeded) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_SetFocusToNextView(This) \
    ( (This)->lpVtbl->SetFocusToNextView(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_SetNotesThumbnailAsync(This,thumbnail,operation) \
    ( (This)->lpVtbl->SetNotesThumbnailAsync(This,thumbnail,operation) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_add_SystemLockStateChanged(This,handler,token) \
    ( (This)->lpVtbl->add_SystemLockStateChanged(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_remove_SystemLockStateChanged(This,token) \
    ( (This)->lpVtbl->remove_SystemLockStateChanged(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_add_NotePlacementChanged(This,handler,token) \
    ( (This)->lpVtbl->add_NotePlacementChanged(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_remove_NotePlacementChanged(This,token) \
    ( (This)->lpVtbl->remove_NotePlacementChanged(This,token) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_add_NoteVisibilityChanged(This,handler,token) \
    ( (This)->lpVtbl->add_NoteVisibilityChanged(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_remove_NoteVisibilityChanged(This,token) \
    ( (This)->lpVtbl->remove_NoteVisibilityChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview2
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreview2[] = L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview2";
/* [object, uuid("EDFE864A-1F54-4B09-9823-FF477F6FA3BC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowNoteRelativeToWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
        /* [in] */INT32 noteViewId,
        /* [in] */INT32 anchorNoteViewId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * options
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowNoteWithPlacementWithOptions )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
        /* [in] */INT32 noteViewId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * options
        );
    HRESULT ( STDMETHODCALLTYPE *SetFocusToPreviousView )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetThumbnailImageForTaskSwitcherAsync )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * bitmap,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_ShowNoteRelativeToWithOptions(This,noteViewId,anchorNoteViewId,options) \
    ( (This)->lpVtbl->ShowNoteRelativeToWithOptions(This,noteViewId,anchorNoteViewId,options) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_ShowNoteWithPlacementWithOptions(This,noteViewId,data,options) \
    ( (This)->lpVtbl->ShowNoteWithPlacementWithOptions(This,noteViewId,data,options) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_SetFocusToPreviousView(This) \
    ( (This)->lpVtbl->SetFocusToPreviousView(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_SetThumbnailImageForTaskSwitcherAsync(This,bitmap,action) \
    ( (This)->lpVtbl->SetThumbnailImageForTaskSwitcherAsync(This,bitmap,action) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview2_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewShowNoteOptions
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreviewShowNoteOptions
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreviewShowNoteOptions[] = L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewShowNoteOptions";
/* [object, uuid("886B09D6-A6AE-4007-A56D-1CA70C84C0D2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShowWithFocus )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShowWithFocus )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptionsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_get_ShowWithFocus(This,value) \
    ( (This)->lpVtbl->get_ShowWithFocus(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_put_ShowWithFocus(This,value) \
    ( (This)->lpVtbl->put_ShowWithFocus(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewShowNoteOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewStatics
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview
 *
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Preview_Notes_INotesWindowManagerPreviewStatics[] = L"Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewStatics";
/* [object, uuid("6668CC88-0A8E-4127-A38E-995445868A78"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentApp )(
        __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreview * * current
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_GetForCurrentApp(This,current) \
    ( (This)->lpVtbl->GetForCurrentApp(This,current) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPreview_CNotes_CINotesWindowManagerPreviewStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Preview.Notes.NotePlacementChangedPreviewEventArgs
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Preview.Notes.INotePlacementChangedPreviewEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NotePlacementChangedPreviewEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NotePlacementChangedPreviewEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Notes_NotePlacementChangedPreviewEventArgs[] = L"Windows.ApplicationModel.Preview.Notes.NotePlacementChangedPreviewEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Preview.Notes.NoteVisibilityChangedPreviewEventArgs
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Preview.Notes.INoteVisibilityChangedPreviewEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NoteVisibilityChangedPreviewEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NoteVisibilityChangedPreviewEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Notes_NoteVisibilityChangedPreviewEventArgs[] = L"Windows.ApplicationModel.Preview.Notes.NoteVisibilityChangedPreviewEventArgs";
#endif
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewStatics interface starting with version 1.0 of the Windows.ApplicationModel.Preview.Notes.PreviewNotesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview ** Default Interface **
 *    Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreview2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreview_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreview_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreview[] = L"Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreview";
#endif
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreviewShowNoteOptions
 *
 * Introduced to Windows.ApplicationModel.Preview.Notes.PreviewNotesContract in version 2.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 2.0 of the Windows.ApplicationModel.Preview.Notes.PreviewNotesContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Preview.Notes.INotesWindowManagerPreviewShowNoteOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreviewShowNoteOptions_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreviewShowNoteOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Preview_Notes_NotesWindowManagerPreviewShowNoteOptions[] = L"Windows.ApplicationModel.Preview.Notes.NotesWindowManagerPreviewShowNoteOptions";
#endif
#endif // WINDOWS_APPLICATIONMODEL_PREVIEW_NOTES_PREVIEWNOTESCONTRACT_VERSION >= 0x20000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eapplicationmodel2Epreview2Enotes_p_h__

#endif // __windows2Eapplicationmodel2Epreview2Enotes_h__
