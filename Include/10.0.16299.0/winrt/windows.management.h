/* Header file automatically generated from windows.management.idl */
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
#ifndef __windows2Emanagement_h__
#define __windows2Emanagement_h__
#ifndef __windows2Emanagement_p_h__
#define __windows2Emanagement_p_h__


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
#ifndef ____x_ABI_CWindows_CManagement_CIMdmAlert_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmAlert_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            interface IMdmAlert;
        } /* Windows */
    } /* Management */} /* ABI */
#define __x_ABI_CWindows_CManagement_CIMdmAlert ABI::Windows::Management::IMdmAlert

#endif // ____x_ABI_CWindows_CManagement_CIMdmAlert_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CIMdmSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmSession_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            interface IMdmSession;
        } /* Windows */
    } /* Management */} /* ABI */
#define __x_ABI_CWindows_CManagement_CIMdmSession ABI::Windows::Management::IMdmSession

#endif // ____x_ABI_CWindows_CManagement_CIMdmSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Management {
            interface IMdmSessionManagerStatics;
        } /* Windows */
    } /* Management */} /* ABI */
#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics ABI::Windows::Management::IMdmSessionManagerStatics

#endif // ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Management {
            class MdmAlert;
        } /* Windows */
    } /* Management */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CManagement__CMdmAlert_USE
#define DEF___FIIterator_1_Windows__CManagement__CMdmAlert_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b4a6ebea-b19f-5da5-b3d1-e859f1f4df17"))
IIterator<ABI::Windows::Management::MdmAlert*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::MdmAlert*, ABI::Windows::Management::IMdmAlert*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Management.MdmAlert>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Management::MdmAlert*> __FIIterator_1_Windows__CManagement__CMdmAlert_t;
#define __FIIterator_1_Windows__CManagement__CMdmAlert ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CManagement__CMdmAlert_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CManagement__CMdmAlert ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Management::IMdmAlert*>
//#define __FIIterator_1_Windows__CManagement__CMdmAlert_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Management::IMdmAlert*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CManagement__CMdmAlert_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CManagement__CMdmAlert_USE
#define DEF___FIIterable_1_Windows__CManagement__CMdmAlert_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a0a617dc-210c-529f-b5e9-29aeceebb5a8"))
IIterable<ABI::Windows::Management::MdmAlert*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::MdmAlert*, ABI::Windows::Management::IMdmAlert*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Management.MdmAlert>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Management::MdmAlert*> __FIIterable_1_Windows__CManagement__CMdmAlert_t;
#define __FIIterable_1_Windows__CManagement__CMdmAlert ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CManagement__CMdmAlert_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CManagement__CMdmAlert ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Management::IMdmAlert*>
//#define __FIIterable_1_Windows__CManagement__CMdmAlert_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Management::IMdmAlert*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CManagement__CMdmAlert_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CManagement__CMdmAlert_USE
#define DEF___FIVectorView_1_Windows__CManagement__CMdmAlert_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2b94038c-24aa-5261-80d8-c90f7970644a"))
IVectorView<ABI::Windows::Management::MdmAlert*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Management::MdmAlert*, ABI::Windows::Management::IMdmAlert*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Management.MdmAlert>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Management::MdmAlert*> __FIVectorView_1_Windows__CManagement__CMdmAlert_t;
#define __FIVectorView_1_Windows__CManagement__CMdmAlert ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CManagement__CMdmAlert_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CManagement__CMdmAlert ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Management::IMdmAlert*>
//#define __FIVectorView_1_Windows__CManagement__CMdmAlert_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Management::IMdmAlert*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CManagement__CMdmAlert_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#ifndef DEF___FIIterator_1_HSTRING_USE
#define DEF___FIIterator_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c304ebb-6615-50a4-8829-879ecd443236"))
IIterator<HSTRING> : IIterator_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<HSTRING> __FIIterator_1_HSTRING_t;
#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_HSTRING ABI::Windows::Foundation::Collections::IIterator<HSTRING>
//#define __FIIterator_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_HSTRING_USE */




#ifndef DEF___FIIterable_1_HSTRING_USE
#define DEF___FIIterable_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e2fcc7c1-3bfc-5a0b-b2b0-72e769d1cb7e"))
IIterable<HSTRING> : IIterable_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<HSTRING> __FIIterable_1_HSTRING_t;
#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_HSTRING ABI::Windows::Foundation::Collections::IIterable<HSTRING>
//#define __FIIterable_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_HSTRING_USE */




