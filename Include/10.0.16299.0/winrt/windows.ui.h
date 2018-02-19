/* Header file automatically generated from windows.ui.idl */
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
#ifndef __windows2Eui_h__
#define __windows2Eui_h__
#ifndef __windows2Eui_p_h__
#define __windows2Eui_p_h__


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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CIColorHelper_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CIColorHelper_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            interface IColorHelper;
        } /* Windows */
    } /* UI */} /* ABI */
#define __x_ABI_CWindows_CUI_CIColorHelper ABI::Windows::UI::IColorHelper

#endif // ____x_ABI_CWindows_CUI_CIColorHelper_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CIColorHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CIColorHelperStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            interface IColorHelperStatics;
        } /* Windows */
    } /* UI */} /* ABI */
#define __x_ABI_CWindows_CUI_CIColorHelperStatics ABI::Windows::UI::IColorHelperStatics

#endif // ____x_ABI_CWindows_CUI_CIColorHelperStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CIColorHelperStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CIColorHelperStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            interface IColorHelperStatics2;
        } /* Windows */
    } /* UI */} /* ABI */
#define __x_ABI_CWindows_CUI_CIColorHelperStatics2 ABI::Windows::UI::IColorHelperStatics2

#endif // ____x_ABI_CWindows_CUI_CIColorHelperStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CIColors_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CIColors_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            interface IColors;
        } /* Windows */
    } /* UI */} /* ABI */
#define __x_ABI_CWindows_CUI_CIColors ABI::Windows::UI::IColors

#endif // ____x_ABI_CWindows_CUI_CIColors_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CIColorsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CIColorsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            interface IColorsStatics;
        } /* Windows */
    } /* UI */} /* ABI */
#define __x_ABI_CWindows_CUI_CIColorsStatics ABI::Windows::UI::IColorsStatics

#endif // ____x_ABI_CWindows_CUI_CIColorsStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            struct Color;
            
        } /* Windows */
    } /* UI */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CUI__CColor_USE
#define DEF___FIIterator_1_Windows__CUI__CColor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("c4310b12-7ac2-5e5b-b511-e546eea473b4"))
IIterator<struct ABI::Windows::UI::Color> : IIterator_impl<struct ABI::Windows::UI::Color> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Color>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<struct ABI::Windows::UI::Color> __FIIterator_1_Windows__CUI__CColor_t;
#define __FIIterator_1_Windows__CUI__CColor ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CColor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CColor ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Color>
//#define __FIIterator_1_Windows__CUI__CColor_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Color>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CColor_USE */





#ifndef DEF___FIIterable_1_Windows__CUI__CColor_USE
#define DEF___FIIterable_1_Windows__CUI__CColor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("932eef5e-2c2f-5eae-929a-74e973b57c27"))
IIterable<struct ABI::Windows::UI::Color> : IIterable_impl<struct ABI::Windows::UI::Color> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Color>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<struct ABI::Windows::UI::Color> __FIIterable_1_Windows__CUI__CColor_t;
#define __FIIterable_1_Windows__CUI__CColor ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CColor_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CColor ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Color>
//#define __FIIterable_1_Windows__CUI__CColor_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Color>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CColor_USE */





#ifndef DEF___FIReference_1_Windows__CUI__CColor_USE
#define DEF___FIReference_1_Windows__CUI__CColor_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ab8e5d11-b0c1-5a21-95ae-f16bf3a37624"))
IReference<struct ABI::Windows::UI::Color> : IReference_impl<struct ABI::Windows::UI::Color> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Windows.UI.Color>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<struct ABI::Windows::UI::Color> __FIReference_1_Windows__CUI__CColor_t;
#define __FIReference_1_Windows__CUI__CColor ABI::Windows::Foundation::__FIReference_1_Windows__CUI__CColor_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_Windows__CUI__CColor ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>
//#define __FIReference_1_Windows__CUI__CColor_t ABI::Windows::Foundation::IReference<ABI::Windows::UI::Color>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_Windows__CUI__CColor_USE */








namespace ABI {
    namespace Windows {
        namespace UI {
            
