/* Header file automatically generated from windows.ui.text.idl */
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
#ifndef __windows2Eui2Etext_h__
#define __windows2Eui2Etext_h__
#ifndef __windows2Eui2Etext_p_h__
#define __windows2Eui2Etext_p_h__


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
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CText_CIFontWeights_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CIFontWeights_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                interface IFontWeights;
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CIFontWeights ABI::Windows::UI::Text::IFontWeights

#endif // ____x_ABI_CWindows_CUI_CText_CIFontWeights_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                interface IFontWeightsStatics;
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics ABI::Windows::UI::Text::IFontWeightsStatics

#endif // ____x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextCharacterFormat_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextCharacterFormat_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                interface ITextCharacterFormat;
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat ABI::Windows::UI::Text::ITextCharacterFormat

#endif // ____x_ABI_CWindows_CUI_CText_CITextCharacterFormat_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextConstantsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextConstantsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                interface ITextConstantsStatics;
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics ABI::Windows::UI::Text::ITextConstantsStatics

#endif // ____x_ABI_CWindows_CUI_CText_CITextConstantsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextDocument_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                interface ITextDocument;
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CITextDocument ABI::Windows::UI::Text::ITextDocument

#endif // ____x_ABI_CWindows_CUI_CText_CITextDocument_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextDocument2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextDocument2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                interface ITextDocument2;
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CITextDocument2 ABI::Windows::UI::Text::ITextDocument2

#endif // ____x_ABI_CWindows_CUI_CText_CITextDocument2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextParagraphFormat_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextParagraphFormat_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                interface ITextParagraphFormat;
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat ABI::Windows::UI::Text::ITextParagraphFormat

#endif // ____x_ABI_CWindows_CUI_CText_CITextParagraphFormat_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextRange_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextRange_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                interface ITextRange;
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CITextRange ABI::Windows::UI::Text::ITextRange

#endif // ____x_ABI_CWindows_CUI_CText_CITextRange_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextSelection_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextSelection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                interface ITextSelection;
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#define __x_ABI_CWindows_CUI_CText_CITextSelection ABI::Windows::UI::Text::ITextSelection

#endif // ____x_ABI_CWindows_CUI_CText_CITextSelection_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                enum UnderlineType : int;
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */


#ifndef DEF___FIReference_1_Windows__CUI__CText__CUnderlineType_USE
#define DEF___FIReference_1_Windows__CUI__CText__CUnderlineType_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1b63ec17-7b2b-59fe-ab9d-b60ea4f9c9b8"))
IReference<enum ABI::Windows::UI::Text::UnderlineType> : IReference_impl<enum ABI::Windows::UI::Text::UnderlineType> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.UI.Text.UnderlineType>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<enum ABI::Windows::UI::Text::UnderlineType> __FIReference_1_Windows__CUI__CText__CUnderlineType_t;
#define __FIReference_1_Windows__CUI__CText__CUnderlineType ABI::Windows::Foundation::__FIReference_1_Windows__CUI__CText__CUnderlineType_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CUI__CText__CUnderlineType ABI::Windows::Foundation::IReference<ABI::Windows::UI::Text::UnderlineType>
//#define __FIReference_1_Windows__CUI__CText__CUnderlineType_t ABI::Windows::Foundation::IReference<ABI::Windows::UI::Text::UnderlineType>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CUI__CText__CUnderlineType_USE */





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Point Point;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




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
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum CaretType : int CaretType;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum FindOptions : unsigned int FindOptions;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

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
                
                typedef enum FormatEffect : int FormatEffect;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum HorizontalCharacterAlignment : int HorizontalCharacterAlignment;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum LetterCase : int LetterCase;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum LineSpacingRule : int LineSpacingRule;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum LinkType : int LinkType;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum MarkerAlignment : int MarkerAlignment;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum MarkerStyle : int MarkerStyle;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum MarkerType : int MarkerType;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum ParagraphAlignment : int ParagraphAlignment;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum ParagraphStyle : int ParagraphStyle;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum PointOptions : unsigned int PointOptions;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum RangeGravity : int RangeGravity;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum SelectionOptions : unsigned int SelectionOptions;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum SelectionType : int SelectionType;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum TabAlignment : int TabAlignment;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum TabLeader : int TabLeader;
                
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
            namespace Text {
                
                typedef enum TextGetOptions : unsigned int TextGetOptions;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum TextRangeUnit : int TextRangeUnit;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum TextScript : int TextScript;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum TextSetOptions : unsigned int TextSetOptions;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum UnderlineType : int UnderlineType;
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                
                typedef enum VerticalCharacterAlignment : int VerticalCharacterAlignment;
                
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
                class FontWeights;
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                class RichEditTextDocument;
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */











/*
 *
 * Struct Windows.UI.Text.CaretType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum CaretType : int
                {
                    CaretType_Normal = 0,
                    CaretType_Null = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.FindOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, flags, contract] */
                enum FindOptions : unsigned int
                {
                    FindOptions_None = 0,
                    FindOptions_Word = 0x2,
                    FindOptions_Case = 0x4,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(FindOptions)
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.FontStretch
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum FontStretch : int
                {
                    FontStretch_Undefined = 0,
                    FontStretch_UltraCondensed = 1,
                    FontStretch_ExtraCondensed = 2,
                    FontStretch_Condensed = 3,
                    FontStretch_SemiCondensed = 4,
                    FontStretch_Normal = 5,
                    FontStretch_SemiExpanded = 6,
                    FontStretch_Expanded = 7,
                    FontStretch_ExtraExpanded = 8,
                    FontStretch_UltraExpanded = 9,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.FontStyle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum FontStyle : int
                {
                    FontStyle_Normal = 0,
                    FontStyle_Oblique = 1,
                    FontStyle_Italic = 2,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.FormatEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum FormatEffect : int
                {
                    FormatEffect_Off = 0,
                    FormatEffect_On = 1,
                    FormatEffect_Toggle = 2,
                    FormatEffect_Undefined = 3,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.HorizontalCharacterAlignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum HorizontalCharacterAlignment : int
                {
                    HorizontalCharacterAlignment_Left = 0,
                    HorizontalCharacterAlignment_Right = 1,
                    HorizontalCharacterAlignment_Center = 2,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.LetterCase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum LetterCase : int
                {
                    LetterCase_Lower = 0,
                    LetterCase_Upper = 1,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.LineSpacingRule
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum LineSpacingRule : int
                {
                    LineSpacingRule_Undefined = 0,
                    LineSpacingRule_Single = 1,
                    LineSpacingRule_OneAndHalf = 2,
                    LineSpacingRule_Double = 3,
                    LineSpacingRule_AtLeast = 4,
                    LineSpacingRule_Exactly = 5,
                    LineSpacingRule_Multiple = 6,
                    LineSpacingRule_Percent = 7,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.LinkType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum LinkType : int
                {
                    LinkType_Undefined = 0,
                    LinkType_NotALink = 1,
                    LinkType_ClientLink = 2,
                    LinkType_FriendlyLinkName = 3,
                    LinkType_FriendlyLinkAddress = 4,
                    LinkType_AutoLink = 5,
                    LinkType_AutoLinkEmail = 6,
                    LinkType_AutoLinkPhone = 7,
                    LinkType_AutoLinkPath = 8,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.MarkerAlignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum MarkerAlignment : int
                {
                    MarkerAlignment_Undefined = 0,
                    MarkerAlignment_Left = 1,
                    MarkerAlignment_Center = 2,
                    MarkerAlignment_Right = 3,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.MarkerStyle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum MarkerStyle : int
                {
                    MarkerStyle_Undefined = 0,
                    MarkerStyle_Parenthesis = 1,
                    MarkerStyle_Parentheses = 2,
                    MarkerStyle_Period = 3,
                    MarkerStyle_Plain = 4,
                    MarkerStyle_Minus = 5,
                    MarkerStyle_NoNumber = 6,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.MarkerType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum MarkerType : int
                {
                    MarkerType_Undefined = 0,
                    MarkerType_None = 1,
                    MarkerType_Bullet = 2,
                    MarkerType_Arabic = 3,
                    MarkerType_LowercaseEnglishLetter = 4,
                    MarkerType_UppercaseEnglishLetter = 5,
                    MarkerType_LowercaseRoman = 6,
                    MarkerType_UppercaseRoman = 7,
                    MarkerType_UnicodeSequence = 8,
                    MarkerType_CircledNumber = 9,
                    MarkerType_BlackCircleWingding = 10,
                    MarkerType_WhiteCircleWingding = 11,
                    MarkerType_ArabicWide = 12,
                    MarkerType_SimplifiedChinese = 13,
                    MarkerType_TraditionalChinese = 14,
                    MarkerType_JapanSimplifiedChinese = 15,
                    MarkerType_JapanKorea = 16,
                    MarkerType_ArabicDictionary = 17,
                    MarkerType_ArabicAbjad = 18,
                    MarkerType_Hebrew = 19,
                    MarkerType_ThaiAlphabetic = 20,
                    MarkerType_ThaiNumeric = 21,
                    MarkerType_DevanagariVowel = 22,
                    MarkerType_DevanagariConsonant = 23,
                    MarkerType_DevanagariNumeric = 24,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.ParagraphAlignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum ParagraphAlignment : int
                {
                    ParagraphAlignment_Undefined = 0,
                    ParagraphAlignment_Left = 1,
                    ParagraphAlignment_Center = 2,
                    ParagraphAlignment_Right = 3,
                    ParagraphAlignment_Justify = 4,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.ParagraphStyle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum ParagraphStyle : int
                {
                    ParagraphStyle_Undefined = 0,
                    ParagraphStyle_None = 1,
                    ParagraphStyle_Normal = 2,
                    ParagraphStyle_Heading1 = 3,
                    ParagraphStyle_Heading2 = 4,
                    ParagraphStyle_Heading3 = 5,
                    ParagraphStyle_Heading4 = 6,
                    ParagraphStyle_Heading5 = 7,
                    ParagraphStyle_Heading6 = 8,
                    ParagraphStyle_Heading7 = 9,
                    ParagraphStyle_Heading8 = 10,
                    ParagraphStyle_Heading9 = 11,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.PointOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, flags, contract] */
                enum PointOptions : unsigned int
                {
                    PointOptions_None = 0,
                    PointOptions_IncludeInset = 0x1,
                    PointOptions_Start = 0x20,
                    PointOptions_ClientCoordinates = 0x100,
                    PointOptions_AllowOffClient = 0x200,
                    PointOptions_Transform = 0x400,
                    PointOptions_NoHorizontalScroll = 0x10000,
                    PointOptions_NoVerticalScroll = 0x40000,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(PointOptions)
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.RangeGravity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum RangeGravity : int
                {
                    RangeGravity_UIBehavior = 0,
                    RangeGravity_Backward = 1,
                    RangeGravity_Forward = 2,
                    RangeGravity_Inward = 3,
                    RangeGravity_Outward = 4,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.SelectionOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, flags, contract] */
                enum SelectionOptions : unsigned int
                {
                    SelectionOptions_StartActive = 0x1,
                    SelectionOptions_AtEndOfLine = 0x2,
                    SelectionOptions_Overtype = 0x4,
                    SelectionOptions_Active = 0x8,
                    SelectionOptions_Replace = 0x10,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(SelectionOptions)
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.SelectionType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum SelectionType : int
                {
                    SelectionType_None = 0,
                    SelectionType_InsertionPoint = 1,
                    SelectionType_Normal = 2,
                    SelectionType_InlineShape = 7,
                    SelectionType_Shape = 8,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.TabAlignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum TabAlignment : int
                {
                    TabAlignment_Left = 0,
                    TabAlignment_Center = 1,
                    TabAlignment_Right = 2,
                    TabAlignment_Decimal = 3,
                    TabAlignment_Bar = 4,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.TabLeader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum TabLeader : int
                {
                    TabLeader_Spaces = 0,
                    TabLeader_Dots = 1,
                    TabLeader_Dashes = 2,
                    TabLeader_Lines = 3,
                    TabLeader_ThickLines = 4,
                    TabLeader_Equals = 5,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.TextDecorations
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, flags, contract] */
                enum TextDecorations : unsigned int
                {
                    TextDecorations_None = 0,
                    TextDecorations_Underline = 0x1,
                    TextDecorations_Strikethrough = 0x2,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(TextDecorations)
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Text.TextGetOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, flags, contract] */
                enum TextGetOptions : unsigned int
                {
                    TextGetOptions_None = 0,
                    TextGetOptions_AdjustCrlf = 0x1,
                    TextGetOptions_UseCrlf = 0x2,
                    TextGetOptions_UseObjectText = 0x4,
                    TextGetOptions_AllowFinalEop = 0x8,
                    TextGetOptions_NoHidden = 0x20,
                    TextGetOptions_IncludeNumbering = 0x40,
                    TextGetOptions_FormatRtf = 0x2000,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                    TextGetOptions_UseLf = 0x1000000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
                    
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(TextGetOptions)
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.TextRangeUnit
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum TextRangeUnit : int
                {
                    TextRangeUnit_Character = 0,
                    TextRangeUnit_Word = 1,
                    TextRangeUnit_Sentence = 2,
                    TextRangeUnit_Paragraph = 3,
                    TextRangeUnit_Line = 4,
                    TextRangeUnit_Story = 5,
                    TextRangeUnit_Screen = 6,
                    TextRangeUnit_Section = 7,
                    TextRangeUnit_Window = 8,
                    TextRangeUnit_CharacterFormat = 9,
                    TextRangeUnit_ParagraphFormat = 10,
                    TextRangeUnit_Object = 11,
                    TextRangeUnit_HardParagraph = 12,
                    TextRangeUnit_Cluster = 13,
                    TextRangeUnit_Bold = 14,
                    TextRangeUnit_Italic = 15,
                    TextRangeUnit_Underline = 16,
                    TextRangeUnit_Strikethrough = 17,
                    TextRangeUnit_ProtectedText = 18,
                    TextRangeUnit_Link = 19,
                    TextRangeUnit_SmallCaps = 20,
                    TextRangeUnit_AllCaps = 21,
                    TextRangeUnit_Hidden = 22,
                    TextRangeUnit_Outline = 23,
                    TextRangeUnit_Shadow = 24,
                    TextRangeUnit_Imprint = 25,
                    TextRangeUnit_Disabled = 26,
                    TextRangeUnit_Revised = 27,
                    TextRangeUnit_Subscript = 28,
                    TextRangeUnit_Superscript = 29,
                    TextRangeUnit_FontBound = 30,
                    TextRangeUnit_LinkProtected = 31,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.TextScript
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum TextScript : int
                {
                    TextScript_Undefined = 0,
                    TextScript_Ansi = 1,
                    TextScript_EastEurope = 2,
                    TextScript_Cyrillic = 3,
                    TextScript_Greek = 4,
                    TextScript_Turkish = 5,
                    TextScript_Hebrew = 6,
                    TextScript_Arabic = 7,
                    TextScript_Baltic = 8,
                    TextScript_Vietnamese = 9,
                    TextScript_Default = 10,
                    TextScript_Symbol = 11,
                    TextScript_Thai = 12,
                    TextScript_ShiftJis = 13,
                    TextScript_GB2312 = 14,
                    TextScript_Hangul = 15,
                    TextScript_Big5 = 16,
                    TextScript_PC437 = 17,
                    TextScript_Oem = 18,
                    TextScript_Mac = 19,
                    TextScript_Armenian = 20,
                    TextScript_Syriac = 21,
                    TextScript_Thaana = 22,
                    TextScript_Devanagari = 23,
                    TextScript_Bengali = 24,
                    TextScript_Gurmukhi = 25,
                    TextScript_Gujarati = 26,
                    TextScript_Oriya = 27,
                    TextScript_Tamil = 28,
                    TextScript_Telugu = 29,
                    TextScript_Kannada = 30,
                    TextScript_Malayalam = 31,
                    TextScript_Sinhala = 32,
                    TextScript_Lao = 33,
                    TextScript_Tibetan = 34,
                    TextScript_Myanmar = 35,
                    TextScript_Georgian = 36,
                    TextScript_Jamo = 37,
                    TextScript_Ethiopic = 38,
                    TextScript_Cherokee = 39,
                    TextScript_Aboriginal = 40,
                    TextScript_Ogham = 41,
                    TextScript_Runic = 42,
                    TextScript_Khmer = 43,
                    TextScript_Mongolian = 44,
                    TextScript_Braille = 45,
                    TextScript_Yi = 46,
                    TextScript_Limbu = 47,
                    TextScript_TaiLe = 48,
                    TextScript_NewTaiLue = 49,
                    TextScript_SylotiNagri = 50,
                    TextScript_Kharoshthi = 51,
                    TextScript_Kayahli = 52,
                    TextScript_UnicodeSymbol = 53,
                    TextScript_Emoji = 54,
                    TextScript_Glagolitic = 55,
                    TextScript_Lisu = 56,
                    TextScript_Vai = 57,
                    TextScript_NKo = 58,
                    TextScript_Osmanya = 59,
                    TextScript_PhagsPa = 60,
                    TextScript_Gothic = 61,
                    TextScript_Deseret = 62,
                    TextScript_Tifinagh = 63,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.TextSetOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, flags, contract] */
                enum TextSetOptions : unsigned int
                {
                    TextSetOptions_None = 0,
                    TextSetOptions_UnicodeBidi = 0x1,
                    TextSetOptions_Unlink = 0x8,
                    TextSetOptions_Unhide = 0x10,
                    TextSetOptions_CheckTextLimit = 0x20,
                    TextSetOptions_FormatRtf = 0x2000,
                    TextSetOptions_ApplyRtfDocumentDefaults = 0x4000,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(TextSetOptions)
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.UnderlineType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum UnderlineType : int
                {
                    UnderlineType_Undefined = 0,
                    UnderlineType_None = 1,
                    UnderlineType_Single = 2,
                    UnderlineType_Words = 3,
                    UnderlineType_Double = 4,
                    UnderlineType_Dotted = 5,
                    UnderlineType_Dash = 6,
                    UnderlineType_DashDot = 7,
                    UnderlineType_DashDotDot = 8,
                    UnderlineType_Wave = 9,
                    UnderlineType_Thick = 10,
                    UnderlineType_Thin = 11,
                    UnderlineType_DoubleWave = 12,
                    UnderlineType_HeavyWave = 13,
                    UnderlineType_LongDash = 14,
                    UnderlineType_ThickDash = 15,
                    UnderlineType_ThickDashDot = 16,
                    UnderlineType_ThickDashDotDot = 17,
                    UnderlineType_ThickDotted = 18,
                    UnderlineType_ThickLongDash = 19,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.VerticalCharacterAlignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [v1_enum, contract] */
                enum VerticalCharacterAlignment : int
                {
                    VerticalCharacterAlignment_Top = 0,
                    VerticalCharacterAlignment_Baseline = 1,
                    VerticalCharacterAlignment_Bottom = 2,
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.FontWeight
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [contract] */
                struct FontWeight
                {
                    UINT16 Weight;
                };
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.IFontWeights
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.FontWeights
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CIFontWeights_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CIFontWeights_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_IFontWeights[] = L"Windows.UI.Text.IFontWeights";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [object, uuid("7880A444-01AB-4997-8517-DF822A0C45F1"), exclusiveto, contract] */
                MIDL_INTERFACE("7880A444-01AB-4997-8517-DF822A0C45F1")
                IFontWeights : IInspectable
                {
                    
                };

                extern MIDL_CONST_ID IID & IID_IFontWeights=_uuidof(IFontWeights);
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CIFontWeights;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CIFontWeights_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.IFontWeightsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.FontWeights
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_IFontWeightsStatics[] = L"Windows.UI.Text.IFontWeightsStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [object, uuid("B3B579D5-1BA9-48EB-9DAD-C095E8C23BA3"), exclusiveto, contract] */
                MIDL_INTERFACE("B3B579D5-1BA9-48EB-9DAD-C095E8C23BA3")
                IFontWeightsStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Black(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontWeight * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bold(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontWeight * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtraBlack(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontWeight * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtraBold(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontWeight * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtraLight(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontWeight * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Light(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontWeight * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Medium(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontWeight * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Normal(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontWeight * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SemiBold(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontWeight * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SemiLight(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontWeight * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Thin(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontWeight * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IFontWeightsStatics=_uuidof(IFontWeightsStatics);
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CIFontWeightsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.ITextCharacterFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextCharacterFormat_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextCharacterFormat_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextCharacterFormat[] = L"Windows.UI.Text.ITextCharacterFormat";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [object, uuid("5ADEF3DB-05FB-442D-8065-642AFEA02CED"), contract] */
                MIDL_INTERFACE("5ADEF3DB-05FB-442D-8065-642AFEA02CED")
                ITextCharacterFormat : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllCaps(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AllCaps(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BackgroundColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_BackgroundColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bold(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Bold(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontStretch(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontStretch * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FontStretch(
                        /* [in] */ABI::Windows::UI::Text::FontStretch value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FontStyle(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontStyle * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FontStyle(
                        /* [in] */ABI::Windows::UI::Text::FontStyle value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForegroundColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ForegroundColor(
                        /* [in] */ABI::Windows::UI::Color value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Hidden(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Hidden(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Italic(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Italic(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Kerning(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Kerning(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LanguageTag(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LanguageTag(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LinkType(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::LinkType * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Name(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Outline(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Outline(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Position(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProtectedText(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProtectedText(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Size(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Size(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SmallCaps(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SmallCaps(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Spacing(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Spacing(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Strikethrough(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Strikethrough(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subscript(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Subscript(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Superscript(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Superscript(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextScript(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::TextScript * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TextScript(
                        /* [in] */ABI::Windows::UI::Text::TextScript value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Underline(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::UnderlineType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Underline(
                        /* [in] */ABI::Windows::UI::Text::UnderlineType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Weight(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Weight(
                        /* [in] */INT32 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetClone(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Text::ITextCharacterFormat * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetClone(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::ITextCharacterFormat * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsEqual(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Text::ITextCharacterFormat * format,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITextCharacterFormat=_uuidof(ITextCharacterFormat);
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextCharacterFormat;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextCharacterFormat_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.ITextConstantsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.TextConstants
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextConstantsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextConstantsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextConstantsStatics[] = L"Windows.UI.Text.ITextConstantsStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [object, uuid("779E7C33-189D-4BFA-97C8-10DB135D976E"), exclusiveto, contract] */
                MIDL_INTERFACE("779E7C33-189D-4BFA-97C8-10DB135D976E")
                ITextConstantsStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AutoColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinUnitCount(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxUnitCount(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UndefinedColor(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UndefinedFloatValue(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UndefinedInt32Value(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UndefinedFontStretch(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontStretch * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UndefinedFontStyle(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FontStyle * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITextConstantsStatics=_uuidof(ITextConstantsStatics);
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextConstantsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextConstantsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.ITextDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextDocument[] = L"Windows.UI.Text.ITextDocument";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [object, uuid("BEEE4DDB-90B2-408C-A2F6-0A0AC31E33E4"), contract] */
                MIDL_INTERFACE("BEEE4DDB-90B2-408C-A2F6-0A0AC31E33E4")
                ITextDocument : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CaretType(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::CaretType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CaretType(
                        /* [in] */ABI::Windows::UI::Text::CaretType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultTabStop(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DefaultTabStop(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Selection(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::ITextSelection * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UndoLimit(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UndoLimit(
                        /* [in] */UINT32 value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CanCopy(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CanPaste(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CanRedo(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CanUndo(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ApplyDisplayUpdates(
                        /* [retval, out] */__RPC__out INT32 * count
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE BatchDisplayUpdates(
                        /* [retval, out] */__RPC__out INT32 * count
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE BeginUndoGroup(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE EndUndoGroup(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDefaultCharacterFormat(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::ITextCharacterFormat * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDefaultParagraphFormat(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::ITextParagraphFormat * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetRange(
                        /* [in] */INT32 startPosition,
                        /* [in] */INT32 endPosition,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::ITextRange * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetRangeFromPoint(
                        /* [in] */ABI::Windows::Foundation::Point point,
                        /* [in] */ABI::Windows::UI::Text::PointOptions options,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::ITextRange * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetText(
                        /* [in] */ABI::Windows::UI::Text::TextGetOptions options,
                        /* [out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE LoadFromStream(
                        /* [in] */ABI::Windows::UI::Text::TextSetOptions options,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Redo(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SaveToStream(
                        /* [in] */ABI::Windows::UI::Text::TextGetOptions options,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetDefaultCharacterFormat(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Text::ITextCharacterFormat * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetDefaultParagraphFormat(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Text::ITextParagraphFormat * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetText(
                        /* [in] */ABI::Windows::UI::Text::TextSetOptions options,
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Undo(void) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITextDocument=_uuidof(ITextDocument);
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextDocument;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextDocument_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.ITextDocument2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.RichEditTextDocument
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Text.ITextDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextDocument2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextDocument2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextDocument2[] = L"Windows.UI.Text.ITextDocument2";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [object, uuid("F2311112-8C89-49C9-9118-F057CBB814EE"), exclusiveto, contract] */
                MIDL_INTERFACE("F2311112-8C89-49C9-9118-F057CBB814EE")
                ITextDocument2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlignmentIncludesTrailingWhitespace(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AlignmentIncludesTrailingWhitespace(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IgnoreTrailingCharacterSpacing(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IgnoreTrailingCharacterSpacing(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITextDocument2=_uuidof(ITextDocument2);
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextDocument2;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextDocument2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Text.ITextParagraphFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextParagraphFormat_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextParagraphFormat_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextParagraphFormat[] = L"Windows.UI.Text.ITextParagraphFormat";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [object, uuid("2CF8CFA6-4676-498A-93F5-BBDBFC0BD883"), contract] */
                MIDL_INTERFACE("2CF8CFA6-4676-498A-93F5-BBDBFC0BD883")
                ITextParagraphFormat : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Alignment(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::ParagraphAlignment * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Alignment(
                        /* [in] */ABI::Windows::UI::Text::ParagraphAlignment value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FirstLineIndent(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeepTogether(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeepTogether(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeepWithNext(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeepWithNext(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LeftIndent(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LineSpacing(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LineSpacingRule(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::LineSpacingRule * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ListAlignment(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::MarkerAlignment * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ListAlignment(
                        /* [in] */ABI::Windows::UI::Text::MarkerAlignment value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ListLevelIndex(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ListLevelIndex(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ListStart(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ListStart(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ListStyle(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::MarkerStyle * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ListStyle(
                        /* [in] */ABI::Windows::UI::Text::MarkerStyle value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ListTab(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ListTab(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ListType(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::MarkerType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ListType(
                        /* [in] */ABI::Windows::UI::Text::MarkerType value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NoLineNumber(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NoLineNumber(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PageBreakBefore(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PageBreakBefore(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RightIndent(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RightIndent(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RightToLeft(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RightToLeft(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Style(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::ParagraphStyle * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Style(
                        /* [in] */ABI::Windows::UI::Text::ParagraphStyle value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpaceAfter(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpaceAfter(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpaceBefore(
                        /* [retval, out] */__RPC__out FLOAT * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpaceBefore(
                        /* [in] */FLOAT value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WidowControl(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::FormatEffect * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_WidowControl(
                        /* [in] */ABI::Windows::UI::Text::FormatEffect value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TabCount(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE AddTab(
                        /* [in] */FLOAT position,
                        /* [in] */ABI::Windows::UI::Text::TabAlignment align,
                        /* [in] */ABI::Windows::UI::Text::TabLeader leader
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ClearAllTabs(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE DeleteTab(
                        /* [in] */FLOAT position
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetClone(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::ITextParagraphFormat * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetTab(
                        /* [in] */INT32 index,
                        /* [out] */__RPC__out FLOAT * position,
                        /* [out] */__RPC__out ABI::Windows::UI::Text::TabAlignment * align,
                        /* [out] */__RPC__out ABI::Windows::UI::Text::TabLeader * leader
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsEqual(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Text::ITextParagraphFormat * format,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetClone(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Text::ITextParagraphFormat * format
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetIndents(
                        /* [in] */FLOAT start,
                        /* [in] */FLOAT left,
                        /* [in] */FLOAT right
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetLineSpacing(
                        /* [in] */ABI::Windows::UI::Text::LineSpacingRule rule,
                        /* [in] */FLOAT spacing
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITextParagraphFormat=_uuidof(ITextParagraphFormat);
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextParagraphFormat;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextParagraphFormat_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.ITextRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextRange_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextRange_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextRange[] = L"Windows.UI.Text.ITextRange";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [object, uuid("5B9E4E57-C072-42A0-8945-AF503EE54768"), contract] */
                MIDL_INTERFACE("5B9E4E57-C072-42A0-8945-AF503EE54768")
                ITextRange : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Character(
                        /* [retval, out] */__RPC__out WCHAR * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Character(
                        /* [in] */WCHAR value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CharacterFormat(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::ITextCharacterFormat * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CharacterFormat(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Text::ITextCharacterFormat * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FormattedText(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::ITextRange * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FormattedText(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Text::ITextRange * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EndPosition(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_EndPosition(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gravity(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::RangeGravity * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Gravity(
                        /* [in] */ABI::Windows::UI::Text::RangeGravity value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Length(
                        /* [retval, out] */__RPC__out INT32 * length
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Link(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Link(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ParagraphFormat(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::ITextParagraphFormat * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ParagraphFormat(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Text::ITextParagraphFormat * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StartPosition(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StartPosition(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StoryLength(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Text(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Text(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CanPaste(
                        /* [in] */INT32 format,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ChangeCase(
                        /* [in] */ABI::Windows::UI::Text::LetterCase value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Collapse(
                        /* [in] */boolean value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Copy(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Cut(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Delete(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [in] */INT32 count,
                        /* [retval, out] */__RPC__out INT32 * delta
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE EndOf(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [in] */boolean extend,
                        /* [retval, out] */__RPC__out INT32 * delta
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Expand(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [retval, out] */__RPC__out INT32 * delta
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FindText(
                        /* [in] */__RPC__in HSTRING value,
                        /* [in] */INT32 scanLength,
                        /* [in] */ABI::Windows::UI::Text::FindOptions options,
                        /* [retval, out] */__RPC__out INT32 * length
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetCharacterUtf32(
                        /* [out] */__RPC__out UINT32 * value,
                        /* [in] */INT32 offset
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetClone(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Text::ITextRange * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetIndex(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [retval, out] */__RPC__out INT32 * index
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetPoint(
                        /* [in] */ABI::Windows::UI::Text::HorizontalCharacterAlignment horizontalAlign,
                        /* [in] */ABI::Windows::UI::Text::VerticalCharacterAlignment verticalAlign,
                        /* [in] */ABI::Windows::UI::Text::PointOptions options,
                        /* [out] */__RPC__out ABI::Windows::Foundation::Point * point
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetRect(
                        /* [in] */ABI::Windows::UI::Text::PointOptions options,
                        /* [out] */__RPC__out ABI::Windows::Foundation::Rect * rect,
                        /* [out] */__RPC__out INT32 * hit
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetText(
                        /* [in] */ABI::Windows::UI::Text::TextGetOptions options,
                        /* [out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetTextViaStream(
                        /* [in] */ABI::Windows::UI::Text::TextGetOptions options,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE InRange(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Text::ITextRange * range,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE InsertImage(
                        /* [in] */INT32 width,
                        /* [in] */INT32 height,
                        /* [in] */INT32 ascent,
                        /* [in] */ABI::Windows::UI::Text::VerticalCharacterAlignment verticalAlign,
                        /* [in] */__RPC__in HSTRING alternateText,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE InStory(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Text::ITextRange * range,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsEqual(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Text::ITextRange * range,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Move(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [in] */INT32 count,
                        /* [retval, out] */__RPC__out INT32 * delta
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE MoveEnd(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [in] */INT32 count,
                        /* [retval, out] */__RPC__out INT32 * delta
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE MoveStart(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [in] */INT32 count,
                        /* [retval, out] */__RPC__out INT32 * delta
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Paste(
                        /* [in] */INT32 format
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ScrollIntoView(
                        /* [in] */ABI::Windows::UI::Text::PointOptions value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE MatchSelection(void) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetIndex(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [in] */INT32 index,
                        /* [in] */boolean extend
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPoint(
                        /* [in] */ABI::Windows::Foundation::Point point,
                        /* [in] */ABI::Windows::UI::Text::PointOptions options,
                        /* [in] */boolean extend
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetRange(
                        /* [in] */INT32 startPosition,
                        /* [in] */INT32 endPosition
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetText(
                        /* [in] */ABI::Windows::UI::Text::TextSetOptions options,
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetTextViaStream(
                        /* [in] */ABI::Windows::UI::Text::TextSetOptions options,
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IRandomAccessStream * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE StartOf(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [in] */boolean extend,
                        /* [retval, out] */__RPC__out INT32 * delta
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITextRange=_uuidof(ITextRange);
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextRange;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextRange_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.ITextSelection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Text.ITextRange
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextSelection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextSelection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextSelection[] = L"Windows.UI.Text.ITextSelection";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Text {
                /* [object, uuid("A6D36724-F28F-430A-B2CF-C343671EC0E9"), contract] */
                MIDL_INTERFACE("A6D36724-F28F-430A-B2CF-C343671EC0E9")
                ITextSelection : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Options(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::SelectionOptions * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Options(
                        /* [in] */ABI::Windows::UI::Text::SelectionOptions value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Text::SelectionType * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE EndKey(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [in] */boolean extend,
                        /* [retval, out] */__RPC__out INT32 * delta
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE HomeKey(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [in] */boolean extend,
                        /* [retval, out] */__RPC__out INT32 * delta
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE MoveDown(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [in] */INT32 count,
                        /* [in] */boolean extend,
                        /* [retval, out] */__RPC__out INT32 * delta
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE MoveLeft(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [in] */INT32 count,
                        /* [in] */boolean extend,
                        /* [retval, out] */__RPC__out INT32 * delta
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE MoveRight(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [in] */INT32 count,
                        /* [in] */boolean extend,
                        /* [retval, out] */__RPC__out INT32 * delta
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE MoveUp(
                        /* [in] */ABI::Windows::UI::Text::TextRangeUnit unit,
                        /* [in] */INT32 count,
                        /* [in] */boolean extend,
                        /* [retval, out] */__RPC__out INT32 * delta
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TypeText(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ITextSelection=_uuidof(ITextSelection);
                
            } /* Windows */
        } /* UI */
    } /* Text */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextSelection;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextSelection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.FontWeights
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Text.IFontWeightsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.IFontWeights ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_FontWeights_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_FontWeights_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_FontWeights[] = L"Windows.UI.Text.FontWeights";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.RichEditTextDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.ITextDocument ** Default Interface **
 *    Windows.UI.Text.ITextDocument2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Text_RichEditTextDocument_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_RichEditTextDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_RichEditTextDocument[] = L"Windows.UI.Text.RichEditTextDocument";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Text.TextConstants
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Text.ITextConstantsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_Text_TextConstants_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_TextConstants_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_TextConstants[] = L"Windows.UI.Text.TextConstants";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CText_CIFontWeights_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CIFontWeights_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CIFontWeights __x_ABI_CWindows_CUI_CText_CIFontWeights;

#endif // ____x_ABI_CWindows_CUI_CText_CIFontWeights_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics;

#endif // ____x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextCharacterFormat_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextCharacterFormat_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CITextCharacterFormat __x_ABI_CWindows_CUI_CText_CITextCharacterFormat;

#endif // ____x_ABI_CWindows_CUI_CText_CITextCharacterFormat_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextConstantsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextConstantsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CITextConstantsStatics __x_ABI_CWindows_CUI_CText_CITextConstantsStatics;

#endif // ____x_ABI_CWindows_CUI_CText_CITextConstantsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextDocument_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CITextDocument __x_ABI_CWindows_CUI_CText_CITextDocument;

#endif // ____x_ABI_CWindows_CUI_CText_CITextDocument_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextDocument2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextDocument2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CITextDocument2 __x_ABI_CWindows_CUI_CText_CITextDocument2;

#endif // ____x_ABI_CWindows_CUI_CText_CITextDocument2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextParagraphFormat_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextParagraphFormat_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CITextParagraphFormat __x_ABI_CWindows_CUI_CText_CITextParagraphFormat;

#endif // ____x_ABI_CWindows_CUI_CText_CITextParagraphFormat_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextRange_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextRange_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CITextRange __x_ABI_CWindows_CUI_CText_CITextRange;

#endif // ____x_ABI_CWindows_CUI_CText_CITextRange_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CText_CITextSelection_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CText_CITextSelection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CText_CITextSelection __x_ABI_CWindows_CUI_CText_CITextSelection;

#endif // ____x_ABI_CWindows_CUI_CText_CITextSelection_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
enum __x_ABI_CWindows_CUI_CText_CUnderlineType;
#if !defined(____FIReference_1_Windows__CUI__CText__CUnderlineType_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CUI__CText__CUnderlineType_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CUI__CText__CUnderlineType __FIReference_1_Windows__CUI__CText__CUnderlineType;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CText__CUnderlineType;

typedef struct __FIReference_1_Windows__CUI__CText__CUnderlineTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CText__CUnderlineType * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CUI_CText_CUnderlineType *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CText__CUnderlineTypeVtbl;

interface __FIReference_1_Windows__CUI__CText__CUnderlineType
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CText__CUnderlineTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CUI__CText__CUnderlineType_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CUI__CText__CUnderlineType_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CUI__CText__CUnderlineType_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CUI__CText__CUnderlineType_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CUI__CText__CUnderlineType_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CUI__CText__CUnderlineType_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CUI__CText__CUnderlineType_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CUI__CText__CUnderlineType_INTERFACE_DEFINED__




typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream_FWD_DEFINED__






typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;




typedef enum __x_ABI_CWindows_CUI_CText_CCaretType __x_ABI_CWindows_CUI_CText_CCaretType;


typedef enum __x_ABI_CWindows_CUI_CText_CFindOptions __x_ABI_CWindows_CUI_CText_CFindOptions;


typedef enum __x_ABI_CWindows_CUI_CText_CFontStretch __x_ABI_CWindows_CUI_CText_CFontStretch;


typedef enum __x_ABI_CWindows_CUI_CText_CFontStyle __x_ABI_CWindows_CUI_CText_CFontStyle;


typedef enum __x_ABI_CWindows_CUI_CText_CFormatEffect __x_ABI_CWindows_CUI_CText_CFormatEffect;


typedef enum __x_ABI_CWindows_CUI_CText_CHorizontalCharacterAlignment __x_ABI_CWindows_CUI_CText_CHorizontalCharacterAlignment;


typedef enum __x_ABI_CWindows_CUI_CText_CLetterCase __x_ABI_CWindows_CUI_CText_CLetterCase;


typedef enum __x_ABI_CWindows_CUI_CText_CLineSpacingRule __x_ABI_CWindows_CUI_CText_CLineSpacingRule;


typedef enum __x_ABI_CWindows_CUI_CText_CLinkType __x_ABI_CWindows_CUI_CText_CLinkType;


typedef enum __x_ABI_CWindows_CUI_CText_CMarkerAlignment __x_ABI_CWindows_CUI_CText_CMarkerAlignment;


typedef enum __x_ABI_CWindows_CUI_CText_CMarkerStyle __x_ABI_CWindows_CUI_CText_CMarkerStyle;


typedef enum __x_ABI_CWindows_CUI_CText_CMarkerType __x_ABI_CWindows_CUI_CText_CMarkerType;


typedef enum __x_ABI_CWindows_CUI_CText_CParagraphAlignment __x_ABI_CWindows_CUI_CText_CParagraphAlignment;


typedef enum __x_ABI_CWindows_CUI_CText_CParagraphStyle __x_ABI_CWindows_CUI_CText_CParagraphStyle;


typedef enum __x_ABI_CWindows_CUI_CText_CPointOptions __x_ABI_CWindows_CUI_CText_CPointOptions;


typedef enum __x_ABI_CWindows_CUI_CText_CRangeGravity __x_ABI_CWindows_CUI_CText_CRangeGravity;


typedef enum __x_ABI_CWindows_CUI_CText_CSelectionOptions __x_ABI_CWindows_CUI_CText_CSelectionOptions;


typedef enum __x_ABI_CWindows_CUI_CText_CSelectionType __x_ABI_CWindows_CUI_CText_CSelectionType;


typedef enum __x_ABI_CWindows_CUI_CText_CTabAlignment __x_ABI_CWindows_CUI_CText_CTabAlignment;


typedef enum __x_ABI_CWindows_CUI_CText_CTabLeader __x_ABI_CWindows_CUI_CText_CTabLeader;


typedef enum __x_ABI_CWindows_CUI_CText_CTextDecorations __x_ABI_CWindows_CUI_CText_CTextDecorations;


typedef enum __x_ABI_CWindows_CUI_CText_CTextGetOptions __x_ABI_CWindows_CUI_CText_CTextGetOptions;


typedef enum __x_ABI_CWindows_CUI_CText_CTextRangeUnit __x_ABI_CWindows_CUI_CText_CTextRangeUnit;


typedef enum __x_ABI_CWindows_CUI_CText_CTextScript __x_ABI_CWindows_CUI_CText_CTextScript;


typedef enum __x_ABI_CWindows_CUI_CText_CTextSetOptions __x_ABI_CWindows_CUI_CText_CTextSetOptions;


typedef enum __x_ABI_CWindows_CUI_CText_CUnderlineType __x_ABI_CWindows_CUI_CText_CUnderlineType;


typedef enum __x_ABI_CWindows_CUI_CText_CVerticalCharacterAlignment __x_ABI_CWindows_CUI_CText_CVerticalCharacterAlignment;


typedef struct __x_ABI_CWindows_CUI_CText_CFontWeight __x_ABI_CWindows_CUI_CText_CFontWeight;





















/*
 *
 * Struct Windows.UI.Text.CaretType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CCaretType
{
    CaretType_Normal = 0,
    CaretType_Null = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.FindOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CText_CFindOptions
{
    FindOptions_None = 0,
    FindOptions_Word = 0x2,
    FindOptions_Case = 0x4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.FontStretch
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CFontStretch
{
    FontStretch_Undefined = 0,
    FontStretch_UltraCondensed = 1,
    FontStretch_ExtraCondensed = 2,
    FontStretch_Condensed = 3,
    FontStretch_SemiCondensed = 4,
    FontStretch_Normal = 5,
    FontStretch_SemiExpanded = 6,
    FontStretch_Expanded = 7,
    FontStretch_ExtraExpanded = 8,
    FontStretch_UltraExpanded = 9,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.FontStyle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CFontStyle
{
    FontStyle_Normal = 0,
    FontStyle_Oblique = 1,
    FontStyle_Italic = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.FormatEffect
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CFormatEffect
{
    FormatEffect_Off = 0,
    FormatEffect_On = 1,
    FormatEffect_Toggle = 2,
    FormatEffect_Undefined = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.HorizontalCharacterAlignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CHorizontalCharacterAlignment
{
    HorizontalCharacterAlignment_Left = 0,
    HorizontalCharacterAlignment_Right = 1,
    HorizontalCharacterAlignment_Center = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.LetterCase
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CLetterCase
{
    LetterCase_Lower = 0,
    LetterCase_Upper = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.LineSpacingRule
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CLineSpacingRule
{
    LineSpacingRule_Undefined = 0,
    LineSpacingRule_Single = 1,
    LineSpacingRule_OneAndHalf = 2,
    LineSpacingRule_Double = 3,
    LineSpacingRule_AtLeast = 4,
    LineSpacingRule_Exactly = 5,
    LineSpacingRule_Multiple = 6,
    LineSpacingRule_Percent = 7,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.LinkType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CLinkType
{
    LinkType_Undefined = 0,
    LinkType_NotALink = 1,
    LinkType_ClientLink = 2,
    LinkType_FriendlyLinkName = 3,
    LinkType_FriendlyLinkAddress = 4,
    LinkType_AutoLink = 5,
    LinkType_AutoLinkEmail = 6,
    LinkType_AutoLinkPhone = 7,
    LinkType_AutoLinkPath = 8,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.MarkerAlignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CMarkerAlignment
{
    MarkerAlignment_Undefined = 0,
    MarkerAlignment_Left = 1,
    MarkerAlignment_Center = 2,
    MarkerAlignment_Right = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.MarkerStyle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CMarkerStyle
{
    MarkerStyle_Undefined = 0,
    MarkerStyle_Parenthesis = 1,
    MarkerStyle_Parentheses = 2,
    MarkerStyle_Period = 3,
    MarkerStyle_Plain = 4,
    MarkerStyle_Minus = 5,
    MarkerStyle_NoNumber = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.MarkerType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CMarkerType
{
    MarkerType_Undefined = 0,
    MarkerType_None = 1,
    MarkerType_Bullet = 2,
    MarkerType_Arabic = 3,
    MarkerType_LowercaseEnglishLetter = 4,
    MarkerType_UppercaseEnglishLetter = 5,
    MarkerType_LowercaseRoman = 6,
    MarkerType_UppercaseRoman = 7,
    MarkerType_UnicodeSequence = 8,
    MarkerType_CircledNumber = 9,
    MarkerType_BlackCircleWingding = 10,
    MarkerType_WhiteCircleWingding = 11,
    MarkerType_ArabicWide = 12,
    MarkerType_SimplifiedChinese = 13,
    MarkerType_TraditionalChinese = 14,
    MarkerType_JapanSimplifiedChinese = 15,
    MarkerType_JapanKorea = 16,
    MarkerType_ArabicDictionary = 17,
    MarkerType_ArabicAbjad = 18,
    MarkerType_Hebrew = 19,
    MarkerType_ThaiAlphabetic = 20,
    MarkerType_ThaiNumeric = 21,
    MarkerType_DevanagariVowel = 22,
    MarkerType_DevanagariConsonant = 23,
    MarkerType_DevanagariNumeric = 24,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.ParagraphAlignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CParagraphAlignment
{
    ParagraphAlignment_Undefined = 0,
    ParagraphAlignment_Left = 1,
    ParagraphAlignment_Center = 2,
    ParagraphAlignment_Right = 3,
    ParagraphAlignment_Justify = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.ParagraphStyle
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CParagraphStyle
{
    ParagraphStyle_Undefined = 0,
    ParagraphStyle_None = 1,
    ParagraphStyle_Normal = 2,
    ParagraphStyle_Heading1 = 3,
    ParagraphStyle_Heading2 = 4,
    ParagraphStyle_Heading3 = 5,
    ParagraphStyle_Heading4 = 6,
    ParagraphStyle_Heading5 = 7,
    ParagraphStyle_Heading6 = 8,
    ParagraphStyle_Heading7 = 9,
    ParagraphStyle_Heading8 = 10,
    ParagraphStyle_Heading9 = 11,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.PointOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CText_CPointOptions
{
    PointOptions_None = 0,
    PointOptions_IncludeInset = 0x1,
    PointOptions_Start = 0x20,
    PointOptions_ClientCoordinates = 0x100,
    PointOptions_AllowOffClient = 0x200,
    PointOptions_Transform = 0x400,
    PointOptions_NoHorizontalScroll = 0x10000,
    PointOptions_NoVerticalScroll = 0x40000,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.RangeGravity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CRangeGravity
{
    RangeGravity_UIBehavior = 0,
    RangeGravity_Backward = 1,
    RangeGravity_Forward = 2,
    RangeGravity_Inward = 3,
    RangeGravity_Outward = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.SelectionOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CText_CSelectionOptions
{
    SelectionOptions_StartActive = 0x1,
    SelectionOptions_AtEndOfLine = 0x2,
    SelectionOptions_Overtype = 0x4,
    SelectionOptions_Active = 0x8,
    SelectionOptions_Replace = 0x10,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.SelectionType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CSelectionType
{
    SelectionType_None = 0,
    SelectionType_InsertionPoint = 1,
    SelectionType_Normal = 2,
    SelectionType_InlineShape = 7,
    SelectionType_Shape = 8,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.TabAlignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CTabAlignment
{
    TabAlignment_Left = 0,
    TabAlignment_Center = 1,
    TabAlignment_Right = 2,
    TabAlignment_Decimal = 3,
    TabAlignment_Bar = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.TabLeader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CTabLeader
{
    TabLeader_Spaces = 0,
    TabLeader_Dots = 1,
    TabLeader_Dashes = 2,
    TabLeader_Lines = 3,
    TabLeader_ThickLines = 4,
    TabLeader_Equals = 5,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.TextDecorations
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CText_CTextDecorations
{
    TextDecorations_None = 0,
    TextDecorations_Underline = 0x1,
    TextDecorations_Strikethrough = 0x2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.UI.Text.TextGetOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CText_CTextGetOptions
{
    TextGetOptions_None = 0,
    TextGetOptions_AdjustCrlf = 0x1,
    TextGetOptions_UseCrlf = 0x2,
    TextGetOptions_UseObjectText = 0x4,
    TextGetOptions_AllowFinalEop = 0x8,
    TextGetOptions_NoHidden = 0x20,
    TextGetOptions_IncludeNumbering = 0x40,
    TextGetOptions_FormatRtf = 0x2000,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
    TextGetOptions_UseLf = 0x1000000,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.TextRangeUnit
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CTextRangeUnit
{
    TextRangeUnit_Character = 0,
    TextRangeUnit_Word = 1,
    TextRangeUnit_Sentence = 2,
    TextRangeUnit_Paragraph = 3,
    TextRangeUnit_Line = 4,
    TextRangeUnit_Story = 5,
    TextRangeUnit_Screen = 6,
    TextRangeUnit_Section = 7,
    TextRangeUnit_Window = 8,
    TextRangeUnit_CharacterFormat = 9,
    TextRangeUnit_ParagraphFormat = 10,
    TextRangeUnit_Object = 11,
    TextRangeUnit_HardParagraph = 12,
    TextRangeUnit_Cluster = 13,
    TextRangeUnit_Bold = 14,
    TextRangeUnit_Italic = 15,
    TextRangeUnit_Underline = 16,
    TextRangeUnit_Strikethrough = 17,
    TextRangeUnit_ProtectedText = 18,
    TextRangeUnit_Link = 19,
    TextRangeUnit_SmallCaps = 20,
    TextRangeUnit_AllCaps = 21,
    TextRangeUnit_Hidden = 22,
    TextRangeUnit_Outline = 23,
    TextRangeUnit_Shadow = 24,
    TextRangeUnit_Imprint = 25,
    TextRangeUnit_Disabled = 26,
    TextRangeUnit_Revised = 27,
    TextRangeUnit_Subscript = 28,
    TextRangeUnit_Superscript = 29,
    TextRangeUnit_FontBound = 30,
    TextRangeUnit_LinkProtected = 31,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.TextScript
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CTextScript
{
    TextScript_Undefined = 0,
    TextScript_Ansi = 1,
    TextScript_EastEurope = 2,
    TextScript_Cyrillic = 3,
    TextScript_Greek = 4,
    TextScript_Turkish = 5,
    TextScript_Hebrew = 6,
    TextScript_Arabic = 7,
    TextScript_Baltic = 8,
    TextScript_Vietnamese = 9,
    TextScript_Default = 10,
    TextScript_Symbol = 11,
    TextScript_Thai = 12,
    TextScript_ShiftJis = 13,
    TextScript_GB2312 = 14,
    TextScript_Hangul = 15,
    TextScript_Big5 = 16,
    TextScript_PC437 = 17,
    TextScript_Oem = 18,
    TextScript_Mac = 19,
    TextScript_Armenian = 20,
    TextScript_Syriac = 21,
    TextScript_Thaana = 22,
    TextScript_Devanagari = 23,
    TextScript_Bengali = 24,
    TextScript_Gurmukhi = 25,
    TextScript_Gujarati = 26,
    TextScript_Oriya = 27,
    TextScript_Tamil = 28,
    TextScript_Telugu = 29,
    TextScript_Kannada = 30,
    TextScript_Malayalam = 31,
    TextScript_Sinhala = 32,
    TextScript_Lao = 33,
    TextScript_Tibetan = 34,
    TextScript_Myanmar = 35,
    TextScript_Georgian = 36,
    TextScript_Jamo = 37,
    TextScript_Ethiopic = 38,
    TextScript_Cherokee = 39,
    TextScript_Aboriginal = 40,
    TextScript_Ogham = 41,
    TextScript_Runic = 42,
    TextScript_Khmer = 43,
    TextScript_Mongolian = 44,
    TextScript_Braille = 45,
    TextScript_Yi = 46,
    TextScript_Limbu = 47,
    TextScript_TaiLe = 48,
    TextScript_NewTaiLue = 49,
    TextScript_SylotiNagri = 50,
    TextScript_Kharoshthi = 51,
    TextScript_Kayahli = 52,
    TextScript_UnicodeSymbol = 53,
    TextScript_Emoji = 54,
    TextScript_Glagolitic = 55,
    TextScript_Lisu = 56,
    TextScript_Vai = 57,
    TextScript_NKo = 58,
    TextScript_Osmanya = 59,
    TextScript_PhagsPa = 60,
    TextScript_Gothic = 61,
    TextScript_Deseret = 62,
    TextScript_Tifinagh = 63,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.TextSetOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CText_CTextSetOptions
{
    TextSetOptions_None = 0,
    TextSetOptions_UnicodeBidi = 0x1,
    TextSetOptions_Unlink = 0x8,
    TextSetOptions_Unhide = 0x10,
    TextSetOptions_CheckTextLimit = 0x20,
    TextSetOptions_FormatRtf = 0x2000,
    TextSetOptions_ApplyRtfDocumentDefaults = 0x4000,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.UnderlineType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CUnderlineType
{
    UnderlineType_Undefined = 0,
    UnderlineType_None = 1,
    UnderlineType_Single = 2,
    UnderlineType_Words = 3,
    UnderlineType_Double = 4,
    UnderlineType_Dotted = 5,
    UnderlineType_Dash = 6,
    UnderlineType_DashDot = 7,
    UnderlineType_DashDotDot = 8,
    UnderlineType_Wave = 9,
    UnderlineType_Thick = 10,
    UnderlineType_Thin = 11,
    UnderlineType_DoubleWave = 12,
    UnderlineType_HeavyWave = 13,
    UnderlineType_LongDash = 14,
    UnderlineType_ThickDash = 15,
    UnderlineType_ThickDashDot = 16,
    UnderlineType_ThickDashDotDot = 17,
    UnderlineType_ThickDotted = 18,
    UnderlineType_ThickLongDash = 19,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.VerticalCharacterAlignment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CText_CVerticalCharacterAlignment
{
    VerticalCharacterAlignment_Top = 0,
    VerticalCharacterAlignment_Baseline = 1,
    VerticalCharacterAlignment_Bottom = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Text.FontWeight
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CUI_CText_CFontWeight
{
    UINT16 Weight;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.IFontWeights
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.FontWeights
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CIFontWeights_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CIFontWeights_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_IFontWeights[] = L"Windows.UI.Text.IFontWeights";
/* [object, uuid("7880A444-01AB-4997-8517-DF822A0C45F1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CIFontWeightsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeights * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeights * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeights * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeights * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeights * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeights * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CIFontWeightsVtbl;

interface __x_ABI_CWindows_CUI_CText_CIFontWeights
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CIFontWeightsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CIFontWeights_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeights_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeights_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeights_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeights_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeights_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CIFontWeights;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CIFontWeights_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.IFontWeightsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.FontWeights
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_IFontWeightsStatics[] = L"Windows.UI.Text.IFontWeightsStatics";
/* [object, uuid("B3B579D5-1BA9-48EB-9DAD-C095E8C23BA3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CIFontWeightsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Black )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bold )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtraBlack )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtraBold )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtraLight )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Light )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Medium )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Normal )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SemiBold )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SemiLight )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Thin )(
        __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontWeight * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CIFontWeightsStaticsVtbl;

interface __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CIFontWeightsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_get_Black(This,value) \
    ( (This)->lpVtbl->get_Black(This,value) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_get_Bold(This,value) \
    ( (This)->lpVtbl->get_Bold(This,value) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_get_ExtraBlack(This,value) \
    ( (This)->lpVtbl->get_ExtraBlack(This,value) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_get_ExtraBold(This,value) \
    ( (This)->lpVtbl->get_ExtraBold(This,value) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_get_ExtraLight(This,value) \
    ( (This)->lpVtbl->get_ExtraLight(This,value) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_get_Light(This,value) \
    ( (This)->lpVtbl->get_Light(This,value) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_get_Medium(This,value) \
    ( (This)->lpVtbl->get_Medium(This,value) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_get_Normal(This,value) \
    ( (This)->lpVtbl->get_Normal(This,value) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_get_SemiBold(This,value) \
    ( (This)->lpVtbl->get_SemiBold(This,value) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_get_SemiLight(This,value) \
    ( (This)->lpVtbl->get_SemiLight(This,value) )

#define __x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_get_Thin(This,value) \
    ( (This)->lpVtbl->get_Thin(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CIFontWeightsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CIFontWeightsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.ITextCharacterFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextCharacterFormat_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextCharacterFormat_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextCharacterFormat[] = L"Windows.UI.Text.ITextCharacterFormat";
/* [object, uuid("5ADEF3DB-05FB-442D-8065-642AFEA02CED"), contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CITextCharacterFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllCaps )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AllCaps )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bold )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Bold )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontStretch )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontStretch * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FontStretch )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFontStretch value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FontStyle )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontStyle * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FontStyle )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFontStyle value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ForegroundColor )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Hidden )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Hidden )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Italic )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Italic )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Kerning )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Kerning )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LanguageTag )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LanguageTag )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LinkType )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CLinkType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Outline )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Outline )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProtectedText )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProtectedText )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Size )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SmallCaps )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SmallCaps )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Spacing )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Spacing )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Strikethrough )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Strikethrough )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subscript )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Subscript )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Superscript )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Superscript )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextScript )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CTextScript * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TextScript )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextScript value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Underline )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CUnderlineType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Underline )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CUnderlineType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Weight )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Weight )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */INT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *SetClone )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetClone )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsEqual )(
        __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * format,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CITextCharacterFormatVtbl;

interface __x_ABI_CWindows_CUI_CText_CITextCharacterFormat
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextCharacterFormatVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_AllCaps(This,value) \
    ( (This)->lpVtbl->get_AllCaps(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_AllCaps(This,value) \
    ( (This)->lpVtbl->put_AllCaps(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_BackgroundColor(This,value) \
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_BackgroundColor(This,value) \
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Bold(This,value) \
    ( (This)->lpVtbl->get_Bold(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Bold(This,value) \
    ( (This)->lpVtbl->put_Bold(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_FontStretch(This,value) \
    ( (This)->lpVtbl->get_FontStretch(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_FontStretch(This,value) \
    ( (This)->lpVtbl->put_FontStretch(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_FontStyle(This,value) \
    ( (This)->lpVtbl->get_FontStyle(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_FontStyle(This,value) \
    ( (This)->lpVtbl->put_FontStyle(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_ForegroundColor(This,value) \
    ( (This)->lpVtbl->get_ForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_ForegroundColor(This,value) \
    ( (This)->lpVtbl->put_ForegroundColor(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Hidden(This,value) \
    ( (This)->lpVtbl->get_Hidden(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Hidden(This,value) \
    ( (This)->lpVtbl->put_Hidden(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Italic(This,value) \
    ( (This)->lpVtbl->get_Italic(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Italic(This,value) \
    ( (This)->lpVtbl->put_Italic(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Kerning(This,value) \
    ( (This)->lpVtbl->get_Kerning(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Kerning(This,value) \
    ( (This)->lpVtbl->put_Kerning(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_LanguageTag(This,value) \
    ( (This)->lpVtbl->get_LanguageTag(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_LanguageTag(This,value) \
    ( (This)->lpVtbl->put_LanguageTag(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_LinkType(This,value) \
    ( (This)->lpVtbl->get_LinkType(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Name(This,value) \
    ( (This)->lpVtbl->put_Name(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Outline(This,value) \
    ( (This)->lpVtbl->get_Outline(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Outline(This,value) \
    ( (This)->lpVtbl->put_Outline(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Position(This,value) \
    ( (This)->lpVtbl->put_Position(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_ProtectedText(This,value) \
    ( (This)->lpVtbl->get_ProtectedText(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_ProtectedText(This,value) \
    ( (This)->lpVtbl->put_ProtectedText(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Size(This,value) \
    ( (This)->lpVtbl->get_Size(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Size(This,value) \
    ( (This)->lpVtbl->put_Size(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_SmallCaps(This,value) \
    ( (This)->lpVtbl->get_SmallCaps(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_SmallCaps(This,value) \
    ( (This)->lpVtbl->put_SmallCaps(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Spacing(This,value) \
    ( (This)->lpVtbl->get_Spacing(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Spacing(This,value) \
    ( (This)->lpVtbl->put_Spacing(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Strikethrough(This,value) \
    ( (This)->lpVtbl->get_Strikethrough(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Strikethrough(This,value) \
    ( (This)->lpVtbl->put_Strikethrough(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Subscript(This,value) \
    ( (This)->lpVtbl->get_Subscript(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Subscript(This,value) \
    ( (This)->lpVtbl->put_Subscript(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Superscript(This,value) \
    ( (This)->lpVtbl->get_Superscript(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Superscript(This,value) \
    ( (This)->lpVtbl->put_Superscript(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_TextScript(This,value) \
    ( (This)->lpVtbl->get_TextScript(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_TextScript(This,value) \
    ( (This)->lpVtbl->put_TextScript(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Underline(This,value) \
    ( (This)->lpVtbl->get_Underline(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Underline(This,value) \
    ( (This)->lpVtbl->put_Underline(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_get_Weight(This,value) \
    ( (This)->lpVtbl->get_Weight(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_put_Weight(This,value) \
    ( (This)->lpVtbl->put_Weight(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_SetClone(This,value) \
    ( (This)->lpVtbl->SetClone(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_GetClone(This,value) \
    ( (This)->lpVtbl->GetClone(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextCharacterFormat_IsEqual(This,format,value) \
    ( (This)->lpVtbl->IsEqual(This,format,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextCharacterFormat;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextCharacterFormat_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.ITextConstantsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.TextConstants
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextConstantsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextConstantsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextConstantsStatics[] = L"Windows.UI.Text.ITextConstantsStatics";
/* [object, uuid("779E7C33-189D-4BFA-97C8-10DB135D976E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CITextConstantsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AutoColor )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinUnitCount )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxUnitCount )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UndefinedColor )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UndefinedFloatValue )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UndefinedInt32Value )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UndefinedFontStretch )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontStretch * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UndefinedFontStyle )(
        __x_ABI_CWindows_CUI_CText_CITextConstantsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFontStyle * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CITextConstantsStaticsVtbl;

interface __x_ABI_CWindows_CUI_CText_CITextConstantsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextConstantsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_get_AutoColor(This,value) \
    ( (This)->lpVtbl->get_AutoColor(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_get_MinUnitCount(This,value) \
    ( (This)->lpVtbl->get_MinUnitCount(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_get_MaxUnitCount(This,value) \
    ( (This)->lpVtbl->get_MaxUnitCount(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_get_UndefinedColor(This,value) \
    ( (This)->lpVtbl->get_UndefinedColor(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_get_UndefinedFloatValue(This,value) \
    ( (This)->lpVtbl->get_UndefinedFloatValue(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_get_UndefinedInt32Value(This,value) \
    ( (This)->lpVtbl->get_UndefinedInt32Value(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_get_UndefinedFontStretch(This,value) \
    ( (This)->lpVtbl->get_UndefinedFontStretch(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextConstantsStatics_get_UndefinedFontStyle(This,value) \
    ( (This)->lpVtbl->get_UndefinedFontStyle(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextConstantsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextConstantsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.ITextDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextDocument[] = L"Windows.UI.Text.ITextDocument";
/* [object, uuid("BEEE4DDB-90B2-408C-A2F6-0A0AC31E33E4"), contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CITextDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CaretType )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CCaretType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CaretType )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CCaretType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultTabStop )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DefaultTabStop )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Selection )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextSelection * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UndoLimit )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UndoLimit )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [in] */UINT32 value
        );
    HRESULT ( STDMETHODCALLTYPE *CanCopy )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *CanPaste )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *CanRedo )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *CanUndo )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ApplyDisplayUpdates )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [retval, out] */__RPC__out INT32 * count
        );
    HRESULT ( STDMETHODCALLTYPE *BatchDisplayUpdates )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [retval, out] */__RPC__out INT32 * count
        );
    HRESULT ( STDMETHODCALLTYPE *BeginUndoGroup )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This
        );
    HRESULT ( STDMETHODCALLTYPE *EndUndoGroup )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultCharacterFormat )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDefaultParagraphFormat )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRange )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [in] */INT32 startPosition,
        /* [in] */INT32 endPosition,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextRange * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRangeFromPoint )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint point,
        /* [in] */__x_ABI_CWindows_CUI_CText_CPointOptions options,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextRange * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetText )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextGetOptions options,
        /* [out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *LoadFromStream )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextSetOptions options,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
    HRESULT ( STDMETHODCALLTYPE *Redo )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This
        );
    HRESULT ( STDMETHODCALLTYPE *SaveToStream )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextGetOptions options,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDefaultCharacterFormat )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDefaultParagraphFormat )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetText )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextSetOptions options,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *Undo )(
        __x_ABI_CWindows_CUI_CText_CITextDocument * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CITextDocumentVtbl;

interface __x_ABI_CWindows_CUI_CText_CITextDocument
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextDocumentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CITextDocument_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_get_CaretType(This,value) \
    ( (This)->lpVtbl->get_CaretType(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_put_CaretType(This,value) \
    ( (This)->lpVtbl->put_CaretType(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_get_DefaultTabStop(This,value) \
    ( (This)->lpVtbl->get_DefaultTabStop(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_put_DefaultTabStop(This,value) \
    ( (This)->lpVtbl->put_DefaultTabStop(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_get_Selection(This,value) \
    ( (This)->lpVtbl->get_Selection(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_get_UndoLimit(This,value) \
    ( (This)->lpVtbl->get_UndoLimit(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_put_UndoLimit(This,value) \
    ( (This)->lpVtbl->put_UndoLimit(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_CanCopy(This,value) \
    ( (This)->lpVtbl->CanCopy(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_CanPaste(This,value) \
    ( (This)->lpVtbl->CanPaste(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_CanRedo(This,value) \
    ( (This)->lpVtbl->CanRedo(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_CanUndo(This,value) \
    ( (This)->lpVtbl->CanUndo(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_ApplyDisplayUpdates(This,count) \
    ( (This)->lpVtbl->ApplyDisplayUpdates(This,count) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_BatchDisplayUpdates(This,count) \
    ( (This)->lpVtbl->BatchDisplayUpdates(This,count) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_BeginUndoGroup(This) \
    ( (This)->lpVtbl->BeginUndoGroup(This) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_EndUndoGroup(This) \
    ( (This)->lpVtbl->EndUndoGroup(This) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_GetDefaultCharacterFormat(This,value) \
    ( (This)->lpVtbl->GetDefaultCharacterFormat(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_GetDefaultParagraphFormat(This,value) \
    ( (This)->lpVtbl->GetDefaultParagraphFormat(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_GetRange(This,startPosition,endPosition,value) \
    ( (This)->lpVtbl->GetRange(This,startPosition,endPosition,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_GetRangeFromPoint(This,point,options,value) \
    ( (This)->lpVtbl->GetRangeFromPoint(This,point,options,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_GetText(This,options,value) \
    ( (This)->lpVtbl->GetText(This,options,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_LoadFromStream(This,options,value) \
    ( (This)->lpVtbl->LoadFromStream(This,options,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_Redo(This) \
    ( (This)->lpVtbl->Redo(This) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_SaveToStream(This,options,value) \
    ( (This)->lpVtbl->SaveToStream(This,options,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_SetDefaultCharacterFormat(This,value) \
    ( (This)->lpVtbl->SetDefaultCharacterFormat(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_SetDefaultParagraphFormat(This,value) \
    ( (This)->lpVtbl->SetDefaultParagraphFormat(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_SetText(This,options,value) \
    ( (This)->lpVtbl->SetText(This,options,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument_Undo(This) \
    ( (This)->lpVtbl->Undo(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextDocument;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextDocument_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.ITextDocument2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Text.RichEditTextDocument
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Text.ITextDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextDocument2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextDocument2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextDocument2[] = L"Windows.UI.Text.ITextDocument2";
/* [object, uuid("F2311112-8C89-49C9-9118-F057CBB814EE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CITextDocument2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlignmentIncludesTrailingWhitespace )(
        __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AlignmentIncludesTrailingWhitespace )(
        __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IgnoreTrailingCharacterSpacing )(
        __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IgnoreTrailingCharacterSpacing )(
        __x_ABI_CWindows_CUI_CText_CITextDocument2 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CITextDocument2Vtbl;

interface __x_ABI_CWindows_CUI_CText_CITextDocument2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextDocument2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CITextDocument2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument2_get_AlignmentIncludesTrailingWhitespace(This,value) \
    ( (This)->lpVtbl->get_AlignmentIncludesTrailingWhitespace(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument2_put_AlignmentIncludesTrailingWhitespace(This,value) \
    ( (This)->lpVtbl->put_AlignmentIncludesTrailingWhitespace(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument2_get_IgnoreTrailingCharacterSpacing(This,value) \
    ( (This)->lpVtbl->get_IgnoreTrailingCharacterSpacing(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextDocument2_put_IgnoreTrailingCharacterSpacing(This,value) \
    ( (This)->lpVtbl->put_IgnoreTrailingCharacterSpacing(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextDocument2;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextDocument2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.Text.ITextParagraphFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextParagraphFormat_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextParagraphFormat_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextParagraphFormat[] = L"Windows.UI.Text.ITextParagraphFormat";
/* [object, uuid("2CF8CFA6-4676-498A-93F5-BBDBFC0BD883"), contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CITextParagraphFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Alignment )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CParagraphAlignment * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Alignment )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CParagraphAlignment value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FirstLineIndent )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeepTogether )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeepTogether )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeepWithNext )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeepWithNext )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LeftIndent )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LineSpacing )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LineSpacingRule )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CLineSpacingRule * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ListAlignment )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CMarkerAlignment * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ListAlignment )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CMarkerAlignment value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ListLevelIndex )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ListLevelIndex )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ListStart )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ListStart )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ListStyle )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CMarkerStyle * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ListStyle )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CMarkerStyle value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ListTab )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ListTab )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ListType )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CMarkerType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ListType )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CMarkerType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NoLineNumber )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NoLineNumber )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PageBreakBefore )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PageBreakBefore )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RightIndent )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RightIndent )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RightToLeft )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RightToLeft )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Style )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CParagraphStyle * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Style )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CParagraphStyle value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpaceAfter )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpaceAfter )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpaceBefore )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out FLOAT * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpaceBefore )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */FLOAT value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WidowControl )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CFormatEffect * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_WidowControl )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFormatEffect value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TabCount )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddTab )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */FLOAT position,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTabAlignment align,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTabLeader leader
        );
    HRESULT ( STDMETHODCALLTYPE *ClearAllTabs )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteTab )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */FLOAT position
        );
    HRESULT ( STDMETHODCALLTYPE *GetClone )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTab )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */INT32 index,
        /* [out] */__RPC__out FLOAT * position,
        /* [out] */__RPC__out __x_ABI_CWindows_CUI_CText_CTabAlignment * align,
        /* [out] */__RPC__out __x_ABI_CWindows_CUI_CText_CTabLeader * leader
        );
    HRESULT ( STDMETHODCALLTYPE *IsEqual )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * format,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetClone )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * format
        );
    HRESULT ( STDMETHODCALLTYPE *SetIndents )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */FLOAT start,
        /* [in] */FLOAT left,
        /* [in] */FLOAT right
        );
    HRESULT ( STDMETHODCALLTYPE *SetLineSpacing )(
        __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CLineSpacingRule rule,
        /* [in] */FLOAT spacing
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CITextParagraphFormatVtbl;

interface __x_ABI_CWindows_CUI_CText_CITextParagraphFormat
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextParagraphFormatVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_Alignment(This,value) \
    ( (This)->lpVtbl->get_Alignment(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_Alignment(This,value) \
    ( (This)->lpVtbl->put_Alignment(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_FirstLineIndent(This,value) \
    ( (This)->lpVtbl->get_FirstLineIndent(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_KeepTogether(This,value) \
    ( (This)->lpVtbl->get_KeepTogether(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_KeepTogether(This,value) \
    ( (This)->lpVtbl->put_KeepTogether(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_KeepWithNext(This,value) \
    ( (This)->lpVtbl->get_KeepWithNext(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_KeepWithNext(This,value) \
    ( (This)->lpVtbl->put_KeepWithNext(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_LeftIndent(This,value) \
    ( (This)->lpVtbl->get_LeftIndent(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_LineSpacing(This,value) \
    ( (This)->lpVtbl->get_LineSpacing(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_LineSpacingRule(This,value) \
    ( (This)->lpVtbl->get_LineSpacingRule(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_ListAlignment(This,value) \
    ( (This)->lpVtbl->get_ListAlignment(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_ListAlignment(This,value) \
    ( (This)->lpVtbl->put_ListAlignment(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_ListLevelIndex(This,value) \
    ( (This)->lpVtbl->get_ListLevelIndex(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_ListLevelIndex(This,value) \
    ( (This)->lpVtbl->put_ListLevelIndex(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_ListStart(This,value) \
    ( (This)->lpVtbl->get_ListStart(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_ListStart(This,value) \
    ( (This)->lpVtbl->put_ListStart(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_ListStyle(This,value) \
    ( (This)->lpVtbl->get_ListStyle(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_ListStyle(This,value) \
    ( (This)->lpVtbl->put_ListStyle(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_ListTab(This,value) \
    ( (This)->lpVtbl->get_ListTab(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_ListTab(This,value) \
    ( (This)->lpVtbl->put_ListTab(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_ListType(This,value) \
    ( (This)->lpVtbl->get_ListType(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_ListType(This,value) \
    ( (This)->lpVtbl->put_ListType(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_NoLineNumber(This,value) \
    ( (This)->lpVtbl->get_NoLineNumber(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_NoLineNumber(This,value) \
    ( (This)->lpVtbl->put_NoLineNumber(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_PageBreakBefore(This,value) \
    ( (This)->lpVtbl->get_PageBreakBefore(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_PageBreakBefore(This,value) \
    ( (This)->lpVtbl->put_PageBreakBefore(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_RightIndent(This,value) \
    ( (This)->lpVtbl->get_RightIndent(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_RightIndent(This,value) \
    ( (This)->lpVtbl->put_RightIndent(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_RightToLeft(This,value) \
    ( (This)->lpVtbl->get_RightToLeft(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_RightToLeft(This,value) \
    ( (This)->lpVtbl->put_RightToLeft(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_Style(This,value) \
    ( (This)->lpVtbl->get_Style(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_Style(This,value) \
    ( (This)->lpVtbl->put_Style(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_SpaceAfter(This,value) \
    ( (This)->lpVtbl->get_SpaceAfter(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_SpaceAfter(This,value) \
    ( (This)->lpVtbl->put_SpaceAfter(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_SpaceBefore(This,value) \
    ( (This)->lpVtbl->get_SpaceBefore(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_SpaceBefore(This,value) \
    ( (This)->lpVtbl->put_SpaceBefore(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_WidowControl(This,value) \
    ( (This)->lpVtbl->get_WidowControl(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_put_WidowControl(This,value) \
    ( (This)->lpVtbl->put_WidowControl(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_get_TabCount(This,value) \
    ( (This)->lpVtbl->get_TabCount(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_AddTab(This,position,align,leader) \
    ( (This)->lpVtbl->AddTab(This,position,align,leader) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_ClearAllTabs(This) \
    ( (This)->lpVtbl->ClearAllTabs(This) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_DeleteTab(This,position) \
    ( (This)->lpVtbl->DeleteTab(This,position) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_GetClone(This,value) \
    ( (This)->lpVtbl->GetClone(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_GetTab(This,index,position,align,leader) \
    ( (This)->lpVtbl->GetTab(This,index,position,align,leader) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_IsEqual(This,format,value) \
    ( (This)->lpVtbl->IsEqual(This,format,value) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_SetClone(This,format) \
    ( (This)->lpVtbl->SetClone(This,format) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_SetIndents(This,start,left,right) \
    ( (This)->lpVtbl->SetIndents(This,start,left,right) )

#define __x_ABI_CWindows_CUI_CText_CITextParagraphFormat_SetLineSpacing(This,rule,spacing) \
    ( (This)->lpVtbl->SetLineSpacing(This,rule,spacing) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextParagraphFormat;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextParagraphFormat_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.ITextRange
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextRange_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextRange_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextRange[] = L"Windows.UI.Text.ITextRange";
/* [object, uuid("5B9E4E57-C072-42A0-8945-AF503EE54768"), contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CITextRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextRange * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextRange * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextRange * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextRange * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextRange * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextRange * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Character )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [retval, out] */__RPC__out WCHAR * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Character )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */WCHAR value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CharacterFormat )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CharacterFormat )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextCharacterFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FormattedText )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextRange * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FormattedText )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextRange * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EndPosition )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_EndPosition )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gravity )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CRangeGravity * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Gravity )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CRangeGravity value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [retval, out] */__RPC__out INT32 * length
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Link )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Link )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ParagraphFormat )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ParagraphFormat )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextParagraphFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StartPosition )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StartPosition )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StoryLength )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *CanPaste )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */INT32 format,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ChangeCase )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CLetterCase value
        );
    HRESULT ( STDMETHODCALLTYPE *Collapse )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *Copy )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This
        );
    HRESULT ( STDMETHODCALLTYPE *Cut )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This
        );
    HRESULT ( STDMETHODCALLTYPE *Delete )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [in] */INT32 count,
        /* [retval, out] */__RPC__out INT32 * delta
        );
    HRESULT ( STDMETHODCALLTYPE *EndOf )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [in] */boolean extend,
        /* [retval, out] */__RPC__out INT32 * delta
        );
    HRESULT ( STDMETHODCALLTYPE *Expand )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [retval, out] */__RPC__out INT32 * delta
        );
    HRESULT ( STDMETHODCALLTYPE *FindText )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__RPC__in HSTRING value,
        /* [in] */INT32 scanLength,
        /* [in] */__x_ABI_CWindows_CUI_CText_CFindOptions options,
        /* [retval, out] */__RPC__out INT32 * length
        );
    HRESULT ( STDMETHODCALLTYPE *GetCharacterUtf32 )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [out] */__RPC__out UINT32 * value,
        /* [in] */INT32 offset
        );
    HRESULT ( STDMETHODCALLTYPE *GetClone )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CText_CITextRange * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIndex )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [retval, out] */__RPC__out INT32 * index
        );
    HRESULT ( STDMETHODCALLTYPE *GetPoint )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CHorizontalCharacterAlignment horizontalAlign,
        /* [in] */__x_ABI_CWindows_CUI_CText_CVerticalCharacterAlignment verticalAlign,
        /* [in] */__x_ABI_CWindows_CUI_CText_CPointOptions options,
        /* [out] */__RPC__out __x_ABI_CWindows_CFoundation_CPoint * point
        );
    HRESULT ( STDMETHODCALLTYPE *GetRect )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CPointOptions options,
        /* [out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * rect,
        /* [out] */__RPC__out INT32 * hit
        );
    HRESULT ( STDMETHODCALLTYPE *GetText )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextGetOptions options,
        /* [out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTextViaStream )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextGetOptions options,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
    HRESULT ( STDMETHODCALLTYPE *InRange )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextRange * range,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertImage )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */INT32 width,
        /* [in] */INT32 height,
        /* [in] */INT32 ascent,
        /* [in] */__x_ABI_CWindows_CUI_CText_CVerticalCharacterAlignment verticalAlign,
        /* [in] */__RPC__in HSTRING alternateText,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
    HRESULT ( STDMETHODCALLTYPE *InStory )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextRange * range,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsEqual )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CText_CITextRange * range,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Move )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [in] */INT32 count,
        /* [retval, out] */__RPC__out INT32 * delta
        );
    HRESULT ( STDMETHODCALLTYPE *MoveEnd )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [in] */INT32 count,
        /* [retval, out] */__RPC__out INT32 * delta
        );
    HRESULT ( STDMETHODCALLTYPE *MoveStart )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [in] */INT32 count,
        /* [retval, out] */__RPC__out INT32 * delta
        );
    HRESULT ( STDMETHODCALLTYPE *Paste )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */INT32 format
        );
    HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CPointOptions value
        );
    HRESULT ( STDMETHODCALLTYPE *MatchSelection )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetIndex )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [in] */INT32 index,
        /* [in] */boolean extend
        );
    HRESULT ( STDMETHODCALLTYPE *SetPoint )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint point,
        /* [in] */__x_ABI_CWindows_CUI_CText_CPointOptions options,
        /* [in] */boolean extend
        );
    HRESULT ( STDMETHODCALLTYPE *SetRange )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */INT32 startPosition,
        /* [in] */INT32 endPosition
        );
    HRESULT ( STDMETHODCALLTYPE *SetText )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextSetOptions options,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *SetTextViaStream )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextSetOptions options,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartOf )(
        __x_ABI_CWindows_CUI_CText_CITextRange * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [in] */boolean extend,
        /* [retval, out] */__RPC__out INT32 * delta
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CITextRangeVtbl;

interface __x_ABI_CWindows_CUI_CText_CITextRange
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextRangeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CITextRange_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_get_Character(This,value) \
    ( (This)->lpVtbl->get_Character(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_put_Character(This,value) \
    ( (This)->lpVtbl->put_Character(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_get_CharacterFormat(This,value) \
    ( (This)->lpVtbl->get_CharacterFormat(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_put_CharacterFormat(This,value) \
    ( (This)->lpVtbl->put_CharacterFormat(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_get_FormattedText(This,value) \
    ( (This)->lpVtbl->get_FormattedText(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_put_FormattedText(This,value) \
    ( (This)->lpVtbl->put_FormattedText(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_get_EndPosition(This,value) \
    ( (This)->lpVtbl->get_EndPosition(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_put_EndPosition(This,value) \
    ( (This)->lpVtbl->put_EndPosition(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_get_Gravity(This,value) \
    ( (This)->lpVtbl->get_Gravity(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_put_Gravity(This,value) \
    ( (This)->lpVtbl->put_Gravity(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_get_Length(This,length) \
    ( (This)->lpVtbl->get_Length(This,length) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_get_Link(This,value) \
    ( (This)->lpVtbl->get_Link(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_put_Link(This,value) \
    ( (This)->lpVtbl->put_Link(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_get_ParagraphFormat(This,value) \
    ( (This)->lpVtbl->get_ParagraphFormat(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_put_ParagraphFormat(This,value) \
    ( (This)->lpVtbl->put_ParagraphFormat(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_get_StartPosition(This,value) \
    ( (This)->lpVtbl->get_StartPosition(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_put_StartPosition(This,value) \
    ( (This)->lpVtbl->put_StartPosition(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_get_StoryLength(This,value) \
    ( (This)->lpVtbl->get_StoryLength(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_get_Text(This,value) \
    ( (This)->lpVtbl->get_Text(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_put_Text(This,value) \
    ( (This)->lpVtbl->put_Text(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_CanPaste(This,format,value) \
    ( (This)->lpVtbl->CanPaste(This,format,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_ChangeCase(This,value) \
    ( (This)->lpVtbl->ChangeCase(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_Collapse(This,value) \
    ( (This)->lpVtbl->Collapse(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_Copy(This) \
    ( (This)->lpVtbl->Copy(This) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_Cut(This) \
    ( (This)->lpVtbl->Cut(This) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_Delete(This,unit,count,delta) \
    ( (This)->lpVtbl->Delete(This,unit,count,delta) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_EndOf(This,unit,extend,delta) \
    ( (This)->lpVtbl->EndOf(This,unit,extend,delta) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_Expand(This,unit,delta) \
    ( (This)->lpVtbl->Expand(This,unit,delta) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_FindText(This,value,scanLength,options,length) \
    ( (This)->lpVtbl->FindText(This,value,scanLength,options,length) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_GetCharacterUtf32(This,value,offset) \
    ( (This)->lpVtbl->GetCharacterUtf32(This,value,offset) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_GetClone(This,value) \
    ( (This)->lpVtbl->GetClone(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_GetIndex(This,unit,index) \
    ( (This)->lpVtbl->GetIndex(This,unit,index) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_GetPoint(This,horizontalAlign,verticalAlign,options,point) \
    ( (This)->lpVtbl->GetPoint(This,horizontalAlign,verticalAlign,options,point) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_GetRect(This,options,rect,hit) \
    ( (This)->lpVtbl->GetRect(This,options,rect,hit) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_GetText(This,options,value) \
    ( (This)->lpVtbl->GetText(This,options,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_GetTextViaStream(This,options,value) \
    ( (This)->lpVtbl->GetTextViaStream(This,options,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_InRange(This,range,value) \
    ( (This)->lpVtbl->InRange(This,range,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_InsertImage(This,width,height,ascent,verticalAlign,alternateText,value) \
    ( (This)->lpVtbl->InsertImage(This,width,height,ascent,verticalAlign,alternateText,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_InStory(This,range,value) \
    ( (This)->lpVtbl->InStory(This,range,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_IsEqual(This,range,value) \
    ( (This)->lpVtbl->IsEqual(This,range,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_Move(This,unit,count,delta) \
    ( (This)->lpVtbl->Move(This,unit,count,delta) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_MoveEnd(This,unit,count,delta) \
    ( (This)->lpVtbl->MoveEnd(This,unit,count,delta) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_MoveStart(This,unit,count,delta) \
    ( (This)->lpVtbl->MoveStart(This,unit,count,delta) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_Paste(This,format) \
    ( (This)->lpVtbl->Paste(This,format) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_ScrollIntoView(This,value) \
    ( (This)->lpVtbl->ScrollIntoView(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_MatchSelection(This) \
    ( (This)->lpVtbl->MatchSelection(This) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_SetIndex(This,unit,index,extend) \
    ( (This)->lpVtbl->SetIndex(This,unit,index,extend) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_SetPoint(This,point,options,extend) \
    ( (This)->lpVtbl->SetPoint(This,point,options,extend) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_SetRange(This,startPosition,endPosition) \
    ( (This)->lpVtbl->SetRange(This,startPosition,endPosition) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_SetText(This,options,value) \
    ( (This)->lpVtbl->SetText(This,options,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_SetTextViaStream(This,options,value) \
    ( (This)->lpVtbl->SetTextViaStream(This,options,value) )

#define __x_ABI_CWindows_CUI_CText_CITextRange_StartOf(This,unit,extend,delta) \
    ( (This)->lpVtbl->StartOf(This,unit,extend,delta) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextRange;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextRange_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Text.ITextSelection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Text.ITextRange
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CText_CITextSelection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CText_CITextSelection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Text_ITextSelection[] = L"Windows.UI.Text.ITextSelection";
/* [object, uuid("A6D36724-F28F-430A-B2CF-C343671EC0E9"), contract] */
typedef struct __x_ABI_CWindows_CUI_CText_CITextSelectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextSelection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextSelection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextSelection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextSelection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextSelection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CText_CITextSelection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CSelectionOptions * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Options )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CSelectionOptions value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CText_CSelectionType * value
        );
    HRESULT ( STDMETHODCALLTYPE *EndKey )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [in] */boolean extend,
        /* [retval, out] */__RPC__out INT32 * delta
        );
    HRESULT ( STDMETHODCALLTYPE *HomeKey )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [in] */boolean extend,
        /* [retval, out] */__RPC__out INT32 * delta
        );
    HRESULT ( STDMETHODCALLTYPE *MoveDown )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [in] */INT32 count,
        /* [in] */boolean extend,
        /* [retval, out] */__RPC__out INT32 * delta
        );
    HRESULT ( STDMETHODCALLTYPE *MoveLeft )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [in] */INT32 count,
        /* [in] */boolean extend,
        /* [retval, out] */__RPC__out INT32 * delta
        );
    HRESULT ( STDMETHODCALLTYPE *MoveRight )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [in] */INT32 count,
        /* [in] */boolean extend,
        /* [retval, out] */__RPC__out INT32 * delta
        );
    HRESULT ( STDMETHODCALLTYPE *MoveUp )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
        /* [in] */__x_ABI_CWindows_CUI_CText_CTextRangeUnit unit,
        /* [in] */INT32 count,
        /* [in] */boolean extend,
        /* [retval, out] */__RPC__out INT32 * delta
        );
    HRESULT ( STDMETHODCALLTYPE *TypeText )(
        __x_ABI_CWindows_CUI_CText_CITextSelection * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CText_CITextSelectionVtbl;

interface __x_ABI_CWindows_CUI_CText_CITextSelection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CText_CITextSelectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CText_CITextSelection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_get_Options(This,value) \
    ( (This)->lpVtbl->get_Options(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_put_Options(This,value) \
    ( (This)->lpVtbl->put_Options(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_EndKey(This,unit,extend,delta) \
    ( (This)->lpVtbl->EndKey(This,unit,extend,delta) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_HomeKey(This,unit,extend,delta) \
    ( (This)->lpVtbl->HomeKey(This,unit,extend,delta) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_MoveDown(This,unit,count,extend,delta) \
    ( (This)->lpVtbl->MoveDown(This,unit,count,extend,delta) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_MoveLeft(This,unit,count,extend,delta) \
    ( (This)->lpVtbl->MoveLeft(This,unit,count,extend,delta) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_MoveRight(This,unit,count,extend,delta) \
    ( (This)->lpVtbl->MoveRight(This,unit,count,extend,delta) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_MoveUp(This,unit,count,extend,delta) \
    ( (This)->lpVtbl->MoveUp(This,unit,count,extend,delta) )

#define __x_ABI_CWindows_CUI_CText_CITextSelection_TypeText(This,value) \
    ( (This)->lpVtbl->TypeText(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CText_CITextSelection;
#endif /* !defined(____x_ABI_CWindows_CUI_CText_CITextSelection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.FontWeights
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Text.IFontWeightsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.IFontWeights ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Text_FontWeights_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_FontWeights_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_FontWeights[] = L"Windows.UI.Text.FontWeights";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Text.RichEditTextDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Text.ITextDocument ** Default Interface **
 *    Windows.UI.Text.ITextDocument2
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_UI_Text_RichEditTextDocument_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_RichEditTextDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_RichEditTextDocument[] = L"Windows.UI.Text.RichEditTextDocument";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.UI.Text.TextConstants
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Text.ITextConstantsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_UI_Text_TextConstants_DEFINED
#define RUNTIMECLASS_Windows_UI_Text_TextConstants_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Text_TextConstants[] = L"Windows.UI.Text.TextConstants";
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
#endif // __windows2Eui2Etext_p_h__

#endif // __windows2Eui2Etext_h__
