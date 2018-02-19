/* Header file automatically generated from windows.security.authentication.identity.core.idl */
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
#ifndef __windows2Esecurity2Eauthentication2Eidentity2Ecore_h__
#define __windows2Esecurity2Eauthentication2Eidentity2Ecore_h__
#ifndef __windows2Esecurity2Eauthentication2Eidentity2Ecore_p_h__
#define __windows2Esecurity2Eauthentication2Eidentity2Ecore_p_h__


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
#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        interface IMicrosoftAccountMultiFactorAuthenticationManager;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        interface IMicrosoftAccountMultiFactorAuthenticatorStatics;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticatorStatics

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        interface IMicrosoftAccountMultiFactorGetSessionsResult;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        interface IMicrosoftAccountMultiFactorOneTimeCodedInfo;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        interface IMicrosoftAccountMultiFactorSessionInfo;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        interface IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        class MicrosoftAccountMultiFactorSessionInfo;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_USE
#define DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fd6d2ade-0fd3-5cd0-b86e-d24ad9a2092c"))
IIterator<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo*, ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo*> __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_t;
#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo*>
//#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_USE
#define DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("85a662c8-8a5d-59a8-9f73-ee237393c55c"))
IIterable<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo*, ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo*> __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_t;
#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo*>
//#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6abe486b-ea5e-5fda-9121-79d8a785c465"))
IVectorView<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo*, ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionInfo*> __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_t;
#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo*>
//#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        class MicrosoftAccountMultiFactorGetSessionsResult;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cecbb0ca-0a27-57d4-a35d-4998f199dac9"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult*, ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorGetSessionsResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("544cc4e9-a3da-5398-a308-e332a58961f6"))
IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult*, ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorGetSessionsResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorGetSessionsResult*> __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorGetSessionsResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        class MicrosoftAccountMultiFactorOneTimeCodedInfo;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("02e84540-f4a1-589f-9360-a0502e6dc9c0"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo*, ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorOneTimeCodedInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("ae63588e-1fc2-58a3-af36-6f67b8922be7"))
IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo*, ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorOneTimeCodedInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorOneTimeCodedInfo*> __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorOneTimeCodedInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        enum MicrosoftAccountMultiFactorServiceResponse : int;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("8d7f8240-81cf-5896-95fa-e7b223f769f9"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorServiceResponse>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("05953b8e-5adb-51b9-a94a-ad030030b8e3"))
IAsyncOperation<enum ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> : IAsyncOperation_impl<enum ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorServiceResponse>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse> __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_USE */



namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        class MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6cc53e8c-d0e4-5ded-94f4-7c73b132d2a4"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo*, ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("989f4c21-ef69-56ad-ba8c-e5d25a3c624e"))
IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo*, ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo*> __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


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





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        
                        typedef enum MicrosoftAccountMultiFactorAuthenticationType : int MicrosoftAccountMultiFactorAuthenticationType;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        
                        typedef enum MicrosoftAccountMultiFactorServiceResponse : int MicrosoftAccountMultiFactorServiceResponse;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        
                        typedef enum MicrosoftAccountMultiFactorSessionApprovalStatus : int MicrosoftAccountMultiFactorSessionApprovalStatus;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        
                        typedef enum MicrosoftAccountMultiFactorSessionAuthenticationStatus : int MicrosoftAccountMultiFactorSessionAuthenticationStatus;
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */







namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        class MicrosoftAccountMultiFactorAuthenticationManager;
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */


















