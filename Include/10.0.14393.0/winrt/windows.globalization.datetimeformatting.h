

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0618 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __windows2Eglobalization2Edatetimeformatting_h__
#define __windows2Eglobalization2Edatetimeformatting_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                interface IDateTimeFormatter;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                interface IDateTimeFormatter2;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                interface IDateTimeFormatterFactory;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_FWD_DEFINED__ */


#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics;

#ifdef __cplusplus
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                interface IDateTimeFormatterStatics;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

#endif /* __cplusplus */

#endif 	/* ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_FWD_DEFINED__ */


/* header files for imported files */
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "Windows.Foundation.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0000 */
/* [local] */ 

#ifdef __cplusplus
} /*extern "C"*/ 
#endif
#include <windows.foundation.collections.h>
#ifdef __cplusplus
extern "C" {
#endif


/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0000 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0000_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting2Eidl_0000_0324 */




/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting2Eidl_0000_0324 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting2Eidl_0000_0324_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting2Eidl_0000_0324_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0001 */
/* [local] */ 

#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterator`1<String>"; }
};
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define ____FIIterator_1_HSTRING_FWD_DEFINED__
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterator_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0001 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0001_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting2Eidl_0000_0325 */




/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting2Eidl_0000_0325 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting2Eidl_0000_0325_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting2Eidl_0000_0325_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0002 */
/* [local] */ 

#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IIterable`1<String>"; }
};
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define ____FIIterable_1_HSTRING_FWD_DEFINED__
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIIterable_1_HSTRING_USE */


/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0002 */
/* [local] */ 




extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0002_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting2Eidl_0000_0326 */




/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting2Eidl_0000_0326 */




extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting2Eidl_0000_0326_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting2Eidl_0000_0326_v0_0_s_ifspec;

/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0003 */
/* [local] */ 

#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if defined(__cplusplus) && !defined(RO_NO_TEMPLATE_NAME)
} /*extern "C"*/ 
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> {
static const wchar_t* z_get_rc_name_impl() {
return L"Windows.Foundation.Collections.IVectorView`1<String>"; }
};
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define ____FIVectorView_1_HSTRING_FWD_DEFINED__
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t

/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }
extern "C" {
#endif //__cplusplus
#endif /* DEF___FIVectorView_1_HSTRING_USE */
#if defined(__cplusplus)
}
#endif // defined(__cplusplus)
#include <Windows.Foundation.h>
#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)
#if !defined(__cplusplus)
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat;


#endif /* end if !defined(__cplusplus) */


#endif
#if !defined(__cplusplus)
#if !defined(__cplusplus)

typedef enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat;


#endif /* end if !defined(__cplusplus) */


#endif




