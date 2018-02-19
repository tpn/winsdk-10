/* Header file automatically generated from windows.system.power.diagnostics.idl */
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
#ifndef __windows2Esystem2Epower2Ediagnostics_h__
#define __windows2Esystem2Epower2Ediagnostics_h__
#ifndef __windows2Esystem2Epower2Ediagnostics_p_h__
#define __windows2Esystem2Epower2Ediagnostics_p_h__


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
#ifndef ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                namespace Diagnostics {
                    interface IBackgroundEnergyDiagnosticsStatics;
                } /* Windows */
            } /* System */
        } /* Power */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics ABI::Windows::System::Power::Diagnostics::IBackgroundEnergyDiagnosticsStatics

#endif // ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                namespace Diagnostics {
                    interface IForegroundEnergyDiagnosticsStatics;
                } /* Windows */
            } /* System */
        } /* Power */
    } /* Diagnostics */} /* ABI */
#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics ABI::Windows::System::Power::Diagnostics::IForegroundEnergyDiagnosticsStatics

#endif // ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_FWD_DEFINED__














/*
 *
 * Interface Windows.System.Power.Diagnostics.IBackgroundEnergyDiagnosticsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Power.Diagnostics.BackgroundEnergyDiagnostics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_Diagnostics_IBackgroundEnergyDiagnosticsStatics[] = L"Windows.System.Power.Diagnostics.IBackgroundEnergyDiagnosticsStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                namespace Diagnostics {
                    /* [object, uuid("D7663702-D3A6-46E0-8F9B-50B95BB4F9C5"), exclusiveto, contract] */
                    MIDL_INTERFACE("D7663702-D3A6-46E0-8F9B-50B95BB4F9C5")
                    IBackgroundEnergyDiagnosticsStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceSpecificConversionFactor(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputeTotalEnergyUsage(
                            /* [retval, out] */__RPC__out UINT64 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ResetTotalEnergyUsage(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBackgroundEnergyDiagnosticsStatics=_uuidof(IBackgroundEnergyDiagnosticsStatics);
                    
                } /* Windows */
            } /* System */
        } /* Power */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Power.Diagnostics.IForegroundEnergyDiagnosticsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Power.Diagnostics.ForegroundEnergyDiagnostics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_Diagnostics_IForegroundEnergyDiagnosticsStatics[] = L"Windows.System.Power.Diagnostics.IForegroundEnergyDiagnosticsStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Power {
                namespace Diagnostics {
                    /* [object, uuid("23CA0917-CD07-4609-BE15-8FE894C5E41E"), exclusiveto, contract] */
                    MIDL_INTERFACE("23CA0917-CD07-4609-BE15-8FE894C5E41E")
                    IForegroundEnergyDiagnosticsStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceSpecificConversionFactor(
                            /* [retval, out] */__RPC__out DOUBLE * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ComputeTotalEnergyUsage(
                            /* [retval, out] */__RPC__out UINT64 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ResetTotalEnergyUsage(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IForegroundEnergyDiagnosticsStatics=_uuidof(IForegroundEnergyDiagnosticsStatics);
                    
                } /* Windows */
            } /* System */
        } /* Power */
    } /* Diagnostics */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Power.Diagnostics.BackgroundEnergyDiagnostics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Power.Diagnostics.IBackgroundEnergyDiagnosticsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Power_Diagnostics_BackgroundEnergyDiagnostics_DEFINED
#define RUNTIMECLASS_Windows_System_Power_Diagnostics_BackgroundEnergyDiagnostics_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_Diagnostics_BackgroundEnergyDiagnostics[] = L"Windows.System.Power.Diagnostics.BackgroundEnergyDiagnostics";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Power.Diagnostics.ForegroundEnergyDiagnostics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Power.Diagnostics.IForegroundEnergyDiagnosticsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Power_Diagnostics_ForegroundEnergyDiagnostics_DEFINED
#define RUNTIMECLASS_Windows_System_Power_Diagnostics_ForegroundEnergyDiagnostics_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_Diagnostics_ForegroundEnergyDiagnostics[] = L"Windows.System.Power.Diagnostics.ForegroundEnergyDiagnostics";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics;

#endif // ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics;

#endif // ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_FWD_DEFINED__













/*
 *
 * Interface Windows.System.Power.Diagnostics.IBackgroundEnergyDiagnosticsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Power.Diagnostics.BackgroundEnergyDiagnostics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_Diagnostics_IBackgroundEnergyDiagnosticsStatics[] = L"Windows.System.Power.Diagnostics.IBackgroundEnergyDiagnosticsStatics";
/* [object, uuid("D7663702-D3A6-46E0-8F9B-50B95BB4F9C5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceSpecificConversionFactor )(
        __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *ComputeTotalEnergyUsage )(
        __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    HRESULT ( STDMETHODCALLTYPE *ResetTotalEnergyUsage )(
        __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_get_DeviceSpecificConversionFactor(This,value) \
    ( (This)->lpVtbl->get_DeviceSpecificConversionFactor(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_ComputeTotalEnergyUsage(This,value) \
    ( (This)->lpVtbl->ComputeTotalEnergyUsage(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_ResetTotalEnergyUsage(This) \
    ( (This)->lpVtbl->ResetTotalEnergyUsage(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIBackgroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Power.Diagnostics.IForegroundEnergyDiagnosticsStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Power.Diagnostics.ForegroundEnergyDiagnostics
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Power_Diagnostics_IForegroundEnergyDiagnosticsStatics[] = L"Windows.System.Power.Diagnostics.IForegroundEnergyDiagnosticsStatics";
/* [object, uuid("23CA0917-CD07-4609-BE15-8FE894C5E41E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceSpecificConversionFactor )(
        __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *ComputeTotalEnergyUsage )(
        __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This,
        /* [retval, out] */__RPC__out UINT64 * value
        );
    HRESULT ( STDMETHODCALLTYPE *ResetTotalEnergyUsage )(
        __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_get_DeviceSpecificConversionFactor(This,value) \
    ( (This)->lpVtbl->get_DeviceSpecificConversionFactor(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_ComputeTotalEnergyUsage(This,value) \
    ( (This)->lpVtbl->ComputeTotalEnergyUsage(This,value) )

#define __x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_ResetTotalEnergyUsage(This) \
    ( (This)->lpVtbl->ResetTotalEnergyUsage(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CPower_CDiagnostics_CIForegroundEnergyDiagnosticsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Power.Diagnostics.BackgroundEnergyDiagnostics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Power.Diagnostics.IBackgroundEnergyDiagnosticsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Power_Diagnostics_BackgroundEnergyDiagnostics_DEFINED
#define RUNTIMECLASS_Windows_System_Power_Diagnostics_BackgroundEnergyDiagnostics_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_Diagnostics_BackgroundEnergyDiagnostics[] = L"Windows.System.Power.Diagnostics.BackgroundEnergyDiagnostics";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Power.Diagnostics.ForegroundEnergyDiagnostics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Power.Diagnostics.IForegroundEnergyDiagnosticsStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_System_Power_Diagnostics_ForegroundEnergyDiagnostics_DEFINED
#define RUNTIMECLASS_Windows_System_Power_Diagnostics_ForegroundEnergyDiagnostics_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Power_Diagnostics_ForegroundEnergyDiagnostics[] = L"Windows.System.Power.Diagnostics.ForegroundEnergyDiagnostics";
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
#endif // __windows2Esystem2Epower2Ediagnostics_p_h__

#endif // __windows2Esystem2Epower2Ediagnostics_h__
