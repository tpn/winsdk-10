/* Header file automatically generated from windows.ui.xaml.interop.idl */
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
#ifndef __windows2Eui2Examl2Einterop_h__
#define __windows2Eui2Examl2Einterop_h__
#ifndef __windows2Eui2Examl2Einterop_p_h__
#define __windows2Eui2Examl2Einterop_p_h__


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
#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    interface IBindableVectorChangedEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler ABI::Windows::UI::Xaml::Interop::IBindableVectorChangedEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    interface INotifyCollectionChangedEventHandler;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler ABI::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventHandler

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    interface IBindableIterable;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable ABI::Windows::UI::Xaml::Interop::IBindableIterable

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    interface IBindableIterator;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator ABI::Windows::UI::Xaml::Interop::IBindableIterator

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    interface IBindableObservableVector;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector ABI::Windows::UI::Xaml::Interop::IBindableObservableVector

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    interface IBindableVector;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector ABI::Windows::UI::Xaml::Interop::IBindableVector

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    interface IBindableVectorView;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView ABI::Windows::UI::Xaml::Interop::IBindableVectorView

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    interface INotifyCollectionChanged;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged ABI::Windows::UI::Xaml::Interop::INotifyCollectionChanged

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    interface INotifyCollectionChangedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs ABI::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    interface INotifyCollectionChangedEventArgsFactory;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory ABI::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgsFactory

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    
                    typedef enum NotifyCollectionChangedAction : int NotifyCollectionChangedAction;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    
                    typedef enum TypeKind : int TypeKind;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    
                    typedef struct TypeName TypeName;
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */











namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    class NotifyCollectionChangedEventArgs;
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */







