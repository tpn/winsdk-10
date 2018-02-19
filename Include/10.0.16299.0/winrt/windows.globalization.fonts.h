/* Header file automatically generated from windows.globalization.fonts.idl */
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
#ifndef __windows2Eglobalization2Efonts_h__
#define __windows2Eglobalization2Efonts_h__
#ifndef __windows2Eglobalization2Efonts_p_h__
#define __windows2Eglobalization2Efonts_p_h__


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

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Fonts {
                interface ILanguageFont;
            } /* Windows */
        } /* Globalization */
    } /* Fonts */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont ABI::Windows::Globalization::Fonts::ILanguageFont

#endif // ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Fonts {
                interface ILanguageFontGroup;
            } /* Windows */
        } /* Globalization */
    } /* Fonts */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup ABI::Windows::Globalization::Fonts::ILanguageFontGroup

#endif // ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Fonts {
                interface ILanguageFontGroupFactory;
            } /* Windows */
        } /* Globalization */
    } /* Fonts */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory ABI::Windows::Globalization::Fonts::ILanguageFontGroupFactory

#endif // ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_FWD_DEFINED__





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
        namespace Globalization {
            namespace Fonts {
                class LanguageFont;
            } /* Windows */
        } /* Globalization */
    } /* Fonts */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Fonts {
                class LanguageFontGroup;
            } /* Windows */
        } /* Globalization */
    } /* Fonts */} /* ABI */






