/* Header file automatically generated from windows.applicationmodel.resources.idl */
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
#ifndef __windows2Eapplicationmodel2Eresources_h__
#define __windows2Eapplicationmodel2Eresources_h__
#ifndef __windows2Eapplicationmodel2Eresources_p_h__
#define __windows2Eapplicationmodel2Eresources_p_h__


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
#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                interface IResourceLoader;
            } /* Windows */
        } /* ApplicationModel */
    } /* Resources */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader ABI::Windows::ApplicationModel::Resources::IResourceLoader

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                interface IResourceLoader2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Resources */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 ABI::Windows::ApplicationModel::Resources::IResourceLoader2

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                interface IResourceLoaderFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Resources */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory ABI::Windows::ApplicationModel::Resources::IResourceLoaderFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                interface IResourceLoaderStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* Resources */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics ABI::Windows::ApplicationModel::Resources::IResourceLoaderStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                interface IResourceLoaderStatics2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Resources */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 ABI::Windows::ApplicationModel::Resources::IResourceLoaderStatics2

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_FWD_DEFINED__



namespace ABI {
    namespace Windows {
        namespace Foundation {
            class Uri;
        } /* Windows */
    } /* Foundation */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IUriRuntimeClass;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIUriRuntimeClass ABI::Windows::Foundation::IUriRuntimeClass

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__









namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                class ResourceLoader;
            } /* Windows */
        } /* ApplicationModel */
    } /* Resources */} /* ABI */






