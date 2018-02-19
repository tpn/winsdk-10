/* Header file automatically generated from windows.system.threading.core.idl */
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
#ifndef __windows2Esystem2Ethreading2Ecore_h__
#define __windows2Esystem2Ethreading2Ecore_h__
#ifndef __windows2Esystem2Ethreading2Ecore_p_h__
#define __windows2Esystem2Ethreading2Ecore_p_h__


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
#include "Windows.System.Threading.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                namespace Core {
                    interface ISignalHandler;
                } /* Windows */
            } /* System */
        } /* Threading */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler ABI::Windows::System::Threading::Core::ISignalHandler

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                namespace Core {
                    interface IPreallocatedWorkItem;
                } /* Windows */
            } /* System */
        } /* Threading */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem ABI::Windows::System::Threading::Core::IPreallocatedWorkItem

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                namespace Core {
                    interface IPreallocatedWorkItemFactory;
                } /* Windows */
            } /* System */
        } /* Threading */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory ABI::Windows::System::Threading::Core::IPreallocatedWorkItemFactory

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                namespace Core {
                    interface ISignalNotifier;
                } /* Windows */
            } /* System */
        } /* Threading */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier ABI::Windows::System::Threading::Core::ISignalNotifier

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                namespace Core {
                    interface ISignalNotifierStatics;
                } /* Windows */
            } /* System */
        } /* Threading */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics ABI::Windows::System::Threading::Core::ISignalNotifierStatics

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IAsyncAction;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIAsyncAction ABI::Windows::Foundation::IAsyncAction

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                interface IWorkItemHandler;
            } /* Windows */
        } /* System */
    } /* Threading */} /* ABI */
#define __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler ABI::Windows::System::Threading::IWorkItemHandler

#endif // ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                
                typedef enum WorkItemOptions : unsigned int WorkItemOptions;
                
            } /* Windows */
        } /* System */
    } /* Threading */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                
                typedef enum WorkItemPriority : int WorkItemPriority;
                
            } /* Windows */
        } /* System */
    } /* Threading */} /* ABI */









namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                namespace Core {
                    class PreallocatedWorkItem;
                } /* Windows */
            } /* System */
        } /* Threading */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                namespace Core {
                    class SignalNotifier;
                } /* Windows */
            } /* System */
        } /* Threading */
    } /* Core */} /* ABI */







