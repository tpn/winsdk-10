/* Header file automatically generated from windows.management.workplace.idl */
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
#ifndef __windows2Emanagement2Eworkplace_h__
#define __windows2Emanagement2Eworkplace_h__
#ifndef __windows2Emanagement2Eworkplace_p_h__
#define __windows2Emanagement2Eworkplace_p_h__


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

#if !defined(WINDOWS_MANAGEMENT_WORKPLACE_WORKPLACESETTINGSCONTRACT_VERSION)
#define WINDOWS_MANAGEMENT_WORKPLACE_WORKPLACESETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MANAGEMENT_WORKPLACE_WORKPLACESETTINGSCONTRACT_VERSION)

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
#ifndef ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Workplace {
                interface IMdmAllowPolicyStatics;
            } /* Windows */
        } /* Management */
    } /* Workplace */} /* ABI */
#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics ABI::Windows::Management::Workplace::IMdmAllowPolicyStatics

#endif // ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Workplace {
                interface IMdmPolicyStatics2;
            } /* Windows */
        } /* Management */
    } /* Workplace */} /* ABI */
#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 ABI::Windows::Management::Workplace::IMdmPolicyStatics2

#endif // ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Workplace {
                interface IWorkplaceSettingsStatics;
            } /* Windows */
        } /* Management */
    } /* Workplace */} /* ABI */
#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics ABI::Windows::Management::Workplace::IWorkplaceSettingsStatics

#endif // ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Workplace {
                
                typedef enum MessagingSyncPolicy : int MessagingSyncPolicy;
                
            } /* Windows */
        } /* Management */
    } /* Workplace */} /* ABI */











/*
 *
 * Struct Windows.Management.Workplace.MessagingSyncPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Workplace {
                /* [v1_enum, contract] */
                enum MessagingSyncPolicy : int
                {
                    MessagingSyncPolicy_Disallowed = 0,
                    MessagingSyncPolicy_Allowed = 1,
                    MessagingSyncPolicy_Required = 2,
                };
                
            } /* Windows */
        } /* Management */
    } /* Workplace */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Management.Workplace.IMdmAllowPolicyStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Workplace.MdmPolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Workplace_IMdmAllowPolicyStatics[] = L"Windows.Management.Workplace.IMdmAllowPolicyStatics";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Workplace {
                /* [object, uuid("C39709E7-741C-41F2-A4B6-314C31502586"), exclusiveto, contract] */
                MIDL_INTERFACE("C39709E7-741C-41F2-A4B6-314C31502586")
                IMdmAllowPolicyStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE IsBrowserAllowed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsCameraAllowed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsMicrosoftAccountAllowed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsStoreAllowed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMdmAllowPolicyStatics=_uuidof(IMdmAllowPolicyStatics);
                
            } /* Windows */
        } /* Management */
    } /* Workplace */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics;
#endif /* !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Workplace.IMdmPolicyStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Workplace.MdmPolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Workplace_IMdmPolicyStatics2[] = L"Windows.Management.Workplace.IMdmPolicyStatics2";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Workplace {
                /* [object, uuid("C99C7526-03D4-49F9-A993-43EFCCD265C4"), exclusiveto, contract] */
                MIDL_INTERFACE("C99C7526-03D4-49F9-A993-43EFCCD265C4")
                IMdmPolicyStatics2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetMessagingSyncPolicy(
                        /* [retval, out] */__RPC__out ABI::Windows::Management::Workplace::MessagingSyncPolicy * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMdmPolicyStatics2=_uuidof(IMdmPolicyStatics2);
                
            } /* Windows */
        } /* Management */
    } /* Workplace */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2;
#endif /* !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Management.Workplace.IWorkplaceSettingsStatics
 *
 * Introduced to Windows.Management.Workplace.WorkplaceSettingsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Workplace.WorkplaceSettings
 *
 *
 */
#if WINDOWS_MANAGEMENT_WORKPLACE_WORKPLACESETTINGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Workplace_IWorkplaceSettingsStatics[] = L"Windows.Management.Workplace.IWorkplaceSettingsStatics";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Workplace {
                /* [object, uuid("E4676FFD-2D92-4C08-BAD4-F6590B54A6D3"), exclusiveto, contract] */
                MIDL_INTERFACE("E4676FFD-2D92-4C08-BAD4-F6590B54A6D3")
                IWorkplaceSettingsStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsMicrosoftAccountOptional(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IWorkplaceSettingsStatics=_uuidof(IWorkplaceSettingsStatics);
                
            } /* Windows */
        } /* Management */
    } /* Workplace */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_MANAGEMENT_WORKPLACE_WORKPLACESETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Workplace.MdmPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Management.Workplace.IMdmPolicyStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Management.Workplace.IMdmAllowPolicyStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Management_Workplace_MdmPolicy_DEFINED
