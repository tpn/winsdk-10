/* Header file automatically generated from windows.perception.idl */
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
#ifndef __windows2Eperception_h__
#define __windows2Eperception_h__
#ifndef __windows2Eperception_p_h__
#define __windows2Eperception_p_h__


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
#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            interface IPerceptionTimestamp;
        } /* Windows */
    } /* Perception */} /* ABI */
#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp ABI::Windows::Perception::IPerceptionTimestamp

#endif // ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            interface IPerceptionTimestampHelperStatics;
        } /* Windows */
    } /* Perception */} /* ABI */
#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics ABI::Windows::Perception::IPerceptionTimestampHelperStatics

#endif // ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace Perception {
            class PerceptionTimestamp;
        } /* Windows */
    } /* Perception */} /* ABI */






/*
 *
 * Interface Windows.Perception.IPerceptionTimestamp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.PerceptionTimestamp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_IPerceptionTimestamp[] = L"Windows.Perception.IPerceptionTimestamp";
namespace ABI {
    namespace Windows {
        namespace Perception {
            /* [object, uuid("87C24804-A22E-4ADB-BA26-D78EF639BCF4"), exclusiveto, contract] */
            MIDL_INTERFACE("87C24804-A22E-4ADB-BA26-D78EF639BCF4")
            IPerceptionTimestamp : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TargetTime(
                    /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PredictionAmount(
                    /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPerceptionTimestamp=_uuidof(IPerceptionTimestamp);
            
        } /* Windows */
    } /* Perception */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CIPerceptionTimestamp;
#endif /* !defined(____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.IPerceptionTimestampHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.PerceptionTimestampHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_IPerceptionTimestampHelperStatics[] = L"Windows.Perception.IPerceptionTimestampHelperStatics";
namespace ABI {
    namespace Windows {
        namespace Perception {
            /* [object, uuid("47A611D4-A9DF-4EDC-855D-F4D339D967AC"), exclusiveto, contract] */
            MIDL_INTERFACE("47A611D4-A9DF-4EDC-855D-F4D339D967AC")
            IPerceptionTimestampHelperStatics : IInspectable
            {
                virtual HRESULT STDMETHODCALLTYPE FromHistoricalTargetTime(
                    /* [in] */ABI::Windows::Foundation::DateTime targetTime,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Perception::IPerceptionTimestamp * * value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IPerceptionTimestampHelperStatics=_uuidof(IPerceptionTimestampHelperStatics);
            
        } /* Windows */
    } /* Perception */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.PerceptionTimestamp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.IPerceptionTimestamp ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_PerceptionTimestamp_DEFINED
#define RUNTIMECLASS_Windows_Perception_PerceptionTimestamp_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_PerceptionTimestamp[] = L"Windows.Perception.PerceptionTimestamp";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.PerceptionTimestampHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.IPerceptionTimestampHelperStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_Perception_PerceptionTimestampHelper_DEFINED
#define RUNTIMECLASS_Windows_Perception_PerceptionTimestampHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_PerceptionTimestampHelper[] = L"Windows.Perception.PerceptionTimestampHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp __x_ABI_CWindows_CPerception_CIPerceptionTimestamp;

#endif // ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics;

#endif // ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_FWD_DEFINED__


typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;











/*
 *
 * Interface Windows.Perception.IPerceptionTimestamp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.PerceptionTimestamp
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_IPerceptionTimestamp[] = L"Windows.Perception.IPerceptionTimestamp";
/* [object, uuid("87C24804-A22E-4ADB-BA26-D78EF639BCF4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TargetTime )(
        __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PredictionAmount )(
        __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CIPerceptionTimestampVtbl;

interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_get_TargetTime(This,value) \
    ( (This)->lpVtbl->get_TargetTime(This,value) )

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestamp_get_PredictionAmount(This,value) \
    ( (This)->lpVtbl->get_PredictionAmount(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CIPerceptionTimestamp;
#endif /* !defined(____x_ABI_CWindows_CPerception_CIPerceptionTimestamp_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Interface Windows.Perception.IPerceptionTimestampHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.PerceptionTimestampHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_IPerceptionTimestampHelperStatics[] = L"Windows.Perception.IPerceptionTimestampHelperStatics";
/* [object, uuid("47A611D4-A9DF-4EDC-855D-F4D339D967AC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromHistoricalTargetTime )(
        __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime targetTime,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStaticsVtbl;

interface __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_FromHistoricalTargetTime(This,targetTime,value) \
    ( (This)->lpVtbl->FromHistoricalTargetTime(This,targetTime,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CPerception_CIPerceptionTimestampHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.PerceptionTimestamp
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.IPerceptionTimestamp ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_PerceptionTimestamp_DEFINED
#define RUNTIMECLASS_Windows_Perception_PerceptionTimestamp_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_PerceptionTimestamp[] = L"Windows.Perception.PerceptionTimestamp";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.PerceptionTimestampHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Perception.IPerceptionTimestampHelperStatics interface starting with version 2.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#ifndef RUNTIMECLASS_Windows_Perception_PerceptionTimestampHelper_DEFINED
#define RUNTIMECLASS_Windows_Perception_PerceptionTimestampHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_PerceptionTimestampHelper[] = L"Windows.Perception.PerceptionTimestampHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000



#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eperception_p_h__

#endif // __windows2Eperception_h__
