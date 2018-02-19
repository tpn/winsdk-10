/* Header file automatically generated from windows.applicationmodel.payments.idl */
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
#ifndef __windows2Eapplicationmodel2Epayments_h__
#define __windows2Eapplicationmodel2Epayments_h__
#ifndef __windows2Eapplicationmodel2Epayments_p_h__
#define __windows2Eapplicationmodel2Epayments_p_h__


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
#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentRequestChangedHandler;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedHandler

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentAddress;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress ABI::Windows::ApplicationModel::Payments::IPaymentAddress

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentCanMakePaymentResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult ABI::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentCanMakePaymentResultFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory ABI::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentCurrencyAmount;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentCurrencyAmountFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentDetails;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails ABI::Windows::ApplicationModel::Payments::IPaymentDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentDetailsFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory ABI::Windows::ApplicationModel::Payments::IPaymentDetailsFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentDetailsModifier;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentDetailsModifierFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentItem;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem ABI::Windows::ApplicationModel::Payments::IPaymentItem

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentItemFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory ABI::Windows::ApplicationModel::Payments::IPaymentItemFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentMediator;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator ABI::Windows::ApplicationModel::Payments::IPaymentMediator

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentMediator2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 ABI::Windows::ApplicationModel::Payments::IPaymentMediator2

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentMerchantInfo;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo ABI::Windows::ApplicationModel::Payments::IPaymentMerchantInfo

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentMerchantInfoFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory ABI::Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentMethodData;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData ABI::Windows::ApplicationModel::Payments::IPaymentMethodData

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentMethodDataFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory ABI::Windows::ApplicationModel::Payments::IPaymentMethodDataFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentOptions;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions ABI::Windows::ApplicationModel::Payments::IPaymentOptions

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentRequest;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest ABI::Windows::ApplicationModel::Payments::IPaymentRequest

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentRequest2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 ABI::Windows::ApplicationModel::Payments::IPaymentRequest2

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentRequestChangedArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentRequestChangedResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentRequestChangedResultFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentRequestFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory ABI::Windows::ApplicationModel::Payments::IPaymentRequestFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentRequestFactory2;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 ABI::Windows::ApplicationModel::Payments::IPaymentRequestFactory2

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentRequestSubmitResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult ABI::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentResponse;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse ABI::Windows::ApplicationModel::Payments::IPaymentResponse

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentShippingOption;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentShippingOptionFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory ABI::Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentToken;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken ABI::Windows::ApplicationModel::Payments::IPaymentToken

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                interface IPaymentTokenFactory;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory ABI::Windows::ApplicationModel::Payments::IPaymentTokenFactory

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentDetailsModifier;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fafb6774-b665-5b8b-b1ef-95038c3aabe1"))
IIterator<ABI::Windows::ApplicationModel::Payments::PaymentDetailsModifier*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentDetailsModifier*, ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Payments.PaymentDetailsModifier>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Payments::PaymentDetailsModifier*> __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_t;
#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier*>
//#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("585d2b3d-cb34-58c4-81f4-1ea157996def"))
IIterable<ABI::Windows::ApplicationModel::Payments::PaymentDetailsModifier*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentDetailsModifier*, ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Payments.PaymentDetailsModifier>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Payments::PaymentDetailsModifier*> __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_t;
#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier*>
//#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentItem;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("93c12cc3-6a0b-5f02-ac74-056007472731"))
IIterator<ABI::Windows::ApplicationModel::Payments::PaymentItem*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentItem*, ABI::Windows::ApplicationModel::Payments::IPaymentItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Payments.PaymentItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Payments::PaymentItem*> __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_t;
#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Payments::IPaymentItem*>
//#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Payments::IPaymentItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("b61b704c-e5fa-5524-8b95-7d03f5d36ae9"))
IIterable<ABI::Windows::ApplicationModel::Payments::PaymentItem*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentItem*, ABI::Windows::ApplicationModel::Payments::IPaymentItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Payments.PaymentItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Payments::PaymentItem*> __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_t;
#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Payments::IPaymentItem*>
//#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Payments::IPaymentItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentMethodData;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("9666522e-e5ac-5374-a5d9-5cf57c4bf689"))
IIterator<ABI::Windows::ApplicationModel::Payments::PaymentMethodData*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentMethodData*, ABI::Windows::ApplicationModel::Payments::IPaymentMethodData*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Payments.PaymentMethodData>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Payments::PaymentMethodData*> __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_t;
#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Payments::IPaymentMethodData*>
//#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Payments::IPaymentMethodData*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c9ed87e-4add-58a8-ad9a-9dfa48ca250a"))
IIterable<ABI::Windows::ApplicationModel::Payments::PaymentMethodData*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentMethodData*, ABI::Windows::ApplicationModel::Payments::IPaymentMethodData*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Payments.PaymentMethodData>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Payments::PaymentMethodData*> __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_t;
#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Payments::IPaymentMethodData*>
//#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Payments::IPaymentMethodData*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentShippingOption;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("49edc9f4-2ce6-534c-b529-5ceec705def5"))
IIterator<ABI::Windows::ApplicationModel::Payments::PaymentShippingOption*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentShippingOption*, ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.Payments.PaymentShippingOption>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::Payments::PaymentShippingOption*> __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_t;
#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption*>
//#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("de881c69-6642-54de-a8f7-d1a88b2404cf"))
IIterable<ABI::Windows::ApplicationModel::Payments::PaymentShippingOption*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentShippingOption*, ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.Payments.PaymentShippingOption>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::Payments::PaymentShippingOption*> __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_t;
#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption*>
//#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("da7e871c-6e0c-5e32-be40-10715a9f75eb"))
IVectorView<ABI::Windows::ApplicationModel::Payments::PaymentDetailsModifier*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentDetailsModifier*, ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Payments.PaymentDetailsModifier>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Payments::PaymentDetailsModifier*> __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_t;
#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier*>
//#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6baf1241-1fa6-5c22-83ef-415e93cdf7b1"))
IVectorView<ABI::Windows::ApplicationModel::Payments::PaymentItem*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentItem*, ABI::Windows::ApplicationModel::Payments::IPaymentItem*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Payments.PaymentItem>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Payments::PaymentItem*> __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_t;
#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Payments::IPaymentItem*>
//#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Payments::IPaymentItem*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1011b9ba-6a05-5b16-82cf-0175085105e0"))
IVectorView<ABI::Windows::ApplicationModel::Payments::PaymentMethodData*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentMethodData*, ABI::Windows::ApplicationModel::Payments::IPaymentMethodData*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Payments.PaymentMethodData>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Payments::PaymentMethodData*> __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_t;
#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Payments::IPaymentMethodData*>
//#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Payments::IPaymentMethodData*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8c8128eb-8c33-56dd-9648-39e8040312d4"))
IVectorView<ABI::Windows::ApplicationModel::Payments::PaymentShippingOption*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentShippingOption*, ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.Payments.PaymentShippingOption>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::Payments::PaymentShippingOption*> __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_t;
#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption*>
//#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentCanMakePaymentResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("89ae5b89-6d05-5842-9cdf-f4cbf706dc5e"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult*, ABI::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Payments.PaymentCanMakePaymentResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("a467410a-11de-5090-b905-96a562d85de5"))
IAsyncOperation<ABI::Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult*, ABI::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Payments.PaymentCanMakePaymentResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult*> __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentRequestChangedResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("bec8b726-9056-5e47-b22a-0da09aa84afe"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Payments::PaymentRequestChangedResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentRequestChangedResult*, ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Payments.PaymentRequestChangedResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Payments::PaymentRequestChangedResult*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("0cc32025-ac67-57e2-a0f6-3a8e116cef4c"))
IAsyncOperation<ABI::Windows::ApplicationModel::Payments::PaymentRequestChangedResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentRequestChangedResult*, ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Payments.PaymentRequestChangedResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Payments::PaymentRequestChangedResult*> __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentRequestSubmitResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cbcd07a6-ae2a-5a70-bc0b-9120560825d1"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult*, ABI::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.Payments.PaymentRequestSubmitResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cf290deb-5549-57c3-8abd-53b76c643cca"))
IAsyncOperation<ABI::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult*, ABI::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.Payments.PaymentRequestSubmitResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult*> __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_USE */


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