/*
 *
 * Struct Windows.UI.Xaml.Interop.NotifyCollectionChangedAction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    /* [v1_enum, contract] */
                    enum NotifyCollectionChangedAction : int
                    {
                        NotifyCollectionChangedAction_Add = 0,
                        NotifyCollectionChangedAction_Remove = 1,
                        NotifyCollectionChangedAction_Replace = 2,
                        NotifyCollectionChangedAction_Move = 3,
                        NotifyCollectionChangedAction_Reset = 4,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Interop.TypeKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    /* [v1_enum, contract] */
                    enum TypeKind : int
                    {
                        TypeKind_Primitive = 0,
                        TypeKind_Metadata = 1,
                        TypeKind_Custom = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Interop.TypeName
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    /* [contract] */
                    struct TypeName
                    {
                        HSTRING Name;
                        ABI::Windows::UI::Xaml::Interop::TypeKind Kind;
                    };
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Interop.BindableVectorChangedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    /* [object, uuid("624CD4E1-D007-43B1-9C03-AF4D3E6258C4"), contract] */
                    MIDL_INTERFACE("624CD4E1-D007-43B1-9C03-AF4D3E6258C4")
                    IBindableVectorChangedEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Interop::IBindableObservableVector * vector,
                            /* [in] */__RPC__in_opt IInspectable * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindableVectorChangedEventHandler=_uuidof(IBindableVectorChangedEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    /* [object, uuid("CA10B37C-F382-4591-8557-5E24965279B0"), contract] */
                    MIDL_INTERFACE("CA10B37C-F382-4591-8557-5E24965279B0")
                    INotifyCollectionChangedEventHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt IInspectable * sender,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs * e
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INotifyCollectionChangedEventHandler=_uuidof(INotifyCollectionChangedEventHandler);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.IBindableIterable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableIterable[] = L"Windows.UI.Xaml.Interop.IBindableIterable";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    /* [object, uuid("036D2C08-DF29-41AF-8AA2-D774BE62BA6F"), contract] */
                    MIDL_INTERFACE("036D2C08-DF29-41AF-8AA2-D774BE62BA6F")
                    IBindableIterable : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE First(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Interop::IBindableIterator * * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindableIterable=_uuidof(IBindableIterable);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.IBindableIterator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableIterator[] = L"Windows.UI.Xaml.Interop.IBindableIterator";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    /* [object, uuid("6A1D6C07-076D-49F2-8314-F52C9C9A8331"), contract] */
                    MIDL_INTERFACE("6A1D6C07-076D-49F2-8314-F52C9C9A8331")
                    IBindableIterator : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Current(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasCurrent(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE MoveNext(
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindableIterator=_uuidof(IBindableIterator);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.IBindableObservableVector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Interop.IBindableVector
 *     Windows.UI.Xaml.Interop.IBindableIterable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableObservableVector[] = L"Windows.UI.Xaml.Interop.IBindableObservableVector";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    /* [object, uuid("FE1EB536-7E7F-4F90-AC9A-474984AAE512"), contract] */
                    MIDL_INTERFACE("FE1EB536-7E7F-4F90-AC9A-474984AAE512")
                    IBindableObservableVector : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_VectorChanged(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Interop::IBindableVectorChangedEventHandler  * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_VectorChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindableObservableVector=_uuidof(IBindableObservableVector);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.IBindableVector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Interop.IBindableIterable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableVector[] = L"Windows.UI.Xaml.Interop.IBindableVector";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    /* [object, uuid("393DE7DE-6FD0-4C0D-BB71-47244A113E93"), contract] */
                    MIDL_INTERFACE("393DE7DE-6FD0-4C0D-BB71-47244A113E93")
                    IBindableVector : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetAt(
                            /* [in] */UINT32 index,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Size(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetView(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Interop::IBindableVectorView * * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IndexOf(
                            /* [in] */__RPC__in_opt IInspectable * value,
                            /* [out] */__RPC__out UINT32 * index,
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetAt(
                            /* [in] */UINT32 index,
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE InsertAt(
                            /* [in] */UINT32 index,
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveAt(
                            /* [in] */UINT32 index
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Append(
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveAtEnd(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Clear(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindableVector=_uuidof(IBindableVector);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.IBindableVectorView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Interop.IBindableIterable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableVectorView[] = L"Windows.UI.Xaml.Interop.IBindableVectorView";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    /* [object, uuid("346DD6E7-976E-4BC3-815D-ECE243BC0F33"), contract] */
                    MIDL_INTERFACE("346DD6E7-976E-4BC3-815D-ECE243BC0F33")
                    IBindableVectorView : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetAt(
                            /* [in] */UINT32 index,
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Size(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE IndexOf(
                            /* [in] */__RPC__in_opt IInspectable * value,
                            /* [out] */__RPC__out UINT32 * index,
                            /* [retval, out] */__RPC__out boolean * returnValue
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IBindableVectorView=_uuidof(IBindableVectorView);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.INotifyCollectionChanged
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_INotifyCollectionChanged[] = L"Windows.UI.Xaml.Interop.INotifyCollectionChanged";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    /* [object, uuid("28B167D5-1A31-465B-9B25-D5C3AE686C40"), contract] */
                    MIDL_INTERFACE("28B167D5-1A31-465B-9B25-D5C3AE686C40")
                    INotifyCollectionChanged : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_CollectionChanged(
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventHandler  * value,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_CollectionChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INotifyCollectionChanged=_uuidof(INotifyCollectionChanged);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs[] = L"Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    /* [object, uuid("4CF68D33-E3F2-4964-B85E-945B4F7E2F21"), exclusiveto, contract] */
                    MIDL_INTERFACE("4CF68D33-E3F2-4964-B85E-945B4F7E2F21")
                    INotifyCollectionChangedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Action(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::Xaml::Interop::NotifyCollectionChangedAction * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewItems(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Interop::IBindableVector * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OldItems(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Interop::IBindableVector * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NewStartingIndex(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OldStartingIndex(
                            /* [retval, out] */__RPC__out INT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INotifyCollectionChangedEventArgs=_uuidof(INotifyCollectionChangedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgsFactory[] = L"Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Xaml {
                namespace Interop {
                    /* [object, uuid("B30C3E3A-DF8D-44A5-9A38-7AC0D08CE63D"), exclusiveto, contract] */
                    MIDL_INTERFACE("B30C3E3A-DF8D-44A5-9A38-7AC0D08CE63D")
                    INotifyCollectionChangedEventArgsFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstanceWithAllParameters(
                            /* [in] */ABI::Windows::UI::Xaml::Interop::NotifyCollectionChangedAction action,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Interop::IBindableVector * newItems,
                            /* [in] */__RPC__in_opt ABI::Windows::UI::Xaml::Interop::IBindableVector * oldItems,
                            /* [in] */INT32 newIndex,
                            /* [in] */INT32 oldIndex,
                            /* [in] */__RPC__in_opt IInspectable * outer,
                            /* [out] */__RPC__deref_out_opt IInspectable * * inner,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Xaml::Interop::INotifyCollectionChangedEventArgs * * instance
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_INotifyCollectionChangedEventArgsFactory=_uuidof(INotifyCollectionChangedEventArgsFactory);
                    
                } /* Windows */
            } /* UI */
        } /* Xaml */
    } /* Interop */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Interop_NotifyCollectionChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Interop_NotifyCollectionChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Interop_NotifyCollectionChangedEventArgs[] = L"Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory;

#endif // ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CUI_CXaml_CInterop_CNotifyCollectionChangedAction __x_ABI_CWindows_CUI_CXaml_CInterop_CNotifyCollectionChangedAction;


typedef enum __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeKind __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeKind;


typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName;

















/*
 *
 * Struct Windows.UI.Xaml.Interop.NotifyCollectionChangedAction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CInterop_CNotifyCollectionChangedAction
{
    NotifyCollectionChangedAction_Add = 0,
    NotifyCollectionChangedAction_Remove = 1,
    NotifyCollectionChangedAction_Replace = 2,
    NotifyCollectionChangedAction_Move = 3,
    NotifyCollectionChangedAction_Reset = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Interop.TypeKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeKind
{
    TypeKind_Primitive = 0,
    TypeKind_Metadata = 1,
    TypeKind_Custom = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Xaml.Interop.TypeName
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

/* [contract] */
struct __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeName
{
    HSTRING Name;
    __x_ABI_CWindows_CUI_CXaml_CInterop_CTypeKind Kind;
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Interop.BindableVectorChangedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("624CD4E1-D007-43B1-9C03-AF4D3E6258C4"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * vector,
        /* [in] */__RPC__in_opt IInspectable * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_Invoke(This,vector,e) \
    ( (This)->lpVtbl->Invoke(This,vector,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Xaml.Interop.NotifyCollectionChangedEventHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_INTERFACE_DEFINED__
/* [object, uuid("CA10B37C-F382-4591-8557-5E24965279B0"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler * This,
        /* [in] */__RPC__in_opt IInspectable * sender,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * e
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandlerVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_Invoke(This,sender,e) \
    ( (This)->lpVtbl->Invoke(This,sender,e) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.IBindableIterable
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableIterable[] = L"Windows.UI.Xaml.Interop.IBindableIterable";
/* [object, uuid("036D2C08-DF29-41AF-8AA2-D774BE62BA6F"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *First )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterableVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_First(This,returnValue) \
    ( (This)->lpVtbl->First(This,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterable_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.IBindableIterator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableIterator[] = L"Windows.UI.Xaml.Interop.IBindableIterator";
/* [object, uuid("6A1D6C07-076D-49F2-8314-F52C9C9A8331"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIteratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator * This,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIteratorVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIteratorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_get_Current(This,value) \
    ( (This)->lpVtbl->get_Current(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_get_HasCurrent(This,value) \
    ( (This)->lpVtbl->get_HasCurrent(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_MoveNext(This,returnValue) \
    ( (This)->lpVtbl->MoveNext(This,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableIterator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.IBindableObservableVector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Interop.IBindableVector
 *     Windows.UI.Xaml.Interop.IBindableIterable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableObservableVector[] = L"Windows.UI.Xaml.Interop.IBindableObservableVector";
/* [object, uuid("FE1EB536-7E7F-4F90-AC9A-474984AAE512"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_VectorChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorChangedEventHandler  * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_VectorChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVectorVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVectorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_add_VectorChanged(This,value,token) \
    ( (This)->lpVtbl->add_VectorChanged(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_remove_VectorChanged(This,token) \
    ( (This)->lpVtbl->remove_VectorChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableObservableVector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.IBindableVector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Interop.IBindableIterable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableVector[] = L"Windows.UI.Xaml.Interop.IBindableVector";
/* [object, uuid("393DE7DE-6FD0-4C0D-BB71-47244A113E93"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAt )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
        /* [in] */UINT32 index,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetView )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
        /* [in] */__RPC__in_opt IInspectable * value,
        /* [out] */__RPC__out UINT32 * index,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *SetAt )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
        /* [in] */UINT32 index,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
        /* [in] */UINT32 index,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
        /* [in] */UINT32 index
        );
    HRESULT ( STDMETHODCALLTYPE *Append )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_GetAt(This,index,returnValue) \
    ( (This)->lpVtbl->GetAt(This,index,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_get_Size(This,value) \
    ( (This)->lpVtbl->get_Size(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_GetView(This,returnValue) \
    ( (This)->lpVtbl->GetView(This,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_IndexOf(This,value,index,returnValue) \
    ( (This)->lpVtbl->IndexOf(This,value,index,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_SetAt(This,index,value) \
    ( (This)->lpVtbl->SetAt(This,index,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_InsertAt(This,index,value) \
    ( (This)->lpVtbl->InsertAt(This,index,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_RemoveAt(This,index) \
    ( (This)->lpVtbl->RemoveAt(This,index) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_Append(This,value) \
    ( (This)->lpVtbl->Append(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_RemoveAtEnd(This) \
    ( (This)->lpVtbl->RemoveAtEnd(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_Clear(This) \
    ( (This)->lpVtbl->Clear(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.IBindableVectorView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.UI.Xaml.Interop.IBindableIterable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_IBindableVectorView[] = L"Windows.UI.Xaml.Interop.IBindableVectorView";
/* [object, uuid("346DD6E7-976E-4BC3-815D-ECE243BC0F33"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAt )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
        /* [in] */UINT32 index,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * returnValue
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView * This,
        /* [in] */__RPC__in_opt IInspectable * value,
        /* [out] */__RPC__out UINT32 * index,
        /* [retval, out] */__RPC__out boolean * returnValue
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorViewVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_GetAt(This,index,returnValue) \
    ( (This)->lpVtbl->GetAt(This,index,returnValue) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_get_Size(This,value) \
    ( (This)->lpVtbl->get_Size(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_IndexOf(This,value,index,returnValue) \
    ( (This)->lpVtbl->IndexOf(This,value,index,returnValue) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVectorView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.INotifyCollectionChanged
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_INotifyCollectionChanged[] = L"Windows.UI.Xaml.Interop.INotifyCollectionChanged";
/* [object, uuid("28B167D5-1A31-465B-9B25-D5C3AE686C40"), contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_CollectionChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventHandler  * value,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_CollectionChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_add_CollectionChanged(This,value,token) \
    ( (This)->lpVtbl->add_CollectionChanged(This,value,token) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_remove_CollectionChanged(This,token) \
    ( (This)->lpVtbl->remove_CollectionChanged(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChanged_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgs[] = L"Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs";
/* [object, uuid("4CF68D33-E3F2-4964-B85E-945B4F7E2F21"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Action )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CXaml_CInterop_CNotifyCollectionChangedAction * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewItems )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OldItems )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NewStartingIndex )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OldStartingIndex )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * This,
        /* [retval, out] */__RPC__out INT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_get_Action(This,value) \
    ( (This)->lpVtbl->get_Action(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_get_NewItems(This,value) \
    ( (This)->lpVtbl->get_NewItems(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_get_OldItems(This,value) \
    ( (This)->lpVtbl->get_OldItems(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_get_NewStartingIndex(This,value) \
    ( (This)->lpVtbl->get_NewStartingIndex(This,value) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_get_OldStartingIndex(This,value) \
    ( (This)->lpVtbl->get_OldStartingIndex(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Interop_INotifyCollectionChangedEventArgsFactory[] = L"Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgsFactory";
/* [object, uuid("B30C3E3A-DF8D-44A5-9A38-7AC0D08CE63D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithAllParameters )(
        __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory * This,
        /* [in] */__x_ABI_CWindows_CUI_CXaml_CInterop_CNotifyCollectionChangedAction action,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * newItems,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CIBindableVector * oldItems,
        /* [in] */INT32 newIndex,
        /* [in] */INT32 oldIndex,
        /* [in] */__RPC__in_opt IInspectable * outer,
        /* [out] */__RPC__deref_out_opt IInspectable * * inner,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgs * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactoryVtbl;

interface __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_CreateInstanceWithAllParameters(This,action,newItems,oldItems,newIndex,oldIndex,outer,inner,instance) \
    ( (This)->lpVtbl->CreateInstanceWithAllParameters(This,action,newItems,oldItems,newIndex,oldIndex,outer,inner,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CXaml_CInterop_CINotifyCollectionChangedEventArgsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.Xaml.Interop.INotifyCollectionChangedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Xaml_Interop_NotifyCollectionChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_Xaml_Interop_NotifyCollectionChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Interop_NotifyCollectionChangedEventArgs[] = L"Windows.UI.Xaml.Interop.NotifyCollectionChangedEventArgs";
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
#endif // __windows2Eui2Examl2Einterop_p_h__

#endif // __windows2Eui2Examl2Einterop_h__