#ifdef __cplusplus
namespace ABI {
namespace Windows {
namespace Globalization {
namespace DateTimeFormatting {
class DateTimeFormatter;
} /*DateTimeFormatting*/
} /*Globalization*/
} /*Windows*/
}
#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat
    {
        DayFormat_None	= 0,
        DayFormat_Default	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat
    {
        DayOfWeekFormat_None	= 0,
        DayOfWeekFormat_Default	= 1,
        DayOfWeekFormat_Abbreviated	= 2,
        DayOfWeekFormat_Full	= 3
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat
    {
        HourFormat_None	= 0,
        HourFormat_Default	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat
    {
        MinuteFormat_None	= 0,
        MinuteFormat_Default	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat
    {
        MonthFormat_None	= 0,
        MonthFormat_Default	= 1,
        MonthFormat_Abbreviated	= 2,
        MonthFormat_Full	= 3,
        MonthFormat_Numeric	= 4
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat
    {
        SecondFormat_None	= 0,
        SecondFormat_Default	= 1
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(__cplusplus)

#if !defined(__cplusplus)
/* [v1_enum] */ 
enum __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat
    {
        YearFormat_None	= 0,
        YearFormat_Default	= 1,
        YearFormat_Abbreviated	= 2,
        YearFormat_Full	= 3
    } ;
#endif /* end if !defined(__cplusplus) */

#endif
#if !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatter[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatter";
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0003 */
/* [local] */ 


#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum DayFormat DayFormat;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum DayOfWeekFormat DayOfWeekFormat;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum HourFormat HourFormat;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum MinuteFormat MinuteFormat;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum MonthFormat MonthFormat;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum SecondFormat SecondFormat;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus

} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                typedef enum YearFormat YearFormat;
                
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif





#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                /* [v1_enum] */ 
                enum DayFormat
                    {
                        DayFormat_None	= 0,
                        DayFormat_Default	= 1
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                /* [v1_enum] */ 
                enum DayOfWeekFormat
                    {
                        DayOfWeekFormat_None	= 0,
                        DayOfWeekFormat_Default	= 1,
                        DayOfWeekFormat_Abbreviated	= 2,
                        DayOfWeekFormat_Full	= 3
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                /* [v1_enum] */ 
                enum HourFormat
                    {
                        HourFormat_None	= 0,
                        HourFormat_Default	= 1
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                /* [v1_enum] */ 
                enum MinuteFormat
                    {
                        MinuteFormat_None	= 0,
                        MinuteFormat_Default	= 1
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                /* [v1_enum] */ 
                enum MonthFormat
                    {
                        MonthFormat_None	= 0,
                        MonthFormat_Default	= 1,
                        MonthFormat_Abbreviated	= 2,
                        MonthFormat_Full	= 3,
                        MonthFormat_Numeric	= 4
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                /* [v1_enum] */ 
                enum SecondFormat
                    {
                        SecondFormat_None	= 0,
                        SecondFormat_Default	= 1
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif

#ifdef __cplusplus
} /* end extern "C" */
namespace ABI {
    namespace Windows {
        namespace Globalization {
            namespace DateTimeFormatting {
                
                /* [v1_enum] */ 
                enum YearFormat
                    {
                        YearFormat_None	= 0,
                        YearFormat_Default	= 1,
                        YearFormat_Abbreviated	= 2,
                        YearFormat_Full	= 3
                    } ;
            } /* end namespace */
        } /* end namespace */
    } /* end namespace */
} /* end namespace */

extern "C" { 
#endif



extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0003_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter */
/* [uuid][object] */ 



/* interface ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Globalization {
                namespace DateTimeFormatting {
                    
                    MIDL_INTERFACE("95EECA10-73E0-4E4B-A183-3D6AD0BA35EC")
                    IDateTimeFormatter : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Languages( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_GeographicRegion( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Calendar( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Clock( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_NumeralSystem( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propput] */ HRESULT STDMETHODCALLTYPE put_NumeralSystem( 
                            /* [in] */ __RPC__in HSTRING value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Patterns( 
                            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_Template( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE Format( 
                            /* [in] */ ABI::Windows::Foundation::DateTime value,
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *result) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IncludeYear( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Globalization::DateTimeFormatting::YearFormat *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IncludeMonth( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Globalization::DateTimeFormatting::MonthFormat *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IncludeDayOfWeek( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IncludeDay( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Globalization::DateTimeFormatting::DayFormat *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IncludeHour( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Globalization::DateTimeFormatting::HourFormat *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IncludeMinute( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Globalization::DateTimeFormatting::MinuteFormat *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_IncludeSecond( 
                            /* [out][retval] */ __RPC__out ABI::Windows::Globalization::DateTimeFormatting::SecondFormat *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ResolvedLanguage( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ResolvedGeographicRegion( 
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IDateTimeFormatter = __uuidof(IDateTimeFormatter);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Languages )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_GeographicRegion )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Calendar )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Clock )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_NumeralSystem )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_NumeralSystem )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [in] */ __RPC__in HSTRING value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Patterns )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Template )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        HRESULT ( STDMETHODCALLTYPE *Format )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CDateTime value,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *result);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeYear )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeMonth )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeDayOfWeek )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeDay )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeHour )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeMinute )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_IncludeSecond )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__out __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolvedLanguage )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ResolvedGeographicRegion )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter * This,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterVtbl;

    interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter
    {
        CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_Languages(This,value)	\
    ( (This)->lpVtbl -> get_Languages(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_GeographicRegion(This,value)	\
    ( (This)->lpVtbl -> get_GeographicRegion(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_Calendar(This,value)	\
    ( (This)->lpVtbl -> get_Calendar(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_Clock(This,value)	\
    ( (This)->lpVtbl -> get_Clock(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_NumeralSystem(This,value)	\
    ( (This)->lpVtbl -> get_NumeralSystem(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_put_NumeralSystem(This,value)	\
    ( (This)->lpVtbl -> put_NumeralSystem(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_Patterns(This,value)	\
    ( (This)->lpVtbl -> get_Patterns(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_Template(This,value)	\
    ( (This)->lpVtbl -> get_Template(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_Format(This,value,result)	\
    ( (This)->lpVtbl -> Format(This,value,result) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeYear(This,value)	\
    ( (This)->lpVtbl -> get_IncludeYear(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeMonth(This,value)	\
    ( (This)->lpVtbl -> get_IncludeMonth(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeDayOfWeek(This,value)	\
    ( (This)->lpVtbl -> get_IncludeDayOfWeek(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeDay(This,value)	\
    ( (This)->lpVtbl -> get_IncludeDay(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeHour(This,value)	\
    ( (This)->lpVtbl -> get_IncludeHour(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeMinute(This,value)	\
    ( (This)->lpVtbl -> get_IncludeMinute(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_IncludeSecond(This,value)	\
    ( (This)->lpVtbl -> get_IncludeSecond(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_ResolvedLanguage(This,value)	\
    ( (This)->lpVtbl -> get_ResolvedLanguage(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_get_ResolvedGeographicRegion(This,value)	\
    ( (This)->lpVtbl -> get_ResolvedGeographicRegion(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0004 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatter2[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatter2";
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0004 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0004_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 */
/* [uuid][object] */ 



/* interface ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter2 */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Globalization {
                namespace DateTimeFormatting {
                    
                    MIDL_INTERFACE("27C91A86-BDAA-4FD0-9E36-671D5AA5EE03")
                    IDateTimeFormatter2 : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE FormatUsingTimeZone( 
                            /* [in] */ ABI::Windows::Foundation::DateTime datetime,
                            /* [in] */ __RPC__in HSTRING timeZoneId,
                            /* [out][retval] */ __RPC__deref_out_opt HSTRING *result) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IDateTimeFormatter2 = __uuidof(IDateTimeFormatter2);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *FormatUsingTimeZone )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2 * This,
            /* [in] */ __x_ABI_CWindows_CFoundation_CDateTime datetime,
            /* [in] */ __RPC__in HSTRING timeZoneId,
            /* [out][retval] */ __RPC__deref_out_opt HSTRING *result);
        
        END_INTERFACE
    } __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2Vtbl;

    interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2
    {
        CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_FormatUsingTimeZone(This,datetime,timeZoneId,result)	\
    ( (This)->lpVtbl -> FormatUsingTimeZone(This,datetime,timeZoneId,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter2_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0005 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatterFactory[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatterFactory";
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0005 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0005_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory */
/* [uuid][object] */ 



/* interface ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatterFactory */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Globalization {
                namespace DateTimeFormatting {
                    
                    MIDL_INTERFACE("EC8D8A53-1A2E-412D-8815-3B745FB1A2A0")
                    IDateTimeFormatterFactory : public IInspectable
                    {
                    public:
                        virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatter( 
                            /* [in] */ __RPC__in HSTRING formatTemplate,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter **result) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatterLanguages( 
                            /* [in] */ __RPC__in HSTRING formatTemplate,
                            /* [in] */ __RPC__in_opt __FIIterable_1_HSTRING *languages,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter **result) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatterContext( 
                            /* [in] */ __RPC__in HSTRING formatTemplate,
                            /* [in] */ __RPC__in_opt __FIIterable_1_HSTRING *languages,
                            /* [in] */ __RPC__in HSTRING geographicRegion,
                            /* [in] */ __RPC__in HSTRING calendar,
                            /* [in] */ __RPC__in HSTRING clock,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter **result) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatterDate( 
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::YearFormat yearFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::DayFormat dayFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter **result) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatterTime( 
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::HourFormat hourFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter **result) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatterDateTimeLanguages( 
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::YearFormat yearFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::DayFormat dayFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::HourFormat hourFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat,
                            /* [in] */ __RPC__in_opt __FIIterable_1_HSTRING *languages,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter **result) = 0;
                        
                        virtual HRESULT STDMETHODCALLTYPE CreateDateTimeFormatterDateTimeContext( 
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::YearFormat yearFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::MonthFormat monthFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::DayFormat dayFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::DayOfWeekFormat dayOfWeekFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::HourFormat hourFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::MinuteFormat minuteFormat,
                            /* [in] */ ABI::Windows::Globalization::DateTimeFormatting::SecondFormat secondFormat,
                            /* [in] */ __RPC__in_opt __FIIterable_1_HSTRING *languages,
                            /* [in] */ __RPC__in HSTRING geographicRegion,
                            /* [in] */ __RPC__in HSTRING calendar,
                            /* [in] */ __RPC__in HSTRING clock,
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter **result) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IDateTimeFormatterFactory = __uuidof(IDateTimeFormatterFactory);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactoryVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatter )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
            /* [in] */ __RPC__in HSTRING formatTemplate,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterLanguages )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
            /* [in] */ __RPC__in HSTRING formatTemplate,
            /* [in] */ __RPC__in_opt __FIIterable_1_HSTRING *languages,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterContext )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
            /* [in] */ __RPC__in HSTRING formatTemplate,
            /* [in] */ __RPC__in_opt __FIIterable_1_HSTRING *languages,
            /* [in] */ __RPC__in HSTRING geographicRegion,
            /* [in] */ __RPC__in HSTRING calendar,
            /* [in] */ __RPC__in HSTRING clock,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterDate )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat yearFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat monthFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat dayFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat dayOfWeekFormat,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterTime )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat hourFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat minuteFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat secondFormat,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterDateTimeLanguages )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat yearFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat monthFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat dayFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat dayOfWeekFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat hourFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat minuteFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat secondFormat,
            /* [in] */ __RPC__in_opt __FIIterable_1_HSTRING *languages,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter **result);
        
        HRESULT ( STDMETHODCALLTYPE *CreateDateTimeFormatterDateTimeContext )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory * This,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CYearFormat yearFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMonthFormat monthFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayFormat dayFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CDayOfWeekFormat dayOfWeekFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CHourFormat hourFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CMinuteFormat minuteFormat,
            /* [in] */ __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CSecondFormat secondFormat,
            /* [in] */ __RPC__in_opt __FIIterable_1_HSTRING *languages,
            /* [in] */ __RPC__in HSTRING geographicRegion,
            /* [in] */ __RPC__in HSTRING calendar,
            /* [in] */ __RPC__in HSTRING clock,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter **result);
        
        END_INTERFACE
    } __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactoryVtbl;

    interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory
    {
        CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactoryVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatter(This,formatTemplate,result)	\
    ( (This)->lpVtbl -> CreateDateTimeFormatter(This,formatTemplate,result) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatterLanguages(This,formatTemplate,languages,result)	\
    ( (This)->lpVtbl -> CreateDateTimeFormatterLanguages(This,formatTemplate,languages,result) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatterContext(This,formatTemplate,languages,geographicRegion,calendar,clock,result)	\
    ( (This)->lpVtbl -> CreateDateTimeFormatterContext(This,formatTemplate,languages,geographicRegion,calendar,clock,result) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatterDate(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,result)	\
    ( (This)->lpVtbl -> CreateDateTimeFormatterDate(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,result) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatterTime(This,hourFormat,minuteFormat,secondFormat,result)	\
    ( (This)->lpVtbl -> CreateDateTimeFormatterTime(This,hourFormat,minuteFormat,secondFormat,result) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatterDateTimeLanguages(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,hourFormat,minuteFormat,secondFormat,languages,result)	\
    ( (This)->lpVtbl -> CreateDateTimeFormatterDateTimeLanguages(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,hourFormat,minuteFormat,secondFormat,languages,result) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_CreateDateTimeFormatterDateTimeContext(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,hourFormat,minuteFormat,secondFormat,languages,geographicRegion,calendar,clock,result)	\
    ( (This)->lpVtbl -> CreateDateTimeFormatterDateTimeContext(This,yearFormat,monthFormat,dayFormat,dayOfWeekFormat,hourFormat,minuteFormat,secondFormat,languages,geographicRegion,calendar,clock,result) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterFactory_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0006 */
/* [local] */ 

#if !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_INTERFACE_DEFINED__)
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_DateTimeFormatting_IDateTimeFormatterStatics[] = L"Windows.Globalization.DateTimeFormatting.IDateTimeFormatterStatics";
#endif /* !defined(____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_INTERFACE_DEFINED__) */


/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0006 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0006_v0_0_s_ifspec;

#ifndef ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_INTERFACE_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_INTERFACE_DEFINED__

/* interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics */
/* [uuid][object] */ 



/* interface ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatterStatics */
/* [uuid][object] */ 


EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics;

#if defined(__cplusplus) && !defined(CINTERFACE)
    } /* end extern "C" */
    namespace ABI {
        namespace Windows {
            namespace Globalization {
                namespace DateTimeFormatting {
                    
                    MIDL_INTERFACE("BFCDE7C0-DF4C-4A2E-9012-F47DAF3F1212")
                    IDateTimeFormatterStatics : public IInspectable
                    {
                    public:
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LongDate( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_LongTime( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ShortDate( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter **value) = 0;
                        
                        virtual /* [propget] */ HRESULT STDMETHODCALLTYPE get_ShortTime( 
                            /* [out][retval] */ __RPC__deref_out_opt ABI::Windows::Globalization::DateTimeFormatting::IDateTimeFormatter **value) = 0;
                        
                    };

                    extern const __declspec(selectany) IID & IID_IDateTimeFormatterStatics = __uuidof(IDateTimeFormatterStatics);

                    
                }  /* end namespace */
            }  /* end namespace */
        }  /* end namespace */
    }  /* end namespace */
    extern "C" { 
    
#else 	/* C style interface */

    typedef struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStaticsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetIids )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);
        
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LongDate )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_LongTime )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShortDate )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter **value);
        
        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_ShortTime )( 
            __RPC__in __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics * This,
            /* [out][retval] */ __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatter **value);
        
        END_INTERFACE
    } __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStaticsVtbl;

    interface __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics
    {
        CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStaticsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_get_LongDate(This,value)	\
    ( (This)->lpVtbl -> get_LongDate(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_get_LongTime(This,value)	\
    ( (This)->lpVtbl -> get_LongTime(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_get_ShortDate(This,value)	\
    ( (This)->lpVtbl -> get_ShortDate(This,value) ) 

#define __x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_get_ShortTime(This,value)	\
    ( (This)->lpVtbl -> get_ShortTime(This,value) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* ____x_ABI_CWindows_CGlobalization_CDateTimeFormatting_CIDateTimeFormatterStatics_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0007 */
/* [local] */ 

#ifndef RUNTIMECLASS_Windows_Globalization_DateTimeFormatting_DateTimeFormatter_DEFINED
#define RUNTIMECLASS_Windows_Globalization_DateTimeFormatting_DateTimeFormatter_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_DateTimeFormatting_DateTimeFormatter[] = L"Windows.Globalization.DateTimeFormatting.DateTimeFormatter";
#endif


/* interface __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0007 */
/* [local] */ 



extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eglobalization2Edatetimeformatting_0000_0007_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  HSTRING_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

unsigned long             __RPC_USER  HSTRING_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * ); 
unsigned char * __RPC_USER  HSTRING_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * ); 
void                      __RPC_USER  HSTRING_UserFree64(     __RPC__in unsigned long *, __RPC__in HSTRING * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


