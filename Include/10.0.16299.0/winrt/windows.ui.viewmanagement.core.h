/* Header file automatically generated from windows.ui.viewmanagement.core.idl */
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
#ifndef __windows2Eui2Eviewmanagement2Ecore_h__
#define __windows2Eui2Eviewmanagement2Ecore_h__
#ifndef __windows2Eui2Eviewmanagement2Ecore_p_h__
#define __windows2Eui2Eviewmanagement2Ecore_p_h__


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
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                namespace Core {
                    interface ICoreInputView;
                } /* Windows */
            } /* UI */
        } /* ViewManagement */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView ABI::Windows::UI::ViewManagement::Core::ICoreInputView

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                namespace Core {
                    interface ICoreInputViewOcclusion;
                } /* Windows */
            } /* UI */
        } /* ViewManagement */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                namespace Core {
                    interface ICoreInputViewOcclusionsChangedEventArgs;
                } /* Windows */
            } /* UI */
        } /* ViewManagement */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                namespace Core {
                    interface ICoreInputViewStatics;
                } /* Windows */
            } /* UI */
        } /* ViewManagement */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics ABI::Windows::UI::ViewManagement::Core::ICoreInputViewStatics

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                namespace Core {
                    class CoreInputViewOcclusion;
                } /* Windows */
            } /* UI */
        } /* ViewManagement */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_USE
#define DEF___FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5bb57354-4f40-5ef3-a5d1-6a6049f905a1"))
IIterator<ABI::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion*, ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.ViewManagement.Core.CoreInputViewOcclusion>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion*> __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_t;
#define __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion*>
//#define __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_USE
#define DEF___FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0a11958b-63da-5566-913a-180550dad26a"))
IIterable<ABI::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion*, ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.ViewManagement.Core.CoreInputViewOcclusion>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion*> __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_t;
#define __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion*>
//#define __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_USE
#define DEF___FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e0963578-a246-5680-86d1-27519423e212"))
IVectorView<ABI::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion*, ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.ViewManagement.Core.CoreInputViewOcclusion>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion*> __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_t;
#define __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion*>
//#define __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                namespace Core {
                    class CoreInputView;
                } /* Windows */
            } /* UI */
        } /* ViewManagement */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                namespace Core {
                    class CoreInputViewOcclusionsChangedEventArgs;
                } /* Windows */
            } /* UI */
        } /* ViewManagement */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5adecf04-edd1-5133-abc7-582a027f09bb"))
ITypedEventHandler<ABI::Windows::UI::ViewManagement::Core::CoreInputView*,ABI::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ViewManagement::Core::CoreInputView*, ABI::Windows::UI::ViewManagement::Core::ICoreInputView*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs*, ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.UI.ViewManagement.Core.CoreInputView, Windows.UI.ViewManagement.Core.CoreInputViewOcclusionsChangedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::UI::ViewManagement::Core::CoreInputView*,ABI::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs*> __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ViewManagement::Core::ICoreInputView*,ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::UI::ViewManagement::Core::ICoreInputView*,ABI::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                namespace Core {
                    
                    typedef enum CoreInputViewOcclusionKind : int CoreInputViewOcclusionKind;
                    
                } /* Windows */
            } /* UI */
        } /* ViewManagement */
    } /* Core */} /* ABI */


