#ifndef DEF___FIVectorView_1_HSTRING_USE
#define DEF___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2f13c006-a03a-5f69-b090-75a43e33423e"))
IVectorView<HSTRING> : IVectorView_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<HSTRING> __FIVectorView_1_HSTRING_t;
#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
//#define __FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IVectorView<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_HSTRING_USE */





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
        namespace Management {
            
            typedef enum MdmAlertDataType : int MdmAlertDataType;
            
        } /* Windows */
    } /* Management */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Management {
            
            typedef enum MdmAlertMark : int MdmAlertMark;
            
        } /* Windows */
    } /* Management */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Management {
            
            typedef enum MdmSessionState : int MdmSessionState;
            
        } /* Windows */
    } /* Management */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Management {
            class MdmSession;
        } /* Windows */
    } /* Management */} /* ABI */









/*
 *
 * Struct Windows.Management.MdmAlertDataType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Management {
            /* [v1_enum, contract] */
            enum MdmAlertDataType : int
            {
                MdmAlertDataType_String = 0,
                MdmAlertDataType_Base64 = 1,
                MdmAlertDataType_Boolean = 2,
                MdmAlertDataType_Integer = 3,
            };
            
        } /* Windows */
    } /* Management */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Management.MdmAlertMark
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Management {
            /* [v1_enum, contract] */
            enum MdmAlertMark : int
            {
                MdmAlertMark_None = 0,
                MdmAlertMark_Fatal = 1,
                MdmAlertMark_Critical = 2,
                MdmAlertMark_Warning = 3,
                MdmAlertMark_Informational = 4,
            };
            
        } /* Windows */
    } /* Management */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Management.MdmSessionState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace Management {
            /* [v1_enum, contract] */
            enum MdmSessionState : int
            {
                MdmSessionState_NotStarted = 0,
                MdmSessionState_Starting = 1,
                MdmSessionState_Connecting = 2,
                MdmSessionState_Communicating = 3,
                MdmSessionState_AlertStatusAvailable = 4,
                MdmSessionState_Retrying = 5,
                MdmSessionState_Completed = 6,
            };
            
        } /* Windows */
    } /* Management */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.IMdmAlert
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.MdmAlert
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_IMdmAlert[] = L"Windows.Management.IMdmAlert";
namespace ABI {
    namespace Windows {
        namespace Management {
            /* [object, uuid("B0FBC327-28C1-4B52-A548-C5807CAF70B6"), exclusiveto, contract] */
            MIDL_INTERFACE("B0FBC327-28C1-4B52-A548-C5807CAF70B6")
            IMdmAlert : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Data(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Format(
                    /* [retval, out] */__RPC__out ABI::Windows::Management::MdmAlertDataType * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Format(
                    /* [in] */ABI::Windows::Management::MdmAlertDataType value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Mark(
                    /* [retval, out] */__RPC__out ABI::Windows::Management::MdmAlertMark * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Mark(
                    /* [in] */ABI::Windows::Management::MdmAlertMark value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Source(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Source(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                    /* [retval, out] */__RPC__out UINT32 * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Target(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Target(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Type(
                    /* [in] */__RPC__in HSTRING value
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMdmAlert=_uuidof(IMdmAlert);
            
        } /* Windows */
    } /* Management */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CIMdmAlert;
#endif /* !defined(____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.IMdmSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.MdmSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_IMdmSession[] = L"Windows.Management.IMdmSession";
namespace ABI {
    namespace Windows {
        namespace Management {
            /* [object, uuid("FE89314C-8F64-4797-A9D7-9D88F86AE166"), exclusiveto, contract] */
            MIDL_INTERFACE("FE89314C-8F64-4797-A9D7-9D88F86AE166")
            IMdmSession : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Alerts(
                    /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CManagement__CMdmAlert * * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExtendedError(
                    /* [retval, out] */__RPC__out HRESULT * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                    /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                    ) = 0;
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_State(
                    /* [retval, out] */__RPC__out ABI::Windows::Management::MdmSessionState * value
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE AttachAsync(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE Delete(void) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE StartAsync(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                    ) = 0;
                /* [overload] */virtual HRESULT STDMETHODCALLTYPE StartWithAlertsAsync(
                    /* [in] */__RPC__in_opt __FIIterable_1_Windows__CManagement__CMdmAlert * alerts,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMdmSession=_uuidof(IMdmSession);
            
        } /* Windows */
    } /* Management */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CIMdmSession;
#endif /* !defined(____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.IMdmSessionManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.MdmSessionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_IMdmSessionManagerStatics[] = L"Windows.Management.IMdmSessionManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Management {
            /* [object, uuid("CF4AD959-F745-4B79-9B5C-DE0BF8EFE44B"), exclusiveto, contract] */
            MIDL_INTERFACE("CF4AD959-F745-4B79-9B5C-DE0BF8EFE44B")
            IMdmSessionManagerStatics : IInspectable
            {
                /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionIds(
                    /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE TryCreateSession(
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Management::IMdmSession * * result
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE DeleteSessionById(
                    /* [in] */__RPC__in HSTRING sessionId
                    ) = 0;
                virtual HRESULT STDMETHODCALLTYPE GetSessionById(
                    /* [in] */__RPC__in HSTRING sessionId,
                    /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Management::IMdmSession * * result
                    ) = 0;
                
            };

            extern MIDL_CONST_ID IID & IID_IMdmSessionManagerStatics=_uuidof(IMdmSessionManagerStatics);
            
        } /* Windows */
    } /* Management */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Management.MdmAlert
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Management.IMdmAlert ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Management_MdmAlert_DEFINED
#define RUNTIMECLASS_Windows_Management_MdmAlert_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_MdmAlert[] = L"Windows.Management.MdmAlert";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Management.MdmSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.IMdmSession ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Management_MdmSession_DEFINED
#define RUNTIMECLASS_Windows_Management_MdmSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_MdmSession[] = L"Windows.Management.MdmSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Management.MdmSessionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Management.IMdmSessionManagerStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_Management_MdmSessionManager_DEFINED
#define RUNTIMECLASS_Windows_Management_MdmSessionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_MdmSessionManager[] = L"Windows.Management.MdmSessionManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CManagement_CIMdmAlert_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmAlert_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CIMdmAlert __x_ABI_CWindows_CManagement_CIMdmAlert;

#endif // ____x_ABI_CWindows_CManagement_CIMdmAlert_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CIMdmSession_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmSession_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CIMdmSession __x_ABI_CWindows_CManagement_CIMdmSession;

#endif // ____x_ABI_CWindows_CManagement_CIMdmSession_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics;

#endif // ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CManagement__CMdmAlert __FIIterator_1_Windows__CManagement__CMdmAlert;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CManagement__CMdmAlert;

typedef struct __FIIterator_1_Windows__CManagement__CMdmAlertVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CManagement_CIMdmAlert * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CManagement__CMdmAlert * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CManagement_CIMdmAlert * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CManagement__CMdmAlertVtbl;

interface __FIIterator_1_Windows__CManagement__CMdmAlert
{
    CONST_VTBL struct __FIIterator_1_Windows__CManagement__CMdmAlertVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CManagement__CMdmAlert_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CManagement__CMdmAlert_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CManagement__CMdmAlert_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CManagement__CMdmAlert_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CManagement__CMdmAlert __FIIterable_1_Windows__CManagement__CMdmAlert;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CManagement__CMdmAlert;

typedef  struct __FIIterable_1_Windows__CManagement__CMdmAlertVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CManagement__CMdmAlert * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CManagement__CMdmAlert **first);

    END_INTERFACE
} __FIIterable_1_Windows__CManagement__CMdmAlertVtbl;

interface __FIIterable_1_Windows__CManagement__CMdmAlert
{
    CONST_VTBL struct __FIIterable_1_Windows__CManagement__CMdmAlertVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CManagement__CMdmAlert_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CManagement__CMdmAlert_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CManagement__CMdmAlert_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CManagement__CMdmAlert_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CManagement__CMdmAlert_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CManagement__CMdmAlert_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CManagement__CMdmAlert_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CManagement__CMdmAlert __FIVectorView_1_Windows__CManagement__CMdmAlert;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CManagement__CMdmAlert;

typedef struct __FIVectorView_1_Windows__CManagement__CMdmAlertVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CManagement_CIMdmAlert * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
            /* [in] */ __x_ABI_CWindows_CManagement_CIMdmAlert * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CManagement__CMdmAlert * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CManagement_CIMdmAlert * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CManagement__CMdmAlertVtbl;

interface __FIVectorView_1_Windows__CManagement__CMdmAlert
{
    CONST_VTBL struct __FIVectorView_1_Windows__CManagement__CMdmAlertVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CManagement__CMdmAlert_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CManagement__CMdmAlert_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CManagement__CMdmAlert_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CManagement__CMdmAlert_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CManagement__CMdmAlert_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#if !defined(____FIIterator_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_HSTRING;

typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;

interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIIterable_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_HSTRING;

typedef  struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_HSTRING **first);

    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;

interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_HSTRING;

typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out HSTRING *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_HSTRING * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ HSTRING item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_HSTRING * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;

interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_HSTRING_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CManagement_CMdmAlertDataType __x_ABI_CWindows_CManagement_CMdmAlertDataType;


typedef enum __x_ABI_CWindows_CManagement_CMdmAlertMark __x_ABI_CWindows_CManagement_CMdmAlertMark;


typedef enum __x_ABI_CWindows_CManagement_CMdmSessionState __x_ABI_CWindows_CManagement_CMdmSessionState;













/*
 *
 * Struct Windows.Management.MdmAlertDataType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CManagement_CMdmAlertDataType
{
    MdmAlertDataType_String = 0,
    MdmAlertDataType_Base64 = 1,
    MdmAlertDataType_Boolean = 2,
    MdmAlertDataType_Integer = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Management.MdmAlertMark
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CManagement_CMdmAlertMark
{
    MdmAlertMark_None = 0,
    MdmAlertMark_Fatal = 1,
    MdmAlertMark_Critical = 2,
    MdmAlertMark_Warning = 3,
    MdmAlertMark_Informational = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.Management.MdmSessionState
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CManagement_CMdmSessionState
{
    MdmSessionState_NotStarted = 0,
    MdmSessionState_Starting = 1,
    MdmSessionState_Connecting = 2,
    MdmSessionState_Communicating = 3,
    MdmSessionState_AlertStatusAvailable = 4,
    MdmSessionState_Retrying = 5,
    MdmSessionState_Completed = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.IMdmAlert
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.MdmAlert
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_IMdmAlert[] = L"Windows.Management.IMdmAlert";
/* [object, uuid("B0FBC327-28C1-4B52-A548-C5807CAF70B6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CIMdmAlertVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmAlert * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CManagement_CIMdmAlert * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CManagement_CIMdmAlert * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CManagement_CIMdmAlert * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CManagement_CMdmAlertDataType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Format )(
        __x_ABI_CWindows_CManagement_CIMdmAlert * This,
        /* [in] */__x_ABI_CWindows_CManagement_CMdmAlertDataType value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Mark )(
        __x_ABI_CWindows_CManagement_CIMdmAlert * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CManagement_CMdmAlertMark * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Mark )(
        __x_ABI_CWindows_CManagement_CIMdmAlert * This,
        /* [in] */__x_ABI_CWindows_CManagement_CMdmAlertMark value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CManagement_CIMdmAlert * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CManagement_CIMdmAlert * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CManagement_CIMdmAlert * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Target )(
        __x_ABI_CWindows_CManagement_CIMdmAlert * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Target )(
        __x_ABI_CWindows_CManagement_CIMdmAlert * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CManagement_CIMdmAlert * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CManagement_CIMdmAlert * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CIMdmAlertVtbl;

interface __x_ABI_CWindows_CManagement_CIMdmAlert
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CIMdmAlertVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CIMdmAlert_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_put_Data(This,value) \
    ( (This)->lpVtbl->put_Data(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Format(This,value) \
    ( (This)->lpVtbl->get_Format(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_put_Format(This,value) \
    ( (This)->lpVtbl->put_Format(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Mark(This,value) \
    ( (This)->lpVtbl->get_Mark(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_put_Mark(This,value) \
    ( (This)->lpVtbl->put_Mark(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Source(This,value) \
    ( (This)->lpVtbl->get_Source(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_put_Source(This,value) \
    ( (This)->lpVtbl->put_Source(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Target(This,value) \
    ( (This)->lpVtbl->get_Target(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_put_Target(This,value) \
    ( (This)->lpVtbl->put_Target(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmAlert_put_Type(This,value) \
    ( (This)->lpVtbl->put_Type(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CIMdmAlert;
#endif /* !defined(____x_ABI_CWindows_CManagement_CIMdmAlert_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.IMdmSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.MdmSession
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_IMdmSession[] = L"Windows.Management.IMdmSession";
/* [object, uuid("FE89314C-8F64-4797-A9D7-9D88F86AE166"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CIMdmSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmSession * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Alerts )(
        __x_ABI_CWindows_CManagement_CIMdmSession * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CManagement__CMdmAlert * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CManagement_CIMdmSession * This,
        /* [retval, out] */__RPC__out HRESULT * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CManagement_CIMdmSession * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CManagement_CIMdmSession * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CManagement_CMdmSessionState * value
        );
    HRESULT ( STDMETHODCALLTYPE *AttachAsync )(
        __x_ABI_CWindows_CManagement_CIMdmSession * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *Delete )(
        __x_ABI_CWindows_CManagement_CIMdmSession * This
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CManagement_CIMdmSession * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *StartWithAlertsAsync )(
        __x_ABI_CWindows_CManagement_CIMdmSession * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CManagement__CMdmAlert * alerts,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CIMdmSessionVtbl;

interface __x_ABI_CWindows_CManagement_CIMdmSession
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CIMdmSessionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CIMdmSession_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CIMdmSession_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CIMdmSession_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CIMdmSession_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CIMdmSession_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CIMdmSession_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CIMdmSession_get_Alerts(This,value) \
    ( (This)->lpVtbl->get_Alerts(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmSession_get_ExtendedError(This,value) \
    ( (This)->lpVtbl->get_ExtendedError(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmSession_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmSession_get_State(This,value) \
    ( (This)->lpVtbl->get_State(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmSession_AttachAsync(This,action) \
    ( (This)->lpVtbl->AttachAsync(This,action) )

#define __x_ABI_CWindows_CManagement_CIMdmSession_Delete(This) \
    ( (This)->lpVtbl->Delete(This) )

#define __x_ABI_CWindows_CManagement_CIMdmSession_StartAsync(This,action) \
    ( (This)->lpVtbl->StartAsync(This,action) )

#define __x_ABI_CWindows_CManagement_CIMdmSession_StartWithAlertsAsync(This,alerts,action) \
    ( (This)->lpVtbl->StartWithAlertsAsync(This,alerts,action) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CIMdmSession;
#endif /* !defined(____x_ABI_CWindows_CManagement_CIMdmSession_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Management.IMdmSessionManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Management.MdmSessionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_IMdmSessionManagerStatics[] = L"Windows.Management.IMdmSessionManagerStatics";
/* [object, uuid("CF4AD959-F745-4B79-9B5C-DE0BF8EFE44B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CManagement_CIMdmSessionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionIds )(
        __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryCreateSession )(
        __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CManagement_CIMdmSession * * result
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteSessionById )(
        __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
        /* [in] */__RPC__in HSTRING sessionId
        );
    HRESULT ( STDMETHODCALLTYPE *GetSessionById )(
        __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics * This,
        /* [in] */__RPC__in HSTRING sessionId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CManagement_CIMdmSession * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CManagement_CIMdmSessionManagerStaticsVtbl;

interface __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CIMdmSessionManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_get_SessionIds(This,value) \
    ( (This)->lpVtbl->get_SessionIds(This,value) )

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_TryCreateSession(This,result) \
    ( (This)->lpVtbl->TryCreateSession(This,result) )

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_DeleteSessionById(This,sessionId) \
    ( (This)->lpVtbl->DeleteSessionById(This,sessionId) )

#define __x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_GetSessionById(This,sessionId,result) \
    ( (This)->lpVtbl->GetSessionById(This,sessionId,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CManagement_CIMdmSessionManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Management.MdmAlert
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Management.IMdmAlert ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Management_MdmAlert_DEFINED
#define RUNTIMECLASS_Windows_Management_MdmAlert_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_MdmAlert[] = L"Windows.Management.MdmAlert";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Management.MdmSession
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Management.IMdmSession ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Management_MdmSession_DEFINED
#define RUNTIMECLASS_Windows_Management_MdmSession_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_MdmSession[] = L"Windows.Management.MdmSession";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Management.MdmSessionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Management.IMdmSessionManagerStatics interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#ifndef RUNTIMECLASS_Windows_Management_MdmSessionManager_DEFINED
#define RUNTIMECLASS_Windows_Management_MdmSessionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_MdmSessionManager[] = L"Windows.Management.MdmSessionManager";
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
#endif // __windows2Emanagement_p_h__

#endif // __windows2Emanagement_h__