/*
 *
 * Delegate Windows.System.Threading.Core.SignalHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                namespace Core {
                    /* [object, uuid("923C402E-4721-440E-9DDA-55B6F2E07710"), contract] */
                    MIDL_INTERFACE("923C402E-4721-440E-9DDA-55B6F2E07710")
                    ISignalHandler : IUnknown
                    {
                        virtual HRESULT STDMETHODCALLTYPE Invoke(
                            /* [in] */__RPC__in_opt ABI::Windows::System::Threading::Core::ISignalNotifier * signalNotifier,
                            /* [in] */boolean timedOut
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISignalHandler=_uuidof(ISignalHandler);
                    
                } /* Windows */
            } /* System */
        } /* Threading */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Threading.Core.IPreallocatedWorkItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Threading.Core.PreallocatedWorkItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_Core_IPreallocatedWorkItem[] = L"Windows.System.Threading.Core.IPreallocatedWorkItem";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                namespace Core {
                    /* [object, uuid("B6DAA9FC-BC5B-401A-A8B2-6E754D14DAA6"), exclusiveto, contract] */
                    MIDL_INTERFACE("B6DAA9FC-BC5B-401A-A8B2-6E754D14DAA6")
                    IPreallocatedWorkItem : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE RunAsync(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * operation
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPreallocatedWorkItem=_uuidof(IPreallocatedWorkItem);
                    
                } /* Windows */
            } /* System */
        } /* Threading */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Threading.Core.IPreallocatedWorkItemFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Threading.Core.PreallocatedWorkItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_Core_IPreallocatedWorkItemFactory[] = L"Windows.System.Threading.Core.IPreallocatedWorkItemFactory";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                namespace Core {
                    /* [object, uuid("E3D32B45-DFEA-469B-82C5-F6E3CEFDEAFB"), exclusiveto, contract] */
                    MIDL_INTERFACE("E3D32B45-DFEA-469B-82C5-F6E3CEFDEAFB")
                    IPreallocatedWorkItemFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateWorkItem(
                            /* [in] */__RPC__in_opt ABI::Windows::System::Threading::IWorkItemHandler  * handler,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Threading::Core::IPreallocatedWorkItem * * workItem
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWorkItemWithPriority(
                            /* [in] */__RPC__in_opt ABI::Windows::System::Threading::IWorkItemHandler  * handler,
                            /* [in] */ABI::Windows::System::Threading::WorkItemPriority priority,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Threading::Core::IPreallocatedWorkItem * * WorkItem
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateWorkItemWithPriorityAndOptions(
                            /* [in] */__RPC__in_opt ABI::Windows::System::Threading::IWorkItemHandler  * handler,
                            /* [in] */ABI::Windows::System::Threading::WorkItemPriority priority,
                            /* [in] */ABI::Windows::System::Threading::WorkItemOptions options,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Threading::Core::IPreallocatedWorkItem * * WorkItem
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPreallocatedWorkItemFactory=_uuidof(IPreallocatedWorkItemFactory);
                    
                } /* Windows */
            } /* System */
        } /* Threading */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Threading.Core.ISignalNotifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Threading.Core.SignalNotifier
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_Core_ISignalNotifier[] = L"Windows.System.Threading.Core.ISignalNotifier";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                namespace Core {
                    /* [object, uuid("14285E06-63A7-4713-B6D9-62F64B56FB8B"), exclusiveto, contract] */
                    MIDL_INTERFACE("14285E06-63A7-4713-B6D9-62F64B56FB8B")
                    ISignalNotifier : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Enable(void) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Terminate(void) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISignalNotifier=_uuidof(ISignalNotifier);
                    
                } /* Windows */
            } /* System */
        } /* Threading */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Threading.Core.ISignalNotifierStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Threading.Core.SignalNotifier
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_Core_ISignalNotifierStatics[] = L"Windows.System.Threading.Core.ISignalNotifierStatics";
namespace ABI {
    namespace Windows {
        namespace System {
            namespace Threading {
                namespace Core {
                    /* [object, uuid("1C4E4566-8400-46D3-A115-7D0C0DFC9F62"), exclusiveto, contract] */
                    MIDL_INTERFACE("1C4E4566-8400-46D3-A115-7D0C0DFC9F62")
                    ISignalNotifierStatics : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE AttachToEvent(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in_opt ABI::Windows::System::Threading::Core::ISignalHandler  * handler,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Threading::Core::ISignalNotifier * * signalNotifier
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE AttachToEventWithTimeout(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in_opt ABI::Windows::System::Threading::Core::ISignalHandler  * handler,
                            /* [in] */ABI::Windows::Foundation::TimeSpan timeout,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Threading::Core::ISignalNotifier * * signalNotifier
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE AttachToSemaphore(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in_opt ABI::Windows::System::Threading::Core::ISignalHandler  * handler,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Threading::Core::ISignalNotifier * * signalNotifier
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE AttachToSemaphoreWithTimeout(
                            /* [in] */__RPC__in HSTRING name,
                            /* [in] */__RPC__in_opt ABI::Windows::System::Threading::Core::ISignalHandler  * handler,
                            /* [in] */ABI::Windows::Foundation::TimeSpan timeout,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::System::Threading::Core::ISignalNotifier * * signalNotifier
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISignalNotifierStatics=_uuidof(ISignalNotifierStatics);
                    
                } /* Windows */
            } /* System */
        } /* Threading */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Threading.Core.PreallocatedWorkItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.Threading.Core.IPreallocatedWorkItemFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.Threading.Core.IPreallocatedWorkItem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Threading_Core_PreallocatedWorkItem_DEFINED
#define RUNTIMECLASS_Windows_System_Threading_Core_PreallocatedWorkItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Threading_Core_PreallocatedWorkItem[] = L"Windows.System.Threading.Core.PreallocatedWorkItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Threading.Core.SignalNotifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Threading.Core.ISignalNotifierStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.Threading.Core.ISignalNotifier ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Threading_Core_SignalNotifier_DEFINED
#define RUNTIMECLASS_Windows_System_Threading_Core_SignalNotifier_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Threading_Core_SignalNotifier[] = L"Windows.System.Threading.Core.SignalNotifier";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler;

#endif // ____x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler_FWD_DEFINED__



typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions __x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions;


typedef enum __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority __x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority;
















/*
 *
 * Delegate Windows.System.Threading.Core.SignalHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_INTERFACE_DEFINED__
/* [object, uuid("923C402E-4721-440E-9DDA-55B6F2E07710"), contract] */
typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * signalNotifier,
        /* [in] */boolean timedOut
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandlerVtbl;

interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_Invoke(This,signalNotifier,timedOut) \
    ( (This)->lpVtbl->Invoke(This,signalNotifier,timedOut) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Threading.Core.IPreallocatedWorkItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Threading.Core.PreallocatedWorkItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_Core_IPreallocatedWorkItem[] = L"Windows.System.Threading.Core.IPreallocatedWorkItem";
/* [object, uuid("B6DAA9FC-BC5B-401A-A8B2-6E754D14DAA6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RunAsync )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemVtbl;

interface __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_RunAsync(This,operation) \
    ( (This)->lpVtbl->RunAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Threading.Core.IPreallocatedWorkItemFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Threading.Core.PreallocatedWorkItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_Core_IPreallocatedWorkItemFactory[] = L"Windows.System.Threading.Core.IPreallocatedWorkItemFactory";
/* [object, uuid("E3D32B45-DFEA-469B-82C5-F6E3CEFDEAFB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWorkItem )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler  * handler,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * * workItem
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWorkItemWithPriority )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler  * handler,
        /* [in] */__x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * * WorkItem
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWorkItemWithPriorityAndOptions )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CIWorkItemHandler  * handler,
        /* [in] */__x_ABI_CWindows_CSystem_CThreading_CWorkItemPriority priority,
        /* [in] */__x_ABI_CWindows_CSystem_CThreading_CWorkItemOptions options,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItem * * WorkItem
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactoryVtbl;

interface __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_CreateWorkItem(This,handler,workItem) \
    ( (This)->lpVtbl->CreateWorkItem(This,handler,workItem) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_CreateWorkItemWithPriority(This,handler,priority,WorkItem) \
    ( (This)->lpVtbl->CreateWorkItemWithPriority(This,handler,priority,WorkItem) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_CreateWorkItemWithPriorityAndOptions(This,handler,priority,options,WorkItem) \
    ( (This)->lpVtbl->CreateWorkItemWithPriorityAndOptions(This,handler,priority,options,WorkItem) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CIPreallocatedWorkItemFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Threading.Core.ISignalNotifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Threading.Core.SignalNotifier
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_Core_ISignalNotifier[] = L"Windows.System.Threading.Core.ISignalNotifier";
/* [object, uuid("14285E06-63A7-4713-B6D9-62F64B56FB8B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Enable )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This
        );
    HRESULT ( STDMETHODCALLTYPE *Terminate )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * This
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierVtbl;

interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_Enable(This) \
    ( (This)->lpVtbl->Enable(This) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_Terminate(This) \
    ( (This)->lpVtbl->Terminate(This) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.System.Threading.Core.ISignalNotifierStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.System.Threading.Core.SignalNotifier
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Threading_Core_ISignalNotifierStatics[] = L"Windows.System.Threading.Core.ISignalNotifierStatics";
/* [object, uuid("1C4E4566-8400-46D3-A115-7D0C0DFC9F62"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *AttachToEvent )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler  * handler,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * * signalNotifier
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AttachToEventWithTimeout )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler  * handler,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan timeout,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * * signalNotifier
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AttachToSemaphore )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler  * handler,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * * signalNotifier
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *AttachToSemaphoreWithTimeout )(
        __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics * This,
        /* [in] */__RPC__in HSTRING name,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalHandler  * handler,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan timeout,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifier * * signalNotifier
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStaticsVtbl;

interface __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_AttachToEvent(This,name,handler,signalNotifier) \
    ( (This)->lpVtbl->AttachToEvent(This,name,handler,signalNotifier) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_AttachToEventWithTimeout(This,name,handler,timeout,signalNotifier) \
    ( (This)->lpVtbl->AttachToEventWithTimeout(This,name,handler,timeout,signalNotifier) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_AttachToSemaphore(This,name,handler,signalNotifier) \
    ( (This)->lpVtbl->AttachToSemaphore(This,name,handler,signalNotifier) )

#define __x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_AttachToSemaphoreWithTimeout(This,name,handler,timeout,signalNotifier) \
    ( (This)->lpVtbl->AttachToSemaphoreWithTimeout(This,name,handler,timeout,signalNotifier) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics;
#endif /* !defined(____x_ABI_CWindows_CSystem_CThreading_CCore_CISignalNotifierStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Threading.Core.PreallocatedWorkItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.System.Threading.Core.IPreallocatedWorkItemFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.Threading.Core.IPreallocatedWorkItem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Threading_Core_PreallocatedWorkItem_DEFINED
#define RUNTIMECLASS_Windows_System_Threading_Core_PreallocatedWorkItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Threading_Core_PreallocatedWorkItem[] = L"Windows.System.Threading.Core.PreallocatedWorkItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.System.Threading.Core.SignalNotifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.System.Threading.Core.ISignalNotifierStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.System.Threading.Core.ISignalNotifier ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_System_Threading_Core_SignalNotifier_DEFINED
#define RUNTIMECLASS_Windows_System_Threading_Core_SignalNotifier_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Threading_Core_SignalNotifier[] = L"Windows.System.Threading.Core.SignalNotifier";
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
#endif // __windows2Esystem2Ethreading2Ecore_p_h__

#endif // __windows2Esystem2Ethreading2Ecore_h__
