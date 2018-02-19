/* Header file automatically generated from windows.management.deployment.preview.idl */
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
#ifndef __windows2Emanagement2Edeployment2Epreview_h__
#define __windows2Emanagement2Edeployment2Epreview_h__
#ifndef __windows2Emanagement2Edeployment2Epreview_p_h__
#define __windows2Emanagement2Edeployment2Epreview_p_h__


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

#if !defined(WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION)
#define WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION)

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
#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                namespace Preview {
                    interface IClassicAppManagerStatics;
                } /* Windows */
            } /* Management */
        } /* Deployment */
    } /* Preview */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics ABI::Windows::Management::Deployment::Preview::IClassicAppManagerStatics

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                namespace Preview {
                    interface IInstalledClassicAppInfo;
                } /* Windows */
            } /* Management */
        } /* Deployment */
    } /* Preview */} /* ABI */
#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo ABI::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_FWD_DEFINED__






namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                namespace Preview {
                    class InstalledClassicAppInfo;
                } /* Windows */
            } /* Management */
        } /* Deployment */
    } /* Preview */} /* ABI */








/*
 *
 * Interface Windows.Management.Deployment.Preview.IClassicAppManagerStatics
 *
 * Introduced to Windows.Management.Deployment.Preview.DeploymentPreviewContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.Preview.ClassicAppManager
 *
 *
 */
#if WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_Preview_IClassicAppManagerStatics[] = L"Windows.Management.Deployment.Preview.IClassicAppManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                namespace Preview {
                    /* [object, uuid("E2FAD668-882C-4F33-B035-0DF7B90D67E6"), exclusiveto, contract] */
                    MIDL_INTERFACE("E2FAD668-882C-4F33-B035-0DF7B90D67E6")
                    IClassicAppManagerStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE FindInstalledApp(
                            /* [in] */__RPC__in HSTRING appUninstallKey,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IClassicAppManagerStatics=_uuidof(IClassicAppManagerStatics);
                    
                } /* Windows */
            } /* Management */
        } /* Deployment */
    } /* Preview */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.Preview.IInstalledClassicAppInfo
 *
 * Introduced to Windows.Management.Deployment.Preview.DeploymentPreviewContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.Preview.InstalledClassicAppInfo
 *
 *
 */
#if WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo[] = L"Windows.Management.Deployment.Preview.IInstalledClassicAppInfo";
namespace ABI {
    namespace Windows {
        namespace Management {
            namespace Deployment {
                namespace Preview {
                    /* [object, uuid("0A7D3DA3-65D0-4086-80D6-0610D760207D"), exclusiveto, contract] */
                    MIDL_INTERFACE("0A7D3DA3-65D0-4086-80D6-0610D760207D")
                    IInstalledClassicAppInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayVersion(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IInstalledClassicAppInfo=_uuidof(IInstalledClassicAppInfo);
                    
                } /* Windows */
            } /* Management */
        } /* Deployment */
    } /* Preview */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Deployment.Preview.ClassicAppManager
 *
 * Introduced to Windows.Management.Deployment.Preview.DeploymentPreviewContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Management.Deployment.Preview.IClassicAppManagerStatics interface starting with version 1.0 of the Windows.Management.Deployment.Preview.DeploymentPreviewContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Management_Deployment_Preview_ClassicAppManager_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_Preview_ClassicAppManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_Preview_ClassicAppManager[] = L"Windows.Management.Deployment.Preview.ClassicAppManager";
#endif
#endif // WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Deployment.Preview.InstalledClassicAppInfo
 *
 * Introduced to Windows.Management.Deployment.Preview.DeploymentPreviewContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.Deployment.Preview.IInstalledClassicAppInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Management_Deployment_Preview_InstalledClassicAppInfo_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_Preview_InstalledClassicAppInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_Preview_InstalledClassicAppInfo[] = L"Windows.Management.Deployment.Preview.InstalledClassicAppInfo";
#endif
#endif // WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo;

#endif // ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_FWD_DEFINED__












/*
 *
 * Interface Windows.Management.Deployment.Preview.IClassicAppManagerStatics
 *
 * Introduced to Windows.Management.Deployment.Preview.DeploymentPreviewContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.Preview.ClassicAppManager
 *
 *
 */
#if WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_Preview_IClassicAppManagerStatics[] = L"Windows.Management.Deployment.Preview.IClassicAppManagerStatics";
/* [object, uuid("E2FAD668-882C-4F33-B035-0DF7B90D67E6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindInstalledApp )(
        __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
        /* [in] */__RPC__in HSTRING appUninstallKey,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStaticsVtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_FindInstalledApp(This,appUninstallKey,result) \
    ( (This)->lpVtbl->FindInstalledApp(This,appUninstallKey,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Management.Deployment.Preview.IInstalledClassicAppInfo
 *
 * Introduced to Windows.Management.Deployment.Preview.DeploymentPreviewContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.Deployment.Preview.InstalledClassicAppInfo
 *
 *
 */
#if WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo[] = L"Windows.Management.Deployment.Preview.IInstalledClassicAppInfo";
/* [object, uuid("0A7D3DA3-65D0-4086-80D6-0610D760207D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayVersion )(
        __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfoVtbl;

interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_get_DisplayName(This,value) \
    ( (This)->lpVtbl->get_DisplayName(This,value) )

#define __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_get_DisplayVersion(This,value) \
    ( (This)->lpVtbl->get_DisplayVersion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo;
#endif /* !defined(____x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Deployment.Preview.ClassicAppManager
 *
 * Introduced to Windows.Management.Deployment.Preview.DeploymentPreviewContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Management.Deployment.Preview.IClassicAppManagerStatics interface starting with version 1.0 of the Windows.Management.Deployment.Preview.DeploymentPreviewContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Management_Deployment_Preview_ClassicAppManager_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_Preview_ClassicAppManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_Preview_ClassicAppManager[] = L"Windows.Management.Deployment.Preview.ClassicAppManager";
#endif
#endif // WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Management.Deployment.Preview.InstalledClassicAppInfo
 *
 * Introduced to Windows.Management.Deployment.Preview.DeploymentPreviewContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.Deployment.Preview.IInstalledClassicAppInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Management_Deployment_Preview_InstalledClassicAppInfo_DEFINED
#define RUNTIMECLASS_Windows_Management_Deployment_Preview_InstalledClassicAppInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_Preview_InstalledClassicAppInfo[] = L"Windows.Management.Deployment.Preview.InstalledClassicAppInfo";
#endif
#endif // WINDOWS_MANAGEMENT_DEPLOYMENT_PREVIEW_DEPLOYMENTPREVIEWCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Emanagement2Edeployment2Epreview_p_h__

#endif // __windows2Emanagement2Edeployment2Epreview_h__
