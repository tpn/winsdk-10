/* Header file automatically generated from windows.globalization.numberformatting.idl */
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
#ifndef __windows2Eglobalization2Enumberformatting_h__
#define __windows2Eglobalization2Enumberformatting_h__
#ifndef __windows2Eglobalization2Enumberformatting_p_h__
#define __windows2Eglobalization2Enumberformatting_p_h__


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
#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface ICurrencyFormatter;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter ABI::Windows::Globalization::NumberFormatting::ICurrencyFormatter

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface ICurrencyFormatter2;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 ABI::Windows::Globalization::NumberFormatting::ICurrencyFormatter2

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface ICurrencyFormatterFactory;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory ABI::Windows::Globalization::NumberFormatting::ICurrencyFormatterFactory

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface IDecimalFormatterFactory;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory ABI::Windows::Globalization::NumberFormatting::IDecimalFormatterFactory

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface IIncrementNumberRounder;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder ABI::Windows::Globalization::NumberFormatting::IIncrementNumberRounder

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface INumberFormatter;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter ABI::Windows::Globalization::NumberFormatting::INumberFormatter

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface INumberFormatter2;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 ABI::Windows::Globalization::NumberFormatting::INumberFormatter2

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface INumberFormatterOptions;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions ABI::Windows::Globalization::NumberFormatting::INumberFormatterOptions

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface INumberParser;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser ABI::Windows::Globalization::NumberFormatting::INumberParser

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface INumberRounder;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder ABI::Windows::Globalization::NumberFormatting::INumberRounder

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface INumberRounderOption;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption ABI::Windows::Globalization::NumberFormatting::INumberRounderOption

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface INumeralSystemTranslator;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator ABI::Windows::Globalization::NumberFormatting::INumeralSystemTranslator

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface INumeralSystemTranslatorFactory;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory ABI::Windows::Globalization::NumberFormatting::INumeralSystemTranslatorFactory

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface IPercentFormatterFactory;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory ABI::Windows::Globalization::NumberFormatting::IPercentFormatterFactory

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface IPermilleFormatterFactory;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory ABI::Windows::Globalization::NumberFormatting::IPermilleFormatterFactory

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface ISignedZeroOption;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption ABI::Windows::Globalization::NumberFormatting::ISignedZeroOption

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface ISignificantDigitsNumberRounder;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder ABI::Windows::Globalization::NumberFormatting::ISignificantDigitsNumberRounder

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                interface ISignificantDigitsOption;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption ABI::Windows::Globalization::NumberFormatting::ISignificantDigitsOption

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

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




#ifndef DEF___FIReference_1___z__zint64_USE
#define DEF___FIReference_1___z__zint64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4dda9e24-e69f-5c6a-a0a6-93427365af2a"))
IReference<__int64> : IReference_impl<__int64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Int64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<__int64> __FIReference_1___z__zint64_t;
#define __FIReference_1___z__zint64 ABI::Windows::Foundation::__FIReference_1___z__zint64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1___z__zint64 ABI::Windows::Foundation::IReference<INT64>
//#define __FIReference_1___z__zint64_t ABI::Windows::Foundation::IReference<INT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1___z__zint64_USE */




#ifndef DEF___FIReference_1_UINT64_USE
#define DEF___FIReference_1_UINT64_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6755e376-53bb-568b-a11d-17239868309e"))
IReference<UINT64> : IReference_impl<UINT64> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<UInt64>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<UINT64> __FIReference_1_UINT64_t;
#define __FIReference_1_UINT64 ABI::Windows::Foundation::__FIReference_1_UINT64_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_UINT64 ABI::Windows::Foundation::IReference<UINT64>
//#define __FIReference_1_UINT64_t ABI::Windows::Foundation::IReference<UINT64>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_UINT64_USE */




