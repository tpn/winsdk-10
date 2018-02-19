/* Header file automatically generated from windows.ui.xaml.automation.text.idl */
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
#ifndef __windows2Eui2Examl2Eautomation2Etext_h__
#define __windows2Eui2Examl2Eautomation2Etext_h__
#ifndef __windows2Eui2Examl2Eautomation2Etext_p_h__
#define __windows2Eui2Examl2Eautomation2Etext_p_h__


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
#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

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

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Text {
                        
                        typedef enum TextPatternRangeEndpoint : int TextPatternRangeEndpoint;
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Text */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Automation {
                    namespace Text {
                        
                        typedef enum TextUnit : int TextUnit;
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Text */} /* ABI */







/*
 *
 * Struct Windows.UI.Xaml.Automation.Text.TextPatternRangeEndpoint
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
                namespace Automation {
                    namespace Text {
                        /* [v1_enum, contract] */
                        enum TextPatternRangeEndpoint : int
                        {
                            TextPatternRangeEndpoint_Start = 0,
                            TextPatternRangeEndpoint_End = 1,
                        };
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.Text.TextUnit
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
                namespace Automation {
                    namespace Text {
                        /* [v1_enum, contract] */
                        enum TextUnit : int
                        {
                            TextUnit_Character = 0,
                            TextUnit_Format = 1,
                            TextUnit_Word = 2,
                            TextUnit_Line = 3,
                            TextUnit_Paragraph = 4,
                            TextUnit_Page = 5,
                            TextUnit_Document = 6,
                        };
                        
                    } /* Windows */
                } /* UI */
            } /* Xaml */
        } /* Automation */
    } /* Text */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000






#else // !defined(__cplusplus)
/* Forward Declarations */




typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint;


typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit;







/*
 *
 * Struct Windows.UI.Xaml.Automation.Text.TextPatternRangeEndpoint
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint
{
    TextPatternRangeEndpoint_Start = 0,
    TextPatternRangeEndpoint_End = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Automation.Text.TextUnit
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit
{
    TextUnit_Character = 0,
    TextUnit_Format = 1,
    TextUnit_Word = 2,
    TextUnit_Line = 3,
    TextUnit_Paragraph = 4,
    TextUnit_Page = 5,
    TextUnit_Document = 6,
};
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
#endif // __windows2Eui2Examl2Eautomation2Etext_p_h__

#endif // __windows2Eui2Examl2Eautomation2Etext_h__
