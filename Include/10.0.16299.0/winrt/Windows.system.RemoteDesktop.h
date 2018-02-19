/* Header file automatically generated from windows.system.remotedesktop.idl */
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
#ifndef __windows2Esystem2Eremotedesktop_h__
#define __windows2Esystem2Eremotedesktop_h__
#ifndef __windows2Esystem2Eremotedesktop_p_h__
#define __windows2Esystem2Eremotedesktop_p_h__


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
#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                interface IInteractiveSessionStatics;
            } /* Windows */
        } /* System */
    } /* RemoteDesktop */} /* ABI */
#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics ABI::Windows::System::RemoteDesktop::IInteractiveSessionStatics

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_FWD_DEFINED__











/*
 *
 * Interface Windows.System.RemoteDesktop.IInteractiveSessionStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.InteractiveSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_IInteractiveSessionStatics[] = L"Windows.System.RemoteDesktop.IInteractiveSessionStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace RemoteDesktop {
                /* [object, uuid("60884631-DD3A-4576-9C8D-E8027618BDCE"), exclusiveto, contract] */
                MIDL_INTERFACE("60884631-DD3A-4576-9C8D-E8027618BDCE")
                IInteractiveSessionStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsRemote(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IInteractiveSessionStatics=_uuidof(IInteractiveSessionStatics);
                
            } /* Windows */
        } /* System */
    } /* RemoteDesktop */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.RemoteDesktop.InteractiveSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteDesktop.IInteractiveSessionStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_RemoteDesktop_InteractiveSession_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteDesktop_InteractiveSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteDesktop_InteractiveSession[] = L"Windows.System.RemoteDesktop.InteractiveSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics;

#endif // ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_FWD_DEFINED__










/*
 *
 * Interface Windows.System.RemoteDesktop.IInteractiveSessionStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.RemoteDesktop.InteractiveSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_RemoteDesktop_IInteractiveSessionStatics[] = L"Windows.System.RemoteDesktop.IInteractiveSessionStatics";
/* [object, uuid("60884631-DD3A-4576-9C8D-E8027618BDCE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsRemote )(
        __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_get_IsRemote(This,value) \
    ( (This)->lpVtbl->get_IsRemote(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CRemoteDesktop_CIInteractiveSessionStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.RemoteDesktop.InteractiveSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.RemoteDesktop.IInteractiveSessionStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_RemoteDesktop_InteractiveSession_DEFINED
#define RUNTIMECLASS_Windows_System_RemoteDesktop_InteractiveSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_RemoteDesktop_InteractiveSession[] = L"Windows.System.RemoteDesktop.InteractiveSession";
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
#endif // __windows2Esystem2Eremotedesktop_p_h__

#endif // __windows2Esystem2Eremotedesktop_h__