/*
 *
 * Interface Windows.Globalization.Fonts.ILanguageFont
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.Fonts.LanguageFont
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Fonts_ILanguageFont[] = L"Windows.Globalization.Fonts.ILanguageFont";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Fonts {
                /* [object, uuid("B12E5C3A-B76D-459B-BEEB-901151CD77D1"), exclusiveto, contract] */
                MIDL_INTERFACE("B12E5C3A-B76D-459B-BEEB-901151CD77D1")
                ILanguageFont : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontFamily(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontWeight(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontWeight * weight
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontStretch(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontStretch * stretch
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontStyle(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontStyle * style
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ScaleFactor(
                        /* [retval, out] */__RPC__out DOUBLE * scale
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILanguageFont=_uuidof(ILanguageFont);
                
            } /* Windows */
        } /* Globalization */
    } /* Fonts */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.Fonts.ILanguageFontGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.Fonts.LanguageFontGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Fonts_ILanguageFontGroup[] = L"Windows.Globalization.Fonts.ILanguageFontGroup";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Fonts {
                /* [object, uuid("F33A7FC3-3A5C-4AEA-B9FF-B39FB242F7F6"), exclusiveto, contract] */
                MIDL_INTERFACE("F33A7FC3-3A5C-4AEA-B9FF-B39FB242F7F6")
                ILanguageFontGroup : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UITextFont(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UIHeadingFont(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UITitleFont(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UICaptionFont(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UINotificationHeadingFont(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TraditionalDocumentFont(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ModernDocumentFont(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentHeadingFont(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FixedWidthTextFont(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentAlternate1Font(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentAlternate2Font(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFont * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILanguageFontGroup=_uuidof(ILanguageFontGroup);
                
            } /* Windows */
        } /* Globalization */
    } /* Fonts */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.Fonts.ILanguageFontGroupFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.Fonts.LanguageFontGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Fonts_ILanguageFontGroupFactory[] = L"Windows.Globalization.Fonts.ILanguageFontGroupFactory";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace Fonts {
                /* [object, uuid("FCAEAC67-4E77-49C7-B856-DDE934FC735B"), exclusiveto, contract] */
                MIDL_INTERFACE("FCAEAC67-4E77-49C7-B856-DDE934FC735B")
                ILanguageFontGroupFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateLanguageFontGroup(
                        /* [in] */__RPC__in HSTRING languageTag,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::Fonts::ILanguageFontGroup * * recommendedFonts
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ILanguageFontGroupFactory=_uuidof(ILanguageFontGroupFactory);
                
            } /* Windows */
        } /* Globalization */
    } /* Fonts */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.Fonts.LanguageFont
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.Fonts.ILanguageFont ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_Fonts_LanguageFont_DEFINED
#define RUNTIMECLASS_Windows_Globalization_Fonts_LanguageFont_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Fonts_LanguageFont[] = L"Windows.Globalization.Fonts.LanguageFont";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.Fonts.LanguageFontGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.Fonts.ILanguageFontGroupFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.Fonts.ILanguageFontGroup ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_Fonts_LanguageFontGroup_DEFINED
#define RUNTIMECLASS_Windows_Globalization_Fonts_LanguageFontGroup_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Fonts_LanguageFontGroup[] = L"Windows.Globalization.Fonts.LanguageFontGroup";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont;

#endif // ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup;

#endif // ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory;

#endif // ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CUI_CText_CFontStretch __x_ABI_CWindows_CUI_CText_CFontStretch;


typedef enum __x_ABI_CWindows_CUI_CText_CFontStyle __x_ABI_CWindows_CUI_CText_CFontStyle;


typedef struct __x_ABI_CWindows_CUI_CText_CFontWeight __x_ABI_CWindows_CUI_CText_CFontWeight;













/*
 *
 * Interface Windows.Globalization.Fonts.ILanguageFont
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.Fonts.LanguageFont
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Fonts_ILanguageFont[] = L"Windows.Globalization.Fonts.ILanguageFont";
/* [object, uuid("B12E5C3A-B76D-459B-BEEB-901151CD77D1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontFamily )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontWeight )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * weight
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontStretch )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontStretch * stretch
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontStyle )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontStyle * style
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ScaleFactor )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * This,
        /* [retval, out] */__RPC__out DOUBLE * scale
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontVtbl;

interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_get_FontFamily(This,value) \
    ( (This)->lpVtbl->get_FontFamily(This,value) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_get_FontWeight(This,weight) \
    ( (This)->lpVtbl->get_FontWeight(This,weight) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_get_FontStretch(This,stretch) \
    ( (This)->lpVtbl->get_FontStretch(This,stretch) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_get_FontStyle(This,style) \
    ( (This)->lpVtbl->get_FontStyle(This,style) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_get_ScaleFactor(This,scale) \
    ( (This)->lpVtbl->get_ScaleFactor(This,scale) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.Fonts.ILanguageFontGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.Fonts.LanguageFontGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Fonts_ILanguageFontGroup[] = L"Windows.Globalization.Fonts.ILanguageFontGroup";
/* [object, uuid("F33A7FC3-3A5C-4AEA-B9FF-B39FB242F7F6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UITextFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UIHeadingFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UITitleFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UICaptionFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UINotificationHeadingFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TraditionalDocumentFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ModernDocumentFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentHeadingFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FixedWidthTextFont )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentAlternate1Font )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentAlternate2Font )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFont * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupVtbl;

interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_UITextFont(This,value) \
    ( (This)->lpVtbl->get_UITextFont(This,value) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_UIHeadingFont(This,value) \
    ( (This)->lpVtbl->get_UIHeadingFont(This,value) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_UITitleFont(This,value) \
    ( (This)->lpVtbl->get_UITitleFont(This,value) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_UICaptionFont(This,value) \
    ( (This)->lpVtbl->get_UICaptionFont(This,value) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_UINotificationHeadingFont(This,value) \
    ( (This)->lpVtbl->get_UINotificationHeadingFont(This,value) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_TraditionalDocumentFont(This,value) \
    ( (This)->lpVtbl->get_TraditionalDocumentFont(This,value) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_ModernDocumentFont(This,value) \
    ( (This)->lpVtbl->get_ModernDocumentFont(This,value) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_DocumentHeadingFont(This,value) \
    ( (This)->lpVtbl->get_DocumentHeadingFont(This,value) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_FixedWidthTextFont(This,value) \
    ( (This)->lpVtbl->get_FixedWidthTextFont(This,value) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_DocumentAlternate1Font(This,value) \
    ( (This)->lpVtbl->get_DocumentAlternate1Font(This,value) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_get_DocumentAlternate2Font(This,value) \
    ( (This)->lpVtbl->get_DocumentAlternate2Font(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.Fonts.ILanguageFontGroupFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.Fonts.LanguageFontGroup
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Fonts_ILanguageFontGroupFactory[] = L"Windows.Globalization.Fonts.ILanguageFontGroupFactory";
/* [object, uuid("FCAEAC67-4E77-49C7-B856-DDE934FC735B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateLanguageFontGroup )(
        __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory * This,
        /* [in] */__RPC__in HSTRING languageTag,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroup * * recommendedFonts
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactoryVtbl;

interface __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_CreateLanguageFontGroup(This,languageTag,recommendedFonts) \
    ( (This)->lpVtbl->CreateLanguageFontGroup(This,languageTag,recommendedFonts) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CFonts_CILanguageFontGroupFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.Fonts.LanguageFont
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.Fonts.ILanguageFont ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_Fonts_LanguageFont_DEFINED
#define RUNTIMECLASS_Windows_Globalization_Fonts_LanguageFont_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Fonts_LanguageFont[] = L"Windows.Globalization.Fonts.LanguageFont";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.Fonts.LanguageFontGroup
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.Fonts.ILanguageFontGroupFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.Fonts.ILanguageFontGroup ** Default Interface **
 *
 * Class Threading Model:  Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_Fonts_LanguageFontGroup_DEFINED
#define RUNTIMECLASS_Windows_Globalization_Fonts_LanguageFontGroup_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Fonts_LanguageFontGroup[] = L"Windows.Globalization.Fonts.LanguageFontGroup";
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
#endif // __windows2Eglobalization2Efonts_p_h__

#endif // __windows2Eglobalization2Efonts_h__
