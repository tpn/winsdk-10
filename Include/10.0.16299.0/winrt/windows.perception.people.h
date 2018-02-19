/* Header file automatically generated from windows.perception.people.idl */
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
#ifndef __windows2Eperception2Epeople_h__
#define __windows2Eperception2Epeople_h__
#ifndef __windows2Eperception2Epeople_p_h__
#define __windows2Eperception2Epeople_p_h__


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
#include "Windows.Foundation.Numerics.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace People {
                interface IHeadPose;
            } /* Windows */
        } /* Perception */
    } /* People */} /* ABI */
#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose ABI::Windows::Perception::People::IHeadPose

#endif // ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Numerics {
                
                typedef struct Vector3 Vector3;
                
            } /* Windows */
        } /* Foundation */
    } /* Numerics */} /* ABI */








namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace People {
                class HeadPose;
            } /* Windows */
        } /* Perception */
    } /* People */} /* ABI */






/*
 *
 * Interface Windows.Perception.People.IHeadPose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.People.HeadPose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_People_IHeadPose[] = L"Windows.Perception.People.IHeadPose";
namespace ABI {
    namespace Windows {
        namespace Perception {
            namespace People {
                /* [object, uuid("7F5AC5A5-49DB-379F-9429-32A2FAF34FA6"), exclusiveto, contract] */
                MIDL_INTERFACE("7F5AC5A5-49DB-379F-9429-32A2FAF34FA6")
                IHeadPose : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Position(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ForwardDirection(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UpDirection(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::Numerics::Vector3 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IHeadPose=_uuidof(IHeadPose);
                
            } /* Windows */
        } /* Perception */
    } /* People */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIHeadPose;
#endif /* !defined(____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.People.HeadPose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.People.IHeadPose ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_People_HeadPose_DEFINED
#define RUNTIMECLASS_Windows_Perception_People_HeadPose_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_People_HeadPose[] = L"Windows.Perception.People.HeadPose";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__
#define ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHeadPose __x_ABI_CWindows_CPerception_CPeople_CIHeadPose;

#endif // ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_FWD_DEFINED__


typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;













/*
 *
 * Interface Windows.Perception.People.IHeadPose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Interface is a part of the implementation of type Windows.Perception.People.HeadPose
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000
#if !defined(____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_People_IHeadPose[] = L"Windows.Perception.People.IHeadPose";
/* [object, uuid("7F5AC5A5-49DB-379F-9429-32A2FAF34FA6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CPerception_CPeople_CIHeadPoseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ForwardDirection )(
        __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UpDirection )(
        __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CPerception_CPeople_CIHeadPoseVtbl;

interface __x_ABI_CWindows_CPerception_CPeople_CIHeadPose
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CPeople_CIHeadPoseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_get_Position(This,value) \
    ( (This)->lpVtbl->get_Position(This,value) )

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_get_ForwardDirection(This,value) \
    ( (This)->lpVtbl->get_ForwardDirection(This,value) )

#define __x_ABI_CWindows_CPerception_CPeople_CIHeadPose_get_UpDirection(This,value) \
    ( (This)->lpVtbl->get_UpDirection(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CPeople_CIHeadPose;
#endif /* !defined(____x_ABI_CWindows_CPerception_CPeople_CIHeadPose_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000


/*
 *
 * Class Windows.Perception.People.HeadPose
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 2.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Perception.People.IHeadPose ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x20000

#ifndef RUNTIMECLASS_Windows_Perception_People_HeadPose_DEFINED
#define RUNTIMECLASS_Windows_Perception_People_HeadPose_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_People_HeadPose[] = L"Windows.Perception.People.HeadPose";
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
#endif // __windows2Eperception2Epeople_p_h__

#endif // __windows2Eperception2Epeople_h__
