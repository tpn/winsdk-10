/* Header file automatically generated from windows.ui.xaml.resources.idl */
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
#ifndef __windows2Eui2Examl2Eresources_h__
#define __windows2Eui2Examl2Eresources_h__
#ifndef __windows2Eui2Examl2Eresources_p_h__
#define __windows2Eui2Examl2Eresources_p_h__


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
#ifndef ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Resources {
                    interface ICustomXamlResourceLoader;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Resources */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader ABI::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader

#endif // ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Resources {
                    interface ICustomXamlResourceLoaderFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Resources */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory ABI::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Resources {
                    interface ICustomXamlResourceLoaderOverrides;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Resources */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides ABI::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderOverrides

#endif // ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Resources {
                    interface ICustomXamlResourceLoaderStatics;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Resources */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics ABI::Windows::UI::Xaml::Resources::ICustomXamlResourceLoaderStatics

#endif // ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_FWD_DEFINED__









namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Resources {
                    class CustomXamlResourceLoader;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Resources */} /* ABI */







/*
 *
 * Interface Windows.UI.Xaml.Resources.ICustomXamlResourceLoader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Resources.CustomXamlResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Resources_ICustomXamlResourceLoader[] = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoader";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Resources {
                    /* [object, uuid("511A84AB-4A88-419F-852E-54083B90B078"), exclusiveto, contract] */
                    MIDL_INTERFACE("511A84AB-4A88-419F-852E-54083B90B078")
                    ICustomXamlResourceLoader : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICustomXamlResourceLoader=_uuidof(ICustomXamlResourceLoader);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Resources */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Resources.CustomXamlResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderFactory[] = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Resources {
                    /* [object, uuid("5BFD7E49-7886-44F3-8ED3-6FEC0463ED69"), exclusiveto, contract] */
                    MIDL_INTERFACE("5BFD7E49-7886-44F3-8ED3-6FEC0463ED69")
                    ICustomXamlResourceLoaderFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICustomXamlResourceLoaderFactory=_uuidof(ICustomXamlResourceLoaderFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Resources */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderOverrides
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Resources.CustomXamlResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderOverrides[] = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderOverrides";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Resources {
                    /* [object, uuid("F851E991-AF02-46E8-9AF8-427B7EBFE9F8"), exclusiveto, contract] */
                    MIDL_INTERFACE("F851E991-AF02-46E8-9AF8-427B7EBFE9F8")
                    ICustomXamlResourceLoaderOverrides : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetResource(
                            /* [in] */__RPC__in HSTRING resourceId,
                            /* [in] */__RPC__in HSTRING objectType,
                            /* [in] */__RPC__in HSTRING propertyName,
                            /* [in] */__RPC__in HSTRING propertyType,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICustomXamlResourceLoaderOverrides=_uuidof(ICustomXamlResourceLoaderOverrides);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Resources */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Resources.CustomXamlResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics[] = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Resources {
                    /* [object, uuid("224FF617-E4DC-4C27-AD32-DB93D5D0E5DA"), exclusiveto, contract] */
                    MIDL_INTERFACE("224FF617-E4DC-4C27-AD32-DB93D5D0E5DA")
                    ICustomXamlResourceLoaderStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Current(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Current(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Resources::ICustomXamlResourceLoader * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICustomXamlResourceLoaderStatics=_uuidof(ICustomXamlResourceLoaderStatics);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Resources */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Resources.CustomXamlResourceLoader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Resources.ICustomXamlResourceLoader ** Default Interface **
 *    Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderOverrides
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Resources_CustomXamlResourceLoader_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Resources_CustomXamlResourceLoader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Resources_CustomXamlResourceLoader[] = L"Windows.UI.Xaml.Resources.CustomXamlResourceLoader";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader;

#endif // ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides;

#endif // ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics;

#endif // ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_FWD_DEFINED__














/*
 *
 * Interface Windows.UI.Xaml.Resources.ICustomXamlResourceLoader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Resources.CustomXamlResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Resources_ICustomXamlResourceLoader[] = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoader";
/* [object, uuid("511A84AB-4A88-419F-852E-54083B90B078"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Resources.CustomXamlResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderFactory[] = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderFactory";
/* [object, uuid("5BFD7E49-7886-44F3-8ED3-6FEC0463ED69"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory * This,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_CreateInstance(This,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstance(This,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderOverrides
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Resources.CustomXamlResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderOverrides[] = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderOverrides";
/* [object, uuid("F851E991-AF02-46E8-9AF8-427B7EBFE9F8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverridesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetResource )(
        __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides * This,
        /* [in] */__RPC__in HSTRING resourceId,
        /* [in] */__RPC__in HSTRING objectType,
        /* [in] */__RPC__in HSTRING propertyName,
        /* [in] */__RPC__in HSTRING propertyType,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverridesVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverridesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_GetResource(This,resourceId,objectType,propertyName,propertyType,returnValue) \
    ( (This)->lpVtbl->GetResource(This,resourceId,objectType,propertyName,propertyType,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderOverrides_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Resources.CustomXamlResourceLoader
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Resources_ICustomXamlResourceLoaderStatics[] = L"Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderStatics";
/* [object, uuid("224FF617-E4DC-4C27-AD32-DB93D5D0E5DA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Current )(
        __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoader * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStaticsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_get_Current(This,value) \
    ( (This)->lpVtbl->get_Current(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_put_Current(This,value) \
    ( (This)->lpVtbl->put_Current(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CResources_CICustomXamlResourceLoaderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Resources.CustomXamlResourceLoader
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Resources.ICustomXamlResourceLoader ** Default Interface **
 *    Windows.UI.Xaml.Resources.ICustomXamlResourceLoaderOverrides
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Resources_CustomXamlResourceLoader_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Resources_CustomXamlResourceLoader_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Resources_CustomXamlResourceLoader[] = L"Windows.UI.Xaml.Resources.CustomXamlResourceLoader";
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
#endif // __windows2Eui2Examl2Eresources_p_h__

#endif // __windows2Eui2Examl2Eresources_h__