#define RUNTIMECLASS_Windows_Management_Workplace_MdmPolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Workplace_MdmPolicy[] = L"Windows.Management.Workplace.MdmPolicy";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Workplace.WorkplaceSettings
 *
 * Introduced to Windows.Management.Workplace.WorkplaceSettingsContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Management.Workplace.IWorkplaceSettingsStatics interface starting with version 1.0 of the Windows.Management.Workplace.WorkplaceSettingsContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MANAGEMENT_WORKPLACE_WORKPLACESETTINGSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Management_Workplace_WorkplaceSettings_DEFINED
#define RUNTIMECLASS_Windows_Management_Workplace_WorkplaceSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Workplace_WorkplaceSettings[] = L"Windows.Management.Workplace.WorkplaceSettings";
#endif
#endif // WINDOWS_MANAGEMENT_WORKPLACE_WORKPLACESETTINGSCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics;

#endif // ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2;

#endif // ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics;

#endif // ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CManagement_CWorkplace_CMessagingSyncPolicy __x_ABI_CWindows_CManagement_CWorkplace_CMessagingSyncPolicy;











/*
 *
 * Struct Windows.Management.Workplace.MessagingSyncPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CManagement_CWorkplace_CMessagingSyncPolicy
{
    MessagingSyncPolicy_Disallowed = 0,
    MessagingSyncPolicy_Allowed = 1,
    MessagingSyncPolicy_Required = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Management.Workplace.IMdmAllowPolicyStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Workplace.MdmPolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Workplace_IMdmAllowPolicyStatics[] = L"Windows.Management.Workplace.IMdmAllowPolicyStatics";
/* [object, uuid("C39709E7-741C-41F2-A4B6-314C31502586"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsBrowserAllowed )(
        __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsCameraAllowed )(
        __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsMicrosoftAccountAllowed )(
        __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsStoreAllowed )(
        __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStaticsVtbl;

interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_IsBrowserAllowed(This,value) \
    ( (This)->lpVtbl->IsBrowserAllowed(This,value) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_IsCameraAllowed(This,value) \
    ( (This)->lpVtbl->IsCameraAllowed(This,value) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_IsMicrosoftAccountAllowed(This,value) \
    ( (This)->lpVtbl->IsMicrosoftAccountAllowed(This,value) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_IsStoreAllowed(This,value) \
    ( (This)->lpVtbl->IsStoreAllowed(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics;
#endif /* !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Workplace.IMdmPolicyStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Workplace.MdmPolicy
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Workplace_IMdmPolicyStatics2[] = L"Windows.Management.Workplace.IMdmPolicyStatics2";
/* [object, uuid("C99C7526-03D4-49F9-A993-43EFCCD265C4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetMessagingSyncPolicy )(
        __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CManagement_CWorkplace_CMessagingSyncPolicy * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2Vtbl;

interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_GetMessagingSyncPolicy(This,value) \
    ( (This)->lpVtbl->GetMessagingSyncPolicy(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2;
#endif /* !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Management.Workplace.IWorkplaceSettingsStatics
 *
 * Introduced to Windows.Management.Workplace.WorkplaceSettingsContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Workplace.WorkplaceSettings
 *
 *
 */
#if WINDOWS_MANAGEMENT_WORKPLACE_WORKPLACESETTINGSCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Workplace_IWorkplaceSettingsStatics[] = L"Windows.Management.Workplace.IWorkplaceSettingsStatics";
/* [object, uuid("E4676FFD-2D92-4C08-BAD4-F6590B54A6D3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsMicrosoftAccountOptional )(
        __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStaticsVtbl;

interface __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_get_IsMicrosoftAccountOptional(This,value) \
    ( (This)->lpVtbl->get_IsMicrosoftAccountOptional(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics;
#endif /* !defined(____x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_MANAGEMENT_WORKPLACE_WORKPLACESETTINGSCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Workplace.MdmPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Management.Workplace.IMdmPolicyStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Management.Workplace.IMdmAllowPolicyStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Management_Workplace_MdmPolicy_DEFINED
#define RUNTIMECLASS_Windows_Management_Workplace_MdmPolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Workplace_MdmPolicy[] = L"Windows.Management.Workplace.MdmPolicy";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Workplace.WorkplaceSettings
 *
 * Introduced to Windows.Management.Workplace.WorkplaceSettingsContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Management.Workplace.IWorkplaceSettingsStatics interface starting with version 1.0 of the Windows.Management.Workplace.WorkplaceSettingsContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MANAGEMENT_WORKPLACE_WORKPLACESETTINGSCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Management_Workplace_WorkplaceSettings_DEFINED
#define RUNTIMECLASS_Windows_Management_Workplace_WorkplaceSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Workplace_WorkplaceSettings[] = L"Windows.Management.Workplace.WorkplaceSettings";
#endif
#endif // WINDOWS_MANAGEMENT_WORKPLACE_WORKPLACESETTINGSCONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Emanagement2Eworkplace_p_h__

#endif // __windows2Emanagement2Eworkplace_h__