/*
 *
 * Struct Windows.UI.ViewManagement.Core.CoreInputViewOcclusionKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                namespace Core {
                    /* [v1_enum, contract] */
                    enum CoreInputViewOcclusionKind : int
                    {
                        CoreInputViewOcclusionKind_Docked = 0,
                        CoreInputViewOcclusionKind_Floating = 1,
                        CoreInputViewOcclusionKind_Overlay = 2,
                    };
                    
                } /* Windows */
            } /* UI */
        } /* ViewManagement */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.ViewManagement.Core.ICoreInputView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.Core.CoreInputView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputView[] = L"Windows.UI.ViewManagement.Core.ICoreInputView";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                namespace Core {
                    /* [object, uuid("C770CD7A-7001-4C32-BF94-25C1F554CBF1"), exclusiveto, contract] */
                    MIDL_INTERFACE("C770CD7A-7001-4C32-BF94-25C1F554CBF1")
                    ICoreInputView : IInspectable
                    {
                        /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_OcclusionsChanged(
                            /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs * handler,
                            /* [retval, out] */__RPC__out EventRegistrationToken * token
                            ) = 0;
                        /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_OcclusionsChanged(
                            /* [in] */EventRegistrationToken token
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCoreInputViewOcclusions(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryShowPrimaryView(
                            /* [retval, out] */__RPC__out boolean * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE TryHidePrimaryView(
                            /* [retval, out] */__RPC__out boolean * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreInputView=_uuidof(ICoreInputView);
                    
                } /* Windows */
            } /* UI */
        } /* ViewManagement */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.ViewManagement.Core.ICoreInputViewOcclusion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.Core.CoreInputViewOcclusion
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion[] = L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusion";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                namespace Core {
                    /* [object, uuid("CC36CE06-3865-4177-B5F5-8B65E0B9CE84"), exclusiveto, contract] */
                    MIDL_INTERFACE("CC36CE06-3865-4177-B5F5-8B65E0B9CE84")
                    ICoreInputViewOcclusion : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OccludingRect(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::Rect * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OcclusionKind(
                            /* [retval, out] */__RPC__out ABI::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreInputViewOcclusion=_uuidof(ICoreInputViewOcclusion);
                    
                } /* Windows */
            } /* UI */
        } /* ViewManagement */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.ViewManagement.Core.ICoreInputViewOcclusionsChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.Core.CoreInputViewOcclusionsChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs[] = L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusionsChangedEventArgs";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                namespace Core {
                    /* [object, uuid("BE1027E8-B3EE-4DF7-9554-89CDC66082C2"), exclusiveto, contract] */
                    MIDL_INTERFACE("BE1027E8-B3EE-4DF7-9554-89CDC66082C2")
                    ICoreInputViewOcclusionsChangedEventArgs : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Occlusions(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Handled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Handled(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreInputViewOcclusionsChangedEventArgs=_uuidof(ICoreInputViewOcclusionsChangedEventArgs);
                    
                } /* Windows */
            } /* UI */
        } /* ViewManagement */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.ViewManagement.Core.ICoreInputViewStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.Core.CoreInputView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputViewStatics[] = L"Windows.UI.ViewManagement.Core.ICoreInputViewStatics";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace ViewManagement {
                namespace Core {
                    /* [object, uuid("7D9B97CD-EDBE-49CF-A54F-337DE052907F"), exclusiveto, contract] */
                    MIDL_INTERFACE("7D9B97CD-EDBE-49CF-A54F-337DE052907F")
                    ICoreInputViewStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetForCurrentView(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::ViewManagement::Core::ICoreInputView * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICoreInputViewStatics=_uuidof(ICoreInputViewStatics);
                    
                } /* Windows */
            } /* UI */
        } /* ViewManagement */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.ViewManagement.Core.CoreInputView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.Core.ICoreInputViewStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.Core.ICoreInputView ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_Core_CoreInputView_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_Core_CoreInputView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_Core_CoreInputView[] = L"Windows.UI.ViewManagement.Core.CoreInputView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.ViewManagement.Core.CoreInputViewOcclusion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.Core.ICoreInputViewOcclusion ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_Core_CoreInputViewOcclusion_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_Core_CoreInputViewOcclusion_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_Core_CoreInputViewOcclusion[] = L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusion";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.ViewManagement.Core.CoreInputViewOcclusionsChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.Core.ICoreInputViewOcclusionsChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_Core_CoreInputViewOcclusionsChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_Core_CoreInputViewOcclusionsChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_Core_CoreInputViewOcclusionsChangedEventArgs[] = L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusionsChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics;

#endif // ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion;

typedef struct __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl;

interface __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion;

typedef  struct __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl;

interface __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion;

typedef struct __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
            /* [in] */ __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl;

interface __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000



typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;





typedef enum __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewOcclusionKind __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewOcclusionKind;


















/*
 *
 * Struct Windows.UI.ViewManagement.Core.CoreInputViewOcclusionKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewOcclusionKind
{
    CoreInputViewOcclusionKind_Docked = 0,
    CoreInputViewOcclusionKind_Floating = 1,
    CoreInputViewOcclusionKind_Overlay = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.ViewManagement.Core.ICoreInputView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.Core.CoreInputView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputView[] = L"Windows.UI.ViewManagement.Core.ICoreInputView";
/* [object, uuid("C770CD7A-7001-4C32-BF94-25C1F554CBF1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_OcclusionsChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CCore__CCoreInputView_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusionsChangedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_OcclusionsChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
        /* [in] */EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetCoreInputViewOcclusions )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryShowPrimaryView )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryHidePrimaryView )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * This,
        /* [retval, out] */__RPC__out boolean * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_add_OcclusionsChanged(This,handler,token) \
    ( (This)->lpVtbl->add_OcclusionsChanged(This,handler,token) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_remove_OcclusionsChanged(This,token) \
    ( (This)->lpVtbl->remove_OcclusionsChanged(This,token) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_GetCoreInputViewOcclusions(This,result) \
    ( (This)->lpVtbl->GetCoreInputViewOcclusions(This,result) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_TryShowPrimaryView(This,result) \
    ( (This)->lpVtbl->TryShowPrimaryView(This,result) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_TryHidePrimaryView(This,result) \
    ( (This)->lpVtbl->TryHidePrimaryView(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.ViewManagement.Core.ICoreInputViewOcclusion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.Core.CoreInputViewOcclusion
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion[] = L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusion";
/* [object, uuid("CC36CE06-3865-4177-B5F5-8B65E0B9CE84"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OccludingRect )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OcclusionKind )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CViewManagement_CCore_CCoreInputViewOcclusionKind * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_get_OccludingRect(This,value) \
    ( (This)->lpVtbl->get_OccludingRect(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_get_OcclusionKind(This,value) \
    ( (This)->lpVtbl->get_OcclusionKind(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusion_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.ViewManagement.Core.ICoreInputViewOcclusionsChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.Core.CoreInputViewOcclusionsChangedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs[] = L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusionsChangedEventArgs";
/* [object, uuid("BE1027E8-B3EE-4DF7-9554-89CDC66082C2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Occlusions )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CViewManagement__CCore__CCoreInputViewOcclusion * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_get_Occlusions(This,value) \
    ( (This)->lpVtbl->get_Occlusions(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_get_Handled(This,value) \
    ( (This)->lpVtbl->get_Handled(This,value) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_put_Handled(This,value) \
    ( (This)->lpVtbl->put_Handled(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewOcclusionsChangedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.UI.ViewManagement.Core.ICoreInputViewStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.ViewManagement.Core.CoreInputView
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_Core_ICoreInputViewStatics[] = L"Windows.UI.ViewManagement.Core.ICoreInputViewStatics";
/* [object, uuid("7D9B97CD-EDBE-49CF-A54F-337DE052907F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputView * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStaticsVtbl;

interface __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_GetForCurrentView(This,result) \
    ( (This)->lpVtbl->GetForCurrentView(This,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics;
#endif /* !defined(____x_ABI_CWindows_CUI_CViewManagement_CCore_CICoreInputViewStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.ViewManagement.Core.CoreInputView
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.UI.ViewManagement.Core.ICoreInputViewStatics interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.Core.ICoreInputView ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_Core_CoreInputView_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_Core_CoreInputView_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_Core_CoreInputView[] = L"Windows.UI.ViewManagement.Core.CoreInputView";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.ViewManagement.Core.CoreInputViewOcclusion
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.Core.ICoreInputViewOcclusion ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_Core_CoreInputViewOcclusion_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_Core_CoreInputViewOcclusion_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_Core_CoreInputViewOcclusion[] = L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusion";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.UI.ViewManagement.Core.CoreInputViewOcclusionsChangedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.UI.ViewManagement.Core.ICoreInputViewOcclusionsChangedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_UI_ViewManagement_Core_CoreInputViewOcclusionsChangedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_UI_ViewManagement_Core_CoreInputViewOcclusionsChangedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_Core_CoreInputViewOcclusionsChangedEventArgs[] = L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusionsChangedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Eui2Eviewmanagement2Ecore_p_h__

#endif // __windows2Eui2Eviewmanagement2Ecore_h__
