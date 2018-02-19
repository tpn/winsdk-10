/* Header file automatically generated from windows.security.exchangeactivesyncprovisioning.idl */
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
#ifndef __windows2Esecurity2Eexchangeactivesyncprovisioning_h__
#define __windows2Esecurity2Eexchangeactivesyncprovisioning_h__
#ifndef __windows2Esecurity2Eexchangeactivesyncprovisioning_p_h__
#define __windows2Esecurity2Eexchangeactivesyncprovisioning_p_h__


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

#if !defined(WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION)
#define WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION)

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
#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                interface IEasClientDeviceInformation;
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                interface IEasClientDeviceInformation2;
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientDeviceInformation2

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                interface IEasClientSecurityPolicy;
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasClientSecurityPolicy

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                interface IEasComplianceResults;
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                interface IEasComplianceResults2;
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults2

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                class EasComplianceResults;
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */


#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("24a4131a-ed31-5eff-972e-750b956404d0"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults*, ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.ExchangeActiveSyncProvisioning.EasComplianceResults>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_USE */


#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("fc3a733a-7ded-5e92-a569-b43389ee8827"))
IAsyncOperation<ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults*, ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.ExchangeActiveSyncProvisioning.EasComplianceResults>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasComplianceResults*> __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_USE */


#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                
                typedef enum EasDisallowConvenienceLogonResult : int EasDisallowConvenienceLogonResult;
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                
                typedef enum EasEncryptionProviderType : int EasEncryptionProviderType;
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                
                typedef enum EasMaxInactivityTimeLockResult : int EasMaxInactivityTimeLockResult;
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                
                typedef enum EasMaxPasswordFailedAttemptsResult : int EasMaxPasswordFailedAttemptsResult;
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                
                typedef enum EasMinPasswordComplexCharactersResult : int EasMinPasswordComplexCharactersResult;
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                
                typedef enum EasMinPasswordLengthResult : int EasMinPasswordLengthResult;
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                
                typedef enum EasPasswordExpirationResult : int EasPasswordExpirationResult;
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                
                typedef enum EasPasswordHistoryResult : int EasPasswordHistoryResult;
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                
                typedef enum EasRequireEncryptionResult : int EasRequireEncryptionResult;
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */






namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                class EasClientDeviceInformation;
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                class EasClientSecurityPolicy;
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */












/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasDisallowConvenienceLogonResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [v1_enum, contract] */
                enum EasDisallowConvenienceLogonResult : int
                {
                    EasDisallowConvenienceLogonResult_NotEvaluated = 0,
                    EasDisallowConvenienceLogonResult_Compliant = 1,
                    EasDisallowConvenienceLogonResult_CanBeCompliant = 2,
                    EasDisallowConvenienceLogonResult_RequestedPolicyIsStricter = 3,
                };
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasEncryptionProviderType
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [v1_enum, contract] */
                enum EasEncryptionProviderType : int
                {
                    EasEncryptionProviderType_NotEvaluated = 0,
                    EasEncryptionProviderType_WindowsEncryption = 1,
                    EasEncryptionProviderType_OtherEncryption = 2,
                };
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasMaxInactivityTimeLockResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [v1_enum, contract] */
                enum EasMaxInactivityTimeLockResult : int
                {
                    EasMaxInactivityTimeLockResult_NotEvaluated = 0,
                    EasMaxInactivityTimeLockResult_Compliant = 1,
                    EasMaxInactivityTimeLockResult_CanBeCompliant = 2,
                    EasMaxInactivityTimeLockResult_RequestedPolicyIsStricter = 3,
                    EasMaxInactivityTimeLockResult_InvalidParameter = 4,
                };
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasMaxPasswordFailedAttemptsResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [v1_enum, contract] */
                enum EasMaxPasswordFailedAttemptsResult : int
                {
                    EasMaxPasswordFailedAttemptsResult_NotEvaluated = 0,
                    EasMaxPasswordFailedAttemptsResult_Compliant = 1,
                    EasMaxPasswordFailedAttemptsResult_CanBeCompliant = 2,
                    EasMaxPasswordFailedAttemptsResult_RequestedPolicyIsStricter = 3,
                    EasMaxPasswordFailedAttemptsResult_InvalidParameter = 4,
                };
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasMinPasswordComplexCharactersResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [v1_enum, contract] */
                enum EasMinPasswordComplexCharactersResult : int
                {
                    EasMinPasswordComplexCharactersResult_NotEvaluated = 0,
                    EasMinPasswordComplexCharactersResult_Compliant = 1,
                    EasMinPasswordComplexCharactersResult_CanBeCompliant = 2,
                    EasMinPasswordComplexCharactersResult_RequestedPolicyIsStricter = 3,
                    EasMinPasswordComplexCharactersResult_RequestedPolicyNotEnforceable = 4,
                    EasMinPasswordComplexCharactersResult_InvalidParameter = 5,
                    EasMinPasswordComplexCharactersResult_CurrentUserHasBlankPassword = 6,
                    EasMinPasswordComplexCharactersResult_AdminsHaveBlankPassword = 7,
                    EasMinPasswordComplexCharactersResult_UserCannotChangePassword = 8,
                    EasMinPasswordComplexCharactersResult_AdminsCannotChangePassword = 9,
                    EasMinPasswordComplexCharactersResult_LocalControlledUsersCannotChangePassword = 10,
                    EasMinPasswordComplexCharactersResult_ConnectedAdminsProviderPolicyIsWeak = 11,
                    EasMinPasswordComplexCharactersResult_ConnectedUserProviderPolicyIsWeak = 12,
                    EasMinPasswordComplexCharactersResult_ChangeConnectedAdminsPassword = 13,
                    EasMinPasswordComplexCharactersResult_ChangeConnectedUserPassword = 14,
                };
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasMinPasswordLengthResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [v1_enum, contract] */
                enum EasMinPasswordLengthResult : int
                {
                    EasMinPasswordLengthResult_NotEvaluated = 0,
                    EasMinPasswordLengthResult_Compliant = 1,
                    EasMinPasswordLengthResult_CanBeCompliant = 2,
                    EasMinPasswordLengthResult_RequestedPolicyIsStricter = 3,
                    EasMinPasswordLengthResult_RequestedPolicyNotEnforceable = 4,
                    EasMinPasswordLengthResult_InvalidParameter = 5,
                    EasMinPasswordLengthResult_CurrentUserHasBlankPassword = 6,
                    EasMinPasswordLengthResult_AdminsHaveBlankPassword = 7,
                    EasMinPasswordLengthResult_UserCannotChangePassword = 8,
                    EasMinPasswordLengthResult_AdminsCannotChangePassword = 9,
                    EasMinPasswordLengthResult_LocalControlledUsersCannotChangePassword = 10,
                    EasMinPasswordLengthResult_ConnectedAdminsProviderPolicyIsWeak = 11,
                    EasMinPasswordLengthResult_ConnectedUserProviderPolicyIsWeak = 12,
                    EasMinPasswordLengthResult_ChangeConnectedAdminsPassword = 13,
                    EasMinPasswordLengthResult_ChangeConnectedUserPassword = 14,
                };
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasPasswordExpirationResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [v1_enum, contract] */
                enum EasPasswordExpirationResult : int
                {
                    EasPasswordExpirationResult_NotEvaluated = 0,
                    EasPasswordExpirationResult_Compliant = 1,
                    EasPasswordExpirationResult_CanBeCompliant = 2,
                    EasPasswordExpirationResult_RequestedPolicyIsStricter = 3,
                    EasPasswordExpirationResult_RequestedExpirationIncompatible = 4,
                    EasPasswordExpirationResult_InvalidParameter = 5,
                    EasPasswordExpirationResult_UserCannotChangePassword = 6,
                    EasPasswordExpirationResult_AdminsCannotChangePassword = 7,
                    EasPasswordExpirationResult_LocalControlledUsersCannotChangePassword = 8,
                };
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasPasswordHistoryResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [v1_enum, contract] */
                enum EasPasswordHistoryResult : int
                {
                    EasPasswordHistoryResult_NotEvaluated = 0,
                    EasPasswordHistoryResult_Compliant = 1,
                    EasPasswordHistoryResult_CanBeCompliant = 2,
                    EasPasswordHistoryResult_RequestedPolicyIsStricter = 3,
                    EasPasswordHistoryResult_InvalidParameter = 4,
                };
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasRequireEncryptionResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [v1_enum, contract] */
                enum EasRequireEncryptionResult : int
                {
                    EasRequireEncryptionResult_NotEvaluated = 0,
                    EasRequireEncryptionResult_Compliant = 1,
                    EasRequireEncryptionResult_CanBeCompliant = 2,
                    EasRequireEncryptionResult_NotProvisionedOnAllVolumes = 3,
                    EasRequireEncryptionResult_DeFixedDataNotSupported
                    #if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("DeFixedDataNotSupported may be altered or unavailable for releases after Windows 8.1. Instead, use FixedDataNotSupported.")
                    #endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                     = 4,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                    EasRequireEncryptionResult_FixedDataNotSupported = 4,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                    EasRequireEncryptionResult_DeHardwareNotCompliant
                    #if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("DeHardwareNotCompliant may be altered or unavailable for releases after Windows 8.1. Instead, use HardwareNotCompliant.")
                    #endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                     = 5,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                    EasRequireEncryptionResult_HardwareNotCompliant = 5,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                    EasRequireEncryptionResult_DeWinReNotConfigured
                    #if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("DeWinReNotConfigured may be altered or unavailable for releases after Windows 8.1. Instead, use LockNotConfigured.")
                    #endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                     = 6,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                    EasRequireEncryptionResult_LockNotConfigured = 6,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                    EasRequireEncryptionResult_DeProtectionSuspended
                    #if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("DeProtectionSuspended may be altered or unavailable for releases after Windows 8.1. Instead, use ProtectionSuspended.")
                    #endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                     = 7,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                    EasRequireEncryptionResult_ProtectionSuspended = 7,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                    EasRequireEncryptionResult_DeOsVolumeNotProtected
                    #if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("DeOsVolumeNotProtected may be altered or unavailable for releases after Windows 8.1. Instead, use OsVolumeNotProtected.")
                    #endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                     = 8,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                    EasRequireEncryptionResult_OsVolumeNotProtected = 8,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                    EasRequireEncryptionResult_DeProtectionNotYetEnabled
                    #if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    DEPRECATEDENUMERATOR("DeProtectionNotYetEnabled may be altered or unavailable for releases after Windows 8.1. Instead, use ProtectionNotYetEnabled.")
                    #endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                     = 9,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                    EasRequireEncryptionResult_ProtectionNotYetEnabled = 9,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                    EasRequireEncryptionResult_NoFeatureLicense = 10,
                    EasRequireEncryptionResult_OsNotProtected = 11,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                    EasRequireEncryptionResult_UnexpectedFailure = 12,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
                    
                };
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [object, uuid("54DFD981-1968-4CA3-B958-E595D16505EB"), exclusiveto, contract] */
                MIDL_INTERFACE("54DFD981-1968-4CA3-B958-E595D16505EB")
                IEasClientDeviceInformation : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__out GUID * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OperatingSystem(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FriendlyName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SystemManufacturer(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SystemProductName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SystemSku(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEasClientDeviceInformation=_uuidof(IEasClientDeviceInformation);
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [object, uuid("FFB35923-BB26-4D6A-81BC-165AEE0AD754"), exclusiveto, contract] */
                MIDL_INTERFACE("FFB35923-BB26-4D6A-81BC-165AEE0AD754")
                IEasClientDeviceInformation2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SystemHardwareVersion(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SystemFirmwareVersion(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEasClientDeviceInformation2=_uuidof(IEasClientDeviceInformation2);
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.ExchangeActiveSyncProvisioning.IEasClientSecurityPolicy
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.ExchangeActiveSyncProvisioning.EasClientSecurityPolicy
 *
 *
 */
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientSecurityPolicy";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [object, uuid("45B72362-DFBA-4A9B-ACED-6FE2ADCB6420"), exclusiveto, contract] */
                MIDL_INTERFACE("45B72362-DFBA-4A9B-ACED-6FE2ADCB6420")
                IEasClientSecurityPolicy : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequireEncryption(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RequireEncryption(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinPasswordLength(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MinPasswordLength(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisallowConvenienceLogon(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisallowConvenienceLogon(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinPasswordComplexCharacters(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MinPasswordComplexCharacters(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PasswordExpiration(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PasswordExpiration(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PasswordHistory(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PasswordHistory(
                        /* [in] */UINT32 value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxPasswordFailedAttempts(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxPasswordFailedAttempts(
                        /* [in] */BYTE value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxInactivityTimeLock(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxInactivityTimeLock(
                        /* [in] */ABI::Windows::Foundation::TimeSpan value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CheckCompliance(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::ExchangeActiveSyncProvisioning::IEasComplianceResults * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ApplyAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * * operation
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEasClientSecurityPolicy=_uuidof(IEasClientSecurityPolicy);
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.ExchangeActiveSyncProvisioning.EasComplianceResults
 *
 *
 */
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [object, uuid("463C299C-7F19-4C66-B403-CB45DD57A2B3"), exclusiveto, contract] */
                MIDL_INTERFACE("463C299C-7F19-4C66-B403-CB45DD57A2B3")
                IEasComplianceResults : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Compliant(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequireEncryptionResult(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasRequireEncryptionResult * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinPasswordLengthResult(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordLengthResult * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisallowConvenienceLogonResult(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasDisallowConvenienceLogonResult * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MinPasswordComplexCharactersResult(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasMinPasswordComplexCharactersResult * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PasswordExpirationResult(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordExpirationResult * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PasswordHistoryResult(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasPasswordHistoryResult * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxPasswordFailedAttemptsResult(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasMaxPasswordFailedAttemptsResult * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxInactivityTimeLockResult(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasMaxInactivityTimeLockResult * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEasComplianceResults=_uuidof(IEasComplianceResults);
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults2
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.ExchangeActiveSyncProvisioning.EasComplianceResults
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults
 *
 *
 */
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults2[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace ExchangeActiveSyncProvisioning {
                /* [object, uuid("2FBE60C9-1AA8-47F5-88BB-CB3EF0BFFB15"), exclusiveto, contract] */
                MIDL_INTERFACE("2FBE60C9-1AA8-47F5-88BB-CB3EF0BFFB15")
                IEasComplianceResults2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EncryptionProviderType(
                        /* [retval, out] */__RPC__out ABI::Windows::Security::ExchangeActiveSyncProvisioning::EasEncryptionProviderType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IEasComplianceResults2=_uuidof(IEasComplianceResults2);
                
            } /* Windows */
        } /* Security */
    } /* ExchangeActiveSyncProvisioning */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation ** Default Interface **
 *    Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasClientDeviceInformation_DEFINED
#define RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasClientDeviceInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_ExchangeActiveSyncProvisioning_EasClientDeviceInformation[] = L"Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.ExchangeActiveSyncProvisioning.EasClientSecurityPolicy
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Security.ExchangeActiveSyncProvisioning.EasContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.ExchangeActiveSyncProvisioning.IEasClientSecurityPolicy ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasClientSecurityPolicy_DEFINED
#define RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasClientSecurityPolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_ExchangeActiveSyncProvisioning_EasClientSecurityPolicy[] = L"Windows.Security.ExchangeActiveSyncProvisioning.EasClientSecurityPolicy";
#endif
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.ExchangeActiveSyncProvisioning.EasComplianceResults
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults ** Default Interface **
 *    Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults2
 *
 */
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasComplianceResults_DEFINED
#define RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasComplianceResults_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_ExchangeActiveSyncProvisioning_EasComplianceResults[] = L"Windows.Security.ExchangeActiveSyncProvisioning.EasComplianceResults";
#endif
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation;

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2;

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy;

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults;

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2;

#endif // ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResultsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults_INTERFACE_DEFINED__

#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;






typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult;


typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType;


typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult;


typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult;


typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult;


typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult;


typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult;


typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult;


typedef enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult;


















/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasDisallowConvenienceLogonResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult
{
    EasDisallowConvenienceLogonResult_NotEvaluated = 0,
    EasDisallowConvenienceLogonResult_Compliant = 1,
    EasDisallowConvenienceLogonResult_CanBeCompliant = 2,
    EasDisallowConvenienceLogonResult_RequestedPolicyIsStricter = 3,
};
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasEncryptionProviderType
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType
{
    EasEncryptionProviderType_NotEvaluated = 0,
    EasEncryptionProviderType_WindowsEncryption = 1,
    EasEncryptionProviderType_OtherEncryption = 2,
};
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasMaxInactivityTimeLockResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult
{
    EasMaxInactivityTimeLockResult_NotEvaluated = 0,
    EasMaxInactivityTimeLockResult_Compliant = 1,
    EasMaxInactivityTimeLockResult_CanBeCompliant = 2,
    EasMaxInactivityTimeLockResult_RequestedPolicyIsStricter = 3,
    EasMaxInactivityTimeLockResult_InvalidParameter = 4,
};
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasMaxPasswordFailedAttemptsResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult
{
    EasMaxPasswordFailedAttemptsResult_NotEvaluated = 0,
    EasMaxPasswordFailedAttemptsResult_Compliant = 1,
    EasMaxPasswordFailedAttemptsResult_CanBeCompliant = 2,
    EasMaxPasswordFailedAttemptsResult_RequestedPolicyIsStricter = 3,
    EasMaxPasswordFailedAttemptsResult_InvalidParameter = 4,
};
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasMinPasswordComplexCharactersResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult
{
    EasMinPasswordComplexCharactersResult_NotEvaluated = 0,
    EasMinPasswordComplexCharactersResult_Compliant = 1,
    EasMinPasswordComplexCharactersResult_CanBeCompliant = 2,
    EasMinPasswordComplexCharactersResult_RequestedPolicyIsStricter = 3,
    EasMinPasswordComplexCharactersResult_RequestedPolicyNotEnforceable = 4,
    EasMinPasswordComplexCharactersResult_InvalidParameter = 5,
    EasMinPasswordComplexCharactersResult_CurrentUserHasBlankPassword = 6,
    EasMinPasswordComplexCharactersResult_AdminsHaveBlankPassword = 7,
    EasMinPasswordComplexCharactersResult_UserCannotChangePassword = 8,
    EasMinPasswordComplexCharactersResult_AdminsCannotChangePassword = 9,
    EasMinPasswordComplexCharactersResult_LocalControlledUsersCannotChangePassword = 10,
    EasMinPasswordComplexCharactersResult_ConnectedAdminsProviderPolicyIsWeak = 11,
    EasMinPasswordComplexCharactersResult_ConnectedUserProviderPolicyIsWeak = 12,
    EasMinPasswordComplexCharactersResult_ChangeConnectedAdminsPassword = 13,
    EasMinPasswordComplexCharactersResult_ChangeConnectedUserPassword = 14,
};
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasMinPasswordLengthResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult
{
    EasMinPasswordLengthResult_NotEvaluated = 0,
    EasMinPasswordLengthResult_Compliant = 1,
    EasMinPasswordLengthResult_CanBeCompliant = 2,
    EasMinPasswordLengthResult_RequestedPolicyIsStricter = 3,
    EasMinPasswordLengthResult_RequestedPolicyNotEnforceable = 4,
    EasMinPasswordLengthResult_InvalidParameter = 5,
    EasMinPasswordLengthResult_CurrentUserHasBlankPassword = 6,
    EasMinPasswordLengthResult_AdminsHaveBlankPassword = 7,
    EasMinPasswordLengthResult_UserCannotChangePassword = 8,
    EasMinPasswordLengthResult_AdminsCannotChangePassword = 9,
    EasMinPasswordLengthResult_LocalControlledUsersCannotChangePassword = 10,
    EasMinPasswordLengthResult_ConnectedAdminsProviderPolicyIsWeak = 11,
    EasMinPasswordLengthResult_ConnectedUserProviderPolicyIsWeak = 12,
    EasMinPasswordLengthResult_ChangeConnectedAdminsPassword = 13,
    EasMinPasswordLengthResult_ChangeConnectedUserPassword = 14,
};
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasPasswordExpirationResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult
{
    EasPasswordExpirationResult_NotEvaluated = 0,
    EasPasswordExpirationResult_Compliant = 1,
    EasPasswordExpirationResult_CanBeCompliant = 2,
    EasPasswordExpirationResult_RequestedPolicyIsStricter = 3,
    EasPasswordExpirationResult_RequestedExpirationIncompatible = 4,
    EasPasswordExpirationResult_InvalidParameter = 5,
    EasPasswordExpirationResult_UserCannotChangePassword = 6,
    EasPasswordExpirationResult_AdminsCannotChangePassword = 7,
    EasPasswordExpirationResult_LocalControlledUsersCannotChangePassword = 8,
};
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasPasswordHistoryResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult
{
    EasPasswordHistoryResult_NotEvaluated = 0,
    EasPasswordHistoryResult_Compliant = 1,
    EasPasswordHistoryResult_CanBeCompliant = 2,
    EasPasswordHistoryResult_RequestedPolicyIsStricter = 3,
    EasPasswordHistoryResult_InvalidParameter = 4,
};
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.ExchangeActiveSyncProvisioning.EasRequireEncryptionResult
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 */

#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult
{
    EasRequireEncryptionResult_NotEvaluated = 0,
    EasRequireEncryptionResult_Compliant = 1,
    EasRequireEncryptionResult_CanBeCompliant = 2,
    EasRequireEncryptionResult_NotProvisionedOnAllVolumes = 3,
    EasRequireEncryptionResult_DeFixedDataNotSupported
    #if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("DeFixedDataNotSupported may be altered or unavailable for releases after Windows 8.1. Instead, use FixedDataNotSupported.")
    #endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
     = 4,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
    EasRequireEncryptionResult_FixedDataNotSupported = 4,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
    EasRequireEncryptionResult_DeHardwareNotCompliant
    #if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("DeHardwareNotCompliant may be altered or unavailable for releases after Windows 8.1. Instead, use HardwareNotCompliant.")
    #endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
     = 5,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
    EasRequireEncryptionResult_HardwareNotCompliant = 5,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
    EasRequireEncryptionResult_DeWinReNotConfigured
    #if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("DeWinReNotConfigured may be altered or unavailable for releases after Windows 8.1. Instead, use LockNotConfigured.")
    #endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
     = 6,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
    EasRequireEncryptionResult_LockNotConfigured = 6,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
    EasRequireEncryptionResult_DeProtectionSuspended
    #if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("DeProtectionSuspended may be altered or unavailable for releases after Windows 8.1. Instead, use ProtectionSuspended.")
    #endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
     = 7,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
    EasRequireEncryptionResult_ProtectionSuspended = 7,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
    EasRequireEncryptionResult_DeOsVolumeNotProtected
    #if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("DeOsVolumeNotProtected may be altered or unavailable for releases after Windows 8.1. Instead, use OsVolumeNotProtected.")
    #endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
     = 8,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
    EasRequireEncryptionResult_OsVolumeNotProtected = 8,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
    EasRequireEncryptionResult_DeProtectionNotYetEnabled
    #if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    DEPRECATEDENUMERATOR("DeProtectionNotYetEnabled may be altered or unavailable for releases after Windows 8.1. Instead, use ProtectionNotYetEnabled.")
    #endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
     = 9,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
    EasRequireEncryptionResult_ProtectionNotYetEnabled = 9,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
    EasRequireEncryptionResult_NoFeatureLicense = 10,
    EasRequireEncryptionResult_OsNotProtected = 11,
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
    EasRequireEncryptionResult_UnexpectedFailure = 12,
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation";
/* [object, uuid("54DFD981-1968-4CA3-B958-E595D16505EB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
        /* [retval, out] */__RPC__out GUID * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OperatingSystem )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SystemManufacturer )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SystemProductName )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SystemSku )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformationVtbl;

interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_OperatingSystem(This,value) \
    ( (This)->lpVtbl->get_OperatingSystem(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_FriendlyName(This,value) \
    ( (This)->lpVtbl->get_FriendlyName(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_SystemManufacturer(This,value) \
    ( (This)->lpVtbl->get_SystemManufacturer(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_SystemProductName(This,value) \
    ( (This)->lpVtbl->get_SystemProductName(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_get_SystemSku(This,value) \
    ( (This)->lpVtbl->get_SystemSku(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientDeviceInformation2[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation2";
/* [object, uuid("FFB35923-BB26-4D6A-81BC-165AEE0AD754"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SystemHardwareVersion )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SystemFirmwareVersion )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2Vtbl;

interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_get_SystemHardwareVersion(This,value) \
    ( (This)->lpVtbl->get_SystemHardwareVersion(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_get_SystemFirmwareVersion(This,value) \
    ( (This)->lpVtbl->get_SystemFirmwareVersion(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientDeviceInformation2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.ExchangeActiveSyncProvisioning.IEasClientSecurityPolicy
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.ExchangeActiveSyncProvisioning.EasClientSecurityPolicy
 *
 *
 */
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasClientSecurityPolicy[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasClientSecurityPolicy";
/* [object, uuid("45B72362-DFBA-4A9B-ACED-6FE2ADCB6420"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequireEncryption )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RequireEncryption )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinPasswordLength )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MinPasswordLength )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisallowConvenienceLogon )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisallowConvenienceLogon )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinPasswordComplexCharacters )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MinPasswordComplexCharacters )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PasswordExpiration )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PasswordExpiration )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PasswordHistory )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PasswordHistory )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxPasswordFailedAttempts )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxPasswordFailedAttempts )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [in] */BYTE value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxInactivityTimeLock )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxInactivityTimeLock )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    HRESULT ( STDMETHODCALLTYPE *CheckCompliance )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * * result
        );
    HRESULT ( STDMETHODCALLTYPE *ApplyAsync )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CExchangeActiveSyncProvisioning__CEasComplianceResults * * operation
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicyVtbl;

interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_get_RequireEncryption(This,value) \
    ( (This)->lpVtbl->get_RequireEncryption(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_put_RequireEncryption(This,value) \
    ( (This)->lpVtbl->put_RequireEncryption(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_get_MinPasswordLength(This,value) \
    ( (This)->lpVtbl->get_MinPasswordLength(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_put_MinPasswordLength(This,value) \
    ( (This)->lpVtbl->put_MinPasswordLength(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_get_DisallowConvenienceLogon(This,value) \
    ( (This)->lpVtbl->get_DisallowConvenienceLogon(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_put_DisallowConvenienceLogon(This,value) \
    ( (This)->lpVtbl->put_DisallowConvenienceLogon(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_get_MinPasswordComplexCharacters(This,value) \
    ( (This)->lpVtbl->get_MinPasswordComplexCharacters(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_put_MinPasswordComplexCharacters(This,value) \
    ( (This)->lpVtbl->put_MinPasswordComplexCharacters(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_get_PasswordExpiration(This,value) \
    ( (This)->lpVtbl->get_PasswordExpiration(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_put_PasswordExpiration(This,value) \
    ( (This)->lpVtbl->put_PasswordExpiration(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_get_PasswordHistory(This,value) \
    ( (This)->lpVtbl->get_PasswordHistory(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_put_PasswordHistory(This,value) \
    ( (This)->lpVtbl->put_PasswordHistory(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_get_MaxPasswordFailedAttempts(This,value) \
    ( (This)->lpVtbl->get_MaxPasswordFailedAttempts(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_put_MaxPasswordFailedAttempts(This,value) \
    ( (This)->lpVtbl->put_MaxPasswordFailedAttempts(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_get_MaxInactivityTimeLock(This,value) \
    ( (This)->lpVtbl->get_MaxInactivityTimeLock(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_put_MaxInactivityTimeLock(This,value) \
    ( (This)->lpVtbl->put_MaxInactivityTimeLock(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_CheckCompliance(This,result) \
    ( (This)->lpVtbl->CheckCompliance(This,result) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_ApplyAsync(This,operation) \
    ( (This)->lpVtbl->ApplyAsync(This,operation) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasClientSecurityPolicy_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.ExchangeActiveSyncProvisioning.EasComplianceResults
 *
 *
 */
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults";
/* [object, uuid("463C299C-7F19-4C66-B403-CB45DD57A2B3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Compliant )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequireEncryptionResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasRequireEncryptionResult * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinPasswordLengthResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordLengthResult * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisallowConvenienceLogonResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasDisallowConvenienceLogonResult * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MinPasswordComplexCharactersResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMinPasswordComplexCharactersResult * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PasswordExpirationResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordExpirationResult * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PasswordHistoryResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasPasswordHistoryResult * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxPasswordFailedAttemptsResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxPasswordFailedAttemptsResult * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxInactivityTimeLockResult )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasMaxInactivityTimeLockResult * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResultsVtbl;

interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResultsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_get_Compliant(This,value) \
    ( (This)->lpVtbl->get_Compliant(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_get_RequireEncryptionResult(This,value) \
    ( (This)->lpVtbl->get_RequireEncryptionResult(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_get_MinPasswordLengthResult(This,value) \
    ( (This)->lpVtbl->get_MinPasswordLengthResult(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_get_DisallowConvenienceLogonResult(This,value) \
    ( (This)->lpVtbl->get_DisallowConvenienceLogonResult(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_get_MinPasswordComplexCharactersResult(This,value) \
    ( (This)->lpVtbl->get_MinPasswordComplexCharactersResult(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_get_PasswordExpirationResult(This,value) \
    ( (This)->lpVtbl->get_PasswordExpirationResult(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_get_PasswordHistoryResult(This,value) \
    ( (This)->lpVtbl->get_PasswordHistoryResult(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_get_MaxPasswordFailedAttemptsResult(This,value) \
    ( (This)->lpVtbl->get_MaxPasswordFailedAttemptsResult(This,value) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_get_MaxInactivityTimeLockResult(This,value) \
    ( (This)->lpVtbl->get_MaxInactivityTimeLockResult(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults2
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.ExchangeActiveSyncProvisioning.EasComplianceResults
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults
 *
 *
 */
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_ExchangeActiveSyncProvisioning_IEasComplianceResults2[] = L"Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults2";
/* [object, uuid("2FBE60C9-1AA8-47F5-88BB-CB3EF0BFFB15"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EncryptionProviderType )(
        __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CEasEncryptionProviderType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2Vtbl;

interface __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_get_EncryptionProviderType(This,value) \
    ( (This)->lpVtbl->get_EncryptionProviderType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CExchangeActiveSyncProvisioning_CIEasComplianceResults2_INTERFACE_DEFINED__) */
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation ** Default Interface **
 *    Windows.Security.ExchangeActiveSyncProvisioning.IEasClientDeviceInformation2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasClientDeviceInformation_DEFINED
#define RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasClientDeviceInformation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_ExchangeActiveSyncProvisioning_EasClientDeviceInformation[] = L"Windows.Security.ExchangeActiveSyncProvisioning.EasClientDeviceInformation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.ExchangeActiveSyncProvisioning.EasClientSecurityPolicy
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Security.ExchangeActiveSyncProvisioning.EasContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.ExchangeActiveSyncProvisioning.IEasClientSecurityPolicy ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 */
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasClientSecurityPolicy_DEFINED
#define RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasClientSecurityPolicy_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_ExchangeActiveSyncProvisioning_EasClientSecurityPolicy[] = L"Windows.Security.ExchangeActiveSyncProvisioning.EasClientSecurityPolicy";
#endif
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.ExchangeActiveSyncProvisioning.EasComplianceResults
 *
 * Introduced to Windows.Security.ExchangeActiveSyncProvisioning.EasContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults ** Default Interface **
 *    Windows.Security.ExchangeActiveSyncProvisioning.IEasComplianceResults2
 *
 */
#if WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasComplianceResults_DEFINED
#define RUNTIMECLASS_Windows_Security_ExchangeActiveSyncProvisioning_EasComplianceResults_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_ExchangeActiveSyncProvisioning_EasComplianceResults[] = L"Windows.Security.ExchangeActiveSyncProvisioning.EasComplianceResults";
#endif
#endif // WINDOWS_SECURITY_EXCHANGEACTIVESYNCPROVISIONING_EASCONTRACT_VERSION >= 0x10000




#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Esecurity2Eexchangeactivesyncprovisioning_p_h__

#endif // __windows2Esecurity2Eexchangeactivesyncprovisioning_h__