/*
 *
 * Interface Windows.ApplicationModel.Resources.IResourceLoader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.ResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoader[] = L"Windows.ApplicationModel.Resources.IResourceLoader";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                /* [object, uuid("08524908-16EF-45AD-A602-293637D7E61A"), exclusiveto, contract] */
                MIDL_INTERFACE("08524908-16EF-45AD-A602-293637D7E61A")
                IResourceLoader : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetString(
                        /* [in] */__RPC__in HSTRING resource,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IResourceLoader=_uuidof(IResourceLoader);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Resources */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.IResourceLoader2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.ResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoader2[] = L"Windows.ApplicationModel.Resources.IResourceLoader2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                /* [object, uuid("10EB6EC6-8138-48C1-BC65-E1F14207367C"), exclusiveto, contract] */
                MIDL_INTERFACE("10EB6EC6-8138-48C1-BC65-E1F14207367C")
                IResourceLoader2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetStringForUri(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IResourceLoader2=_uuidof(IResourceLoader2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Resources */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.IResourceLoaderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.ResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoaderFactory[] = L"Windows.ApplicationModel.Resources.IResourceLoaderFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                /* [object, uuid("C33A3603-69DC-4285-A077-D5C0E47CCBE8"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("C33A3603-69DC-4285-A077-D5C0E47CCBE8")
                
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                DEPRECATED("ResourceLoader may be altered or unavailable for releases after Windows 8.1. Instead, use GetForCurrentView.")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                IResourceLoaderFactory : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("ResourceLoader may be altered or unavailable for releases after Windows 8.1. Instead, use GetForCurrentView.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE CreateResourceLoaderByName(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::IResourceLoader * * loader
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IResourceLoaderFactory=_uuidof(IResourceLoaderFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Resources */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.IResourceLoaderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.ResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoaderStatics[] = L"Windows.ApplicationModel.Resources.IResourceLoaderStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                /* [object, uuid("BF777CE1-19C8-49C2-953C-47E9227B334E"), exclusiveto, deprecated, contract] */
                MIDL_INTERFACE("BF777CE1-19C8-49C2-953C-47E9227B334E")
                
                #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                DEPRECATED("GetStringForReference may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use GetStringForUri.")
                #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                IResourceLoaderStatics : IInspectable
                {
                    
                    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    DEPRECATED("GetStringForReference may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use GetStringForUri.")
                    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                    /* [deprecated] */virtual HRESULT STDMETHODCALLTYPE GetStringForReference(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IResourceLoaderStatics=_uuidof(IResourceLoaderStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Resources */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.IResourceLoaderStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.ResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoaderStatics2[] = L"Windows.ApplicationModel.Resources.IResourceLoaderStatics2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Resources {
                /* [object, uuid("0CC04141-6466-4989-9494-0B82DFC53F1F"), exclusiveto, contract] */
                MIDL_INTERFACE("0CC04141-6466-4989-9494-0B82DFC53F1F")
                IResourceLoaderStatics2 : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::IResourceLoader * * loader
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetForCurrentViewWithName(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::IResourceLoader * * loader
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetForViewIndependentUse(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::IResourceLoader * * loader
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetForViewIndependentUseWithName(
                        /* [in] */__RPC__in HSTRING name,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Resources::IResourceLoader * * loader
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IResourceLoaderStatics2=_uuidof(IResourceLoaderStatics2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Resources */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.ResourceLoader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.ApplicationModel.Resources.IResourceLoaderFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Resources.IResourceLoaderStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Resources.IResourceLoaderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.IResourceLoader ** Default Interface **
 *    Windows.ApplicationModel.Resources.IResourceLoader2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_ResourceLoader_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_ResourceLoader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_ResourceLoader[] = L"Windows.ApplicationModel.Resources.ResourceLoader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2;

#endif // ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__














/*
 *
 * Interface Windows.ApplicationModel.Resources.IResourceLoader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.ResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoader[] = L"Windows.ApplicationModel.Resources.IResourceLoader";
/* [object, uuid("08524908-16EF-45AD-A602-293637D7E61A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetString )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * This,
        /* [in] */__RPC__in HSTRING resource,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_GetString(This,resource,value) \
    ( (This)->lpVtbl->GetString(This,resource,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.IResourceLoader2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.ResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoader2[] = L"Windows.ApplicationModel.Resources.IResourceLoader2";
/* [object, uuid("10EB6EC6-8138-48C1-BC65-E1F14207367C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStringForUri )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_GetStringForUri(This,uri,value) \
    ( (This)->lpVtbl->GetStringForUri(This,uri,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.IResourceLoaderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.ResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoaderFactory[] = L"Windows.ApplicationModel.Resources.IResourceLoaderFactory";
/* [object, uuid("C33A3603-69DC-4285-A077-D5C0E47CCBE8"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("ResourceLoader may be altered or unavailable for releases after Windows 8.1. Instead, use GetForCurrentView.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("ResourceLoader may be altered or unavailable for releases after Windows 8.1. Instead, use GetForCurrentView.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *CreateResourceLoaderByName )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * * loader
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("ResourceLoader may be altered or unavailable for releases after Windows 8.1. Instead, use GetForCurrentView.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_CreateResourceLoaderByName(This,name,loader) \
    ( (This)->lpVtbl->CreateResourceLoaderByName(This,name,loader) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.IResourceLoaderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.ResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoaderStatics[] = L"Windows.ApplicationModel.Resources.IResourceLoaderStatics";
/* [object, uuid("BF777CE1-19C8-49C2-953C-47E9227B334E"), exclusiveto, deprecated, contract] */
typedef struct 
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("GetStringForReference may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use GetStringForUri.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
__x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );

    #if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    DEPRECATED("GetStringForReference may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use GetStringForUri.")
    #endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    /* [deprecated] */HRESULT ( STDMETHODCALLTYPE *GetStringForReference )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
DEPRECATED("GetStringForReference may be altered or unavailable for releases after Windows Phone 'OSVersion' (TBD). Instead, use GetStringForUri.")
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_GetStringForReference(This,uri,value) \
    ( (This)->lpVtbl->GetStringForReference(This,uri,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.Resources.IResourceLoaderStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Resources.ResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Resources_IResourceLoaderStatics2[] = L"Windows.ApplicationModel.Resources.IResourceLoaderStatics2";
/* [object, uuid("0CC04141-6466-4989-9494-0B82DFC53F1F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * * loader
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetForCurrentViewWithName )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * * loader
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetForViewIndependentUse )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * * loader
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetForViewIndependentUseWithName )(
        __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2 * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoader * * loader
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_GetForCurrentView(This,loader) \
    ( (This)->lpVtbl->GetForCurrentView(This,loader) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_GetForCurrentViewWithName(This,name,loader) \
    ( (This)->lpVtbl->GetForCurrentViewWithName(This,name,loader) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_GetForViewIndependentUse(This,loader) \
    ( (This)->lpVtbl->GetForViewIndependentUse(This,loader) )

#define __x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_GetForViewIndependentUseWithName(This,name,loader) \
    ( (This)->lpVtbl->GetForViewIndependentUseWithName(This,name,loader) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CResources_CIResourceLoaderStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.Resources.ResourceLoader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.ApplicationModel.Resources.IResourceLoaderFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.Resources.IResourceLoaderStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.ApplicationModel.Resources.IResourceLoaderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Resources.IResourceLoader ** Default Interface **
 *    Windows.ApplicationModel.Resources.IResourceLoader2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Resources_ResourceLoader_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Resources_ResourceLoader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Resources_ResourceLoader[] = L"Windows.ApplicationModel.Resources.ResourceLoader";
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
#endif // __windows2Eapplicationmodel2Eresources_p_h__

#endif // __windows2Eapplicationmodel2Eresources_h__
