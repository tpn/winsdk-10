/* Header file automatically generated from windows.ui.popups.idl */
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
#ifndef __windows2Eui2Epopups_h__
#define __windows2Eui2Epopups_h__
#ifndef __windows2Eui2Epopups_p_h__
#define __windows2Eui2Epopups_p_h__


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
#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                interface IUICommandInvokedHandler;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */
#define __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler ABI::Windows::UI::Popups::IUICommandInvokedHandler

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CPopups_CIMessageDialog_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIMessageDialog_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                interface IMessageDialog;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */
#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog ABI::Windows::UI::Popups::IMessageDialog

#endif // ____x_ABI_CWindows_CUI_CPopups_CIMessageDialog_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                interface IMessageDialogFactory;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */
#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory ABI::Windows::UI::Popups::IMessageDialogFactory

#endif // ____x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CPopups_CIPopupMenu_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIPopupMenu_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                interface IPopupMenu;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */
#define __x_ABI_CWindows_CUI_CPopups_CIPopupMenu ABI::Windows::UI::Popups::IPopupMenu

#endif // ____x_ABI_CWindows_CUI_CPopups_CIPopupMenu_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                interface IUICommand;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */
#define __x_ABI_CWindows_CUI_CPopups_CIUICommand ABI::Windows::UI::Popups::IUICommand

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                interface IUICommandFactory;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */
#define __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory ABI::Windows::UI::Popups::IUICommandFactory

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CUI__CPopups__CIUICommand_USE
#define DEF___FIIterator_1_Windows__CUI__CPopups__CIUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f45db3d3-7299-57ce-a73e-297cf0af3083"))
IIterator<ABI::Windows::UI::Popups::IUICommand*> : IIterator_impl<ABI::Windows::UI::Popups::IUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.UI.Popups.IUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::UI::Popups::IUICommand*> __FIIterator_1_Windows__CUI__CPopups__CIUICommand_t;
#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CUI__CPopups__CIUICommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CUI__CPopups__CIUICommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CUI__CPopups__CIUICommand_USE
#define DEF___FIIterable_1_Windows__CUI__CPopups__CIUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e63de42b-53c3-5e07-90d3-98172d545412"))
IIterable<ABI::Windows::UI::Popups::IUICommand*> : IIterable_impl<ABI::Windows::UI::Popups::IUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.UI.Popups.IUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::UI::Popups::IUICommand*> __FIIterable_1_Windows__CUI__CPopups__CIUICommand_t;
#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CUI__CPopups__CIUICommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CUI__CPopups__CIUICommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CUI__CPopups__CIUICommand_USE
#define DEF___FIVectorView_1_Windows__CUI__CPopups__CIUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ed1165e6-f377-5b00-8172-93c1bd04deb4"))
IVectorView<ABI::Windows::UI::Popups::IUICommand*> : IVectorView_impl<ABI::Windows::UI::Popups::IUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.UI.Popups.IUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::UI::Popups::IUICommand*> __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_t;
#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CUI__CPopups__CIUICommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CUI__CPopups__CIUICommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CUI__CPopups__CIUICommand_USE
#define DEF___FIVector_1_Windows__CUI__CPopups__CIUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("105139a1-dcb8-5f65-97ef-cb1bf0b75f9d"))
IVector<ABI::Windows::UI::Popups::IUICommand*> : IVector_impl<ABI::Windows::UI::Popups::IUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.UI.Popups.IUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::UI::Popups::IUICommand*> __FIVector_1_Windows__CUI__CPopups__CIUICommand_t;
#define __FIVector_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CUI__CPopups__CIUICommand_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CUI__CPopups__CIUICommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dd33fd5b-a24d-5a44-91fe-dd6441770103"))
IAsyncOperationCompletedHandler<ABI::Windows::UI::Popups::IUICommand*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::UI::Popups::IUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.UI.Popups.IUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::UI::Popups::IUICommand*> __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_USE
#define DEF___FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b8770535-6a4b-52b1-b578-f3cdc5007a1f"))
IAsyncOperation<ABI::Windows::UI::Popups::IUICommand*> : IAsyncOperation_impl<ABI::Windows::UI::Popups::IUICommand*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.UI.Popups.IUICommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::UI::Popups::IUICommand*> __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_t;
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::Popups::IUICommand*>
//#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::UI::Popups::IUICommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Point Point;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct Rect Rect;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                
                typedef enum MessageDialogOptions : unsigned int MessageDialogOptions;
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                
                typedef enum Placement : int Placement;
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                class MessageDialog;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                class PopupMenu;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                class UICommand;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                class UICommandSeparator;
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */










/*
 *
 * Struct Windows.UI.Popups.MessageDialogOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                /* [v1_enum, flags, contract] */
                enum MessageDialogOptions : unsigned int
                {
                    MessageDialogOptions_None = 0,
                    MessageDialogOptions_AcceptUserInputAfterDelay = 0x1,
                };
                
                DEFINE_ENUM_FLAG_OPERATORS(MessageDialogOptions)
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Popups.Placement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                /* [v1_enum, contract] */
                enum Placement : int
                {
                    Placement_Default = 0,
                    Placement_Above = 1,
                    Placement_Below = 2,
                    Placement_Left = 3,
                    Placement_Right = 4,
                };
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Popups.UICommandInvokedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                /* [object, uuid("DAF77A4F-C27A-4298-9AC6-2922C45E7DA6"), contract] */
                MIDL_INTERFACE("DAF77A4F-C27A-4298-9AC6-2922C45E7DA6")
                IUICommandInvokedHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Popups::IUICommand * command
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUICommandInvokedHandler=_uuidof(IUICommandInvokedHandler);
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Popups.IMessageDialog
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Popups.MessageDialog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CPopups_CIMessageDialog_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CPopups_CIMessageDialog_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IMessageDialog[] = L"Windows.UI.Popups.IMessageDialog";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                /* [object, uuid("33F59B01-5325-43AB-9AB3-BDAE440E4121"), exclusiveto, contract] */
                MIDL_INTERFACE("33F59B01-5325-43AB-9AB3-BDAE440E4121")
                IMessageDialog : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Commands(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CPopups__CIUICommand * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DefaultCommandIndex(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DefaultCommandIndex(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CancelCommandIndex(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CancelCommandIndex(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Content(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * messageDialogAsyncOperation
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Options(
                        /* [retval, out] */__RPC__out ABI::Windows::UI::Popups::MessageDialogOptions * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Options(
                        /* [in] */ABI::Windows::UI::Popups::MessageDialogOptions value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMessageDialog=_uuidof(IMessageDialog);
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIMessageDialog;
#endif /* !defined(____x_ABI_CWindows_CUI_CPopups_CIMessageDialog_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Popups.IMessageDialogFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Popups.MessageDialog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IMessageDialogFactory[] = L"Windows.UI.Popups.IMessageDialogFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                /* [object, uuid("2D161777-A66F-4EA5-BB87-793FFA4941F2"), exclusiveto, contract] */
                MIDL_INTERFACE("2D161777-A66F-4EA5-BB87-793FFA4941F2")
                IMessageDialogFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING content,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Popups::IMessageDialog * * messageDialog
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithTitle(
                        /* [in] */__RPC__in HSTRING content,
                        /* [in] */__RPC__in HSTRING title,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Popups::IMessageDialog * * messageDialog
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMessageDialogFactory=_uuidof(IMessageDialogFactory);
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Popups.IPopupMenu
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Popups.PopupMenu
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CPopups_CIPopupMenu_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CPopups_CIPopupMenu_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IPopupMenu[] = L"Windows.UI.Popups.IPopupMenu";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                /* [object, uuid("4E9BC6DC-880D-47FC-A0A1-72B639E62559"), exclusiveto, contract] */
                MIDL_INTERFACE("4E9BC6DC-880D-47FC-A0A1-72B639E62559")
                IPopupMenu : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Commands(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CPopups__CIUICommand * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ShowAsync(
                        /* [in] */ABI::Windows::Foundation::Point invocationPoint,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAsyncWithRect(
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncOperation
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE ShowAsyncWithRectAndPlacement(
                        /* [in] */ABI::Windows::Foundation::Rect selection,
                        /* [in] */ABI::Windows::UI::Popups::Placement preferredPlacement,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncOperation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPopupMenu=_uuidof(IPopupMenu);
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIPopupMenu;
#endif /* !defined(____x_ABI_CWindows_CUI_CPopups_CIPopupMenu_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Popups.IUICommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CPopups_CIUICommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IUICommand[] = L"Windows.UI.Popups.IUICommand";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                /* [object, uuid("4FF93A75-4145-47FF-AC7F-DFF1C1FA5B0F"), contract] */
                MIDL_INTERFACE("4FF93A75-4145-47FF-AC7F-DFF1C1FA5B0F")
                IUICommand : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Label(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Label(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Invoked(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Popups::IUICommandInvokedHandler  * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Invoked(
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Popups::IUICommandInvokedHandler  * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Id(
                        /* [in] */__RPC__in_opt IInspectable * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUICommand=_uuidof(IUICommand);
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIUICommand;
#endif /* !defined(____x_ABI_CWindows_CUI_CPopups_CIUICommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Popups.IUICommandFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Popups.UICommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IUICommandFactory[] = L"Windows.UI.Popups.IUICommandFactory";
namespace ABI {
    namespace Windows {
        namespace UI {
            namespace Popups {
                /* [object, uuid("A21A8189-26B0-4676-AE94-54041BC125E8"), exclusiveto, contract] */
                MIDL_INTERFACE("A21A8189-26B0-4676-AE94-54041BC125E8")
                IUICommandFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING label,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Popups::IUICommand * * instance
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithHandler(
                        /* [in] */__RPC__in HSTRING label,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Popups::IUICommandInvokedHandler  * action,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Popups::IUICommand * * instance
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithHandlerAndId(
                        /* [in] */__RPC__in HSTRING label,
                        /* [in] */__RPC__in_opt ABI::Windows::UI::Popups::IUICommandInvokedHandler  * action,
                        /* [in] */__RPC__in_opt IInspectable * commandId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::UI::Popups::IUICommand * * instance
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IUICommandFactory=_uuidof(IUICommandFactory);
                
            } /* Windows */
        } /* UI */
    } /* Popups */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIUICommandFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Popups.MessageDialog
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Popups.IMessageDialogFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Popups.IMessageDialog ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Popups_MessageDialog_DEFINED
#define RUNTIMECLASS_Windows_UI_Popups_MessageDialog_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Popups_MessageDialog[] = L"Windows.UI.Popups.MessageDialog";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Popups.PopupMenu
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Popups.IPopupMenu ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Popups_PopupMenu_DEFINED
#define RUNTIMECLASS_Windows_UI_Popups_PopupMenu_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Popups_PopupMenu[] = L"Windows.UI.Popups.PopupMenu";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Popups.UICommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Popups.IUICommandFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Popups.IUICommand ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Popups_UICommand_DEFINED
#define RUNTIMECLASS_Windows_UI_Popups_UICommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Popups_UICommand[] = L"Windows.UI.Popups.UICommand";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Popups.UICommandSeparator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Popups.IUICommand ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Popups_UICommandSeparator_DEFINED
#define RUNTIMECLASS_Windows_UI_Popups_UICommandSeparator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Popups_UICommandSeparator[] = L"Windows.UI.Popups.UICommandSeparator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler;

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CPopups_CIMessageDialog_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIMessageDialog_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CPopups_CIMessageDialog __x_ABI_CWindows_CUI_CPopups_CIMessageDialog;

#endif // ____x_ABI_CWindows_CUI_CPopups_CIMessageDialog_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory;

#endif // ____x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CPopups_CIPopupMenu_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIPopupMenu_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CPopups_CIPopupMenu __x_ABI_CWindows_CUI_CPopups_CIPopupMenu;

#endif // ____x_ABI_CWindows_CUI_CPopups_CIPopupMenu_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommand __x_ABI_CWindows_CUI_CPopups_CIUICommand;

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory;

#endif // ____x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CUI__CPopups__CIUICommand __FIIterator_1_Windows__CUI__CPopups__CIUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CPopups__CIUICommand;

typedef struct __FIIterator_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CUI__CPopups__CIUICommandVtbl;

interface __FIIterator_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CUI__CPopups__CIUICommand_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CUI__CPopups__CIUICommand __FIIterable_1_Windows__CUI__CPopups__CIUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CPopups__CIUICommand;

typedef  struct __FIIterable_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CPopups__CIUICommand **first);

    END_INTERFACE
} __FIIterable_1_Windows__CUI__CPopups__CIUICommandVtbl;

interface __FIIterable_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CUI__CPopups__CIUICommand_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CUI__CPopups__CIUICommand __FIVectorView_1_Windows__CUI__CPopups__CIUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CPopups__CIUICommand;

typedef struct __FIVectorView_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
            /* [in] */ __x_ABI_CWindows_CUI_CPopups_CIUICommand * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CPopups__CIUICommandVtbl;

interface __FIVectorView_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CUI__CPopups__CIUICommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CUI__CPopups__CIUICommand __FIVector_1_Windows__CUI__CPopups__CIUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CPopups__CIUICommand;

typedef struct __FIVector_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CPopups__CIUICommand **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, /* [in] */ __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *value);

    END_INTERFACE
} __FIVector_1_Windows__CUI__CPopups__CIUICommandVtbl;

interface __FIVector_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CUI__CPopups__CIUICommand_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommandVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand;

typedef struct __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommandVtbl;

interface __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;


typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;





typedef enum __x_ABI_CWindows_CUI_CPopups_CMessageDialogOptions __x_ABI_CWindows_CUI_CPopups_CMessageDialogOptions;


typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;



















/*
 *
 * Struct Windows.UI.Popups.MessageDialogOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CUI_CPopups_CMessageDialogOptions
{
    MessageDialogOptions_None = 0,
    MessageDialogOptions_AcceptUserInputAfterDelay = 0x1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.UI.Popups.Placement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CUI_CPopups_CPlacement
{
    Placement_Default = 0,
    Placement_Above = 1,
    Placement_Below = 2,
    Placement_Left = 3,
    Placement_Right = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Delegate Windows.UI.Popups.UICommandInvokedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_INTERFACE_DEFINED__
/* [object, uuid("DAF77A4F-C27A-4298-9AC6-2922C45E7DA6"), contract] */
typedef struct __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * command
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandlerVtbl;

interface __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_Invoke(This,command) \
    ( (This)->lpVtbl->Invoke(This,command) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler;
#endif /* !defined(____x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Popups.IMessageDialog
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Popups.MessageDialog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CPopups_CIMessageDialog_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CPopups_CIMessageDialog_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IMessageDialog[] = L"Windows.UI.Popups.IMessageDialog";
/* [object, uuid("33F59B01-5325-43AB-9AB3-BDAE440E4121"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CPopups_CIMessageDialogVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Commands )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CPopups__CIUICommand * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DefaultCommandIndex )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DefaultCommandIndex )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CancelCommandIndex )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CancelCommandIndex )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAsync )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * messageDialogAsyncOperation
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CUI_CPopups_CMessageDialogOptions * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Options )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * This,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CMessageDialogOptions value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CPopups_CIMessageDialogVtbl;

interface __x_ABI_CWindows_CUI_CPopups_CIMessageDialog
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CPopups_CIMessageDialogVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_get_Commands(This,value) \
    ( (This)->lpVtbl->get_Commands(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_get_DefaultCommandIndex(This,value) \
    ( (This)->lpVtbl->get_DefaultCommandIndex(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_put_DefaultCommandIndex(This,value) \
    ( (This)->lpVtbl->put_DefaultCommandIndex(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_get_CancelCommandIndex(This,value) \
    ( (This)->lpVtbl->get_CancelCommandIndex(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_put_CancelCommandIndex(This,value) \
    ( (This)->lpVtbl->put_CancelCommandIndex(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_get_Content(This,value) \
    ( (This)->lpVtbl->get_Content(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_put_Content(This,value) \
    ( (This)->lpVtbl->put_Content(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_ShowAsync(This,messageDialogAsyncOperation) \
    ( (This)->lpVtbl->ShowAsync(This,messageDialogAsyncOperation) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_get_Options(This,value) \
    ( (This)->lpVtbl->get_Options(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialog_put_Options(This,value) \
    ( (This)->lpVtbl->put_Options(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIMessageDialog;
#endif /* !defined(____x_ABI_CWindows_CUI_CPopups_CIMessageDialog_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Popups.IMessageDialogFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Popups.MessageDialog
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IMessageDialogFactory[] = L"Windows.UI.Popups.IMessageDialogFactory";
/* [object, uuid("2D161777-A66F-4EA5-BB87-793FFA4941F2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This,
        /* [in] */__RPC__in HSTRING content,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * * messageDialog
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithTitle )(
        __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory * This,
        /* [in] */__RPC__in HSTRING content,
        /* [in] */__RPC__in HSTRING title,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIMessageDialog * * messageDialog
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactoryVtbl;

interface __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_Create(This,content,messageDialog) \
    ( (This)->lpVtbl->Create(This,content,messageDialog) )

#define __x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_CreateWithTitle(This,content,title,messageDialog) \
    ( (This)->lpVtbl->CreateWithTitle(This,content,title,messageDialog) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CPopups_CIMessageDialogFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Popups.IPopupMenu
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Popups.PopupMenu
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CPopups_CIPopupMenu_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CPopups_CIPopupMenu_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IPopupMenu[] = L"Windows.UI.Popups.IPopupMenu";
/* [object, uuid("4E9BC6DC-880D-47FC-A0A1-72B639E62559"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CPopups_CIPopupMenuVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Commands )(
        __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CUI__CPopups__CIUICommand * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAsync )(
        __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CPoint invocationPoint,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAsyncWithRect )(
        __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ShowAsyncWithRectAndPlacement )(
        __x_ABI_CWindows_CUI_CPopups_CIPopupMenu * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CRect selection,
        /* [in] */__x_ABI_CWindows_CUI_CPopups_CPlacement preferredPlacement,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CPopups_CIPopupMenuVtbl;

interface __x_ABI_CWindows_CUI_CPopups_CIPopupMenu
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CPopups_CIPopupMenuVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CPopups_CIPopupMenu_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CPopups_CIPopupMenu_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CPopups_CIPopupMenu_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CPopups_CIPopupMenu_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CPopups_CIPopupMenu_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CPopups_CIPopupMenu_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CPopups_CIPopupMenu_get_Commands(This,value) \
    ( (This)->lpVtbl->get_Commands(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIPopupMenu_ShowAsync(This,invocationPoint,asyncOperation) \
    ( (This)->lpVtbl->ShowAsync(This,invocationPoint,asyncOperation) )

#define __x_ABI_CWindows_CUI_CPopups_CIPopupMenu_ShowAsyncWithRect(This,selection,asyncOperation) \
    ( (This)->lpVtbl->ShowAsyncWithRect(This,selection,asyncOperation) )

#define __x_ABI_CWindows_CUI_CPopups_CIPopupMenu_ShowAsyncWithRectAndPlacement(This,selection,preferredPlacement,asyncOperation) \
    ( (This)->lpVtbl->ShowAsyncWithRectAndPlacement(This,selection,preferredPlacement,asyncOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIPopupMenu;
#endif /* !defined(____x_ABI_CWindows_CUI_CPopups_CIPopupMenu_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Popups.IUICommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CPopups_CIUICommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IUICommand[] = L"Windows.UI.Popups.IUICommand";
/* [object, uuid("4FF93A75-4145-47FF-AC7F-DFF1C1FA5B0F"), contract] */
typedef struct __x_ABI_CWindows_CUI_CPopups_CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Label )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Invoked )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler  * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Invoked )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler  * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommand * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CPopups_CIUICommandVtbl;

interface __x_ABI_CWindows_CUI_CPopups_CIUICommand
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CPopups_CIUICommandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CPopups_CIUICommand_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommand_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommand_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommand_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommand_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommand_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommand_get_Label(This,value) \
    ( (This)->lpVtbl->get_Label(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommand_put_Label(This,value) \
    ( (This)->lpVtbl->put_Label(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommand_get_Invoked(This,value) \
    ( (This)->lpVtbl->get_Invoked(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommand_put_Invoked(This,value) \
    ( (This)->lpVtbl->put_Invoked(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommand_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommand_put_Id(This,value) \
    ( (This)->lpVtbl->put_Id(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIUICommand;
#endif /* !defined(____x_ABI_CWindows_CUI_CPopups_CIUICommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.UI.Popups.IUICommandFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.UI.Popups.UICommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Popups_IUICommandFactory[] = L"Windows.UI.Popups.IUICommandFactory";
/* [object, uuid("A21A8189-26B0-4676-AE94-54041BC125E8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CUI_CPopups_CIUICommandFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
        /* [in] */__RPC__in HSTRING label,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithHandler )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
        /* [in] */__RPC__in HSTRING label,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler  * action,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * * instance
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithHandlerAndId )(
        __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory * This,
        /* [in] */__RPC__in HSTRING label,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler  * action,
        /* [in] */__RPC__in_opt IInspectable * commandId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * * instance
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CUI_CPopups_CIUICommandFactoryVtbl;

interface __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CPopups_CIUICommandFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_Create(This,label,instance) \
    ( (This)->lpVtbl->Create(This,label,instance) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_CreateWithHandler(This,label,action,instance) \
    ( (This)->lpVtbl->CreateWithHandler(This,label,action,instance) )

#define __x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_CreateWithHandlerAndId(This,label,action,commandId,instance) \
    ( (This)->lpVtbl->CreateWithHandlerAndId(This,label,action,commandId,instance) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CUI_CPopups_CIUICommandFactory;
#endif /* !defined(____x_ABI_CWindows_CUI_CPopups_CIUICommandFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Popups.MessageDialog
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Popups.IMessageDialogFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Popups.IMessageDialog ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Popups_MessageDialog_DEFINED
#define RUNTIMECLASS_Windows_UI_Popups_MessageDialog_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Popups_MessageDialog[] = L"Windows.UI.Popups.MessageDialog";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Popups.PopupMenu
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Popups.IPopupMenu ** Default Interface **
 *
 * Class Marshaling Behavior:  Standard - Class marshals using the standard marshaler
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Popups_PopupMenu_DEFINED
#define RUNTIMECLASS_Windows_UI_Popups_PopupMenu_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Popups_PopupMenu[] = L"Windows.UI.Popups.PopupMenu";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Popups.UICommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.UI.Popups.IUICommandFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Popups.IUICommand ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Popups_UICommand_DEFINED
#define RUNTIMECLASS_Windows_UI_Popups_UICommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Popups_UICommand[] = L"Windows.UI.Popups.UICommand";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.UI.Popups.UICommandSeparator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.UI.Popups.IUICommand ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_UI_Popups_UICommandSeparator_DEFINED
#define RUNTIMECLASS_Windows_UI_Popups_UICommandSeparator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Popups_UICommandSeparator[] = L"Windows.UI.Popups.UICommandSeparator";
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
#endif // __windows2Eui2Epopups_p_h__

#endif // __windows2Eui2Epopups_h__