            typedef struct Color Color;
            
        } /* Windows */
    } /* UI */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace UI {
            class ColorHelper;
        } /* Windows */
    } /* UI */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            class Colors;
        } /* Windows */
    } /* UI */} /* ABI */








/*
 *
 * Struct Windows.UI.Color
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            /* [contract] */
            struct Color
            {
                BYTE A;
                BYTE R;
                BYTE G;
                BYTE B;
            };
            
        } /* Windows */
    } /* UI */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.IColorHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ColorHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CIColorHelper_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CIColorHelper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColorHelper[] = L"Windows.UI.IColorHelper";
namespace ABI {
    namespace Windows {
        namespace UI {
            /* [object, uuid("193CFBE7-65C7-4540-AD08-6283BA76879A"), exclusiveto, contract] */
            MIDL_INTERFACE("193CFBE7-65C7-4540-AD08-6283BA76879A")
            IColorHelper : IInspectable
            {
                
            };

            extern MIDL_CONST_ID IID & IID_IColorHelper=_uuidof(IColorHelper);
            
        } /* Windows */
    } /* UI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColorHelper;
#endif /* !defined(____x_ABI_CWindows_CUI_CIColorHelper_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.IColorHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ColorHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CIColorHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CIColorHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColorHelperStatics[] = L"Windows.UI.IColorHelperStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            /* [object, uuid("8504DBEA-FB6A-4144-A6C2-33499C9284F5"), exclusiveto, contract] */
            MIDL_INTERFACE("8504DBEA-FB6A-4144-A6C2-33499C9284F5")
            IColorHelperStatics : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE FromArgb(
                    /* [in] */BYTE a,
                    /* [in] */BYTE r,
                    /* [in] */BYTE g,
                    /* [in] */BYTE b,
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * returnValue
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IColorHelperStatics=_uuidof(IColorHelperStatics);
            
        } /* Windows */
    } /* UI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColorHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CIColorHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.IColorHelperStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ColorHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CIColorHelperStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CIColorHelperStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColorHelperStatics2[] = L"Windows.UI.IColorHelperStatics2";
namespace ABI {
    namespace Windows {
        namespace UI {
            /* [object, uuid("24D9AF02-6EB0-4B94-855C-FCF0818D9A16"), exclusiveto, contract] */
            MIDL_INTERFACE("24D9AF02-6EB0-4B94-855C-FCF0818D9A16")
            IColorHelperStatics2 : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE ToDisplayName(
                    /* [in] */ABI::Windows::UI::Color color,
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IColorHelperStatics2=_uuidof(IColorHelperStatics2);
            
        } /* Windows */
    } /* UI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColorHelperStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CIColorHelperStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.IColors
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Colors
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CIColors_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CIColors_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColors[] = L"Windows.UI.IColors";
namespace ABI {
    namespace Windows {
        namespace UI {
            /* [object, uuid("9B8C9326-4CA6-4CE5-8994-9EFF65CABDCC"), exclusiveto, contract] */
            MIDL_INTERFACE("9B8C9326-4CA6-4CE5-8994-9EFF65CABDCC")
            IColors : IInspectable
            {
                
            };

            extern MIDL_CONST_ID IID & IID_IColors=_uuidof(IColors);
            
        } /* Windows */
    } /* UI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColors;
#endif /* !defined(____x_ABI_CWindows_CUI_CIColors_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.IColorsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Colors
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CIColorsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CIColorsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColorsStatics[] = L"Windows.UI.IColorsStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            /* [object, uuid("CFF52E04-CCA6-4614-A17E-754910C84A99"), exclusiveto, contract] */
            MIDL_INTERFACE("CFF52E04-CCA6-4614-A17E-754910C84A99")
            IColorsStatics : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AliceBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AntiqueWhite(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Aqua(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Aquamarine(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Azure(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Beige(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bisque(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Black(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlanchedAlmond(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Blue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlueViolet(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Brown(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BurlyWood(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CadetBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Chartreuse(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Chocolate(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Coral(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CornflowerBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cornsilk(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Crimson(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Cyan(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkCyan(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkGoldenrod(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkGray(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkKhaki(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkMagenta(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkOliveGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkOrange(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkOrchid(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkRed(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkSalmon(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkSeaGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkSlateBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkSlateGray(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkTurquoise(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DarkViolet(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeepPink(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeepSkyBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DimGray(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DodgerBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Firebrick(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FloralWhite(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForestGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Fuchsia(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gainsboro(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GhostWhite(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gold(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Goldenrod(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Gray(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Green(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GreenYellow(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Honeydew(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HotPink(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IndianRed(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Indigo(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ivory(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Khaki(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Lavender(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LavenderBlush(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LawnGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LemonChiffon(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightCoral(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightCyan(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightGoldenrodYellow(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightGray(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightPink(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightSalmon(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightSeaGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightSkyBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightSlateGray(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightSteelBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LightYellow(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Lime(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LimeGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Linen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Magenta(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Maroon(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumAquamarine(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumOrchid(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumPurple(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumSeaGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumSlateBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumSpringGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumTurquoise(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MediumVioletRed(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MidnightBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MintCream(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MistyRose(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Moccasin(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NavajoWhite(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Navy(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OldLace(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Olive(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OliveDrab(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orange(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OrangeRed(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Orchid(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PaleGoldenrod(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PaleGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PaleTurquoise(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PaleVioletRed(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PapayaWhip(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PeachPuff(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Peru(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pink(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Plum(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PowderBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Purple(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Red(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RosyBrown(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoyalBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SaddleBrown(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Salmon(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SandyBrown(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SeaGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SeaShell(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sienna(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Silver(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SkyBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SlateBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SlateGray(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Snow(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpringGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SteelBlue(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tan(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Teal(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Thistle(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tomato(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Transparent(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Turquoise(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Violet(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Wheat(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_White(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_WhiteSmoke(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Yellow(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_YellowGreen(
                    /* [retval, out] */__RPC__out ABI::Windows::UI::Color * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IColorsStatics=_uuidof(IColorsStatics);
            
        } /* Windows */
    } /* UI */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColorsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CIColorsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ColorHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.IColorHelperStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.IColorHelperStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.IColorHelper ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ColorHelper_DEFINED
#define RUNTIMECLASS_Windows_UI_ColorHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ColorHelper[] = L"Windows.UI.ColorHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Colors
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.IColorsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.IColors ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Colors_DEFINED
#define RUNTIMECLASS_Windows_UI_Colors_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Colors[] = L"Windows.UI.Colors";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CIColorHelper_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CIColorHelper_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CIColorHelper __x_ABI_CWindows_CUI_CIColorHelper;

#endif // ____x_ABI_CWindows_CUI_CIColorHelper_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CIColorHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CIColorHelperStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CIColorHelperStatics __x_ABI_CWindows_CUI_CIColorHelperStatics;

#endif // ____x_ABI_CWindows_CUI_CIColorHelperStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CIColorHelperStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CIColorHelperStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CIColorHelperStatics2 __x_ABI_CWindows_CUI_CIColorHelperStatics2;

#endif // ____x_ABI_CWindows_CUI_CIColorHelperStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CIColors_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CIColors_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CIColors __x_ABI_CWindows_CUI_CIColors;

#endif // ____x_ABI_CWindows_CUI_CIColors_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CIColorsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CIColorsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CIColorsStatics __x_ABI_CWindows_CUI_CIColorsStatics;

#endif // ____x_ABI_CWindows_CUI_CIColorsStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
struct __x_ABI_CWindows_CUI_CColor;

#if !defined(____FIIterator_1_Windows__CUI__CColor_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CColor_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CColor __FIIterator_1_Windows__CUI__CColor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CColor;

typedef struct __FIIterator_1_Windows__CUI__CColorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CColor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CUI_CColor *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CColor * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CUI_CColor *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CColorVtbl;

interface __FIIterator_1_Windows__CUI__CColor
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CColorVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CColor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CColor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CColor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CColor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CColor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CColor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CColor_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CColor_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CColor_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CColor_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CColor_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CUI__CColor_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CColor_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CColor __FIIterable_1_Windows__CUI__CColor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CColor;

typedef  struct __FIIterable_1_Windows__CUI__CColorVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CColor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CColor * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CColor * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CColor * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CColor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CColor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CColor * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CColor **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CColorVtbl;

interface __FIIterable_1_Windows__CUI__CColor
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CColorVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CColor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CColor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CColor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CColor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CColor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CColor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CColor_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CColor_INTERFACE_DEFINED__



#if !defined(____FIReference_1_Windows__CUI__CColor_INTERFACE_DEFINED__)
#define ____FIReference_1_Windows__CUI__CColor_INTERFACE_DEFINED__

typedef interface __FIReference_1_Windows__CUI__CColor __FIReference_1_Windows__CUI__CColor;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CColor;

typedef struct __FIReference_1_Windows__CUI__CColorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CColor * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CColor * This, /* [retval][out] */ __RPC__out struct __x_ABI_CWindows_CUI_CColor *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CColorVtbl;

interface __FIReference_1_Windows__CUI__CColor
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CColorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_Windows__CUI__CColor_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_Windows__CUI__CColor_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_Windows__CUI__CColor_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_Windows__CUI__CColor_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_Windows__CUI__CColor_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_Windows__CUI__CColor_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_Windows__CUI__CColor_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_Windows__CUI__CColor_INTERFACE_DEFINED__







typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;














/*
 *
 * Struct Windows.UI.Color
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CUI_CColor
{
    BYTE A;
    BYTE R;
    BYTE G;
    BYTE B;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.IColorHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ColorHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CIColorHelper_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CIColorHelper_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColorHelper[] = L"Windows.UI.IColorHelper";
/* [object, uuid("193CFBE7-65C7-4540-AD08-6283BA76879A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CIColorHelperVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelper * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelper * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelper * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelper * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelper * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelper * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CIColorHelperVtbl;

interface __x_ABI_CWindows_CUI_CIColorHelper
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CIColorHelperVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CIColorHelper_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CIColorHelper_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CIColorHelper_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CIColorHelper_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CIColorHelper_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CIColorHelper_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColorHelper;
#endif /* !defined(____x_ABI_CWindows_CUI_CIColorHelper_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.IColorHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ColorHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CIColorHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CIColorHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColorHelperStatics[] = L"Windows.UI.IColorHelperStatics";
/* [object, uuid("8504DBEA-FB6A-4144-A6C2-33499C9284F5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CIColorHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromArgb )(
        __x_ABI_CWindows_CUI_CIColorHelperStatics * This,
        /* [in] */BYTE a,
        /* [in] */BYTE r,
        /* [in] */BYTE g,
        /* [in] */BYTE b,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CIColorHelperStaticsVtbl;

interface __x_ABI_CWindows_CUI_CIColorHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CIColorHelperStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CIColorHelperStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CIColorHelperStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CIColorHelperStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CIColorHelperStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CIColorHelperStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CIColorHelperStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CIColorHelperStatics_FromArgb(This,a,r,g,b,returnValue) \
    ( (This)->lpVtbl->FromArgb(This,a,r,g,b,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColorHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CIColorHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.IColorHelperStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ColorHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CUI_CIColorHelperStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CIColorHelperStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColorHelperStatics2[] = L"Windows.UI.IColorHelperStatics2";
/* [object, uuid("24D9AF02-6EB0-4B94-855C-FCF0818D9A16"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CIColorHelperStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ToDisplayName )(
        __x_ABI_CWindows_CUI_CIColorHelperStatics2 * This,
        /* [in] */__x_ABI_CWindows_CUI_CColor color,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CIColorHelperStatics2Vtbl;

interface __x_ABI_CWindows_CUI_CIColorHelperStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CIColorHelperStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CIColorHelperStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CIColorHelperStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CIColorHelperStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CIColorHelperStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CIColorHelperStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CIColorHelperStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CIColorHelperStatics2_ToDisplayName(This,color,returnValue) \
    ( (This)->lpVtbl->ToDisplayName(This,color,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColorHelperStatics2;
#endif /* !defined(____x_ABI_CWindows_CUI_CIColorHelperStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.UI.IColors
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Colors
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CIColors_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CIColors_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColors[] = L"Windows.UI.IColors";
/* [object, uuid("9B8C9326-4CA6-4CE5-8994-9EFF65CABDCC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CIColorsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CIColors * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CIColors * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CIColors * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CIColors * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CIColors * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CIColors * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CIColorsVtbl;

interface __x_ABI_CWindows_CUI_CIColors
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CIColorsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CIColors_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CIColors_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CIColors_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CIColors_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CIColors_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CIColors_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColors;
#endif /* !defined(____x_ABI_CWindows_CUI_CIColors_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.IColorsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Colors
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CIColorsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CIColorsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_IColorsStatics[] = L"Windows.UI.IColorsStatics";
/* [object, uuid("CFF52E04-CCA6-4614-A17E-754910C84A99"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CIColorsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CIColorsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CIColorsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AliceBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AntiqueWhite )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Aqua )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Aquamarine )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Azure )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Beige )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bisque )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Black )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlanchedAlmond )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Blue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlueViolet )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Brown )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BurlyWood )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CadetBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Chartreuse )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Chocolate )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Coral )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CornflowerBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cornsilk )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Crimson )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Cyan )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkCyan )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkGoldenrod )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkGray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkKhaki )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkMagenta )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkOliveGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkOrange )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkOrchid )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkRed )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkSalmon )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkSeaGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkSlateBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkSlateGray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkTurquoise )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DarkViolet )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeepPink )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeepSkyBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DimGray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DodgerBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Firebrick )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FloralWhite )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForestGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Fuchsia )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gainsboro )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GhostWhite )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gold )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Goldenrod )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Gray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Green )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GreenYellow )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Honeydew )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HotPink )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IndianRed )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Indigo )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ivory )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Khaki )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Lavender )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LavenderBlush )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LawnGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LemonChiffon )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightCoral )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightCyan )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightGoldenrodYellow )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightGray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightPink )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightSalmon )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightSeaGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightSkyBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightSlateGray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightSteelBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LightYellow )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Lime )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LimeGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Linen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Magenta )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Maroon )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumAquamarine )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumOrchid )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumPurple )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumSeaGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumSlateBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumSpringGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumTurquoise )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MediumVioletRed )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MidnightBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MintCream )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MistyRose )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Moccasin )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NavajoWhite )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Navy )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OldLace )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Olive )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OliveDrab )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orange )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OrangeRed )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Orchid )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PaleGoldenrod )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PaleGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PaleTurquoise )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PaleVioletRed )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PapayaWhip )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PeachPuff )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Peru )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pink )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Plum )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PowderBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Purple )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Red )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RosyBrown )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoyalBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SaddleBrown )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Salmon )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SandyBrown )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SeaGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SeaShell )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sienna )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Silver )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SkyBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SlateBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SlateGray )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Snow )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpringGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SteelBlue )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tan )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Teal )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Thistle )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tomato )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Transparent )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Turquoise )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Violet )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Wheat )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_White )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_WhiteSmoke )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Yellow )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_YellowGreen )(
        __x_ABI_CWindows_CUI_CIColorsStatics * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CIColorsStaticsVtbl;

interface __x_ABI_CWindows_CUI_CIColorsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CIColorsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CIColorsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_AliceBlue(This,value) \
    ( (This)->lpVtbl->get_AliceBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_AntiqueWhite(This,value) \
    ( (This)->lpVtbl->get_AntiqueWhite(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Aqua(This,value) \
    ( (This)->lpVtbl->get_Aqua(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Aquamarine(This,value) \
    ( (This)->lpVtbl->get_Aquamarine(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Azure(This,value) \
    ( (This)->lpVtbl->get_Azure(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Beige(This,value) \
    ( (This)->lpVtbl->get_Beige(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Bisque(This,value) \
    ( (This)->lpVtbl->get_Bisque(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Black(This,value) \
    ( (This)->lpVtbl->get_Black(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_BlanchedAlmond(This,value) \
    ( (This)->lpVtbl->get_BlanchedAlmond(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Blue(This,value) \
    ( (This)->lpVtbl->get_Blue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_BlueViolet(This,value) \
    ( (This)->lpVtbl->get_BlueViolet(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Brown(This,value) \
    ( (This)->lpVtbl->get_Brown(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_BurlyWood(This,value) \
    ( (This)->lpVtbl->get_BurlyWood(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_CadetBlue(This,value) \
    ( (This)->lpVtbl->get_CadetBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Chartreuse(This,value) \
    ( (This)->lpVtbl->get_Chartreuse(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Chocolate(This,value) \
    ( (This)->lpVtbl->get_Chocolate(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Coral(This,value) \
    ( (This)->lpVtbl->get_Coral(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_CornflowerBlue(This,value) \
    ( (This)->lpVtbl->get_CornflowerBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Cornsilk(This,value) \
    ( (This)->lpVtbl->get_Cornsilk(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Crimson(This,value) \
    ( (This)->lpVtbl->get_Crimson(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Cyan(This,value) \
    ( (This)->lpVtbl->get_Cyan(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkBlue(This,value) \
    ( (This)->lpVtbl->get_DarkBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkCyan(This,value) \
    ( (This)->lpVtbl->get_DarkCyan(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkGoldenrod(This,value) \
    ( (This)->lpVtbl->get_DarkGoldenrod(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkGray(This,value) \
    ( (This)->lpVtbl->get_DarkGray(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkGreen(This,value) \
    ( (This)->lpVtbl->get_DarkGreen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkKhaki(This,value) \
    ( (This)->lpVtbl->get_DarkKhaki(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkMagenta(This,value) \
    ( (This)->lpVtbl->get_DarkMagenta(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkOliveGreen(This,value) \
    ( (This)->lpVtbl->get_DarkOliveGreen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkOrange(This,value) \
    ( (This)->lpVtbl->get_DarkOrange(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkOrchid(This,value) \
    ( (This)->lpVtbl->get_DarkOrchid(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkRed(This,value) \
    ( (This)->lpVtbl->get_DarkRed(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkSalmon(This,value) \
    ( (This)->lpVtbl->get_DarkSalmon(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkSeaGreen(This,value) \
    ( (This)->lpVtbl->get_DarkSeaGreen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkSlateBlue(This,value) \
    ( (This)->lpVtbl->get_DarkSlateBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkSlateGray(This,value) \
    ( (This)->lpVtbl->get_DarkSlateGray(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkTurquoise(This,value) \
    ( (This)->lpVtbl->get_DarkTurquoise(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DarkViolet(This,value) \
    ( (This)->lpVtbl->get_DarkViolet(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DeepPink(This,value) \
    ( (This)->lpVtbl->get_DeepPink(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DeepSkyBlue(This,value) \
    ( (This)->lpVtbl->get_DeepSkyBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DimGray(This,value) \
    ( (This)->lpVtbl->get_DimGray(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_DodgerBlue(This,value) \
    ( (This)->lpVtbl->get_DodgerBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Firebrick(This,value) \
    ( (This)->lpVtbl->get_Firebrick(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_FloralWhite(This,value) \
    ( (This)->lpVtbl->get_FloralWhite(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_ForestGreen(This,value) \
    ( (This)->lpVtbl->get_ForestGreen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Fuchsia(This,value) \
    ( (This)->lpVtbl->get_Fuchsia(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Gainsboro(This,value) \
    ( (This)->lpVtbl->get_Gainsboro(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_GhostWhite(This,value) \
    ( (This)->lpVtbl->get_GhostWhite(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Gold(This,value) \
    ( (This)->lpVtbl->get_Gold(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Goldenrod(This,value) \
    ( (This)->lpVtbl->get_Goldenrod(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Gray(This,value) \
    ( (This)->lpVtbl->get_Gray(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Green(This,value) \
    ( (This)->lpVtbl->get_Green(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_GreenYellow(This,value) \
    ( (This)->lpVtbl->get_GreenYellow(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Honeydew(This,value) \
    ( (This)->lpVtbl->get_Honeydew(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_HotPink(This,value) \
    ( (This)->lpVtbl->get_HotPink(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_IndianRed(This,value) \
    ( (This)->lpVtbl->get_IndianRed(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Indigo(This,value) \
    ( (This)->lpVtbl->get_Indigo(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Ivory(This,value) \
    ( (This)->lpVtbl->get_Ivory(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Khaki(This,value) \
    ( (This)->lpVtbl->get_Khaki(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Lavender(This,value) \
    ( (This)->lpVtbl->get_Lavender(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LavenderBlush(This,value) \
    ( (This)->lpVtbl->get_LavenderBlush(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LawnGreen(This,value) \
    ( (This)->lpVtbl->get_LawnGreen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LemonChiffon(This,value) \
    ( (This)->lpVtbl->get_LemonChiffon(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LightBlue(This,value) \
    ( (This)->lpVtbl->get_LightBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LightCoral(This,value) \
    ( (This)->lpVtbl->get_LightCoral(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LightCyan(This,value) \
    ( (This)->lpVtbl->get_LightCyan(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LightGoldenrodYellow(This,value) \
    ( (This)->lpVtbl->get_LightGoldenrodYellow(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LightGreen(This,value) \
    ( (This)->lpVtbl->get_LightGreen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LightGray(This,value) \
    ( (This)->lpVtbl->get_LightGray(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LightPink(This,value) \
    ( (This)->lpVtbl->get_LightPink(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LightSalmon(This,value) \
    ( (This)->lpVtbl->get_LightSalmon(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LightSeaGreen(This,value) \
    ( (This)->lpVtbl->get_LightSeaGreen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LightSkyBlue(This,value) \
    ( (This)->lpVtbl->get_LightSkyBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LightSlateGray(This,value) \
    ( (This)->lpVtbl->get_LightSlateGray(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LightSteelBlue(This,value) \
    ( (This)->lpVtbl->get_LightSteelBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LightYellow(This,value) \
    ( (This)->lpVtbl->get_LightYellow(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Lime(This,value) \
    ( (This)->lpVtbl->get_Lime(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_LimeGreen(This,value) \
    ( (This)->lpVtbl->get_LimeGreen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Linen(This,value) \
    ( (This)->lpVtbl->get_Linen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Magenta(This,value) \
    ( (This)->lpVtbl->get_Magenta(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Maroon(This,value) \
    ( (This)->lpVtbl->get_Maroon(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_MediumAquamarine(This,value) \
    ( (This)->lpVtbl->get_MediumAquamarine(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_MediumBlue(This,value) \
    ( (This)->lpVtbl->get_MediumBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_MediumOrchid(This,value) \
    ( (This)->lpVtbl->get_MediumOrchid(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_MediumPurple(This,value) \
    ( (This)->lpVtbl->get_MediumPurple(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_MediumSeaGreen(This,value) \
    ( (This)->lpVtbl->get_MediumSeaGreen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_MediumSlateBlue(This,value) \
    ( (This)->lpVtbl->get_MediumSlateBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_MediumSpringGreen(This,value) \
    ( (This)->lpVtbl->get_MediumSpringGreen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_MediumTurquoise(This,value) \
    ( (This)->lpVtbl->get_MediumTurquoise(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_MediumVioletRed(This,value) \
    ( (This)->lpVtbl->get_MediumVioletRed(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_MidnightBlue(This,value) \
    ( (This)->lpVtbl->get_MidnightBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_MintCream(This,value) \
    ( (This)->lpVtbl->get_MintCream(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_MistyRose(This,value) \
    ( (This)->lpVtbl->get_MistyRose(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Moccasin(This,value) \
    ( (This)->lpVtbl->get_Moccasin(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_NavajoWhite(This,value) \
    ( (This)->lpVtbl->get_NavajoWhite(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Navy(This,value) \
    ( (This)->lpVtbl->get_Navy(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_OldLace(This,value) \
    ( (This)->lpVtbl->get_OldLace(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Olive(This,value) \
    ( (This)->lpVtbl->get_Olive(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_OliveDrab(This,value) \
    ( (This)->lpVtbl->get_OliveDrab(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Orange(This,value) \
    ( (This)->lpVtbl->get_Orange(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_OrangeRed(This,value) \
    ( (This)->lpVtbl->get_OrangeRed(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Orchid(This,value) \
    ( (This)->lpVtbl->get_Orchid(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_PaleGoldenrod(This,value) \
    ( (This)->lpVtbl->get_PaleGoldenrod(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_PaleGreen(This,value) \
    ( (This)->lpVtbl->get_PaleGreen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_PaleTurquoise(This,value) \
    ( (This)->lpVtbl->get_PaleTurquoise(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_PaleVioletRed(This,value) \
    ( (This)->lpVtbl->get_PaleVioletRed(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_PapayaWhip(This,value) \
    ( (This)->lpVtbl->get_PapayaWhip(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_PeachPuff(This,value) \
    ( (This)->lpVtbl->get_PeachPuff(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Peru(This,value) \
    ( (This)->lpVtbl->get_Peru(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Pink(This,value) \
    ( (This)->lpVtbl->get_Pink(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Plum(This,value) \
    ( (This)->lpVtbl->get_Plum(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_PowderBlue(This,value) \
    ( (This)->lpVtbl->get_PowderBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Purple(This,value) \
    ( (This)->lpVtbl->get_Purple(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Red(This,value) \
    ( (This)->lpVtbl->get_Red(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_RosyBrown(This,value) \
    ( (This)->lpVtbl->get_RosyBrown(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_RoyalBlue(This,value) \
    ( (This)->lpVtbl->get_RoyalBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_SaddleBrown(This,value) \
    ( (This)->lpVtbl->get_SaddleBrown(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Salmon(This,value) \
    ( (This)->lpVtbl->get_Salmon(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_SandyBrown(This,value) \
    ( (This)->lpVtbl->get_SandyBrown(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_SeaGreen(This,value) \
    ( (This)->lpVtbl->get_SeaGreen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_SeaShell(This,value) \
    ( (This)->lpVtbl->get_SeaShell(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Sienna(This,value) \
    ( (This)->lpVtbl->get_Sienna(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Silver(This,value) \
    ( (This)->lpVtbl->get_Silver(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_SkyBlue(This,value) \
    ( (This)->lpVtbl->get_SkyBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_SlateBlue(This,value) \
    ( (This)->lpVtbl->get_SlateBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_SlateGray(This,value) \
    ( (This)->lpVtbl->get_SlateGray(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Snow(This,value) \
    ( (This)->lpVtbl->get_Snow(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_SpringGreen(This,value) \
    ( (This)->lpVtbl->get_SpringGreen(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_SteelBlue(This,value) \
    ( (This)->lpVtbl->get_SteelBlue(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Tan(This,value) \
    ( (This)->lpVtbl->get_Tan(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Teal(This,value) \
    ( (This)->lpVtbl->get_Teal(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Thistle(This,value) \
    ( (This)->lpVtbl->get_Thistle(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Tomato(This,value) \
    ( (This)->lpVtbl->get_Tomato(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Transparent(This,value) \
    ( (This)->lpVtbl->get_Transparent(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Turquoise(This,value) \
    ( (This)->lpVtbl->get_Turquoise(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Violet(This,value) \
    ( (This)->lpVtbl->get_Violet(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Wheat(This,value) \
    ( (This)->lpVtbl->get_Wheat(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_White(This,value) \
    ( (This)->lpVtbl->get_White(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_WhiteSmoke(This,value) \
    ( (This)->lpVtbl->get_WhiteSmoke(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_Yellow(This,value) \
    ( (This)->lpVtbl->get_Yellow(This,value) )

#define __x_ABI_CWindows_CUI_CIColorsStatics_get_YellowGreen(This,value) \
    ( (This)->lpVtbl->get_YellowGreen(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CIColorsStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CIColorsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.ColorHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.IColorHelperStatics2 interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.UI.IColorHelperStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.IColorHelper ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_ColorHelper_DEFINED
#define RUNTIMECLASS_Windows_UI_ColorHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ColorHelper[] = L"Windows.UI.ColorHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Colors
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.IColorsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.IColors ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Colors_DEFINED
#define RUNTIMECLASS_Windows_UI_Colors_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Colors[] = L"Windows.UI.Colors";
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
#endif // __windows2Eui_p_h__

#endif // __windows2Eui_h__