/*
 *
 * Struct Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorAuthenticationType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        /* [v1_enum, contract] */
                        enum MicrosoftAccountMultiFactorAuthenticationType : int
                        {
                            MicrosoftAccountMultiFactorAuthenticationType_User = 0,
                            MicrosoftAccountMultiFactorAuthenticationType_Device = 1,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorServiceResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        /* [v1_enum, contract] */
                        enum MicrosoftAccountMultiFactorServiceResponse : int
                        {
                            MicrosoftAccountMultiFactorServiceResponse_Success = 0,
                            MicrosoftAccountMultiFactorServiceResponse_Error = 1,
                            MicrosoftAccountMultiFactorServiceResponse_NoNetworkConnection = 2,
                            MicrosoftAccountMultiFactorServiceResponse_ServiceUnavailable = 3,
                            MicrosoftAccountMultiFactorServiceResponse_TotpSetupDenied = 4,
                            MicrosoftAccountMultiFactorServiceResponse_NgcNotSetup = 5,
                            MicrosoftAccountMultiFactorServiceResponse_SessionAlreadyDenied = 6,
                            MicrosoftAccountMultiFactorServiceResponse_SessionAlreadyApproved = 7,
                            MicrosoftAccountMultiFactorServiceResponse_SessionExpired = 8,
                            MicrosoftAccountMultiFactorServiceResponse_NgcNonceExpired = 9,
                            MicrosoftAccountMultiFactorServiceResponse_InvalidSessionId = 10,
                            MicrosoftAccountMultiFactorServiceResponse_InvalidSessionType = 11,
                            MicrosoftAccountMultiFactorServiceResponse_InvalidOperation = 12,
                            MicrosoftAccountMultiFactorServiceResponse_InvalidStateTransition = 13,
                            MicrosoftAccountMultiFactorServiceResponse_DeviceNotFound = 14,
                            MicrosoftAccountMultiFactorServiceResponse_FlowDisabled = 15,
                            MicrosoftAccountMultiFactorServiceResponse_SessionNotApproved = 16,
                            MicrosoftAccountMultiFactorServiceResponse_OperationCanceledByUser = 17,
                            MicrosoftAccountMultiFactorServiceResponse_NgcDisabledByServer = 18,
                            MicrosoftAccountMultiFactorServiceResponse_NgcKeyNotFoundOnServer = 19,
                            MicrosoftAccountMultiFactorServiceResponse_UIRequired = 20,
                            MicrosoftAccountMultiFactorServiceResponse_DeviceIdChanged = 21,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionApprovalStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        /* [v1_enum, contract] */
                        enum MicrosoftAccountMultiFactorSessionApprovalStatus : int
                        {
                            MicrosoftAccountMultiFactorSessionApprovalStatus_Pending = 0,
                            MicrosoftAccountMultiFactorSessionApprovalStatus_Approved = 1,
                            MicrosoftAccountMultiFactorSessionApprovalStatus_Denied = 2,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionAuthenticationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        /* [v1_enum, contract] */
                        enum MicrosoftAccountMultiFactorSessionAuthenticationStatus : int
                        {
                            MicrosoftAccountMultiFactorSessionAuthenticationStatus_Authenticated = 0,
                            MicrosoftAccountMultiFactorSessionAuthenticationStatus_Unauthenticated = 1,
                        };
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticationManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorAuthenticationManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticationManager";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        /* [object, uuid("0FD340A5-F574-4320-A08E-0A19A82322AA"), exclusiveto, contract] */
                        MIDL_INTERFACE("0FD340A5-F574-4320-A08E-0A19A82322AA")
                        IMicrosoftAccountMultiFactorAuthenticationManager : IInspectable
                        {
                            virtual HRESULT STDMETHODCALLTYPE GetOneTimePassCodeAsync(
                                /* [in] */__RPC__in HSTRING userAccountId,
                                /* [in] */UINT32 codeLength,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * * asyncOperation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE AddDeviceAsync(
                                /* [in] */__RPC__in HSTRING userAccountId,
                                /* [in] */__RPC__in HSTRING authenticationToken,
                                /* [in] */__RPC__in HSTRING wnsChannelId,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE RemoveDeviceAsync(
                                /* [in] */__RPC__in HSTRING userAccountId,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE UpdateWnsChannelAsync(
                                /* [in] */__RPC__in HSTRING userAccountId,
                                /* [in] */__RPC__in HSTRING channelUri,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetSessionsAsync(
                                /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * userAccountIdList,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * * asyncOperation
                                ) = 0;
                            virtual HRESULT STDMETHODCALLTYPE GetSessionsAndUnregisteredAccountsAsync(
                                /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * userAccountIdList,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * * asyncOperation
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE ApproveSessionUsingAuthSessionInfoAsync(
                                /* [in] */ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus sessionAuthentictionStatus,
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo * authenticationSessionInfo,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE ApproveSessionAsync(
                                /* [in] */ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionAuthenticationStatus sessionAuthentictionStatus,
                                /* [in] */__RPC__in HSTRING userAccountId,
                                /* [in] */__RPC__in HSTRING sessionId,
                                /* [in] */ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType sessionAuthenticationType,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE DenySessionUsingAuthSessionInfoAsync(
                                /* [in] */__RPC__in_opt ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorSessionInfo * authenticationSessionInfo,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
                                ) = 0;
                            /* [overload] */virtual HRESULT STDMETHODCALLTYPE DenySessionAsync(
                                /* [in] */__RPC__in HSTRING userAccountId,
                                /* [in] */__RPC__in HSTRING sessionId,
                                /* [in] */ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType sessionAuthenticationType,
                                /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IMicrosoftAccountMultiFactorAuthenticationManager=_uuidof(IMicrosoftAccountMultiFactorAuthenticationManager);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticatorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorAuthenticationManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticatorStatics[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticatorStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        /* [object, uuid("D964C2E6-F446-4C71-8B79-6EA4024AA9B8"), exclusiveto, contract] */
                        MIDL_INTERFACE("D964C2E6-F446-4C71-8B79-6EA4024AA9B8")
                        IMicrosoftAccountMultiFactorAuthenticatorStatics : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Current(
                                /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Authentication::Identity::Core::IMicrosoftAccountMultiFactorAuthenticationManager * * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IMicrosoftAccountMultiFactorAuthenticatorStatics=_uuidof(IMicrosoftAccountMultiFactorAuthenticatorStatics);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorGetSessionsResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorGetSessionsResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorGetSessionsResult[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorGetSessionsResult";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        /* [object, uuid("4E23A9A0-E9FA-497A-95DE-6D5747BF974C"), exclusiveto, contract] */
                        MIDL_INTERFACE("4E23A9A0-E9FA-497A-95DE-6D5747BF974C")
                        IMicrosoftAccountMultiFactorGetSessionsResult : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sessions(
                                /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceResponse(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IMicrosoftAccountMultiFactorGetSessionsResult=_uuidof(IMicrosoftAccountMultiFactorGetSessionsResult);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorOneTimeCodedInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorOneTimeCodedInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorOneTimeCodedInfo[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorOneTimeCodedInfo";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        /* [object, uuid("82BA264B-D87C-4668-A976-40CFAE547D08"), exclusiveto, contract] */
                        MIDL_INTERFACE("82BA264B-D87C-4668-A976-40CFAE547D08")
                        IMicrosoftAccountMultiFactorOneTimeCodedInfo : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Code(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TimeInterval(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TimeToLive(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceResponse(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IMicrosoftAccountMultiFactorOneTimeCodedInfo=_uuidof(IMicrosoftAccountMultiFactorOneTimeCodedInfo);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorSessionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorSessionInfo";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        /* [object, uuid("5F7EABB4-A278-4635-B765-B494EB260AF4"), exclusiveto, contract] */
                        MIDL_INTERFACE("5F7EABB4-A278-4635-B765-B494EB260AF4")
                        IMicrosoftAccountMultiFactorSessionInfo : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserAccountId(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SessionId(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplaySessionId(
                                /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ApprovalStatus(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorSessionApprovalStatus * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthenticationType(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorAuthenticationType * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestTime(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExpirationTime(
                                /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IMicrosoftAccountMultiFactorSessionInfo=_uuidof(IMicrosoftAccountMultiFactorSessionInfo);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Authentication {
                namespace Identity {
                    namespace Core {
                        /* [object, uuid("AA7EC5FB-DA3F-4088-A20D-5618AFADB2E5"), exclusiveto, contract] */
                        MIDL_INTERFACE("AA7EC5FB-DA3F-4088-A20D-5618AFADB2E5")
                        IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo : IInspectable
                        {
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sessions(
                                /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UnregisteredAccounts(
                                /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                                ) = 0;
                            /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServiceResponse(
                                /* [retval, out] */__RPC__out ABI::Windows::Security::Authentication::Identity::Core::MicrosoftAccountMultiFactorServiceResponse * value
                                ) = 0;
                            
                        };

                        extern MIDL_CONST_ID IID & IID_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo=_uuidof(IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo);
                        
                    } /* Windows */
                } /* Security */
            } /* Authentication */
        } /* Identity */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorAuthenticationManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticatorStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticationManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorAuthenticationManager_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorAuthenticationManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorAuthenticationManager[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorAuthenticationManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorGetSessionsResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorGetSessionsResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorGetSessionsResult_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorGetSessionsResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorGetSessionsResult[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorGetSessionsResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorOneTimeCodedInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorOneTimeCodedInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorOneTimeCodedInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorOneTimeCodedInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorOneTimeCodedInfo[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorOneTimeCodedInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorSessionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorSessionInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorSessionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorSessionInfo[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000






#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;

#endif // ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo;

typedef struct __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl;

interface __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo;

typedef  struct __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl;

interface __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo;

typedef struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl;

interface __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResultVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponseVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponseVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponseVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

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




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;


typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;





typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorAuthenticationType __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorAuthenticationType;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionApprovalStatus __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionApprovalStatus;


typedef enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionAuthenticationStatus __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionAuthenticationStatus;
























/*
 *
 * Struct Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorAuthenticationType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorAuthenticationType
{
    MicrosoftAccountMultiFactorAuthenticationType_User = 0,
    MicrosoftAccountMultiFactorAuthenticationType_Device = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorServiceResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse
{
    MicrosoftAccountMultiFactorServiceResponse_Success = 0,
    MicrosoftAccountMultiFactorServiceResponse_Error = 1,
    MicrosoftAccountMultiFactorServiceResponse_NoNetworkConnection = 2,
    MicrosoftAccountMultiFactorServiceResponse_ServiceUnavailable = 3,
    MicrosoftAccountMultiFactorServiceResponse_TotpSetupDenied = 4,
    MicrosoftAccountMultiFactorServiceResponse_NgcNotSetup = 5,
    MicrosoftAccountMultiFactorServiceResponse_SessionAlreadyDenied = 6,
    MicrosoftAccountMultiFactorServiceResponse_SessionAlreadyApproved = 7,
    MicrosoftAccountMultiFactorServiceResponse_SessionExpired = 8,
    MicrosoftAccountMultiFactorServiceResponse_NgcNonceExpired = 9,
    MicrosoftAccountMultiFactorServiceResponse_InvalidSessionId = 10,
    MicrosoftAccountMultiFactorServiceResponse_InvalidSessionType = 11,
    MicrosoftAccountMultiFactorServiceResponse_InvalidOperation = 12,
    MicrosoftAccountMultiFactorServiceResponse_InvalidStateTransition = 13,
    MicrosoftAccountMultiFactorServiceResponse_DeviceNotFound = 14,
    MicrosoftAccountMultiFactorServiceResponse_FlowDisabled = 15,
    MicrosoftAccountMultiFactorServiceResponse_SessionNotApproved = 16,
    MicrosoftAccountMultiFactorServiceResponse_OperationCanceledByUser = 17,
    MicrosoftAccountMultiFactorServiceResponse_NgcDisabledByServer = 18,
    MicrosoftAccountMultiFactorServiceResponse_NgcKeyNotFoundOnServer = 19,
    MicrosoftAccountMultiFactorServiceResponse_UIRequired = 20,
    MicrosoftAccountMultiFactorServiceResponse_DeviceIdChanged = 21,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionApprovalStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionApprovalStatus
{
    MicrosoftAccountMultiFactorSessionApprovalStatus_Pending = 0,
    MicrosoftAccountMultiFactorSessionApprovalStatus_Approved = 1,
    MicrosoftAccountMultiFactorSessionApprovalStatus_Denied = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Struct Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionAuthenticationStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionAuthenticationStatus
{
    MicrosoftAccountMultiFactorSessionAuthenticationStatus_Authenticated = 0,
    MicrosoftAccountMultiFactorSessionAuthenticationStatus_Unauthenticated = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticationManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorAuthenticationManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticationManager[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticationManager";
/* [object, uuid("0FD340A5-F574-4320-A08E-0A19A82322AA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetOneTimePassCodeAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
        /* [in] */__RPC__in HSTRING userAccountId,
        /* [in] */UINT32 codeLength,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorOneTimeCodedInfo * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *AddDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
        /* [in] */__RPC__in HSTRING userAccountId,
        /* [in] */__RPC__in HSTRING authenticationToken,
        /* [in] */__RPC__in HSTRING wnsChannelId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveDeviceAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
        /* [in] */__RPC__in HSTRING userAccountId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateWnsChannelAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
        /* [in] */__RPC__in HSTRING userAccountId,
        /* [in] */__RPC__in HSTRING channelUri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSessionsAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * userAccountIdList,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorGetSessionsResult * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetSessionsAndUnregisteredAccountsAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * userAccountIdList,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * * asyncOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ApproveSessionUsingAuthSessionInfoAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionAuthenticationStatus sessionAuthentictionStatus,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * authenticationSessionInfo,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ApproveSessionAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionAuthenticationStatus sessionAuthentictionStatus,
        /* [in] */__RPC__in HSTRING userAccountId,
        /* [in] */__RPC__in HSTRING sessionId,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorAuthenticationType sessionAuthenticationType,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *DenySessionUsingAuthSessionInfoAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * authenticationSessionInfo,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *DenySessionAsync )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * This,
        /* [in] */__RPC__in HSTRING userAccountId,
        /* [in] */__RPC__in HSTRING sessionId,
        /* [in] */__x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorAuthenticationType sessionAuthenticationType,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorServiceResponse * * asyncOperation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManagerVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_GetOneTimePassCodeAsync(This,userAccountId,codeLength,asyncOperation) \
    ( (This)->lpVtbl->GetOneTimePassCodeAsync(This,userAccountId,codeLength,asyncOperation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_AddDeviceAsync(This,userAccountId,authenticationToken,wnsChannelId,asyncOperation) \
    ( (This)->lpVtbl->AddDeviceAsync(This,userAccountId,authenticationToken,wnsChannelId,asyncOperation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_RemoveDeviceAsync(This,userAccountId,asyncOperation) \
    ( (This)->lpVtbl->RemoveDeviceAsync(This,userAccountId,asyncOperation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_UpdateWnsChannelAsync(This,userAccountId,channelUri,asyncOperation) \
    ( (This)->lpVtbl->UpdateWnsChannelAsync(This,userAccountId,channelUri,asyncOperation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_GetSessionsAsync(This,userAccountIdList,asyncOperation) \
    ( (This)->lpVtbl->GetSessionsAsync(This,userAccountIdList,asyncOperation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_GetSessionsAndUnregisteredAccountsAsync(This,userAccountIdList,asyncOperation) \
    ( (This)->lpVtbl->GetSessionsAndUnregisteredAccountsAsync(This,userAccountIdList,asyncOperation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_ApproveSessionUsingAuthSessionInfoAsync(This,sessionAuthentictionStatus,authenticationSessionInfo,asyncOperation) \
    ( (This)->lpVtbl->ApproveSessionUsingAuthSessionInfoAsync(This,sessionAuthentictionStatus,authenticationSessionInfo,asyncOperation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_ApproveSessionAsync(This,sessionAuthentictionStatus,userAccountId,sessionId,sessionAuthenticationType,asyncOperation) \
    ( (This)->lpVtbl->ApproveSessionAsync(This,sessionAuthentictionStatus,userAccountId,sessionId,sessionAuthenticationType,asyncOperation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_DenySessionUsingAuthSessionInfoAsync(This,authenticationSessionInfo,asyncOperation) \
    ( (This)->lpVtbl->DenySessionUsingAuthSessionInfoAsync(This,authenticationSessionInfo,asyncOperation) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_DenySessionAsync(This,userAccountId,sessionId,sessionAuthenticationType,asyncOperation) \
    ( (This)->lpVtbl->DenySessionAsync(This,userAccountId,sessionId,sessionAuthenticationType,asyncOperation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticatorStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorAuthenticationManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorAuthenticatorStatics[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticatorStatics";
/* [object, uuid("D964C2E6-F446-4C71-8B79-6EA4024AA9B8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticationManager * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_get_Current(This,value) \
    ( (This)->lpVtbl->get_Current(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorAuthenticatorStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorGetSessionsResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorGetSessionsResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorGetSessionsResult[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorGetSessionsResult";
/* [object, uuid("4E23A9A0-E9FA-497A-95DE-6D5747BF974C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sessions )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceResponse )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResultVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_get_Sessions(This,value) \
    ( (This)->lpVtbl->get_Sessions(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_get_ServiceResponse(This,value) \
    ( (This)->lpVtbl->get_ServiceResponse(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorGetSessionsResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorOneTimeCodedInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorOneTimeCodedInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorOneTimeCodedInfo[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorOneTimeCodedInfo";
/* [object, uuid("82BA264B-D87C-4668-A976-40CFAE547D08"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Code )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TimeInterval )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TimeToLive )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceResponse )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_get_Code(This,value) \
    ( (This)->lpVtbl->get_Code(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_get_TimeInterval(This,value) \
    ( (This)->lpVtbl->get_TimeInterval(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_get_TimeToLive(This,value) \
    ( (This)->lpVtbl->get_TimeToLive(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_get_ServiceResponse(This,value) \
    ( (This)->lpVtbl->get_ServiceResponse(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorOneTimeCodedInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorSessionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorSessionInfo[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorSessionInfo";
/* [object, uuid("5F7EABB4-A278-4635-B765-B494EB260AF4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserAccountId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SessionId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplaySessionId )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ApprovalStatus )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorSessionApprovalStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthenticationType )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorAuthenticationType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestTime )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfoVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_get_UserAccountId(This,value) \
    ( (This)->lpVtbl->get_UserAccountId(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_get_SessionId(This,value) \
    ( (This)->lpVtbl->get_SessionId(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_get_DisplaySessionId(This,value) \
    ( (This)->lpVtbl->get_DisplaySessionId(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_get_ApprovalStatus(This,value) \
    ( (This)->lpVtbl->get_ApprovalStatus(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_get_AuthenticationType(This,value) \
    ( (This)->lpVtbl->get_AuthenticationType(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_get_RequestTime(This,value) \
    ( (This)->lpVtbl->get_RequestTime(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_get_ExpirationTime(This,value) \
    ( (This)->lpVtbl->get_ExpirationTime(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorSessionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Authentication_Identity_Core_IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo[] = L"Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo";
/* [object, uuid("AA7EC5FB-DA3F-4088-A20D-5618AFADB2E5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sessions )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CAuthentication__CIdentity__CCore__CMicrosoftAccountMultiFactorSessionInfo * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UnregisteredAccounts )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServiceResponse )(
        __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CMicrosoftAccountMultiFactorServiceResponse * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl;

interface __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_get_Sessions(This,value) \
    ( (This)->lpVtbl->get_Sessions(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_get_UnregisteredAccounts(This,value) \
    ( (This)->lpVtbl->get_UnregisteredAccounts(This,value) )

#define __x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_get_ServiceResponse(This,value) \
    ( (This)->lpVtbl->get_ServiceResponse(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CAuthentication_CIdentity_CCore_CIMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorAuthenticationManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticatorStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorAuthenticationManager ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorAuthenticationManager_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorAuthenticationManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorAuthenticationManager[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorAuthenticationManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorGetSessionsResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorGetSessionsResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorGetSessionsResult_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorGetSessionsResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorGetSessionsResult[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorGetSessionsResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorOneTimeCodedInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorOneTimeCodedInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorOneTimeCodedInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorOneTimeCodedInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorOneTimeCodedInfo[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorOneTimeCodedInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorSessionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorSessionInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorSessionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorSessionInfo[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorSessionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Authentication.Identity.Core.IMicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Authentication_Identity_Core_MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo[] = L"Windows.Security.Authentication.Identity.Core.MicrosoftAccountMultiFactorUnregisteredAccountsAndSessionInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000






#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Esecurity2Eauthentication2Eidentity2Ecore_p_h__

#endif // __windows2Esecurity2Eauthentication2Eidentity2Ecore_h__
