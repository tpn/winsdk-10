/* Header file automatically generated from windows.data.html.idl */
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
#ifndef __windows2Edata2Ehtml_h__
#define __windows2Edata2Ehtml_h__
#ifndef __windows2Edata2Ehtml_p_h__
#define __windows2Edata2Ehtml_p_h__


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
#ifndef ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Html {
                interface IHtmlUtilities;
            } /* Windows */
        } /* Data */
    } /* Html */} /* ABI */
#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities ABI::Windows::Data::Html::IHtmlUtilities

#endif // ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_FWD_DEFINED__











/*
 *
 * Interface Windows.Data.Html.IHtmlUtilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Html.HtmlUtilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Html_IHtmlUtilities[] = L"Windows.Data.Html.IHtmlUtilities";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Html {
                /* [object, uuid("FEC00ADD-2399-4FAC-B5A7-05E9ACD7181D"), exclusiveto, contract] */
                MIDL_INTERFACE("FEC00ADD-2399-4FAC-B5A7-05E9ACD7181D")
                IHtmlUtilities : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE ConvertToText(
                        /* [in] */__RPC__in HSTRING html,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * text
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHtmlUtilities=_uuidof(IHtmlUtilities);
                
            } /* Windows */
        } /* Data */
    } /* Html */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CHtml_CIHtmlUtilities;
#endif /* !defined(____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Html.HtmlUtilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Html.IHtmlUtilities interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Data_Html_HtmlUtilities_DEFINED
#define RUNTIMECLASS_Windows_Data_Html_HtmlUtilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Html_HtmlUtilities[] = L"Windows.Data.Html.HtmlUtilities";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities;

#endif // ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_FWD_DEFINED__










/*
 *
 * Interface Windows.Data.Html.IHtmlUtilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Html.HtmlUtilities
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Html_IHtmlUtilities[] = L"Windows.Data.Html.IHtmlUtilities";
/* [object, uuid("FEC00ADD-2399-4FAC-B5A7-05E9ACD7181D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CHtml_CIHtmlUtilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ConvertToText )(
        __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
        /* [in] */__RPC__in HSTRING html,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * text
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CHtml_CIHtmlUtilitiesVtbl;

interface __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CHtml_CIHtmlUtilitiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_ConvertToText(This,html,text) \
    ( (This)->lpVtbl->ConvertToText(This,html,text) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CHtml_CIHtmlUtilities;
#endif /* !defined(____x_ABI_CWindows_CData_CHtml_CIHtmlUtilities_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Html.HtmlUtilities
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Html.IHtmlUtilities interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Data_Html_HtmlUtilities_DEFINED
#define RUNTIMECLASS_Windows_Data_Html_HtmlUtilities_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Html_HtmlUtilities[] = L"Windows.Data.Html.HtmlUtilities";
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
#endif // __windows2Edata2Ehtml_p_h__

#endif // __windows2Edata2Ehtml_h__
