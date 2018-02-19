/* Header file automatically generated from windows.globalization.datetimeformatting.idl */
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
#ifndef __windows2Eglobalization2Edatetimeformatting_h__
#define __windows2Eglobalization2Edatetimeformatting_h__
#ifndef __windows2Eglobalization2Edatetimeformatting_p_h__
#define __windows2Eglobalization2Edatetimeformatting_p_h__


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
#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                interface IDateTimeFormatter;
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter

#endif // ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                interface IDateTimeFormatter2;
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2

#endif // ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                interface IDateTimeFormatterFactory;
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatterFactory

#endif // ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                interface IDateTimeFormatterStatics;
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatterStatics

#endif // ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_FWD_DEFINED__

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





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum DayFormat : int DayFormat;
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum DayOfWeekFormat : int DayOfWeekFormat;
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum HourFormat : int HourFormat;
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum MinuteFormat : int MinuteFormat;
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum MonthFormat : int MonthFormat;
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum SecondFormat : int SecondFormat;
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum YearFormat : int YearFormat;
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                class DateTimeFormatter;
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */






/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.DayFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                /* [v1_enum, contract] */
                enum DayFormat : int
                {
                    DayFormat_None = 0,
                    DayFormat_Default = 1,
                };
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.DayOfWeekFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                /* [v1_enum, contract] */
                enum DayOfWeekFormat : int
                {
                    DayOfWeekFormat_None = 0,
                    DayOfWeekFormat_Default = 1,
                    DayOfWeekFormat_Abbreviated = 2,
                    DayOfWeekFormat_Full = 3,
                };
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.HourFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                /* [v1_enum, contract] */
                enum HourFormat : int
                {
                    HourFormat_None = 0,
                    HourFormat_Default = 1,
                };
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.MinuteFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                /* [v1_enum, contract] */
                enum MinuteFormat : int
                {
                    MinuteFormat_None = 0,
                    MinuteFormat_Default = 1,
                };
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.MonthFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                /* [v1_enum, contract] */
                enum MonthFormat : int
                {
                    MonthFormat_None = 0,
                    MonthFormat_Default = 1,
                    MonthFormat_Abbreviated = 2,
                    MonthFormat_Full = 3,
                    MonthFormat_Numeric = 4,
                };
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.SecondFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                /* [v1_enum, contract] */
                enum SecondFormat : int
                {
                    SecondFormat_None = 0,
                    SecondFormat_Default = 1,
                };
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.YearFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                /* [v1_enum, contract] */
                enum YearFormat : int
                {
                    YearFormat_None = 0,
                    YearFormat_Default = 1,
                    YearFormat_Abbreviated = 2,
                    YearFormat_Full = 3,
                };
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.DateTimeFormatting.IDateTimeFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.DateTimeFormatting.DateTimeFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatter[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatter";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                /* [object, uuid("95EECA10-73E0-4E4B-A183-3D6AD0BA35EC"), exclusiveto, contract] */
                MIDL_INTERFACE("95EECA10-73E0-4E4B-A183-3D6AD0BA35EC")
                IDateTimeFormatter : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Languages(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_GeographicRegion(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Calendar(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Clock(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NumeralSystem(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NumeralSystem(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Patterns(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Template(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Format(
                        /* [in] */ABI::Windows::Foundation::DateTime value,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncludeYear(
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::DateTimeFormatting::YearFormat * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncludeMonth(
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::DateTimeFormatting::MonthFormat * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncludeDayOfWeek(
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncludeDay(
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::DateTimeFormatting::DayFormat * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncludeHour(
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::DateTimeFormatting::HourFormat * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncludeMinute(
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::DateTimeFormatting::MinuteFormat * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncludeSecond(
                        /* [retval, out] */__RPC__out ABI::Windows::Globalization::DateTimeFormatting::SecondFormat * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResolvedLanguage(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResolvedGeographicRegion(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDateTimeFormatter=_uuidof(IDateTimeFormatter);
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.DateTimeFormatting.IDateTimeFormatter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.DateTimeFormatting.DateTimeFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatter2[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatter2";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                /* [object, uuid("27C91A86-BDAA-4FD0-9E36-671D5AA5EE03"), exclusiveto, contract] */
                MIDL_INTERFACE("27C91A86-BDAA-4FD0-9E36-671D5AA5EE03")
                IDateTimeFormatter2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE FormatUsingTimeZone(
                        /* [in] */ABI::Windows::Foundation::DateTime datetime,
                        /* [in] */__RPC__in HSTRING timeZoneId,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDateTimeFormatter2=_uuidof(IDateTimeFormatter2);
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.DateTimeFormatting.IDateTimeFormatterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.DateTimeFormatting.DateTimeFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatterFactory[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatterFactory";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                /* [object, uuid("EC8D8A53-1A2E-412D-8815-3B745FB1A2A0"), exclusiveto, contract] */
                MIDL_INTERFACE("EC8D8A53-1A2E-412D-8815-3B745FB1A2A0")
                IDateTimeFormatterFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatter(
                        /* [in] */__RPC__in HSTRING formatTemplate,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatterLanguages(
                        /* [in] */__RPC__in HSTRING formatTemplate,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatterContext(
                        /* [in] */__RPC__in HSTRING formatTemplate,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
                        /* [in] */__RPC__in HSTRING geographicRegion,
                        /* [in] */__RPC__in HSTRING calendar,
                        /* [in] */__RPC__in HSTRING clock,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatterDate(
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::YearFormat yearFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::DayFormat dayFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatterTime(
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::HourFormat hourFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatterDateTimeLanguages(
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::YearFormat yearFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::DayFormat dayFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::HourFormat hourFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatterDateTimeContext(
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::YearFormat yearFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::DayFormat dayFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::HourFormat hourFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat,
                        /* [in] */ABI::Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
                        /* [in] */__RPC__in HSTRING geographicRegion,
                        /* [in] */__RPC__in HSTRING calendar,
                        /* [in] */__RPC__in HSTRING clock,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDateTimeFormatterFactory=_uuidof(IDateTimeFormatterFactory);
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.DateTimeFormatting.IDateTimeFormatterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.DateTimeFormatting.DateTimeFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatterStatics[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatterStatics";
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                /* [object, uuid("BFCDE7C0-DF4C-4A2E-9012-F47DAF3F1212"), exclusiveto, contract] */
                MIDL_INTERFACE("BFCDE7C0-DF4C-4A2E-9012-F47DAF3F1212")
                IDateTimeFormatterStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LongDate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LongTime(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShortDate(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShortTime(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IDateTimeFormatterStatics=_uuidof(IDateTimeFormatterStatics);
                
            } /* Windows */
        } /* Globalization */
    } /* DateTimeFormatting */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.DateTimeFormatting.DateTimeFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.DateTimeFormatting.IDateTimeFormatterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Globalization.DateTimeFormatting.IDateTimeFormatterStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.DateTimeFormatting.IDateTimeFormatter ** Default Interface **
 *    Windows.Globalization.DateTimeFormatting.IDateTimeFormatter2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_DateTimeFormatting_DateTimeFormatter_DEFINED
#define RUNTIMECLASS_Windows_Globalization_DateTimeFormatting_DateTimeFormatter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_DateTimeFormatting_DateTimeFormatter[] = L"Windows.Globalization.DateTimeFormatting.DateTimeFormatter";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter;

#endif // ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2;

#endif // ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory;

#endif // ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics;

#endif // ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_FWD_DEFINED__

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




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;





typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat;


typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat;


typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat;


typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat;


typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat;


typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat;


typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat;










/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.DayFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat
{
    DayFormat_None = 0,
    DayFormat_Default = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.DayOfWeekFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat
{
    DayOfWeekFormat_None = 0,
    DayOfWeekFormat_Default = 1,
    DayOfWeekFormat_Abbreviated = 2,
    DayOfWeekFormat_Full = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.HourFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat
{
    HourFormat_None = 0,
    HourFormat_Default = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.MinuteFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat
{
    MinuteFormat_None = 0,
    MinuteFormat_Default = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.MonthFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat
{
    MonthFormat_None = 0,
    MonthFormat_Default = 1,
    MonthFormat_Abbreviated = 2,
    MonthFormat_Full = 3,
    MonthFormat_Numeric = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.SecondFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat
{
    SecondFormat_None = 0,
    SecondFormat_Default = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Globalization.DateTimeFormatting.YearFormat
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat
{
    YearFormat_None = 0,
    YearFormat_Default = 1,
    YearFormat_Abbreviated = 2,
    YearFormat_Full = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.DateTimeFormatting.IDateTimeFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.DateTimeFormatting.DateTimeFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatter[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatter";
/* [object, uuid("95EECA10-73E0-4E4B-A183-3D6AD0BA35EC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Languages )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_GeographicRegion )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Calendar )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Clock )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NumeralSystem )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Patterns )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Template )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *Format )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncludeYear )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncludeMonth )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncludeDayOfWeek )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncludeDay )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncludeHour )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncludeMinute )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncludeSecond )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResolvedLanguage )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResolvedGeographicRegion )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterVtbl;

interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_Languages(This,value) \
    ( (This)->lpVtbl->get_Languages(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_GeographicRegion(This,value) \
    ( (This)->lpVtbl->get_GeographicRegion(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_Calendar(This,value) \
    ( (This)->lpVtbl->get_Calendar(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_Clock(This,value) \
    ( (This)->lpVtbl->get_Clock(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_NumeralSystem(This,value) \
    ( (This)->lpVtbl->get_NumeralSystem(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_put_NumeralSystem(This,value) \
    ( (This)->lpVtbl->put_NumeralSystem(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_Patterns(This,value) \
    ( (This)->lpVtbl->get_Patterns(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_Template(This,value) \
    ( (This)->lpVtbl->get_Template(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_Format(This,value,result) \
    ( (This)->lpVtbl->Format(This,value,result) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeYear(This,value) \
    ( (This)->lpVtbl->get_IncludeYear(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeMonth(This,value) \
    ( (This)->lpVtbl->get_IncludeMonth(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeDayOfWeek(This,value) \
    ( (This)->lpVtbl->get_IncludeDayOfWeek(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeDay(This,value) \
    ( (This)->lpVtbl->get_IncludeDay(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeHour(This,value) \
    ( (This)->lpVtbl->get_IncludeHour(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeMinute(This,value) \
    ( (This)->lpVtbl->get_IncludeMinute(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeSecond(This,value) \
    ( (This)->lpVtbl->get_IncludeSecond(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_ResolvedLanguage(This,value) \
    ( (This)->lpVtbl->get_ResolvedLanguage(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_ResolvedGeographicRegion(This,value) \
    ( (This)->lpVtbl->get_ResolvedGeographicRegion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.DateTimeFormatting.IDateTimeFormatter2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.DateTimeFormatting.DateTimeFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatter2[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatter2";
/* [object, uuid("27C91A86-BDAA-4FD0-9E36-671D5AA5EE03"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *FormatUsingTimeZone )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime datetime,
        /* [in] */__RPC__in HSTRING timeZoneId,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2Vtbl;

interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_FormatUsingTimeZone(This,datetime,timeZoneId,result) \
    ( (This)->lpVtbl->FormatUsingTimeZone(This,datetime,timeZoneId,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.DateTimeFormatting.IDateTimeFormatterFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.DateTimeFormatting.DateTimeFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatterFactory[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatterFactory";
/* [object, uuid("EC8D8A53-1A2E-412D-8815-3B745FB1A2A0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatter )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
        /* [in] */__RPC__in HSTRING formatTemplate,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterLanguages )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
        /* [in] */__RPC__in HSTRING formatTemplate,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterContext )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
        /* [in] */__RPC__in HSTRING formatTemplate,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
        /* [in] */__RPC__in HSTRING geographicRegion,
        /* [in] */__RPC__in HSTRING calendar,
        /* [in] */__RPC__in HSTRING clock,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterDate )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat yearFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat monthFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat dayFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat dayOfWeekFormat,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterTime )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat hourFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat minuteFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat secondFormat,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterDateTimeLanguages )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat yearFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat monthFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat dayFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat dayOfWeekFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat hourFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat minuteFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat secondFormat,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterDateTimeContext )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat yearFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat monthFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat dayFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat dayOfWeekFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat hourFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat minuteFormat,
        /* [in] */__x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat secondFormat,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * languages,
        /* [in] */__RPC__in HSTRING geographicRegion,
        /* [in] */__RPC__in HSTRING calendar,
        /* [in] */__RPC__in HSTRING clock,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactoryVtbl;

interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatter(This,formatTemplate,result) \
    ( (This)->lpVtbl->CreateDateTimeFormatter(This,formatTemplate,result) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatterLanguages(This,formatTemplate,languages,result) \
    ( (This)->lpVtbl->CreateDateTimeFormatterLanguages(This,formatTemplate,languages,result) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatterContext(This,formatTemplate,languages,geographicRegion,calendar,clock,result) \
    ( (This)->lpVtbl->CreateDateTimeFormatterContext(This,formatTemplate,languages,geographicRegion,calendar,clock,result) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatterDate(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,result) \
    ( (This)->lpVtbl->CreateDateTimeFormatterDate(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,result) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatterTime(This,hourFormat,minuteFormat,secondFormat,result) \
    ( (This)->lpVtbl->CreateDateTimeFormatterTime(This,hourFormat,minuteFormat,secondFormat,result) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatterDateTimeLanguages(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,hourFormat,minuteFormat,secondFormat,languages,result) \
    ( (This)->lpVtbl->CreateDateTimeFormatterDateTimeLanguages(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,hourFormat,minuteFormat,secondFormat,languages,result) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatterDateTimeContext(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,hourFormat,minuteFormat,secondFormat,languages,geographicRegion,calendar,clock,result) \
    ( (This)->lpVtbl->CreateDateTimeFormatterDateTimeContext(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,hourFormat,minuteFormat,secondFormat,languages,geographicRegion,calendar,clock,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Globalization.DateTimeFormatting.IDateTimeFormatterStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Globalization.DateTimeFormatting.DateTimeFormatter
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatterStatics[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatterStatics";
/* [object, uuid("BFCDE7C0-DF4C-4A2E-9012-F47DAF3F1212"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LongDate )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LongTime )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShortDate )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShortTime )(
        __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStaticsVtbl;

interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_get_LongDate(This,value) \
    ( (This)->lpVtbl->get_LongDate(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_get_LongTime(This,value) \
    ( (This)->lpVtbl->get_LongTime(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_get_ShortDate(This,value) \
    ( (This)->lpVtbl->get_ShortDate(This,value) )

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_get_ShortTime(This,value) \
    ( (This)->lpVtbl->get_ShortTime(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics;
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Globalization.DateTimeFormatting.DateTimeFormatter
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Globalization.DateTimeFormatting.IDateTimeFormatterFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Globalization.DateTimeFormatting.IDateTimeFormatterStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Globalization.DateTimeFormatting.IDateTimeFormatter ** Default Interface **
 *    Windows.Globalization.DateTimeFormatting.IDateTimeFormatter2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Globalization_DateTimeFormatting_DateTimeFormatter_DEFINED
#define RUNTIMECLASS_Windows_Globalization_DateTimeFormatting_DateTimeFormatter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_DateTimeFormatting_DateTimeFormatter[] = L"Windows.Globalization.DateTimeFormatting.DateTimeFormatter";
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
#endif // __windows2Eglobalization2Edatetimeformatting_p_h__

#endif // __windows2Eglobalization2Edatetimeformatting_h__