#ifndef DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("09335560-6c6b-5a26-9348-97b781132b20"))
IKeyValuePair<HSTRING,IInspectable*> : IKeyValuePair_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,IInspectable*> __FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
//#define __FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5db5fa32-707c-5849-a06b-91c8eb9d10e8"))
IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("fe2f3d47-5d47-5499-8374-430c7cda0204"))
IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Object>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_IInspectable*> __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,IInspectable*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMapView_2_HSTRING_IInspectable_USE
#define DEF___FIMapView_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bb78502a-f79d-54fa-92c9-90c5039fdf7e"))
IMapView<HSTRING,IInspectable*> : IMapView_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,IInspectable*> __FIMapView_2_HSTRING_IInspectable_t;
#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
//#define __FIMapView_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIMap_2_HSTRING_IInspectable_USE
#define DEF___FIMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1b0d3570-0877-5ec2-8a2c-3b9539506aca"))
IMap<HSTRING,IInspectable*> : IMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMap<HSTRING,IInspectable*> __FIMap_2_HSTRING_IInspectable_t;
#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
//#define __FIMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMap_2_HSTRING_IInspectable_USE */




#ifndef DEF___FIMapChangedEventArgs_1_HSTRING_USE
#define DEF___FIMapChangedEventArgs_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("60141efb-f2f9-5377-96fd-f8c60d9558b5"))
IMapChangedEventArgs<HSTRING> : IMapChangedEventArgs_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapChangedEventArgs`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapChangedEventArgs<HSTRING> __FIMapChangedEventArgs_1_HSTRING_t;
#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::__FIMapChangedEventArgs_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapChangedEventArgs_1_HSTRING ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
//#define __FIMapChangedEventArgs_1_HSTRING_t ABI::Windows::Foundation::Collections::IMapChangedEventArgs<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapChangedEventArgs_1_HSTRING_USE */





#ifndef DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#define DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("24f981e5-ddca-538d-aada-a59906084cf1"))
MapChangedEventHandler<HSTRING,IInspectable*> : MapChangedEventHandler_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.MapChangedEventHandler`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef MapChangedEventHandler<HSTRING,IInspectable*> __FMapChangedEventHandler_2_HSTRING_IInspectable_t;
#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FMapChangedEventHandler_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
//#define __FMapChangedEventHandler_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::MapChangedEventHandler<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FMapChangedEventHandler_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#define DEF___FIObservableMap_2_HSTRING_IInspectable_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("236aac9d-fb12-5c4d-a41c-9e445fb4d7ec"))
IObservableMap<HSTRING,IInspectable*> : IObservableMap_impl<HSTRING,IInspectable*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IObservableMap`2<String, Object>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IObservableMap<HSTRING,IInspectable*> __FIObservableMap_2_HSTRING_IInspectable_t;
#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::__FIObservableMap_2_HSTRING_IInspectable_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIObservableMap_2_HSTRING_IInspectable ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
//#define __FIObservableMap_2_HSTRING_IInspectable_t ABI::Windows::Foundation::Collections::IObservableMap<HSTRING,IInspectable*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIObservableMap_2_HSTRING_IInspectable_USE */





#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("7c7899be-5f2e-5bf3-ade5-ad98b772c7cd"))
IAsyncOperationCompletedHandler<__FIVectorView_1_HSTRING*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_HSTRING*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_USE */





#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_HSTRING_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("2f92b529-119b-575a-a419-3904b4e41af2"))
IAsyncOperation<__FIVectorView_1_HSTRING*> : IAsyncOperation_impl<__FIVectorView_1_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_HSTRING*> __FIAsyncOperation_1___FIVectorView_1_HSTRING_t;
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_HSTRING ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
//#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_HSTRING_USE */





namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                class ValueSet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */

#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            namespace Collections {
                interface IPropertySet;
            } /* Windows */
        } /* Foundation */
    } /* Collections */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet ABI::Windows::Foundation::Collections::IPropertySet

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__





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
            namespace Payments {
                
                typedef enum PaymentCanMakePaymentResultStatus : int PaymentCanMakePaymentResultStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                
                typedef enum PaymentOptionPresence : int PaymentOptionPresence;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                
                typedef enum PaymentRequestChangeKind : int PaymentRequestChangeKind;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                
                typedef enum PaymentRequestCompletionStatus : int PaymentRequestCompletionStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                
                typedef enum PaymentRequestStatus : int PaymentRequestStatus;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                
                typedef enum PaymentShippingType : int PaymentShippingType;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

































namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentAddress;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentCurrencyAmount;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentDetails;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentMediator;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentMerchantInfo;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentOptions;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentRequest;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentRequestChangedArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentResponse;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                class PaymentToken;
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */










/*
 *
 * Struct Windows.ApplicationModel.Payments.PaymentCanMakePaymentResultStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [v1_enum, contract] */
                enum PaymentCanMakePaymentResultStatus : int
                {
                    PaymentCanMakePaymentResultStatus_Unknown = 0,
                    PaymentCanMakePaymentResultStatus_Yes = 1,
                    PaymentCanMakePaymentResultStatus_No = 2,
                    PaymentCanMakePaymentResultStatus_NotAllowed = 3,
                    PaymentCanMakePaymentResultStatus_UserNotSignedIn = 4,
                    PaymentCanMakePaymentResultStatus_SpecifiedPaymentMethodIdsNotSupported = 5,
                    PaymentCanMakePaymentResultStatus_NoQualifyingCardOnFile = 6,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.ApplicationModel.Payments.PaymentOptionPresence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [v1_enum, contract] */
                enum PaymentOptionPresence : int
                {
                    PaymentOptionPresence_None = 0,
                    PaymentOptionPresence_Optional = 1,
                    PaymentOptionPresence_Required = 2,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.ApplicationModel.Payments.PaymentRequestChangeKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [v1_enum, contract] */
                enum PaymentRequestChangeKind : int
                {
                    PaymentRequestChangeKind_ShippingOption = 0,
                    PaymentRequestChangeKind_ShippingAddress = 1,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.ApplicationModel.Payments.PaymentRequestCompletionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [v1_enum, contract] */
                enum PaymentRequestCompletionStatus : int
                {
                    PaymentRequestCompletionStatus_Succeeded = 0,
                    PaymentRequestCompletionStatus_Failed = 1,
                    PaymentRequestCompletionStatus_Unknown = 2,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.ApplicationModel.Payments.PaymentRequestStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [v1_enum, contract] */
                enum PaymentRequestStatus : int
                {
                    PaymentRequestStatus_Succeeded = 0,
                    PaymentRequestStatus_Failed = 1,
                    PaymentRequestStatus_Canceled = 2,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.ApplicationModel.Payments.PaymentShippingType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [v1_enum, contract] */
                enum PaymentShippingType : int
                {
                    PaymentShippingType_Shipping = 0,
                    PaymentShippingType_Delivery = 1,
                    PaymentShippingType_Pickup = 2,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Delegate Windows.ApplicationModel.Payments.PaymentRequestChangedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_INTERFACE_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("5078B9E1-F398-4F2C-A27E-94D371CF6C7D"), contract] */
                MIDL_INTERFACE("5078B9E1-F398-4F2C-A27E-94D371CF6C7D")
                IPaymentRequestChangedHandler : IUnknown
                {
                    virtual HRESULT STDMETHODCALLTYPE Invoke(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentRequest * paymentRequest,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs * args
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentRequestChangedHandler=_uuidof(IPaymentRequestChangedHandler);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentAddress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentAddress
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentAddress[] = L"Windows.ApplicationModel.Payments.IPaymentAddress";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("5F2264E9-6F3A-4166-A018-0A0B06BB32B5"), exclusiveto, contract] */
                MIDL_INTERFACE("5F2264E9-6F3A-4166-A018-0A0B06BB32B5")
                IPaymentAddress : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Country(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Country(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AddressLines(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AddressLines(
                        /* [in] */__RPC__in_opt __FIVectorView_1_HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Region(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Region(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_City(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_City(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DependentLocality(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DependentLocality(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PostalCode(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PostalCode(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SortingCode(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SortingCode(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LanguageCode(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_LanguageCode(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Organization(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Organization(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Recipient(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Recipient(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PhoneNumber(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_PhoneNumber(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::Collections::IPropertySet * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentAddress=_uuidof(IPaymentAddress);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentCanMakePaymentResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResult[] = L"Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResult";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("7696FE55-D5D3-4D3D-B345-45591759C510"), exclusiveto, contract] */
                MIDL_INTERFACE("7696FE55-D5D3-4D3D-B345-45591759C510")
                IPaymentCanMakePaymentResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentCanMakePaymentResult=_uuidof(IPaymentCanMakePaymentResult);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResultFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentCanMakePaymentResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResultFactory[] = L"Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResultFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("BBDCAA3E-7D49-4F69-AA53-2A0F8164B7C9"), exclusiveto, contract] */
                MIDL_INTERFACE("BBDCAA3E-7D49-4F69-AA53-2A0F8164B7C9")
                IPaymentCanMakePaymentResultFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */ABI::Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus value,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentCanMakePaymentResultFactory=_uuidof(IPaymentCanMakePaymentResultFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentCurrencyAmount
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentCurrencyAmount
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount[] = L"Windows.ApplicationModel.Payments.IPaymentCurrencyAmount";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("E3A3E9E0-B41F-4987-BDCB-071331F2DAA4"), exclusiveto, contract] */
                MIDL_INTERFACE("E3A3E9E0-B41F-4987-BDCB-071331F2DAA4")
                IPaymentCurrencyAmount : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Currency(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Currency(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrencySystem(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CurrencySystem(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentCurrencyAmount=_uuidof(IPaymentCurrencyAmount);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentCurrencyAmountFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentCurrencyAmount
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory[] = L"Windows.ApplicationModel.Payments.IPaymentCurrencyAmountFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("3257D338-140C-4575-8535-F773178C09A7"), exclusiveto, contract] */
                MIDL_INTERFACE("3257D338-140C-4575-8535-F773178C09A7")
                IPaymentCurrencyAmountFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING value,
                        /* [in] */__RPC__in HSTRING currency,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithCurrencySystem(
                        /* [in] */__RPC__in HSTRING value,
                        /* [in] */__RPC__in HSTRING currency,
                        /* [in] */__RPC__in HSTRING currencySystem,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentCurrencyAmountFactory=_uuidof(IPaymentCurrencyAmountFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentDetails[] = L"Windows.ApplicationModel.Payments.IPaymentDetails";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("53BB2D7D-E0EB-4053-8EAE-CE7C48E02945"), exclusiveto, contract] */
                MIDL_INTERFACE("53BB2D7D-E0EB-4053-8EAE-CE7C48E02945")
                IPaymentDetails : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Total(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentItem * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Total(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentItem * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayItems(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayItems(
                        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShippingOptions(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShippingOptions(
                        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Modifiers(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Modifiers(
                        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentDetails=_uuidof(IPaymentDetails);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentDetailsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentDetailsFactory[] = L"Windows.ApplicationModel.Payments.IPaymentDetailsFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("CFE8AFEE-C0EA-4CA1-8BC7-6DE67B1F3763"), exclusiveto, contract] */
                MIDL_INTERFACE("CFE8AFEE-C0EA-4CA1-8BC7-6DE67B1F3763")
                IPaymentDetailsFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentItem * total,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentDetails * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithDisplayItems(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentItem * total,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * displayItems,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentDetails * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentDetailsFactory=_uuidof(IPaymentDetailsFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentDetailsModifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentDetailsModifier
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentDetailsModifier[] = L"Windows.ApplicationModel.Payments.IPaymentDetailsModifier";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("BE1C7D65-4323-41D7-B305-DFCB765F69DE"), exclusiveto, contract] */
                MIDL_INTERFACE("BE1C7D65-4323-41D7-B305-DFCB765F69DE")
                IPaymentDetailsModifier : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_JsonData(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedMethodIds(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Total(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentItem * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AdditionalDisplayItems(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentDetailsModifier=_uuidof(IPaymentDetailsModifier);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentDetailsModifierFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentDetailsModifier
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory[] = L"Windows.ApplicationModel.Payments.IPaymentDetailsModifierFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("79005286-54DE-429C-9E4F-5DCE6E10EBCE"), exclusiveto, contract] */
                MIDL_INTERFACE("79005286-54DE-429C-9E4F-5DCE6E10EBCE")
                IPaymentDetailsModifierFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentItem * total,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithAdditionalDisplayItems(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentItem * total,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * additionalDisplayItems,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithAdditionalDisplayItemsAndJsonData(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentItem * total,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * additionalDisplayItems,
                        /* [in] */__RPC__in HSTRING jsonData,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentDetailsModifier * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentDetailsModifierFactory=_uuidof(IPaymentDetailsModifierFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentItem[] = L"Windows.ApplicationModel.Payments.IPaymentItem";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("685AC88B-79B2-4B76-9E03-A876223DFE72"), exclusiveto, contract] */
                MIDL_INTERFACE("685AC88B-79B2-4B76-9E03-A876223DFE72")
                IPaymentItem : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Label(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Label(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Amount(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Amount(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pending(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Pending(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentItem=_uuidof(IPaymentItem);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentItemFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentItemFactory[] = L"Windows.ApplicationModel.Payments.IPaymentItemFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("C6AB7AD8-2503-4D1D-A778-02B2E5927B2C"), exclusiveto, contract] */
                MIDL_INTERFACE("C6AB7AD8-2503-4D1D-A778-02B2E5927B2C")
                IPaymentItemFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING label,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * amount,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentItem * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentItemFactory=_uuidof(IPaymentItemFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentMediator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentMediator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMediator[] = L"Windows.ApplicationModel.Payments.IPaymentMediator";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("FB0EE829-EC0C-449A-83DA-7AE3073365A2"), exclusiveto, contract] */
                MIDL_INTERFACE("FB0EE829-EC0C-449A-83DA-7AE3073365A2")
                IPaymentMediator : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetSupportedMethodIdsAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SubmitPaymentRequestAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentRequest * paymentRequest,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * * result
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE SubmitPaymentRequestWithChangeHandlerAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentRequest * paymentRequest,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedHandler  * changeHandler,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentMediator=_uuidof(IPaymentMediator);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentMediator2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentMediator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMediator2[] = L"Windows.ApplicationModel.Payments.IPaymentMediator2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("CEEF98F1-E407-4128-8E73-D93D5F822786"), exclusiveto, contract] */
                MIDL_INTERFACE("CEEF98F1-E407-4128-8E73-D93D5F822786")
                IPaymentMediator2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CanMakePaymentAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentRequest * paymentRequest,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentMediator2=_uuidof(IPaymentMediator2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentMerchantInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentMerchantInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMerchantInfo[] = L"Windows.ApplicationModel.Payments.IPaymentMerchantInfo";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("63445050-0E94-4ED6-AACB-E6012BD327A7"), exclusiveto, contract] */
                MIDL_INTERFACE("63445050-0E94-4ED6-AACB-E6012BD327A7")
                IPaymentMerchantInfo : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PackageFullName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Uri(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IUriRuntimeClass * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentMerchantInfo=_uuidof(IPaymentMerchantInfo);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentMerchantInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentMerchantInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMerchantInfoFactory[] = L"Windows.ApplicationModel.Payments.IPaymentMerchantInfoFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("9E89CED3-CCB7-4167-A8EC-E10AE96DBCD1"), exclusiveto, contract] */
                MIDL_INTERFACE("9E89CED3-CCB7-4167-A8EC-E10AE96DBCD1")
                IPaymentMerchantInfoFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentMerchantInfo * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentMerchantInfoFactory=_uuidof(IPaymentMerchantInfoFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentMethodData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentMethodData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMethodData[] = L"Windows.ApplicationModel.Payments.IPaymentMethodData";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("D1D3CAF4-DE98-4129-B1B7-C3AD86237BF4"), exclusiveto, contract] */
                MIDL_INTERFACE("D1D3CAF4-DE98-4129-B1B7-C3AD86237BF4")
                IPaymentMethodData : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SupportedMethodIds(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_JsonData(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentMethodData=_uuidof(IPaymentMethodData);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentMethodDataFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentMethodData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory[] = L"Windows.ApplicationModel.Payments.IPaymentMethodDataFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("8ADDD27F-9BAA-4A82-8342-A8210992A36B"), exclusiveto, contract] */
                MIDL_INTERFACE("8ADDD27F-9BAA-4A82-8342-A8210992A36B")
                IPaymentMethodDataFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentMethodData * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithJsonData(
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
                        /* [in] */__RPC__in HSTRING jsonData,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentMethodData * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentMethodDataFactory=_uuidof(IPaymentMethodDataFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentOptions[] = L"Windows.ApplicationModel.Payments.IPaymentOptions";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("AAA30854-1F2B-4365-8251-01B58915A5BC"), exclusiveto, contract] */
                MIDL_INTERFACE("AAA30854-1F2B-4365-8251-01B58915A5BC")
                IPaymentOptions : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestPayerEmail(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Payments::PaymentOptionPresence * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RequestPayerEmail(
                        /* [in] */ABI::Windows::ApplicationModel::Payments::PaymentOptionPresence value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestPayerName(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Payments::PaymentOptionPresence * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RequestPayerName(
                        /* [in] */ABI::Windows::ApplicationModel::Payments::PaymentOptionPresence value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestPayerPhoneNumber(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Payments::PaymentOptionPresence * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RequestPayerPhoneNumber(
                        /* [in] */ABI::Windows::ApplicationModel::Payments::PaymentOptionPresence value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RequestShipping(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RequestShipping(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShippingType(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Payments::PaymentShippingType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ShippingType(
                        /* [in] */ABI::Windows::ApplicationModel::Payments::PaymentShippingType value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentOptions=_uuidof(IPaymentOptions);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequest[] = L"Windows.ApplicationModel.Payments.IPaymentRequest";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("B74942E1-ED7B-47EB-BC08-78CC5D6896B6"), exclusiveto, contract] */
                MIDL_INTERFACE("B74942E1-ED7B-47EB-BC08-78CC5D6896B6")
                IPaymentRequest : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MerchantInfo(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentMerchantInfo * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Details(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentDetails * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MethodData(
                        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Options(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentOptions * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentRequest=_uuidof(IPaymentRequest);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequest2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequest2[] = L"Windows.ApplicationModel.Payments.IPaymentRequest2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("B63CCFB5-5998-493E-A04C-67048A50F141"), exclusiveto, contract] */
                MIDL_INTERFACE("B63CCFB5-5998-493E-A04C-67048A50F141")
                IPaymentRequest2 : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Id(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentRequest2=_uuidof(IPaymentRequest2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequestChangedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequestChangedArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs[] = L"Windows.ApplicationModel.Payments.IPaymentRequestChangedArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("C6145E44-CD8B-4BE4-B555-27C99194C0C5"), exclusiveto, contract] */
                MIDL_INTERFACE("C6145E44-CD8B-4BE4-B555-27C99194C0C5")
                IPaymentRequestChangedArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChangeKind(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Payments::PaymentRequestChangeKind * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShippingAddress(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentAddress * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedShippingOption(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE Acknowledge(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult * changeResult
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentRequestChangedArgs=_uuidof(IPaymentRequestChangedArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequestChangedResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequestChangedResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult[] = L"Windows.ApplicationModel.Payments.IPaymentRequestChangedResult";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("DF699E5C-16C4-47AD-9401-8440EC0757DB"), exclusiveto, contract] */
                MIDL_INTERFACE("DF699E5C-16C4-47AD-9401-8440EC0757DB")
                IPaymentRequestChangedResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChangeAcceptedByMerchant(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ChangeAcceptedByMerchant(
                        /* [in] */boolean value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Message(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UpdatedPaymentDetails(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentDetails * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UpdatedPaymentDetails(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentDetails * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentRequestChangedResult=_uuidof(IPaymentRequestChangedResult);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequestChangedResultFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequestChangedResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory[] = L"Windows.ApplicationModel.Payments.IPaymentRequestChangedResultFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("08740F56-1D33-4431-814B-67EA24BF21DB"), exclusiveto, contract] */
                MIDL_INTERFACE("08740F56-1D33-4431-814B-67EA24BF21DB")
                IPaymentRequestChangedResultFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */boolean changeAcceptedByMerchant,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithPaymentDetails(
                        /* [in] */boolean changeAcceptedByMerchant,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentDetails * updatedPaymentDetails,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentRequestChangedResultFactory=_uuidof(IPaymentRequestChangedResultFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequestFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestFactory[] = L"Windows.ApplicationModel.Payments.IPaymentRequestFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("3E8A79DC-6B74-42D3-B103-F0DE35FB1848"), exclusiveto, contract] */
                MIDL_INTERFACE("3E8A79DC-6B74-42D3-B103-F0DE35FB1848")
                IPaymentRequestFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentDetails * details,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * methodData,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentRequest * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithMerchantInfo(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentDetails * details,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * methodData,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentMerchantInfo * merchantInfo,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentRequest * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithMerchantInfoAndOptions(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentDetails * details,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * methodData,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentMerchantInfo * merchantInfo,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentOptions * options,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentRequest * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentRequestFactory=_uuidof(IPaymentRequestFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequestFactory2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestFactory2[] = L"Windows.ApplicationModel.Payments.IPaymentRequestFactory2";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("E6CE1325-A506-4372-B7EF-1A031D5662D1"), exclusiveto, contract] */
                MIDL_INTERFACE("E6CE1325-A506-4372-B7EF-1A031D5662D1")
                IPaymentRequestFactory2 : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateWithMerchantInfoOptionsAndId(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentDetails * details,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * methodData,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentMerchantInfo * merchantInfo,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentOptions * options,
                        /* [in] */__RPC__in HSTRING id,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentRequest * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentRequestFactory2=_uuidof(IPaymentRequestFactory2);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequestSubmitResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequestSubmitResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult[] = L"Windows.ApplicationModel.Payments.IPaymentRequestSubmitResult";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("7B9C3912-30F2-4E90-B249-8CE7D78FFE56"), exclusiveto, contract] */
                MIDL_INTERFACE("7B9C3912-30F2-4E90-B249-8CE7D78FFE56")
                IPaymentRequestSubmitResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Status(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::Payments::PaymentRequestStatus * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Response(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentResponse * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentRequestSubmitResult=_uuidof(IPaymentRequestSubmitResult);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentResponse[] = L"Windows.ApplicationModel.Payments.IPaymentResponse";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("E1389457-8BD2-4888-9FA8-97985545108E"), exclusiveto, contract] */
                MIDL_INTERFACE("E1389457-8BD2-4888-9FA8-97985545108E")
                IPaymentResponse : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PaymentToken(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentToken * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShippingOption(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ShippingAddress(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentAddress * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PayerEmail(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PayerName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PayerPhoneNumber(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CompleteAsync(
                        /* [in] */ABI::Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus status,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentResponse=_uuidof(IPaymentResponse);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentShippingOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentShippingOption
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentShippingOption[] = L"Windows.ApplicationModel.Payments.IPaymentShippingOption";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("13372ADA-9753-4574-8966-93145A76C7F9"), exclusiveto, contract] */
                MIDL_INTERFACE("13372ADA-9753-4574-8966-93145A76C7F9")
                IPaymentShippingOption : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Label(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Label(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Amount(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Amount(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Tag(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Tag(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSelected(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsSelected(
                        /* [in] */boolean value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentShippingOption=_uuidof(IPaymentShippingOption);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentShippingOptionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentShippingOption
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory[] = L"Windows.ApplicationModel.Payments.IPaymentShippingOptionFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("5DE5F917-B2D7-446B-9D73-6123FBCA3BC6"), exclusiveto, contract] */
                MIDL_INTERFACE("5DE5F917-B2D7-446B-9D73-6123FBCA3BC6")
                IPaymentShippingOptionFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING label,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * amount,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithSelected(
                        /* [in] */__RPC__in HSTRING label,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * amount,
                        /* [in] */boolean selected,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithSelectedAndTag(
                        /* [in] */__RPC__in HSTRING label,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount * amount,
                        /* [in] */boolean selected,
                        /* [in] */__RPC__in HSTRING tag,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentShippingOption * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentShippingOptionFactory=_uuidof(IPaymentShippingOptionFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentToken
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentToken
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentToken[] = L"Windows.ApplicationModel.Payments.IPaymentToken";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("BBCAC013-CCD0-41F2-B2A1-0A2E4B5DCE25"), exclusiveto, contract] */
                MIDL_INTERFACE("BBCAC013-CCD0-41F2-B2A1-0A2E4B5DCE25")
                IPaymentToken : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PaymentMethodId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_JsonDetails(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentToken=_uuidof(IPaymentToken);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentTokenFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentToken
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentTokenFactory[] = L"Windows.ApplicationModel.Payments.IPaymentTokenFactory";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace Payments {
                /* [object, uuid("988CD7AA-4753-4904-8373-DD7B08B995C1"), exclusiveto, contract] */
                MIDL_INTERFACE("988CD7AA-4753-4904-8373-DD7B08B995C1")
                IPaymentTokenFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE Create(
                        /* [in] */__RPC__in HSTRING paymentMethodId,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentToken * * result
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE CreateWithJsonDetails(
                        /* [in] */__RPC__in HSTRING paymentMethodId,
                        /* [in] */__RPC__in HSTRING jsonDetails,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::Payments::IPaymentToken * * result
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IPaymentTokenFactory=_uuidof(IPaymentTokenFactory);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* Payments */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentAddress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentAddress ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentAddress_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentAddress_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentAddress[] = L"Windows.ApplicationModel.Payments.PaymentAddress";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentCanMakePaymentResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResultFactory interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentCanMakePaymentResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentCanMakePaymentResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentCanMakePaymentResult[] = L"Windows.ApplicationModel.Payments.PaymentCanMakePaymentResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentCurrencyAmount
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentCurrencyAmountFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentCurrencyAmount ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentCurrencyAmount_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentCurrencyAmount_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentCurrencyAmount[] = L"Windows.ApplicationModel.Payments.PaymentCurrencyAmount";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentDetailsFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentDetails[] = L"Windows.ApplicationModel.Payments.PaymentDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentDetailsModifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentDetailsModifierFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentDetailsModifier ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentDetailsModifier_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentDetailsModifier_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentDetailsModifier[] = L"Windows.ApplicationModel.Payments.PaymentDetailsModifier";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentItemFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentItem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentItem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentItem[] = L"Windows.ApplicationModel.Payments.PaymentItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentMediator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentMediator ** Default Interface **
 *    Windows.ApplicationModel.Payments.IPaymentMediator2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentMediator_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentMediator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentMediator[] = L"Windows.ApplicationModel.Payments.PaymentMediator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentMerchantInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentMerchantInfoFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentMerchantInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentMerchantInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentMerchantInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentMerchantInfo[] = L"Windows.ApplicationModel.Payments.PaymentMerchantInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentMethodData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentMethodDataFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentMethodData ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentMethodData_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentMethodData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentMethodData[] = L"Windows.ApplicationModel.Payments.PaymentMethodData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentOptions_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentOptions[] = L"Windows.ApplicationModel.Payments.PaymentOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentRequestFactory2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentRequestFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentRequest ** Default Interface **
 *    Windows.ApplicationModel.Payments.IPaymentRequest2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentRequest[] = L"Windows.ApplicationModel.Payments.PaymentRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentRequestChangedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentRequestChangedArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequestChangedArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequestChangedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentRequestChangedArgs[] = L"Windows.ApplicationModel.Payments.PaymentRequestChangedArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentRequestChangedResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentRequestChangedResultFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentRequestChangedResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequestChangedResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequestChangedResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentRequestChangedResult[] = L"Windows.ApplicationModel.Payments.PaymentRequestChangedResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentRequestSubmitResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentRequestSubmitResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequestSubmitResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequestSubmitResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentRequestSubmitResult[] = L"Windows.ApplicationModel.Payments.PaymentRequestSubmitResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentResponse ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentResponse_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentResponse[] = L"Windows.ApplicationModel.Payments.PaymentResponse";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentShippingOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentShippingOptionFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentShippingOption ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentShippingOption_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentShippingOption_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentShippingOption[] = L"Windows.ApplicationModel.Payments.PaymentShippingOption";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentToken
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentTokenFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentToken ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentToken_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentToken_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentToken[] = L"Windows.ApplicationModel.Payments.PaymentToken";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory;

#endif // ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier;

typedef struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem;

typedef struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData;

typedef struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption;

typedef struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResultVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResultVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult_INTERFACE_DEFINED__

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



#if !defined(____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_IInspectable_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;

typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;

interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_IInspectable_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;

typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt IInspectable * **value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [in] */ HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, /* [retval][out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
        /* [in] */ HSTRING key,
        /* [in] */ __RPC__in_opt IInspectable * *value,
        /* [retval][out] */ __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,/* [in] */ HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;

interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIMap_2_HSTRING_IInspectable_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 

#define __FIMap_2_HSTRING_IInspectable_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIMap_2_HSTRING_IInspectable_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 

#define __FIMap_2_HSTRING_IInspectable_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIMap_2_HSTRING_IInspectable_Insert(This,key,value,replaced)	\
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) ) 

#define __FIMap_2_HSTRING_IInspectable_Remove(This,key)	\
    ( (This)->lpVtbl -> Remove(This,key) ) 

#define __FIMap_2_HSTRING_IInspectable_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 
#endif /* COBJMACROS */



#endif // ____FIMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__


#if !defined(____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;

typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;

interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapChangedEventArgs_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapChangedEventArgs_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapChangedEventArgs_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapChangedEventArgs_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapChangedEventArgs_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapChangedEventArgs_1_HSTRING_get_CollectionChange(This,value)	\
    ( (This)->lpVtbl -> get_CollectionChange(This,value) ) 
#define __FIMapChangedEventArgs_1_HSTRING_get_Key(This,value)	\
    ( (This)->lpVtbl -> get_Key(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIMapChangedEventArgs_1_HSTRING_INTERFACE_DEFINED__



#if !defined(____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;

//Forward declare IObservableMap and IMapChangedEventArgs
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;

typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This, 
        /* [in] */ __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender, 
        /* [in] */ __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;

interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FMapChangedEventHandler_2_HSTRING_IInspectable_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */


#endif // ____FMapChangedEventHandler_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__)
#define ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__

typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;

typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
        /* [retval][out] */ __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
        /* [in] */ EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;

interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIObservableMap_2_HSTRING_IInspectable_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIObservableMap_2_HSTRING_IInspectable_add_MapChanged(This,handler,token)	\
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) ) 
#define __FIObservableMap_2_HSTRING_IInspectable_remove_MapChanged(This,token)	\
    ( (This)->lpVtbl -> remove_MapChanged(This,token) ) 
#endif /* COBJMACROS */



#endif // ____FIObservableMap_2_HSTRING_IInspectable_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_HSTRING;

typedef struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, /* [retval][out] */ __RPC__out __FIVectorView_1_HSTRING * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_HSTRING_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_HSTRING_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;

#endif // ____x_ABI_CWindows_CFoundation_CCollections_CIPropertySet_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__





typedef enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentCanMakePaymentResultStatus __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentCanMakePaymentResultStatus;


typedef enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence;


typedef enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestChangeKind __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestChangeKind;


typedef enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestCompletionStatus __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestCompletionStatus;


typedef enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestStatus __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestStatus;


typedef enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentShippingType __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentShippingType;


























































/*
 *
 * Struct Windows.ApplicationModel.Payments.PaymentCanMakePaymentResultStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentCanMakePaymentResultStatus
{
    PaymentCanMakePaymentResultStatus_Unknown = 0,
    PaymentCanMakePaymentResultStatus_Yes = 1,
    PaymentCanMakePaymentResultStatus_No = 2,
    PaymentCanMakePaymentResultStatus_NotAllowed = 3,
    PaymentCanMakePaymentResultStatus_UserNotSignedIn = 4,
    PaymentCanMakePaymentResultStatus_SpecifiedPaymentMethodIdsNotSupported = 5,
    PaymentCanMakePaymentResultStatus_NoQualifyingCardOnFile = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Struct Windows.ApplicationModel.Payments.PaymentOptionPresence
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence
{
    PaymentOptionPresence_None = 0,
    PaymentOptionPresence_Optional = 1,
    PaymentOptionPresence_Required = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.ApplicationModel.Payments.PaymentRequestChangeKind
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestChangeKind
{
    PaymentRequestChangeKind_ShippingOption = 0,
    PaymentRequestChangeKind_ShippingAddress = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.ApplicationModel.Payments.PaymentRequestCompletionStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestCompletionStatus
{
    PaymentRequestCompletionStatus_Succeeded = 0,
    PaymentRequestCompletionStatus_Failed = 1,
    PaymentRequestCompletionStatus_Unknown = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.ApplicationModel.Payments.PaymentRequestStatus
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestStatus
{
    PaymentRequestStatus_Succeeded = 0,
    PaymentRequestStatus_Failed = 1,
    PaymentRequestStatus_Canceled = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Struct Windows.ApplicationModel.Payments.PaymentShippingType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentShippingType
{
    PaymentShippingType_Shipping = 0,
    PaymentShippingType_Delivery = 1,
    PaymentShippingType_Pickup = 2,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Delegate Windows.ApplicationModel.Payments.PaymentRequestChangedHandler
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_INTERFACE_DEFINED__
/* [object, uuid("5078B9E1-F398-4F2C-A27E-94D371CF6C7D"), contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject);

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler * This);

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * paymentRequest,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * args
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandlerVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandlerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_Invoke(This,paymentRequest,args) \
    ( (This)->lpVtbl->Invoke(This,paymentRequest,args) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentAddress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentAddress
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentAddress[] = L"Windows.ApplicationModel.Payments.IPaymentAddress";
/* [object, uuid("5F2264E9-6F3A-4166-A018-0A0B06BB32B5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Country )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Country )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AddressLines )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AddressLines )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [in] */__RPC__in_opt __FIVectorView_1_HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Region )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Region )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_City )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_City )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DependentLocality )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DependentLocality )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PostalCode )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PostalCode )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SortingCode )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SortingCode )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LanguageCode )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_LanguageCode )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Organization )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Organization )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Recipient )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Recipient )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_PhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddressVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddressVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_get_Country(This,value) \
    ( (This)->lpVtbl->get_Country(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_put_Country(This,value) \
    ( (This)->lpVtbl->put_Country(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_get_AddressLines(This,value) \
    ( (This)->lpVtbl->get_AddressLines(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_put_AddressLines(This,value) \
    ( (This)->lpVtbl->put_AddressLines(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_get_Region(This,value) \
    ( (This)->lpVtbl->get_Region(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_put_Region(This,value) \
    ( (This)->lpVtbl->put_Region(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_get_City(This,value) \
    ( (This)->lpVtbl->get_City(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_put_City(This,value) \
    ( (This)->lpVtbl->put_City(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_get_DependentLocality(This,value) \
    ( (This)->lpVtbl->get_DependentLocality(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_put_DependentLocality(This,value) \
    ( (This)->lpVtbl->put_DependentLocality(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_get_PostalCode(This,value) \
    ( (This)->lpVtbl->get_PostalCode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_put_PostalCode(This,value) \
    ( (This)->lpVtbl->put_PostalCode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_get_SortingCode(This,value) \
    ( (This)->lpVtbl->get_SortingCode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_put_SortingCode(This,value) \
    ( (This)->lpVtbl->put_SortingCode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_get_LanguageCode(This,value) \
    ( (This)->lpVtbl->get_LanguageCode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_put_LanguageCode(This,value) \
    ( (This)->lpVtbl->put_LanguageCode(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_get_Organization(This,value) \
    ( (This)->lpVtbl->get_Organization(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_put_Organization(This,value) \
    ( (This)->lpVtbl->put_Organization(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_get_Recipient(This,value) \
    ( (This)->lpVtbl->get_Recipient(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_put_Recipient(This,value) \
    ( (This)->lpVtbl->put_Recipient(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_get_PhoneNumber(This,value) \
    ( (This)->lpVtbl->get_PhoneNumber(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_put_PhoneNumber(This,value) \
    ( (This)->lpVtbl->put_PhoneNumber(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentCanMakePaymentResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResult[] = L"Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResult";
/* [object, uuid("7696FE55-D5D3-4D3D-B345-45591759C510"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentCanMakePaymentResultStatus * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResultFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentCanMakePaymentResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResultFactory[] = L"Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResultFactory";
/* [object, uuid("BBDCAA3E-7D49-4F69-AA53-2A0F8164B7C9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CPayments_CPaymentCanMakePaymentResultStatus value,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_Create(This,value,result) \
    ( (This)->lpVtbl->Create(This,value,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentCurrencyAmount
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentCurrencyAmount
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount[] = L"Windows.ApplicationModel.Payments.IPaymentCurrencyAmount";
/* [object, uuid("E3A3E9E0-B41F-4987-BDCB-071331F2DAA4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Currency )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Currency )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrencySystem )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CurrencySystem )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_get_Currency(This,value) \
    ( (This)->lpVtbl->get_Currency(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_put_Currency(This,value) \
    ( (This)->lpVtbl->put_Currency(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_get_CurrencySystem(This,value) \
    ( (This)->lpVtbl->get_CurrencySystem(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_put_CurrencySystem(This,value) \
    ( (This)->lpVtbl->put_CurrencySystem(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentCurrencyAmountFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentCurrencyAmount
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory[] = L"Windows.ApplicationModel.Payments.IPaymentCurrencyAmountFactory";
/* [object, uuid("3257D338-140C-4575-8535-F773178C09A7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This,
        /* [in] */__RPC__in HSTRING value,
        /* [in] */__RPC__in HSTRING currency,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithCurrencySystem )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This,
        /* [in] */__RPC__in HSTRING value,
        /* [in] */__RPC__in HSTRING currency,
        /* [in] */__RPC__in HSTRING currencySystem,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_Create(This,value,currency,result) \
    ( (This)->lpVtbl->Create(This,value,currency,result) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_CreateWithCurrencySystem(This,value,currency,currencySystem,result) \
    ( (This)->lpVtbl->CreateWithCurrencySystem(This,value,currency,currencySystem,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentDetails[] = L"Windows.ApplicationModel.Payments.IPaymentDetails";
/* [object, uuid("53BB2D7D-E0EB-4053-8EAE-CE7C48E02945"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Total )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Total )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayItems )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayItems )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShippingOptions )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShippingOptions )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Modifiers )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Modifiers )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
        /* [in] */__RPC__in_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_get_Total(This,value) \
    ( (This)->lpVtbl->get_Total(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_put_Total(This,value) \
    ( (This)->lpVtbl->put_Total(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_get_DisplayItems(This,value) \
    ( (This)->lpVtbl->get_DisplayItems(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_put_DisplayItems(This,value) \
    ( (This)->lpVtbl->put_DisplayItems(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_get_ShippingOptions(This,value) \
    ( (This)->lpVtbl->get_ShippingOptions(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_put_ShippingOptions(This,value) \
    ( (This)->lpVtbl->put_ShippingOptions(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_get_Modifiers(This,value) \
    ( (This)->lpVtbl->get_Modifiers(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_put_Modifiers(This,value) \
    ( (This)->lpVtbl->put_Modifiers(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentDetailsFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentDetails
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentDetailsFactory[] = L"Windows.ApplicationModel.Payments.IPaymentDetailsFactory";
/* [object, uuid("CFE8AFEE-C0EA-4CA1-8BC7-6DE67B1F3763"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * total,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithDisplayItems )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * total,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * displayItems,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_Create(This,total,result) \
    ( (This)->lpVtbl->Create(This,total,result) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_CreateWithDisplayItems(This,total,displayItems,result) \
    ( (This)->lpVtbl->CreateWithDisplayItems(This,total,displayItems,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentDetailsModifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentDetailsModifier
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentDetailsModifier[] = L"Windows.ApplicationModel.Payments.IPaymentDetailsModifier";
/* [object, uuid("BE1C7D65-4323-41D7-B305-DFCB765F69DE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_JsonData )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedMethodIds )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Total )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AdditionalDisplayItems )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_get_JsonData(This,value) \
    ( (This)->lpVtbl->get_JsonData(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_get_SupportedMethodIds(This,value) \
    ( (This)->lpVtbl->get_SupportedMethodIds(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_get_Total(This,value) \
    ( (This)->lpVtbl->get_Total(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_get_AdditionalDisplayItems(This,value) \
    ( (This)->lpVtbl->get_AdditionalDisplayItems(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentDetailsModifierFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentDetailsModifier
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory[] = L"Windows.ApplicationModel.Payments.IPaymentDetailsModifierFactory";
/* [object, uuid("79005286-54DE-429C-9E4F-5DCE6E10EBCE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * total,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAdditionalDisplayItems )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * total,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * additionalDisplayItems,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAdditionalDisplayItemsAndJsonData )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * total,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * additionalDisplayItems,
        /* [in] */__RPC__in HSTRING jsonData,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_Create(This,supportedMethodIds,total,result) \
    ( (This)->lpVtbl->Create(This,supportedMethodIds,total,result) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_CreateWithAdditionalDisplayItems(This,supportedMethodIds,total,additionalDisplayItems,result) \
    ( (This)->lpVtbl->CreateWithAdditionalDisplayItems(This,supportedMethodIds,total,additionalDisplayItems,result) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_CreateWithAdditionalDisplayItemsAndJsonData(This,supportedMethodIds,total,additionalDisplayItems,jsonData,result) \
    ( (This)->lpVtbl->CreateWithAdditionalDisplayItemsAndJsonData(This,supportedMethodIds,total,additionalDisplayItems,jsonData,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentItem[] = L"Windows.ApplicationModel.Payments.IPaymentItem";
/* [object, uuid("685AC88B-79B2-4B76-9E03-A876223DFE72"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Label )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Amount )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Amount )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pending )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Pending )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_get_Label(This,value) \
    ( (This)->lpVtbl->get_Label(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_put_Label(This,value) \
    ( (This)->lpVtbl->put_Label(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_get_Amount(This,value) \
    ( (This)->lpVtbl->get_Amount(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_put_Amount(This,value) \
    ( (This)->lpVtbl->put_Amount(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_get_Pending(This,value) \
    ( (This)->lpVtbl->get_Pending(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_put_Pending(This,value) \
    ( (This)->lpVtbl->put_Pending(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentItemFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentItem
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentItemFactory[] = L"Windows.ApplicationModel.Payments.IPaymentItemFactory";
/* [object, uuid("C6AB7AD8-2503-4D1D-A778-02B2E5927B2C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This,
        /* [in] */__RPC__in HSTRING label,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * amount,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_Create(This,label,amount,result) \
    ( (This)->lpVtbl->Create(This,label,amount,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentMediator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentMediator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMediator[] = L"Windows.ApplicationModel.Payments.IPaymentMediator";
/* [object, uuid("FB0EE829-EC0C-449A-83DA-7AE3073365A2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetSupportedMethodIdsAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SubmitPaymentRequestAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * paymentRequest,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * * result
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *SubmitPaymentRequestWithChangeHandlerAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * paymentRequest,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler  * changeHandler,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediatorVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediatorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_GetSupportedMethodIdsAsync(This,result) \
    ( (This)->lpVtbl->GetSupportedMethodIdsAsync(This,result) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_SubmitPaymentRequestAsync(This,paymentRequest,result) \
    ( (This)->lpVtbl->SubmitPaymentRequestAsync(This,paymentRequest,result) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_SubmitPaymentRequestWithChangeHandlerAsync(This,paymentRequest,changeHandler,result) \
    ( (This)->lpVtbl->SubmitPaymentRequestWithChangeHandlerAsync(This,paymentRequest,changeHandler,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentMediator2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentMediator
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMediator2[] = L"Windows.ApplicationModel.Payments.IPaymentMediator2";
/* [object, uuid("CEEF98F1-E407-4128-8E73-D93D5F822786"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CanMakePaymentAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * paymentRequest,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_CanMakePaymentAsync(This,paymentRequest,result) \
    ( (This)->lpVtbl->CanMakePaymentAsync(This,paymentRequest,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentMerchantInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentMerchantInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMerchantInfo[] = L"Windows.ApplicationModel.Payments.IPaymentMerchantInfo";
/* [object, uuid("63445050-0E94-4ED6-AACB-E6012BD327A7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PackageFullName )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_get_PackageFullName(This,value) \
    ( (This)->lpVtbl->get_PackageFullName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_get_Uri(This,value) \
    ( (This)->lpVtbl->get_Uri(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentMerchantInfoFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentMerchantInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMerchantInfoFactory[] = L"Windows.ApplicationModel.Payments.IPaymentMerchantInfoFactory";
/* [object, uuid("9E89CED3-CCB7-4167-A8EC-E10AE96DBCD1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_Create(This,uri,result) \
    ( (This)->lpVtbl->Create(This,uri,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentMethodData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentMethodData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMethodData[] = L"Windows.ApplicationModel.Payments.IPaymentMethodData";
/* [object, uuid("D1D3CAF4-DE98-4129-B1B7-C3AD86237BF4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SupportedMethodIds )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_JsonData )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_get_SupportedMethodIds(This,value) \
    ( (This)->lpVtbl->get_SupportedMethodIds(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_get_JsonData(This,value) \
    ( (This)->lpVtbl->get_JsonData(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentMethodDataFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentMethodData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory[] = L"Windows.ApplicationModel.Payments.IPaymentMethodDataFactory";
/* [object, uuid("8ADDD27F-9BAA-4A82-8342-A8210992A36B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithJsonData )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
        /* [in] */__RPC__in HSTRING jsonData,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_Create(This,supportedMethodIds,result) \
    ( (This)->lpVtbl->Create(This,supportedMethodIds,result) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_CreateWithJsonData(This,supportedMethodIds,jsonData,result) \
    ( (This)->lpVtbl->CreateWithJsonData(This,supportedMethodIds,jsonData,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentOptions
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentOptions[] = L"Windows.ApplicationModel.Payments.IPaymentOptions";
/* [object, uuid("AAA30854-1F2B-4365-8251-01B58915A5BC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestPayerEmail )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RequestPayerEmail )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestPayerName )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RequestPayerName )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestPayerPhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RequestPayerPhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RequestShipping )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RequestShipping )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShippingType )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentShippingType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ShippingType )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CPayments_CPaymentShippingType value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptionsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptionsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_get_RequestPayerEmail(This,value) \
    ( (This)->lpVtbl->get_RequestPayerEmail(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_put_RequestPayerEmail(This,value) \
    ( (This)->lpVtbl->put_RequestPayerEmail(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_get_RequestPayerName(This,value) \
    ( (This)->lpVtbl->get_RequestPayerName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_put_RequestPayerName(This,value) \
    ( (This)->lpVtbl->put_RequestPayerName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_get_RequestPayerPhoneNumber(This,value) \
    ( (This)->lpVtbl->get_RequestPayerPhoneNumber(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_put_RequestPayerPhoneNumber(This,value) \
    ( (This)->lpVtbl->put_RequestPayerPhoneNumber(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_get_RequestShipping(This,value) \
    ( (This)->lpVtbl->get_RequestShipping(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_put_RequestShipping(This,value) \
    ( (This)->lpVtbl->put_RequestShipping(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_get_ShippingType(This,value) \
    ( (This)->lpVtbl->get_ShippingType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_put_ShippingType(This,value) \
    ( (This)->lpVtbl->put_ShippingType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequest[] = L"Windows.ApplicationModel.Payments.IPaymentRequest";
/* [object, uuid("B74942E1-ED7B-47EB-BC08-78CC5D6896B6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MerchantInfo )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Details )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MethodData )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_get_MerchantInfo(This,value) \
    ( (This)->lpVtbl->get_MerchantInfo(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_get_Details(This,value) \
    ( (This)->lpVtbl->get_Details(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_get_MethodData(This,value) \
    ( (This)->lpVtbl->get_MethodData(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_get_Options(This,value) \
    ( (This)->lpVtbl->get_Options(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequest2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequest2[] = L"Windows.ApplicationModel.Payments.IPaymentRequest2";
/* [object, uuid("B63CCFB5-5998-493E-A04C-67048A50F141"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_get_Id(This,value) \
    ( (This)->lpVtbl->get_Id(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequestChangedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequestChangedArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs[] = L"Windows.ApplicationModel.Payments.IPaymentRequestChangedArgs";
/* [object, uuid("C6145E44-CD8B-4BE4-B555-27C99194C0C5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChangeKind )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestChangeKind * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShippingAddress )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedShippingOption )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Acknowledge )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * changeResult
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_get_ChangeKind(This,value) \
    ( (This)->lpVtbl->get_ChangeKind(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_get_ShippingAddress(This,value) \
    ( (This)->lpVtbl->get_ShippingAddress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_get_SelectedShippingOption(This,value) \
    ( (This)->lpVtbl->get_SelectedShippingOption(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_Acknowledge(This,changeResult) \
    ( (This)->lpVtbl->Acknowledge(This,changeResult) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequestChangedResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequestChangedResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult[] = L"Windows.ApplicationModel.Payments.IPaymentRequestChangedResult";
/* [object, uuid("DF699E5C-16C4-47AD-9401-8440EC0757DB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChangeAcceptedByMerchant )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ChangeAcceptedByMerchant )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Message )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UpdatedPaymentDetails )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UpdatedPaymentDetails )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_get_ChangeAcceptedByMerchant(This,value) \
    ( (This)->lpVtbl->get_ChangeAcceptedByMerchant(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_put_ChangeAcceptedByMerchant(This,value) \
    ( (This)->lpVtbl->put_ChangeAcceptedByMerchant(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_put_Message(This,value) \
    ( (This)->lpVtbl->put_Message(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_get_UpdatedPaymentDetails(This,value) \
    ( (This)->lpVtbl->get_UpdatedPaymentDetails(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_put_UpdatedPaymentDetails(This,value) \
    ( (This)->lpVtbl->put_UpdatedPaymentDetails(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequestChangedResultFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequestChangedResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory[] = L"Windows.ApplicationModel.Payments.IPaymentRequestChangedResultFactory";
/* [object, uuid("08740F56-1D33-4431-814B-67EA24BF21DB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This,
        /* [in] */boolean changeAcceptedByMerchant,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithPaymentDetails )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This,
        /* [in] */boolean changeAcceptedByMerchant,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * updatedPaymentDetails,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_Create(This,changeAcceptedByMerchant,result) \
    ( (This)->lpVtbl->Create(This,changeAcceptedByMerchant,result) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_CreateWithPaymentDetails(This,changeAcceptedByMerchant,updatedPaymentDetails,result) \
    ( (This)->lpVtbl->CreateWithPaymentDetails(This,changeAcceptedByMerchant,updatedPaymentDetails,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequestFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestFactory[] = L"Windows.ApplicationModel.Payments.IPaymentRequestFactory";
/* [object, uuid("3E8A79DC-6B74-42D3-B103-F0DE35FB1848"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * details,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * methodData,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithMerchantInfo )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * details,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * methodData,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * merchantInfo,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithMerchantInfoAndOptions )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * details,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * methodData,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * merchantInfo,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * options,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_Create(This,details,methodData,result) \
    ( (This)->lpVtbl->Create(This,details,methodData,result) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_CreateWithMerchantInfo(This,details,methodData,merchantInfo,result) \
    ( (This)->lpVtbl->CreateWithMerchantInfo(This,details,methodData,merchantInfo,result) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_CreateWithMerchantInfoAndOptions(This,details,methodData,merchantInfo,options,result) \
    ( (This)->lpVtbl->CreateWithMerchantInfoAndOptions(This,details,methodData,merchantInfo,options,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequestFactory2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequest
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestFactory2[] = L"Windows.ApplicationModel.Payments.IPaymentRequestFactory2";
/* [object, uuid("E6CE1325-A506-4372-B7EF-1A031D5662D1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithMerchantInfoOptionsAndId )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * details,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * methodData,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * merchantInfo,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * options,
        /* [in] */__RPC__in HSTRING id,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2Vtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_CreateWithMerchantInfoOptionsAndId(This,details,methodData,merchantInfo,options,id,result) \
    ( (This)->lpVtbl->CreateWithMerchantInfoOptionsAndId(This,details,methodData,merchantInfo,options,id,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentRequestSubmitResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentRequestSubmitResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult[] = L"Windows.ApplicationModel.Payments.IPaymentRequestSubmitResult";
/* [object, uuid("7B9C3912-30F2-4E90-B249-8CE7D78FFE56"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestStatus * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResultVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_get_Status(This,value) \
    ( (This)->lpVtbl->get_Status(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_get_Response(This,value) \
    ( (This)->lpVtbl->get_Response(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentResponse[] = L"Windows.ApplicationModel.Payments.IPaymentResponse";
/* [object, uuid("E1389457-8BD2-4888-9FA8-97985545108E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PaymentToken )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShippingOption )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ShippingAddress )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PayerEmail )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PayerName )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PayerPhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *CompleteAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestCompletionStatus status,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponseVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_get_PaymentToken(This,value) \
    ( (This)->lpVtbl->get_PaymentToken(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_get_ShippingOption(This,value) \
    ( (This)->lpVtbl->get_ShippingOption(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_get_ShippingAddress(This,value) \
    ( (This)->lpVtbl->get_ShippingAddress(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_get_PayerEmail(This,value) \
    ( (This)->lpVtbl->get_PayerEmail(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_get_PayerName(This,value) \
    ( (This)->lpVtbl->get_PayerName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_get_PayerPhoneNumber(This,value) \
    ( (This)->lpVtbl->get_PayerPhoneNumber(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_CompleteAsync(This,status,result) \
    ( (This)->lpVtbl->CompleteAsync(This,status,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentShippingOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentShippingOption
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentShippingOption[] = L"Windows.ApplicationModel.Payments.IPaymentShippingOption";
/* [object, uuid("13372ADA-9753-4574-8966-93145A76C7F9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Label )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Amount )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Amount )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Tag )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSelected )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsSelected )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_get_Label(This,value) \
    ( (This)->lpVtbl->get_Label(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_put_Label(This,value) \
    ( (This)->lpVtbl->put_Label(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_get_Amount(This,value) \
    ( (This)->lpVtbl->get_Amount(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_put_Amount(This,value) \
    ( (This)->lpVtbl->put_Amount(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_get_Tag(This,value) \
    ( (This)->lpVtbl->get_Tag(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_put_Tag(This,value) \
    ( (This)->lpVtbl->put_Tag(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_get_IsSelected(This,value) \
    ( (This)->lpVtbl->get_IsSelected(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_put_IsSelected(This,value) \
    ( (This)->lpVtbl->put_IsSelected(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentShippingOptionFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentShippingOption
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory[] = L"Windows.ApplicationModel.Payments.IPaymentShippingOptionFactory";
/* [object, uuid("5DE5F917-B2D7-446B-9D73-6123FBCA3BC6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
        /* [in] */__RPC__in HSTRING label,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * amount,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithSelected )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
        /* [in] */__RPC__in HSTRING label,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * amount,
        /* [in] */boolean selected,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithSelectedAndTag )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
        /* [in] */__RPC__in HSTRING label,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * amount,
        /* [in] */boolean selected,
        /* [in] */__RPC__in HSTRING tag,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_Create(This,label,amount,result) \
    ( (This)->lpVtbl->Create(This,label,amount,result) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_CreateWithSelected(This,label,amount,selected,result) \
    ( (This)->lpVtbl->CreateWithSelected(This,label,amount,selected,result) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_CreateWithSelectedAndTag(This,label,amount,selected,tag,result) \
    ( (This)->lpVtbl->CreateWithSelectedAndTag(This,label,amount,selected,tag,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentToken
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentToken
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentToken[] = L"Windows.ApplicationModel.Payments.IPaymentToken";
/* [object, uuid("BBCAC013-CCD0-41F2-B2A1-0A2E4B5DCE25"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PaymentMethodId )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_JsonDetails )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_get_PaymentMethodId(This,value) \
    ( (This)->lpVtbl->get_PaymentMethodId(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_get_JsonDetails(This,value) \
    ( (This)->lpVtbl->get_JsonDetails(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.ApplicationModel.Payments.IPaymentTokenFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.Payments.PaymentToken
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentTokenFactory[] = L"Windows.ApplicationModel.Payments.IPaymentTokenFactory";
/* [object, uuid("988CD7AA-4753-4904-8373-DD7B08B995C1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This,
        /* [in] */__RPC__in HSTRING paymentMethodId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithJsonDetails )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This,
        /* [in] */__RPC__in HSTRING paymentMethodId,
        /* [in] */__RPC__in HSTRING jsonDetails,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactoryVtbl;

interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_Create(This,paymentMethodId,result) \
    ( (This)->lpVtbl->Create(This,paymentMethodId,result) )

#define __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_CreateWithJsonDetails(This,paymentMethodId,jsonDetails,result) \
    ( (This)->lpVtbl->CreateWithJsonDetails(This,paymentMethodId,jsonDetails,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentAddress
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentAddress ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentAddress_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentAddress_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentAddress[] = L"Windows.ApplicationModel.Payments.PaymentAddress";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentCanMakePaymentResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 5.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResultFactory interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentCanMakePaymentResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentCanMakePaymentResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentCanMakePaymentResult[] = L"Windows.ApplicationModel.Payments.PaymentCanMakePaymentResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x50000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentCurrencyAmount
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentCurrencyAmountFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentCurrencyAmount ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentCurrencyAmount_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentCurrencyAmount_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentCurrencyAmount[] = L"Windows.ApplicationModel.Payments.PaymentCurrencyAmount";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentDetails
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentDetailsFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentDetails ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentDetails_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentDetails_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentDetails[] = L"Windows.ApplicationModel.Payments.PaymentDetails";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentDetailsModifier
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentDetailsModifierFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentDetailsModifier ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentDetailsModifier_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentDetailsModifier_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentDetailsModifier[] = L"Windows.ApplicationModel.Payments.PaymentDetailsModifier";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentItem
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentItemFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentItem ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentItem_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentItem_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentItem[] = L"Windows.ApplicationModel.Payments.PaymentItem";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentMediator
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentMediator ** Default Interface **
 *    Windows.ApplicationModel.Payments.IPaymentMediator2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentMediator_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentMediator_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentMediator[] = L"Windows.ApplicationModel.Payments.PaymentMediator";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentMerchantInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentMerchantInfoFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentMerchantInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentMerchantInfo_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentMerchantInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentMerchantInfo[] = L"Windows.ApplicationModel.Payments.PaymentMerchantInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentMethodData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentMethodDataFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentMethodData ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentMethodData_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentMethodData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentMethodData[] = L"Windows.ApplicationModel.Payments.PaymentMethodData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentOptions ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentOptions_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentOptions_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentOptions[] = L"Windows.ApplicationModel.Payments.PaymentOptions";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentRequest
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentRequestFactory2 interface starting with version 5.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentRequestFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentRequest ** Default Interface **
 *    Windows.ApplicationModel.Payments.IPaymentRequest2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequest_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequest_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentRequest[] = L"Windows.ApplicationModel.Payments.PaymentRequest";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentRequestChangedArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentRequestChangedArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequestChangedArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequestChangedArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentRequestChangedArgs[] = L"Windows.ApplicationModel.Payments.PaymentRequestChangedArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentRequestChangedResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentRequestChangedResultFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentRequestChangedResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequestChangedResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequestChangedResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentRequestChangedResult[] = L"Windows.ApplicationModel.Payments.PaymentRequestChangedResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentRequestSubmitResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentRequestSubmitResult ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequestSubmitResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentRequestSubmitResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentRequestSubmitResult[] = L"Windows.ApplicationModel.Payments.PaymentRequestSubmitResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentResponse ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentResponse_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentResponse[] = L"Windows.ApplicationModel.Payments.PaymentResponse";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentShippingOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentShippingOptionFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentShippingOption ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentShippingOption_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentShippingOption_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentShippingOption[] = L"Windows.ApplicationModel.Payments.PaymentShippingOption";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.ApplicationModel.Payments.PaymentToken
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.ApplicationModel.Payments.IPaymentTokenFactory interface starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.Payments.IPaymentToken ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentToken_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_Payments_PaymentToken_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentToken[] = L"Windows.ApplicationModel.Payments.PaymentToken";
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
#endif // __windows2Eapplicationmodel2Epayments_p_h__

#endif // __windows2Eapplicationmodel2Epayments_h__