#ifndef DEF___FIReference_1_double_USE
#define DEF___FIReference_1_double_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2f2d6c29-5473-5f3e-92e7-96572bb990e2"))
IReference<double> : IReference_impl<double> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IReference`1<Double>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IReference<double> __FIReference_1_double_t;
#define __FIReference_1_double ABI::Windows::Foundation::__FIReference_1_double_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIReference_1_double ABI::Windows::Foundation::IReference<DOUBLE>
//#define __FIReference_1_double_t ABI::Windows::Foundation::IReference<DOUBLE>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIReference_1_double_USE */








namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                
                typedef enum CurrencyFormatterMode : int CurrencyFormatterMode;
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                
                typedef enum RoundingAlgorithm : int RoundingAlgorithm;
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */



















namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                class CurrencyFormatter;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                class DecimalFormatter;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                class IncrementNumberRounder;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                class NumeralSystemTranslator;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                class PercentFormatter;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                class PermilleFormatter;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                class SignificantDigitsNumberRounder;
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */






/*
 *
 * Struct Windows.Globalization.NumberFormatting.CurrencyFormatterMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [v1_enum, contract] */
                enum CurrencyFormatterMode : int
                {
                    CurrencyFormatterMode_UseSymbol = 0,
                    CurrencyFormatterMode_UseCurrencyCode = 1,
                };
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.NumberFormatting.RoundingAlgorithm
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [v1_enum, contract] */
                enum RoundingAlgorithm : int
                {
                    RoundingAlgorithm_None = 0,
                    RoundingAlgorithm_RoundDown = 1,
                    RoundingAlgorithm_RoundUp = 2,
                    RoundingAlgorithm_RoundTowardsZero = 3,
                    RoundingAlgorithm_RoundAwayFromZero = 4,
                    RoundingAlgorithm_RoundHalfDown = 5,
                    RoundingAlgorithm_RoundHalfUp = 6,
                    RoundingAlgorithm_RoundHalfTowardsZero = 7,
                    RoundingAlgorithm_RoundHalfAwayFromZero = 8,
                    RoundingAlgorithm_RoundHalfToEven = 9,
                    RoundingAlgorithm_RoundHalfToOdd = 10,
                };
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.ICurrencyFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.CurrencyFormatter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Globalization.NumberFormatting.INumberFormatterOptions
 *     Windows.Globalization.NumberFormatting.INumberFormatter
 *     Windows.Globalization.NumberFormatting.INumberFormatter2
 *     Windows.Globalization.NumberFormatting.INumberParser
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ICurrencyFormatter[] = L"Windows.Globalization.NumberFormatting.ICurrencyFormatter";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("11730CA5-4B00-41B2-B332-73B12A497D54"), exclusiveto, contract] */
                MIDL_INTERFACE("11730CA5-4B00-41B2-B332-73B12A497D54")
                ICurrencyFormatter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Currency(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("Currency may be read-only for releases after Windows 8.1. Instead, use a new CurrencyFormatter.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [propput, deprecated] */virtual HRESULT STDMETHODCALLTYPE put_Currency(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICurrencyFormatter=_uuidof(ICurrencyFormatter);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.ICurrencyFormatter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.CurrencyFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ICurrencyFormatter2[] = L"Windows.Globalization.NumberFormatting.ICurrencyFormatter2";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("072C2F1D-E7BA-4197-920E-247C92F7DEA6"), exclusiveto, contract] */
                MIDL_INTERFACE("072C2F1D-E7BA-4197-920E-247C92F7DEA6")
                ICurrencyFormatter2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mode(
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::NumberFormatting::CurrencyFormatterMode * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mode(
                        /* [in] */ABI::Windows::Globalization::NumberFormatting::CurrencyFormatterMode value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ApplyRoundingForCurrency(
                        /* [in] */ABI::Windows::Globalization::NumberFormatting::RoundingAlgorithm roundingAlgorithm
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICurrencyFormatter2=_uuidof(ICurrencyFormatter2);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.ICurrencyFormatterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.CurrencyFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ICurrencyFormatterFactory[] = L"Windows.Globalization.NumberFormatting.ICurrencyFormatterFactory";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("86C7537E-B938-4AA2-84B0-2C33DC5B1450"), exclusiveto, contract] */
                MIDL_INTERFACE("86C7537E-B938-4AA2-84B0-2C33DC5B1450")
                ICurrencyFormatterFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateCurrencyFormatterCode(
                        /* [in] */__RPC__in HSTRING currencyCode,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::NumberFormatting::ICurrencyFormatter * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateCurrencyFormatterCodeContext(
                        /* [in] */__RPC__in HSTRING currencyCode,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
                        /* [in] */__RPC__in HSTRING geographicRegion,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::NumberFormatting::ICurrencyFormatter * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ICurrencyFormatterFactory=_uuidof(ICurrencyFormatterFactory);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.IDecimalFormatterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.DecimalFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_IDecimalFormatterFactory[] = L"Windows.Globalization.NumberFormatting.IDecimalFormatterFactory";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("0D018C9A-E393-46B8-B830-7A69C8F89FBB"), exclusiveto, contract] */
                MIDL_INTERFACE("0D018C9A-E393-46B8-B830-7A69C8F89FBB")
                IDecimalFormatterFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateDecimalFormatter(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
                        /* [in] */__RPC__in HSTRING geographicRegion,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::NumberFormatting::INumberFormatter * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDecimalFormatterFactory=_uuidof(IDecimalFormatterFactory);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.IIncrementNumberRounder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.IncrementNumberRounder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_IIncrementNumberRounder[] = L"Windows.Globalization.NumberFormatting.IIncrementNumberRounder";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("70A64FF8-66AB-4155-9DA1-739E46764543"), exclusiveto, contract] */
                MIDL_INTERFACE("70A64FF8-66AB-4155-9DA1-739E46764543")
                IIncrementNumberRounder : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoundingAlgorithm(
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::NumberFormatting::RoundingAlgorithm * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RoundingAlgorithm(
                        /* [in] */ABI::Windows::Globalization::NumberFormatting::RoundingAlgorithm value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Increment(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Increment(
                        /* [in] */DOUBLE value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IIncrementNumberRounder=_uuidof(IIncrementNumberRounder);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumberFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberFormatter[] = L"Windows.Globalization.NumberFormatting.INumberFormatter";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("A5007C49-7676-4DB7-8631-1B6FF265CAA9"), contract] */
                MIDL_INTERFACE("A5007C49-7676-4DB7-8631-1B6FF265CAA9")
                INumberFormatter : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FormatInt(
                        /* [in] */INT64 value,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FormatUInt(
                        /* [in] */UINT64 value,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    /* [overload, default_overload] */virtual HRESULT STDMETHODCALLTYPE FormatDouble(
                        /* [in] */DOUBLE value,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INumberFormatter=_uuidof(INumberFormatter);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumberFormatter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberFormatter2[] = L"Windows.Globalization.NumberFormatting.INumberFormatter2";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("D4A8C1F0-80D0-4B0D-A89E-882C1E8F8310"), contract] */
                MIDL_INTERFACE("D4A8C1F0-80D0-4B0D-A89E-882C1E8F8310")
                INumberFormatter2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FormatInt(
                        /* [in] */INT64 value,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FormatUInt(
                        /* [in] */UINT64 value,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE FormatDouble(
                        /* [in] */DOUBLE value,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INumberFormatter2=_uuidof(INumberFormatter2);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumberFormatterOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberFormatterOptions[] = L"Windows.Globalization.NumberFormatting.INumberFormatterOptions";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("80332D21-AEE1-4A39-BAA2-07ED8C96DAF6"), contract] */
                MIDL_INTERFACE("80332D21-AEE1-4A39-BAA2-07ED8C96DAF6")
                INumberFormatterOptions : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Languages(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GeographicRegion(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IntegerDigits(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IntegerDigits(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FractionDigits(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FractionDigits(
                        /* [in] */INT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsGrouped(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsGrouped(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsDecimalPointAlwaysDisplayed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsDecimalPointAlwaysDisplayed(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NumeralSystem(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NumeralSystem(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResolvedLanguage(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResolvedGeographicRegion(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INumberFormatterOptions=_uuidof(INumberFormatterOptions);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumberParser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberParser[] = L"Windows.Globalization.NumberFormatting.INumberParser";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("E6659412-4A13-4A53-83A1-392FBE4CFF9F"), contract] */
                MIDL_INTERFACE("E6659412-4A13-4A53-83A1-392FBE4CFF9F")
                INumberParser : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ParseInt(
                        /* [in] */__RPC__in HSTRING text,
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1___z__zint64 * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ParseUInt(
                        /* [in] */__RPC__in HSTRING text,
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ParseDouble(
                        /* [in] */__RPC__in HSTRING text,
                        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INumberParser=_uuidof(INumberParser);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumberRounder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberRounder[] = L"Windows.Globalization.NumberFormatting.INumberRounder";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("5473C375-38ED-4631-B80C-EF34FC48B7F5"), contract] */
                MIDL_INTERFACE("5473C375-38ED-4631-B80C-EF34FC48B7F5")
                INumberRounder : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE RoundInt32(
                        /* [in] */INT32 value,
                        /* [retval, out] */__RPC__out INT32 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RoundUInt32(
                        /* [in] */UINT32 value,
                        /* [retval, out] */__RPC__out UINT32 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RoundInt64(
                        /* [in] */INT64 value,
                        /* [retval, out] */__RPC__out INT64 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RoundUInt64(
                        /* [in] */UINT64 value,
                        /* [retval, out] */__RPC__out UINT64 * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RoundSingle(
                        /* [in] */FLOAT value,
                        /* [retval, out] */__RPC__out FLOAT * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RoundDouble(
                        /* [in] */DOUBLE value,
                        /* [retval, out] */__RPC__out DOUBLE * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INumberRounder=_uuidof(INumberRounder);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumberRounderOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberRounderOption[] = L"Windows.Globalization.NumberFormatting.INumberRounderOption";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("3B088433-646F-4EFE-8D48-66EB2E49E736"), contract] */
                MIDL_INTERFACE("3B088433-646F-4EFE-8D48-66EB2E49E736")
                INumberRounderOption : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NumberRounder(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::NumberFormatting::INumberRounder * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NumberRounder(
                        /* [in] */__RPC__in_opt ABI::Windows::Globalization::NumberFormatting::INumberRounder * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INumberRounderOption=_uuidof(INumberRounderOption);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumeralSystemTranslator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.NumeralSystemTranslator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumeralSystemTranslator[] = L"Windows.Globalization.NumberFormatting.INumeralSystemTranslator";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("28F5BC2C-8C23-4234-AD2E-FA5A3A426E9B"), exclusiveto, contract] */
                MIDL_INTERFACE("28F5BC2C-8C23-4234-AD2E-FA5A3A426E9B")
                INumeralSystemTranslator : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Languages(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResolvedLanguage(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NumeralSystem(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NumeralSystem(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE TranslateNumerals(
                        /* [in] */__RPC__in HSTRING value,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INumeralSystemTranslator=_uuidof(INumeralSystemTranslator);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumeralSystemTranslatorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.NumeralSystemTranslator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumeralSystemTranslatorFactory[] = L"Windows.Globalization.NumberFormatting.INumeralSystemTranslatorFactory";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("9630C8DA-36EF-4D88-A85C-6F0D98D620A6"), exclusiveto, contract] */
                MIDL_INTERFACE("9630C8DA-36EF-4D88-A85C-6F0D98D620A6")
                INumeralSystemTranslatorFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::NumberFormatting::INumeralSystemTranslator * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_INumeralSystemTranslatorFactory=_uuidof(INumeralSystemTranslatorFactory);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.IPercentFormatterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.PercentFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_IPercentFormatterFactory[] = L"Windows.Globalization.NumberFormatting.IPercentFormatterFactory";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("B7828AEF-FED4-4018-A6E2-E09961E03765"), exclusiveto, contract] */
                MIDL_INTERFACE("B7828AEF-FED4-4018-A6E2-E09961E03765")
                IPercentFormatterFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreatePercentFormatter(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
                        /* [in] */__RPC__in HSTRING geographicRegion,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::NumberFormatting::INumberFormatter * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPercentFormatterFactory=_uuidof(IPercentFormatterFactory);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.IPermilleFormatterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.PermilleFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_IPermilleFormatterFactory[] = L"Windows.Globalization.NumberFormatting.IPermilleFormatterFactory";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("2B37B4AC-E638-4ED5-A998-62F6B06A49AE"), exclusiveto, contract] */
                MIDL_INTERFACE("2B37B4AC-E638-4ED5-A998-62F6B06A49AE")
                IPermilleFormatterFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreatePermilleFormatter(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
                        /* [in] */__RPC__in HSTRING geographicRegion,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::NumberFormatting::INumberFormatter * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPermilleFormatterFactory=_uuidof(IPermilleFormatterFactory);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.ISignedZeroOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ISignedZeroOption[] = L"Windows.Globalization.NumberFormatting.ISignedZeroOption";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("FD1CDD31-0A3C-49C4-A642-96A1564F4F30"), contract] */
                MIDL_INTERFACE("FD1CDD31-0A3C-49C4-A642-96A1564F4F30")
                ISignedZeroOption : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsZeroSigned(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsZeroSigned(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISignedZeroOption=_uuidof(ISignedZeroOption);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.ISignificantDigitsNumberRounder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.SignificantDigitsNumberRounder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder[] = L"Windows.Globalization.NumberFormatting.ISignificantDigitsNumberRounder";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("F5941BCA-6646-4913-8C76-1B191FF94DFD"), exclusiveto, contract] */
                MIDL_INTERFACE("F5941BCA-6646-4913-8C76-1B191FF94DFD")
                ISignificantDigitsNumberRounder : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RoundingAlgorithm(
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::NumberFormatting::RoundingAlgorithm * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RoundingAlgorithm(
                        /* [in] */ABI::Windows::Globalization::NumberFormatting::RoundingAlgorithm value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SignificantDigits(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SignificantDigits(
                        /* [in] */UINT32 value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISignificantDigitsNumberRounder=_uuidof(ISignificantDigitsNumberRounder);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.ISignificantDigitsOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ISignificantDigitsOption[] = L"Windows.Globalization.NumberFormatting.ISignificantDigitsOption";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace NumberFormatting {
                /* [object, uuid("1D4DFCDD-2D43-4EE8-BBF1-C1B26A711A58"), contract] */
                MIDL_INTERFACE("1D4DFCDD-2D43-4EE8-BBF1-C1B26A711A58")
                ISignificantDigitsOption : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SignificantDigits(
                        /* [retval, out] */__RPC__out INT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SignificantDigits(
                        /* [in] */INT32 value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_ISignificantDigitsOption=_uuidof(ISignificantDigitsOption);
                
            } /* Windows */
        } /* Globalization */
    } /* NumberFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.CurrencyFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.NumberFormatting.ICurrencyFormatterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.ICurrencyFormatter ** Default Interface **
 *    Windows.Globalization.NumberFormatting.INumberParser
 *    Windows.Globalization.NumberFormatting.INumberFormatter2
 *    Windows.Globalization.NumberFormatting.INumberFormatter
 *    Windows.Globalization.NumberFormatting.INumberFormatterOptions
 *    Windows.Globalization.NumberFormatting.ICurrencyFormatter2
 *    Windows.Globalization.NumberFormatting.ISignificantDigitsOption
 *    Windows.Globalization.NumberFormatting.INumberRounderOption
 *    Windows.Globalization.NumberFormatting.ISignedZeroOption
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_CurrencyFormatter_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_CurrencyFormatter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_CurrencyFormatter[] = L"Windows.Globalization.NumberFormatting.CurrencyFormatter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.DecimalFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.NumberFormatting.IDecimalFormatterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.INumberFormatterOptions
 *    Windows.Globalization.NumberFormatting.INumberFormatter ** Default Interface **
 *    Windows.Globalization.NumberFormatting.INumberFormatter2
 *    Windows.Globalization.NumberFormatting.INumberParser
 *    Windows.Globalization.NumberFormatting.ISignificantDigitsOption
 *    Windows.Globalization.NumberFormatting.INumberRounderOption
 *    Windows.Globalization.NumberFormatting.ISignedZeroOption
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_DecimalFormatter_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_DecimalFormatter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_DecimalFormatter[] = L"Windows.Globalization.NumberFormatting.DecimalFormatter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.IncrementNumberRounder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.INumberRounder ** Default Interface **
 *    Windows.Globalization.NumberFormatting.IIncrementNumberRounder
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_IncrementNumberRounder_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_IncrementNumberRounder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_IncrementNumberRounder[] = L"Windows.Globalization.NumberFormatting.IncrementNumberRounder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.NumeralSystemTranslator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.NumberFormatting.INumeralSystemTranslatorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.INumeralSystemTranslator ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_NumeralSystemTranslator_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_NumeralSystemTranslator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_NumeralSystemTranslator[] = L"Windows.Globalization.NumberFormatting.NumeralSystemTranslator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.PercentFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.NumberFormatting.IPercentFormatterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.INumberFormatterOptions
 *    Windows.Globalization.NumberFormatting.INumberFormatter ** Default Interface **
 *    Windows.Globalization.NumberFormatting.INumberFormatter2
 *    Windows.Globalization.NumberFormatting.INumberParser
 *    Windows.Globalization.NumberFormatting.ISignificantDigitsOption
 *    Windows.Globalization.NumberFormatting.INumberRounderOption
 *    Windows.Globalization.NumberFormatting.ISignedZeroOption
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_PercentFormatter_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_PercentFormatter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_PercentFormatter[] = L"Windows.Globalization.NumberFormatting.PercentFormatter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.PermilleFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.NumberFormatting.IPermilleFormatterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.INumberFormatterOptions
 *    Windows.Globalization.NumberFormatting.INumberFormatter ** Default Interface **
 *    Windows.Globalization.NumberFormatting.INumberFormatter2
 *    Windows.Globalization.NumberFormatting.INumberParser
 *    Windows.Globalization.NumberFormatting.ISignificantDigitsOption
 *    Windows.Globalization.NumberFormatting.INumberRounderOption
 *    Windows.Globalization.NumberFormatting.ISignedZeroOption
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_PermilleFormatter_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_PermilleFormatter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_PermilleFormatter[] = L"Windows.Globalization.NumberFormatting.PermilleFormatter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.SignificantDigitsNumberRounder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.INumberRounder ** Default Interface **
 *    Windows.Globalization.NumberFormatting.ISignificantDigitsNumberRounder
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_SignificantDigitsNumberRounder_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_SignificantDigitsNumberRounder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_SignificantDigitsNumberRounder[] = L"Windows.Globalization.NumberFormatting.SignificantDigitsNumberRounder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption;

#endif // ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions
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


#if !defined(____FIReference_1___z__zint64_INTERFACE_DEFINED__)
#define ____FIReference_1___z__zint64_INTERFACE_DEFINED__

typedef interface __FIReference_1___z__zint64 __FIReference_1___z__zint64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1___z__zint64;

typedef struct __FIReference_1___z__zint64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1___z__zint64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1___z__zint64 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1___z__zint64 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1___z__zint64 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1___z__zint64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1___z__zint64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1___z__zint64 * This, /* [retval][out] */ __RPC__out __int64 *value);
    END_INTERFACE
} __FIReference_1___z__zint64Vtbl;

interface __FIReference_1___z__zint64
{
    CONST_VTBL struct __FIReference_1___z__zint64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1___z__zint64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1___z__zint64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1___z__zint64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1___z__zint64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1___z__zint64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1___z__zint64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1___z__zint64_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1___z__zint64_INTERFACE_DEFINED__


#if !defined(____FIReference_1_UINT64_INTERFACE_DEFINED__)
#define ____FIReference_1_UINT64_INTERFACE_DEFINED__

typedef interface __FIReference_1_UINT64 __FIReference_1_UINT64;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_UINT64;

typedef struct __FIReference_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT64 * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT64 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT64 * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT64 * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT64 * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT64 * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT64 * This, /* [retval][out] */ __RPC__out __int64 *value);
    END_INTERFACE
} __FIReference_1_UINT64Vtbl;

interface __FIReference_1_UINT64
{
    CONST_VTBL struct __FIReference_1_UINT64Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_UINT64_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_UINT64_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_UINT64_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_UINT64_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_UINT64_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_UINT64_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_UINT64_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_UINT64_INTERFACE_DEFINED__


#if !defined(____FIReference_1_double_INTERFACE_DEFINED__)
#define ____FIReference_1_double_INTERFACE_DEFINED__

typedef interface __FIReference_1_double __FIReference_1_double;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIReference_1_double;

typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This, 
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, /* [retval][out] */ __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;

interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIReference_1_double_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIReference_1_double_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIReference_1_double_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIReference_1_double_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIReference_1_double_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIReference_1_double_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIReference_1_double_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIReference_1_double_INTERFACE_DEFINED__







typedef enum __x_ABI_CWindows_CGlobalization_CNumberFormatting_CCurrencyFormatterMode __x_ABI_CWindows_CGlobalization_CNumberFormatting_CCurrencyFormatterMode;


typedef enum __x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm __x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm;






























/*
 *
 * Struct Windows.Globalization.NumberFormatting.CurrencyFormatterMode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGlobalization_CNumberFormatting_CCurrencyFormatterMode
{
    CurrencyFormatterMode_UseSymbol = 0,
    CurrencyFormatterMode_UseCurrencyCode = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.NumberFormatting.RoundingAlgorithm
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm
{
    RoundingAlgorithm_None = 0,
    RoundingAlgorithm_RoundDown = 1,
    RoundingAlgorithm_RoundUp = 2,
    RoundingAlgorithm_RoundTowardsZero = 3,
    RoundingAlgorithm_RoundAwayFromZero = 4,
    RoundingAlgorithm_RoundHalfDown = 5,
    RoundingAlgorithm_RoundHalfUp = 6,
    RoundingAlgorithm_RoundHalfTowardsZero = 7,
    RoundingAlgorithm_RoundHalfAwayFromZero = 8,
    RoundingAlgorithm_RoundHalfToEven = 9,
    RoundingAlgorithm_RoundHalfToOdd = 10,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.ICurrencyFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.CurrencyFormatter
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Globalization.NumberFormatting.INumberFormatterOptions
 *     Windows.Globalization.NumberFormatting.INumberFormatter
 *     Windows.Globalization.NumberFormatting.INumberFormatter2
 *     Windows.Globalization.NumberFormatting.INumberParser
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ICurrencyFormatter[] = L"Windows.Globalization.NumberFormatting.ICurrencyFormatter";
/* [object, uuid("11730CA5-4B00-41B2-B332-73B12A497D54"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Currency )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    
    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("Currency may be read-only for releases after Windows 8.1. Instead, use a new CurrencyFormatter.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [propput, deprecated] */HRESULT ( STDMETHODCALLTYPE *put_Currency )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_get_Currency(This,value) \
    ( (This)->lpVtbl->get_Currency(This,value) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("Currency may be read-only for releases after Windows 8.1. Instead, use a new CurrencyFormatter.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_put_Currency(This,value) \
    ( (This)->lpVtbl->put_Currency(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.ICurrencyFormatter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.CurrencyFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ICurrencyFormatter2[] = L"Windows.Globalization.NumberFormatting.ICurrencyFormatter2";
/* [object, uuid("072C2F1D-E7BA-4197-920E-247C92F7DEA6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CNumberFormatting_CCurrencyFormatterMode * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
        /* [in] */__x_ABI_CWindows_CGlobalization_CNumberFormatting_CCurrencyFormatterMode value
        );
    HRESULT ( STDMETHODCALLTYPE *ApplyRoundingForCurrency )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2 * This,
        /* [in] */__x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm roundingAlgorithm
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2Vtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_get_Mode(This,value) \
    ( (This)->lpVtbl->get_Mode(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_put_Mode(This,value) \
    ( (This)->lpVtbl->put_Mode(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_ApplyRoundingForCurrency(This,roundingAlgorithm) \
    ( (This)->lpVtbl->ApplyRoundingForCurrency(This,roundingAlgorithm) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.ICurrencyFormatterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.CurrencyFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ICurrencyFormatterFactory[] = L"Windows.Globalization.NumberFormatting.ICurrencyFormatterFactory";
/* [object, uuid("86C7537E-B938-4AA2-84B0-2C33DC5B1450"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCurrencyFormatterCode )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This,
        /* [in] */__RPC__in HSTRING currencyCode,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCurrencyFormatterCodeContext )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory * This,
        /* [in] */__RPC__in HSTRING currencyCode,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
        /* [in] */__RPC__in HSTRING geographicRegion,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatter * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactoryVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_CreateCurrencyFormatterCode(This,currencyCode,result) \
    ( (This)->lpVtbl->CreateCurrencyFormatterCode(This,currencyCode,result) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_CreateCurrencyFormatterCodeContext(This,currencyCode,languages,geographicRegion,result) \
    ( (This)->lpVtbl->CreateCurrencyFormatterCodeContext(This,currencyCode,languages,geographicRegion,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CICurrencyFormatterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.IDecimalFormatterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.DecimalFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_IDecimalFormatterFactory[] = L"Windows.Globalization.NumberFormatting.IDecimalFormatterFactory";
/* [object, uuid("0D018C9A-E393-46B8-B830-7A69C8F89FBB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateDecimalFormatter )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
        /* [in] */__RPC__in HSTRING geographicRegion,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactoryVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_CreateDecimalFormatter(This,languages,geographicRegion,result) \
    ( (This)->lpVtbl->CreateDecimalFormatter(This,languages,geographicRegion,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIDecimalFormatterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.IIncrementNumberRounder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.IncrementNumberRounder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_IIncrementNumberRounder[] = L"Windows.Globalization.NumberFormatting.IIncrementNumberRounder";
/* [object, uuid("70A64FF8-66AB-4155-9DA1-739E46764543"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoundingAlgorithm )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RoundingAlgorithm )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
        /* [in] */__x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Increment )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Increment )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounderVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_get_RoundingAlgorithm(This,value) \
    ( (This)->lpVtbl->get_RoundingAlgorithm(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_put_RoundingAlgorithm(This,value) \
    ( (This)->lpVtbl->put_RoundingAlgorithm(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_get_Increment(This,value) \
    ( (This)->lpVtbl->get_Increment(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_put_Increment(This,value) \
    ( (This)->lpVtbl->put_Increment(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIIncrementNumberRounder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumberFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberFormatter[] = L"Windows.Globalization.NumberFormatting.INumberFormatter";
/* [object, uuid("A5007C49-7676-4DB7-8631-1B6FF265CAA9"), contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *FormatInt )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
        /* [in] */INT64 value,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FormatUInt )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
        /* [in] */UINT64 value,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    /* [overload, default_overload] */HRESULT ( STDMETHODCALLTYPE *FormatDouble )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * This,
        /* [in] */DOUBLE value,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_FormatInt(This,value,result) \
    ( (This)->lpVtbl->FormatInt(This,value,result) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_FormatUInt(This,value,result) \
    ( (This)->lpVtbl->FormatUInt(This,value,result) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_FormatDouble(This,value,result) \
    ( (This)->lpVtbl->FormatDouble(This,value,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumberFormatter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberFormatter2[] = L"Windows.Globalization.NumberFormatting.INumberFormatter2";
/* [object, uuid("D4A8C1F0-80D0-4B0D-A89E-882C1E8F8310"), contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FormatInt )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
        /* [in] */INT64 value,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FormatUInt )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
        /* [in] */UINT64 value,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *FormatDouble )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2 * This,
        /* [in] */DOUBLE value,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2Vtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_FormatInt(This,value,result) \
    ( (This)->lpVtbl->FormatInt(This,value,result) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_FormatUInt(This,value,result) \
    ( (This)->lpVtbl->FormatUInt(This,value,result) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_FormatDouble(This,value,result) \
    ( (This)->lpVtbl->FormatDouble(This,value,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumberFormatterOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberFormatterOptions[] = L"Windows.Globalization.NumberFormatting.INumberFormatterOptions";
/* [object, uuid("80332D21-AEE1-4A39-BAA2-07ED8C96DAF6"), contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Languages )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GeographicRegion )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IntegerDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IntegerDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FractionDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FractionDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [in] */INT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsGrouped )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsGrouped )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsDecimalPointAlwaysDisplayed )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsDecimalPointAlwaysDisplayed )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResolvedLanguage )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResolvedGeographicRegion )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptionsVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_get_Languages(This,value) \
    ( (This)->lpVtbl->get_Languages(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_get_GeographicRegion(This,value) \
    ( (This)->lpVtbl->get_GeographicRegion(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_get_IntegerDigits(This,value) \
    ( (This)->lpVtbl->get_IntegerDigits(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_put_IntegerDigits(This,value) \
    ( (This)->lpVtbl->put_IntegerDigits(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_get_FractionDigits(This,value) \
    ( (This)->lpVtbl->get_FractionDigits(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_put_FractionDigits(This,value) \
    ( (This)->lpVtbl->put_FractionDigits(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_get_IsGrouped(This,value) \
    ( (This)->lpVtbl->get_IsGrouped(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_put_IsGrouped(This,value) \
    ( (This)->lpVtbl->put_IsGrouped(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_get_IsDecimalPointAlwaysDisplayed(This,value) \
    ( (This)->lpVtbl->get_IsDecimalPointAlwaysDisplayed(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_put_IsDecimalPointAlwaysDisplayed(This,value) \
    ( (This)->lpVtbl->put_IsDecimalPointAlwaysDisplayed(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_get_NumeralSystem(This,value) \
    ( (This)->lpVtbl->get_NumeralSystem(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_put_NumeralSystem(This,value) \
    ( (This)->lpVtbl->put_NumeralSystem(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_get_ResolvedLanguage(This,value) \
    ( (This)->lpVtbl->get_ResolvedLanguage(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_get_ResolvedGeographicRegion(This,value) \
    ( (This)->lpVtbl->get_ResolvedGeographicRegion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatterOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumberParser
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberParser[] = L"Windows.Globalization.NumberFormatting.INumberParser";
/* [object, uuid("E6659412-4A13-4A53-83A1-392FBE4CFF9F"), contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParserVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ParseInt )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
        /* [in] */__RPC__in HSTRING text,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1___z__zint64 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ParseUInt )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
        /* [in] */__RPC__in HSTRING text,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_UINT64 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ParseDouble )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser * This,
        /* [in] */__RPC__in HSTRING text,
        /* [retval, out] */__RPC__deref_out_opt __FIReference_1_double * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParserVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParserVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_ParseInt(This,text,result) \
    ( (This)->lpVtbl->ParseInt(This,text,result) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_ParseUInt(This,text,result) \
    ( (This)->lpVtbl->ParseUInt(This,text,result) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_ParseDouble(This,text,result) \
    ( (This)->lpVtbl->ParseDouble(This,text,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberParser_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumberRounder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberRounder[] = L"Windows.Globalization.NumberFormatting.INumberRounder";
/* [object, uuid("5473C375-38ED-4631-B80C-EF34FC48B7F5"), contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RoundInt32 )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
        /* [in] */INT32 value,
        /* [retval, out] */__RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoundUInt32 )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
        /* [in] */UINT32 value,
        /* [retval, out] */__RPC__out UINT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoundInt64 )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
        /* [in] */INT64 value,
        /* [retval, out] */__RPC__out INT64 * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoundUInt64 )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
        /* [in] */UINT64 value,
        /* [retval, out] */__RPC__out UINT64 * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoundSingle )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
        /* [in] */FLOAT value,
        /* [retval, out] */__RPC__out FLOAT * result
        );
    HRESULT ( STDMETHODCALLTYPE *RoundDouble )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * This,
        /* [in] */DOUBLE value,
        /* [retval, out] */__RPC__out DOUBLE * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_RoundInt32(This,value,result) \
    ( (This)->lpVtbl->RoundInt32(This,value,result) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_RoundUInt32(This,value,result) \
    ( (This)->lpVtbl->RoundUInt32(This,value,result) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_RoundInt64(This,value,result) \
    ( (This)->lpVtbl->RoundInt64(This,value,result) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_RoundUInt64(This,value,result) \
    ( (This)->lpVtbl->RoundUInt64(This,value,result) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_RoundSingle(This,value,result) \
    ( (This)->lpVtbl->RoundSingle(This,value,result) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_RoundDouble(This,value,result) \
    ( (This)->lpVtbl->RoundDouble(This,value,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumberRounderOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumberRounderOption[] = L"Windows.Globalization.NumberFormatting.INumberRounderOption";
/* [object, uuid("3B088433-646F-4EFE-8D48-66EB2E49E736"), contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NumberRounder )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NumberRounder )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounder * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOptionVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOptionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_get_NumberRounder(This,value) \
    ( (This)->lpVtbl->get_NumberRounder(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_put_NumberRounder(This,value) \
    ( (This)->lpVtbl->put_NumberRounder(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberRounderOption_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumeralSystemTranslator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.NumeralSystemTranslator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumeralSystemTranslator[] = L"Windows.Globalization.NumberFormatting.INumeralSystemTranslator";
/* [object, uuid("28F5BC2C-8C23-4234-AD2E-FA5A3A426E9B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Languages )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResolvedLanguage )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *TranslateNumerals )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * This,
        /* [in] */__RPC__in HSTRING value,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_get_Languages(This,value) \
    ( (This)->lpVtbl->get_Languages(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_get_ResolvedLanguage(This,value) \
    ( (This)->lpVtbl->get_ResolvedLanguage(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_get_NumeralSystem(This,value) \
    ( (This)->lpVtbl->get_NumeralSystem(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_put_NumeralSystem(This,value) \
    ( (This)->lpVtbl->put_NumeralSystem(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_TranslateNumerals(This,value,result) \
    ( (This)->lpVtbl->TranslateNumerals(This,value,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.INumeralSystemTranslatorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.NumeralSystemTranslator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_INumeralSystemTranslatorFactory[] = L"Windows.Globalization.NumberFormatting.INumeralSystemTranslatorFactory";
/* [object, uuid("9630C8DA-36EF-4D88-A85C-6F0D98D620A6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslator * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactoryVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_Create(This,languages,result) \
    ( (This)->lpVtbl->Create(This,languages,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumeralSystemTranslatorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.IPercentFormatterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.PercentFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_IPercentFormatterFactory[] = L"Windows.Globalization.NumberFormatting.IPercentFormatterFactory";
/* [object, uuid("B7828AEF-FED4-4018-A6E2-E09961E03765"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreatePercentFormatter )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
        /* [in] */__RPC__in HSTRING geographicRegion,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactoryVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_CreatePercentFormatter(This,languages,geographicRegion,result) \
    ( (This)->lpVtbl->CreatePercentFormatter(This,languages,geographicRegion,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPercentFormatterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.IPermilleFormatterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.PermilleFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_IPermilleFormatterFactory[] = L"Windows.Globalization.NumberFormatting.IPermilleFormatterFactory";
/* [object, uuid("2B37B4AC-E638-4ED5-A998-62F6B06A49AE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreatePermilleFormatter )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
        /* [in] */__RPC__in HSTRING geographicRegion,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CNumberFormatting_CINumberFormatter * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactoryVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_CreatePermilleFormatter(This,languages,geographicRegion,result) \
    ( (This)->lpVtbl->CreatePermilleFormatter(This,languages,geographicRegion,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CIPermilleFormatterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.ISignedZeroOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ISignedZeroOption[] = L"Windows.Globalization.NumberFormatting.ISignedZeroOption";
/* [object, uuid("FD1CDD31-0A3C-49C4-A642-96A1564F4F30"), contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsZeroSigned )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsZeroSigned )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOptionVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOptionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_get_IsZeroSigned(This,value) \
    ( (This)->lpVtbl->get_IsZeroSigned(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_put_IsZeroSigned(This,value) \
    ( (This)->lpVtbl->put_IsZeroSigned(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignedZeroOption_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.ISignificantDigitsNumberRounder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.NumberFormatting.SignificantDigitsNumberRounder
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ISignificantDigitsNumberRounder[] = L"Windows.Globalization.NumberFormatting.ISignificantDigitsNumberRounder";
/* [object, uuid("F5941BCA-6646-4913-8C76-1B191FF94DFD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RoundingAlgorithm )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RoundingAlgorithm )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
        /* [in] */__x_ABI_CWindows_CGlobalization_CNumberFormatting_CRoundingAlgorithm value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SignificantDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SignificantDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder * This,
        /* [in] */UINT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounderVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_get_RoundingAlgorithm(This,value) \
    ( (This)->lpVtbl->get_RoundingAlgorithm(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_put_RoundingAlgorithm(This,value) \
    ( (This)->lpVtbl->put_RoundingAlgorithm(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_get_SignificantDigits(This,value) \
    ( (This)->lpVtbl->get_SignificantDigits(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_put_SignificantDigits(This,value) \
    ( (This)->lpVtbl->put_SignificantDigits(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsNumberRounder_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.NumberFormatting.ISignificantDigitsOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_NumberFormatting_ISignificantDigitsOption[] = L"Windows.Globalization.NumberFormatting.ISignificantDigitsOption";
/* [object, uuid("1D4DFCDD-2D43-4EE8-BBF1-C1B26A711A58"), contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SignificantDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SignificantDigits )(
        __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption * This,
        /* [in] */INT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOptionVtbl;

interface __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOptionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_get_SignificantDigits(This,value) \
    ( (This)->lpVtbl->get_SignificantDigits(This,value) )

#define __x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_put_SignificantDigits(This,value) \
    ( (This)->lpVtbl->put_SignificantDigits(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CNumberFormatting_CISignificantDigitsOption_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.CurrencyFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.NumberFormatting.ICurrencyFormatterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.ICurrencyFormatter ** Default Interface **
 *    Windows.Globalization.NumberFormatting.INumberParser
 *    Windows.Globalization.NumberFormatting.INumberFormatter2
 *    Windows.Globalization.NumberFormatting.INumberFormatter
 *    Windows.Globalization.NumberFormatting.INumberFormatterOptions
 *    Windows.Globalization.NumberFormatting.ICurrencyFormatter2
 *    Windows.Globalization.NumberFormatting.ISignificantDigitsOption
 *    Windows.Globalization.NumberFormatting.INumberRounderOption
 *    Windows.Globalization.NumberFormatting.ISignedZeroOption
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_CurrencyFormatter_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_CurrencyFormatter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_CurrencyFormatter[] = L"Windows.Globalization.NumberFormatting.CurrencyFormatter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.DecimalFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.NumberFormatting.IDecimalFormatterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.INumberFormatterOptions
 *    Windows.Globalization.NumberFormatting.INumberFormatter ** Default Interface **
 *    Windows.Globalization.NumberFormatting.INumberFormatter2
 *    Windows.Globalization.NumberFormatting.INumberParser
 *    Windows.Globalization.NumberFormatting.ISignificantDigitsOption
 *    Windows.Globalization.NumberFormatting.INumberRounderOption
 *    Windows.Globalization.NumberFormatting.ISignedZeroOption
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_DecimalFormatter_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_DecimalFormatter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_DecimalFormatter[] = L"Windows.Globalization.NumberFormatting.DecimalFormatter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.IncrementNumberRounder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.INumberRounder ** Default Interface **
 *    Windows.Globalization.NumberFormatting.IIncrementNumberRounder
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_IncrementNumberRounder_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_IncrementNumberRounder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_IncrementNumberRounder[] = L"Windows.Globalization.NumberFormatting.IncrementNumberRounder";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.NumeralSystemTranslator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.NumberFormatting.INumeralSystemTranslatorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.INumeralSystemTranslator ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_NumeralSystemTranslator_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_NumeralSystemTranslator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_NumeralSystemTranslator[] = L"Windows.Globalization.NumberFormatting.NumeralSystemTranslator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.PercentFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.NumberFormatting.IPercentFormatterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.INumberFormatterOptions
 *    Windows.Globalization.NumberFormatting.INumberFormatter ** Default Interface **
 *    Windows.Globalization.NumberFormatting.INumberFormatter2
 *    Windows.Globalization.NumberFormatting.INumberParser
 *    Windows.Globalization.NumberFormatting.ISignificantDigitsOption
 *    Windows.Globalization.NumberFormatting.INumberRounderOption
 *    Windows.Globalization.NumberFormatting.ISignedZeroOption
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_PercentFormatter_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_PercentFormatter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_PercentFormatter[] = L"Windows.Globalization.NumberFormatting.PercentFormatter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.PermilleFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.NumberFormatting.IPermilleFormatterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.INumberFormatterOptions
 *    Windows.Globalization.NumberFormatting.INumberFormatter ** Default Interface **
 *    Windows.Globalization.NumberFormatting.INumberFormatter2
 *    Windows.Globalization.NumberFormatting.INumberParser
 *    Windows.Globalization.NumberFormatting.ISignificantDigitsOption
 *    Windows.Globalization.NumberFormatting.INumberRounderOption
 *    Windows.Globalization.NumberFormatting.ISignedZeroOption
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_PermilleFormatter_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_PermilleFormatter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_PermilleFormatter[] = L"Windows.Globalization.NumberFormatting.PermilleFormatter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.NumberFormatting.SignificantDigitsNumberRounder
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.NumberFormatting.INumberRounder ** Default Interface **
 *    Windows.Globalization.NumberFormatting.ISignificantDigitsNumberRounder
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_NumberFormatting_SignificantDigitsNumberRounder_DEFINED
#define RUNTIMECLASS_Windows_Globalization_NumberFormatting_SignificantDigitsNumberRounder_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_NumberFormatting_SignificantDigitsNumberRounder[] = L"Windows.Globalization.NumberFormatting.SignificantDigitsNumberRounder";
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
#endif // __windows2Eglobalization2Enumberformatting_p_h__

#endif // __windows2Eglobalization2Enumberformatting_h__
