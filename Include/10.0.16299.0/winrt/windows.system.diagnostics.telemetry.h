/* Header file automatically generated from windows.system.diagnostics.telemetry.idl */
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
#ifndef __windows2Esystem2Ediagnostics2Etelemetry_h__
#define __windows2Esystem2Ediagnostics2Etelemetry_h__
#ifndef __windows2Esystem2Ediagnostics2Etelemetry_p_h__
#define __windows2Esystem2Ediagnostics2Etelemetry_p_h__


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
#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    interface IPlatformTelemetryClientStatics;
                } /* Windows */
            } /* System */
        } /* Diagnostics */
    } /* Telemetry */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryClientStatics

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    interface IPlatformTelemetryRegistrationResult;
                } /* Windows */
            } /* System */
        } /* Diagnostics */
    } /* Telemetry */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    interface IPlatformTelemetryRegistrationSettings;
                } /* Windows */
            } /* System */
        } /* Diagnostics */
    } /* Telemetry */} /* ABI */
#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    
                    typedef enum PlatformTelemetryRegistrationStatus : int PlatformTelemetryRegistrationStatus;
                    
                } /* Windows */
            } /* System */
        } /* Diagnostics */
    } /* Telemetry */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    class PlatformTelemetryRegistrationResult;
                } /* Windows */
            } /* System */
        } /* Diagnostics */
    } /* Telemetry */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    class PlatformTelemetryRegistrationSettings;
                } /* Windows */
            } /* System */
        } /* Diagnostics */
    } /* Telemetry */} /* ABI */







/*
 *
 * Struct Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    /* [v1_enum, contract] */
                    enum PlatformTelemetryRegistrationStatus : int
                    {
                        PlatformTelemetryRegistrationStatus_Success = 0,
                        PlatformTelemetryRegistrationStatus_SettingsOutOfRange = 1,
                        PlatformTelemetryRegistrationStatus_UnknownFailure = 2,
                    };
                    
                } /* Windows */
            } /* System */
        } /* Diagnostics */
    } /* Telemetry */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.Telemetry.IPlatformTelemetryClientStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.Telemetry.PlatformTelemetryClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryClientStatics[] = L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryClientStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    /* [object, uuid("9BF3F25D-D5C3-4EEA-8DBE-9C8DBB0D9D8F"), exclusiveto, contract] */
                    MIDL_INTERFACE("9BF3F25D-D5C3-4EEA-8DBE-9C8DBB0D9D8F")
                    IPlatformTelemetryClientStatics : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE Register(
                            /* [in] */__RPC__in HSTRING id,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult * * result
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE RegisterWithSettings(
                            /* [in] */__RPC__in HSTRING id,
                            /* [in] */__RPC__in_opt ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationSettings * settings,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Diagnostics::Telemetry::IPlatformTelemetryRegistrationResult * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlatformTelemetryClientStatics=_uuidof(IPlatformTelemetryClientStatics);
                    
                } /* Windows */
            } /* System */
        } /* Diagnostics */
    } /* Telemetry */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationResult[] = L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationResult";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    /* [object, uuid("4D8518AB-2292-49BD-A15A-3D71D2145112"), exclusiveto, contract] */
                    MIDL_INTERFACE("4D8518AB-2292-49BD-A15A-3D71D2145112")
                    IPlatformTelemetryRegistrationResult : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                            /* [retval, out] */__RPC__out ABI::Windows::System::Diagnostics::Telemetry::PlatformTelemetryRegistrationStatus * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlatformTelemetryRegistrationResult=_uuidof(IPlatformTelemetryRegistrationResult);
                    
                } /* Windows */
            } /* System */
        } /* Diagnostics */
    } /* Telemetry */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationSettings[] = L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationSettings";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Diagnostics {
                namespace Telemetry {
                    /* [object, uuid("819A8582-CA19-415E-BB79-9C224BFA3A73"), exclusiveto, contract] */
                    MIDL_INTERFACE("819A8582-CA19-415E-BB79-9C224BFA3A73")
                    IPlatformTelemetryRegistrationSettings : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StorageSize(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StorageSize(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UploadQuotaSize(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UploadQuotaSize(
                            /* [in] */UINT32 value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPlatformTelemetryRegistrationSettings=_uuidof(IPlatformTelemetryRegistrationSettings);
                    
                } /* Windows */
            } /* System */
        } /* Diagnostics */
    } /* Telemetry */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.Telemetry.PlatformTelemetryClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Diagnostics.Telemetry.IPlatformTelemetryClientStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryClient_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryClient_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_Telemetry_PlatformTelemetryClient[] = L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryClient";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationResult_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationResult[] = L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationSettings_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationSettings[] = L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings;

#endif // ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CPlatformTelemetryRegistrationStatus __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CPlatformTelemetryRegistrationStatus;












/*
 *
 * Struct Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CPlatformTelemetryRegistrationStatus
{
    PlatformTelemetryRegistrationStatus_Success = 0,
    PlatformTelemetryRegistrationStatus_SettingsOutOfRange = 1,
    PlatformTelemetryRegistrationStatus_UnknownFailure = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.Telemetry.IPlatformTelemetryClientStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.Telemetry.PlatformTelemetryClient
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryClientStatics[] = L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryClientStatics";
/* [object, uuid("9BF3F25D-D5C3-4EEA-8DBE-9C8DBB0D9D8F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *Register )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
        /* [in] */__RPC__in HSTRING id,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *RegisterWithSettings )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
        /* [in] */__RPC__in HSTRING id,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * settings,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_Register(This,id,result) \
    ( (This)->lpVtbl->Register(This,id,result) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_RegisterWithSettings(This,id,settings,result) \
    ( (This)->lpVtbl->RegisterWithSettings(This,id,settings,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationResult[] = L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationResult";
/* [object, uuid("4D8518AB-2292-49BD-A15A-3D71D2145112"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CPlatformTelemetryRegistrationStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResultVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationSettings[] = L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationSettings";
/* [object, uuid("819A8582-CA19-415E-BB79-9C224BFA3A73"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StorageSize )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StorageSize )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UploadQuotaSize )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UploadQuotaSize )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
        /* [in] */UINT32 value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettingsVtbl;

interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_get_StorageSize(This,value) \
    ( (This)->lpVtbl->get_StorageSize(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_put_StorageSize(This,value) \
    ( (This)->lpVtbl->put_StorageSize(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_get_UploadQuotaSize(This,value) \
    ( (This)->lpVtbl->get_UploadQuotaSize(This,value) )

#define __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_put_UploadQuotaSize(This,value) \
    ( (This)->lpVtbl->put_UploadQuotaSize(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings;
#endif /* !defined(____x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.Telemetry.PlatformTelemetryClient
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Diagnostics.Telemetry.IPlatformTelemetryClientStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryClient_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryClient_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_Telemetry_PlatformTelemetryClient[] = L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryClient";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationResult_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationResult[] = L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationSettings_DEFINED
#define RUNTIMECLASS_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationSettings[] = L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Esystem2Ediagnostics2Etelemetry_p_h__

#endif // __windows2Esystem2Ediagnostics2Etelemetry_h__
