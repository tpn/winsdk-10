/* Header file automatically generated from windows.security.cryptography.certificates.idl */
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
#ifndef __windows2Esecurity2Ecryptography2Ecertificates_h__
#define __windows2Esecurity2Ecryptography2Ecertificates_h__
#ifndef __windows2Esecurity2Ecryptography2Ecertificates_p_h__
#define __windows2Esecurity2Ecryptography2Ecertificates_p_h__


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
#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_ACTIVATIONCAMERASETTINGSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_CONTACTACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_ACTIVATION_WEBUISEARCHACTIVATEDEVENTSCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_BACKGROUND_BACKGROUNDALARMAPPLICATIONCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_BACKGROUND_CALLSBACKGROUNDCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSPHONECONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_CALLSVOIPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_CALLS_LOCKSCREENCALLCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_FULLTRUSTAPPCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_SEARCH_SEARCHCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_APPLICATIONMODEL_STARTUPTASKCONTRACT_VERSION)

#if !defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)
#define WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_APPLICATIONMODEL_WALLET_WALLETCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)
#define WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_DEVICES_PRINTERS_EXTENSIONS_EXTENSIONSCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDBACKGROUNDTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)
#define WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_DEVICES_SMARTCARDS_SMARTCARDEMULATORCONTRACT_VERSION)

#if !defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)
#define WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_DEVICES_SMS_LEGACYSMSAPICONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)
#define WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION 0x30000
#endif // defined(WINDOWS_FOUNDATION_FOUNDATIONCONTRACT_VERSION)

#if !defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)
#define WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION)

#if !defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)
#define WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION)

#if !defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)
#define WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_GLOBALIZATION_GLOBALIZATIONJAPANESEPHONETICANALYZERCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPBROADCASTCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTURECONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_APPCAPTUREMETADATACONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_CAMERACAPTUREUICONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)
#define WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_CAPTURE_GAMEBARCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_DEVICES_CALLCONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)
#define WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_MEDIACONTROLCONTRACT_VERSION)

#if !defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)
#define WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_MEDIA_PROTECTION_PROTECTIONRENEWALCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)
#define WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_NETWORKING_CONNECTIVITY_WWANCONTRACT_VERSION)

#if !defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)
#define WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION 0x20000
#endif // defined(WINDOWS_NETWORKING_SOCKETS_CONTROLCHANNELTRIGGERCONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)
#define WINDOWS_PHONE_PHONECONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONECONTRACT_VERSION)

#if !defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)
#define WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_PHONE_PHONEINTERNALCONTRACT_VERSION)

#if !defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)
#define WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION 0x50000
#endif // defined(WINDOWS_SECURITY_ENTERPRISEDATA_ENTERPRISEDATACONTRACT_VERSION)

#if !defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)
#define WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_STORAGE_PROVIDER_CLOUDFILESCONTRACT_VERSION)

#if !defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)
#define WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION 0x40000
#endif // defined(WINDOWS_SYSTEM_SYSTEMMANAGEMENTCONTRACT_VERSION)

#if !defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)
#define WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_CORE_COREWINDOWDIALOGSCONTRACT_VERSION)

#if !defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)
#define WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION 0x10000
#endif // defined(WINDOWS_UI_VIEWMANAGEMENT_VIEWMANAGEMENTVIEWSCALINGCONTRACT_VERSION)

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
#include "Windows.Networking.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificate;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate ABI::Windows::Security::Cryptography::Certificates::ICertificate

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificate2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 ABI::Windows::Security::Cryptography::Certificates::ICertificate2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificate3;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 ABI::Windows::Security::Cryptography::Certificates::ICertificate3

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateChain;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain ABI::Windows::Security::Cryptography::Certificates::ICertificateChain

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateEnrollmentManagerStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics ABI::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateEnrollmentManagerStatics2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 ABI::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateEnrollmentManagerStatics3;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 ABI::Windows::Security::Cryptography::Certificates::ICertificateEnrollmentManagerStatics3

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateExtension;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateFactory;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory ABI::Windows::Security::Cryptography::Certificates::ICertificateFactory

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateKeyUsages;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages ABI::Windows::Security::Cryptography::Certificates::ICertificateKeyUsages

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateQuery;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery ABI::Windows::Security::Cryptography::Certificates::ICertificateQuery

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateQuery2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 ABI::Windows::Security::Cryptography::Certificates::ICertificateQuery2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateRequestProperties;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties ABI::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateRequestProperties2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 ABI::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateRequestProperties3;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 ABI::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties3

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateRequestProperties4;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 ABI::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties4

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateStore;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore ABI::Windows::Security::Cryptography::Certificates::ICertificateStore

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateStore2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 ABI::Windows::Security::Cryptography::Certificates::ICertificateStore2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateStoresStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics ABI::Windows::Security::Cryptography::Certificates::ICertificateStoresStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICertificateStoresStatics2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 ABI::Windows::Security::Cryptography::Certificates::ICertificateStoresStatics2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface IChainBuildingParameters;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters ABI::Windows::Security::Cryptography::Certificates::IChainBuildingParameters

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface IChainValidationParameters;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters ABI::Windows::Security::Cryptography::Certificates::IChainValidationParameters

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICmsAttachedSignature;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature ABI::Windows::Security::Cryptography::Certificates::ICmsAttachedSignature

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICmsAttachedSignatureFactory;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory ABI::Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureFactory

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICmsAttachedSignatureStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics ABI::Windows::Security::Cryptography::Certificates::ICmsAttachedSignatureStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICmsDetachedSignature;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature ABI::Windows::Security::Cryptography::Certificates::ICmsDetachedSignature

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICmsDetachedSignatureFactory;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory ABI::Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureFactory

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICmsDetachedSignatureStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics ABI::Windows::Security::Cryptography::Certificates::ICmsDetachedSignatureStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICmsSignerInfo;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo ABI::Windows::Security::Cryptography::Certificates::ICmsSignerInfo

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ICmsTimestampInfo;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo ABI::Windows::Security::Cryptography::Certificates::ICmsTimestampInfo

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface IKeyAlgorithmNamesStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics ABI::Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface IKeyAlgorithmNamesStatics2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 ABI::Windows::Security::Cryptography::Certificates::IKeyAlgorithmNamesStatics2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface IKeyAttestationHelperStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics ABI::Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface IKeyAttestationHelperStatics2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 ABI::Windows::Security::Cryptography::Certificates::IKeyAttestationHelperStatics2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface IKeyStorageProviderNamesStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics ABI::Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface IKeyStorageProviderNamesStatics2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 ABI::Windows::Security::Cryptography::Certificates::IKeyStorageProviderNamesStatics2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface IPfxImportParameters;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters ABI::Windows::Security::Cryptography::Certificates::IPfxImportParameters

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface IStandardCertificateStoreNamesStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics ABI::Windows::Security::Cryptography::Certificates::IStandardCertificateStoreNamesStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ISubjectAlternativeNameInfo;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo ABI::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface ISubjectAlternativeNameInfo2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 ABI::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface IUserCertificateEnrollmentManager;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager ABI::Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface IUserCertificateEnrollmentManager2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 ABI::Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    interface IUserCertificateStore;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore ABI::Windows::Security::Cryptography::Certificates::IUserCertificateStore

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class Certificate;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("676fc159-f15c-58bd-91a7-28f7e795c756"))
IIterator<ABI::Windows::Security::Cryptography::Certificates::Certificate*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::Certificate*, ABI::Windows::Security::Cryptography::Certificates::ICertificate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Cryptography.Certificates.Certificate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Security::Cryptography::Certificates::Certificate*> __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("0c7d1423-e8fd-5a91-b55c-8bfbe7ac2d40"))
IIterable<ABI::Windows::Security::Cryptography::Certificates::Certificate*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::Certificate*, ABI::Windows::Security::Cryptography::Certificates::ICertificate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Cryptography.Certificates.Certificate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Security::Cryptography::Certificates::Certificate*> __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class CertificateExtension;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_USE
#define DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("5e5af982-332d-54ec-8e54-e62c1a1eace9"))
IIterator<ABI::Windows::Security::Cryptography::Certificates::CertificateExtension*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::CertificateExtension*, ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Cryptography.Certificates.CertificateExtension>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Security::Cryptography::Certificates::CertificateExtension*> __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_t;
#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension*>
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_USE
#define DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("1bdd7127-73b3-5192-8bde-20c136281260"))
IIterable<ABI::Windows::Security::Cryptography::Certificates::CertificateExtension*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::CertificateExtension*, ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Cryptography.Certificates.CertificateExtension>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Security::Cryptography::Certificates::CertificateExtension*> __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_t;
#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension*>
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    enum ChainValidationResult : int;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


#ifndef DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("8bcad2b7-0e3b-5eae-bf69-e1f6d9c888f8"))
IIterator<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IIterator_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */





#ifndef DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2628f58f-3f02-54f2-808f-e1117709d6d0"))
IIterable<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IIterable_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */



namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class CmsSignerInfo;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_USE
#define DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("ba691628-d419-5e0a-b924-03ebc236b11e"))
IIterator<ABI::Windows::Security::Cryptography::Certificates::CmsSignerInfo*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::CmsSignerInfo*, ABI::Windows::Security::Cryptography::Certificates::ICmsSignerInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Security.Cryptography.Certificates.CmsSignerInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Security::Cryptography::Certificates::CmsSignerInfo*> __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_t;
#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ICmsSignerInfo*>
//#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Security::Cryptography::Certificates::ICmsSignerInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_USE
#define DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("6af24174-2dda-5a54-a0b9-4d6690059427"))
IIterable<ABI::Windows::Security::Cryptography::Certificates::CmsSignerInfo*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::CmsSignerInfo*, ABI::Windows::Security::Cryptography::Certificates::ICmsSignerInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Security.Cryptography.Certificates.CmsSignerInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Security::Cryptography::Certificates::CmsSignerInfo*> __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_t;
#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ICmsSignerInfo*>
//#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Security::Cryptography::Certificates::ICmsSignerInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("963f7013-77c2-51c5-8038-b5bcef633edb"))
IVectorView<ABI::Windows::Security::Cryptography::Certificates::Certificate*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::Certificate*, ABI::Windows::Security::Cryptography::Certificates::ICertificate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Cryptography.Certificates.Certificate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Security::Cryptography::Certificates::Certificate*> __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("43857453-e7b1-5cba-9730-5ea4ddebdd95"))
IVectorView<ABI::Windows::Security::Cryptography::Certificates::CertificateExtension*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::CertificateExtension*, ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Cryptography.Certificates.CertificateExtension>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Security::Cryptography::Certificates::CertificateExtension*> __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_t;
#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension*>
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#ifndef DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cb383486-c2bc-5756-912d-6a708a07e5bd"))
IVectorView<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IVectorView_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_USE
#define DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f46bcaa8-747c-5a93-82fe-85d63549fe81"))
IVectorView<ABI::Windows::Security::Cryptography::Certificates::CmsSignerInfo*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::CmsSignerInfo*, ABI::Windows::Security::Cryptography::Certificates::ICmsSignerInfo*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Security.Cryptography.Certificates.CmsSignerInfo>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Security::Cryptography::Certificates::CmsSignerInfo*> __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_t;
#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICmsSignerInfo*>
//#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICmsSignerInfo*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("36282c0f-2f1f-57f4-b2b1-867af90c3d13"))
IVector<ABI::Windows::Security::Cryptography::Certificates::Certificate*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::Certificate*, ABI::Windows::Security::Cryptography::Certificates::ICertificate*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Security.Cryptography.Certificates.Certificate>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Security::Cryptography::Certificates::Certificate*> __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
//#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_USE
#define DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4c2523e8-9773-50fe-b870-483fd8b906dc"))
IVector<ABI::Windows::Security::Cryptography::Certificates::CertificateExtension*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::CertificateExtension*, ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Security.Cryptography.Certificates.CertificateExtension>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::Security::Cryptography::Certificates::CertificateExtension*> __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_t;
#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension*>
//#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000



#ifndef DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#define DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("d7828cf7-4301-58d3-aab5-06e5eefcf79f"))
IVector<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> : IVector_impl<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.Security.Cryptography.Certificates.ChainValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<enum ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult> __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t;
#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
//#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_USE */




#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1896faee-23e2-59ca-9802-0f48eed98ef4"))
IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate*> : IAsyncOperationCompletedHandler_impl<__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Foundation.Collections.IVectorView`1<Windows.Security.Cryptography.Certificates.Certificate>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate*> __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>*>
//#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#define DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9b26648e-b32f-5909-a635-78e6d3bb4067"))
IAsyncOperation<__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate*> : IAsyncOperation_impl<__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Foundation.Collections.IVectorView`1<Windows.Security.Cryptography.Certificates.Certificate>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<__FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate*> __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t;
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::__FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>*>
//#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Security::Cryptography::Certificates::ICertificate*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class CertificateChain;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("4c3f50e9-90e3-5a30-9015-4aa0376904f3"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Certificates::CertificateChain*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::CertificateChain*, ABI::Windows::Security::Cryptography::Certificates::ICertificateChain*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Cryptography.Certificates.CertificateChain>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Certificates::CertificateChain*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Certificates::ICertificateChain*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Certificates::ICertificateChain*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f618c7d4-aee1-58ae-afe8-fc336daf0395"))
IAsyncOperation<ABI::Windows::Security::Cryptography::Certificates::CertificateChain*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Certificates::CertificateChain*, ABI::Windows::Security::Cryptography::Certificates::ICertificateChain*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Cryptography.Certificates.CertificateChain>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::Cryptography::Certificates::CertificateChain*> __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Cryptography::Certificates::ICertificateChain*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Cryptography::Certificates::ICertificateChain*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    enum SignatureValidationResult : int;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("dff50005-78ad-5f4f-a085-cb614a674a25"))
IAsyncOperationCompletedHandler<enum ABI::Windows::Security::Cryptography::Certificates::SignatureValidationResult> : IAsyncOperationCompletedHandler_impl<enum ABI::Windows::Security::Cryptography::Certificates::SignatureValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Cryptography.Certificates.SignatureValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<enum ABI::Windows::Security::Cryptography::Certificates::SignatureValidationResult> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Certificates::SignatureValidationResult>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Certificates::SignatureValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_USE */





#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f09c0bcf-ce3b-5dff-971f-2c3ffe6fd04d"))
IAsyncOperation<enum ABI::Windows::Security::Cryptography::Certificates::SignatureValidationResult> : IAsyncOperation_impl<enum ABI::Windows::Security::Cryptography::Certificates::SignatureValidationResult> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Cryptography.Certificates.SignatureValidationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<enum ABI::Windows::Security::Cryptography::Certificates::SignatureValidationResult> __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Cryptography::Certificates::SignatureValidationResult>
//#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Cryptography::Certificates::SignatureValidationResult>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_USE */




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




#ifndef DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#define DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b79a741f-7fb5-50ae-9e99-911201ec3d41"))
IAsyncOperationCompletedHandler<HSTRING> : IAsyncOperationCompletedHandler_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<HSTRING> __FIAsyncOperationCompletedHandler_1_HSTRING_t;
#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_HSTRING ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
//#define __FIAsyncOperationCompletedHandler_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_HSTRING_USE */




#ifndef DEF___FIAsyncOperation_1_HSTRING_USE
#define DEF___FIAsyncOperation_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3e1fe603-f897-5263-b328-0806426b8a79"))
IAsyncOperation<HSTRING> : IAsyncOperation_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<HSTRING> __FIAsyncOperation_1_HSTRING_t;
#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::__FIAsyncOperation_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_HSTRING ABI::Windows::Foundation::IAsyncOperation<HSTRING>
//#define __FIAsyncOperation_1_HSTRING_t ABI::Windows::Foundation::IAsyncOperation<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_HSTRING_USE */




#ifndef DEF___FIVector_1_HSTRING_USE
#define DEF___FIVector_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("98b9acc1-4b56-532e-ac73-03d5291cca90"))
IVector<HSTRING> : IVector_impl<HSTRING> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<String>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<HSTRING> __FIVector_1_HSTRING_t;
#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::__FIVector_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_HSTRING ABI::Windows::Foundation::Collections::IVector<HSTRING>
//#define __FIVector_1_HSTRING_t ABI::Windows::Foundation::Collections::IVector<HSTRING>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_HSTRING_USE */



#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IBuffer;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIBuffer ABI::Windows::Storage::Streams::IBuffer

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("51c3d2fd-b8a1-5620-b746-7ee6d533aca3"))
IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#define DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3bee8834-b9a7-5a80-a746-5ef097227878"))
IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> : IAsyncOperation_impl<ABI::Windows::Storage::Streams::IBuffer*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IBuffer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*> __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t;
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*>
//#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Storage::Streams::IBuffer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#define DEF___FIAsyncOperationCompletedHandler_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("c1d3d1a2-ae17-5a5f-b5a2-bdcc8844889a"))
IAsyncOperationCompletedHandler<bool> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<bool> __FIAsyncOperationCompletedHandler_1_boolean_t;
#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_boolean ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
//#define __FIAsyncOperationCompletedHandler_1_boolean_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_boolean_USE */




#ifndef DEF___FIAsyncOperation_1_boolean_USE
#define DEF___FIAsyncOperation_1_boolean_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cdb5efb3-5788-509d-9be1-71ccb8a3362a"))
IAsyncOperation<bool> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<bool, boolean>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Boolean>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<bool> __FIAsyncOperation_1_boolean_t;
#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::__FIAsyncOperation_1_boolean_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_boolean ABI::Windows::Foundation::IAsyncOperation<boolean>
//#define __FIAsyncOperation_1_boolean_t ABI::Windows::Foundation::IAsyncOperation<boolean>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_boolean_USE */





namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct DateTime DateTime;
            
        } /* Windows */
    } /* Foundation */} /* ABI */

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
        namespace Networking {
            class HostName;
        } /* Windows */
    } /* Networking */} /* ABI */

#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Networking {
            interface IHostName;
        } /* Windows */
    } /* Networking */} /* ABI */
#define __x_ABI_CWindows_CNetworking_CIHostName ABI::Windows::Networking::IHostName

#endif // ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            namespace Streams {
                interface IInputStream;
            } /* Windows */
        } /* Storage */
    } /* Streams */} /* ABI */
#define __x_ABI_CWindows_CStorage_CStreams_CIInputStream ABI::Windows::Storage::Streams::IInputStream

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__





namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    
                    typedef enum CertificateChainPolicy : int CertificateChainPolicy;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    
                    typedef enum ChainValidationResult : int ChainValidationResult;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    
                    typedef enum EnrollKeyUsages : unsigned int EnrollKeyUsages;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    
                    typedef enum ExportOption : int ExportOption;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    
                    typedef enum InstallOptions : unsigned int InstallOptions;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    
                    typedef enum KeyProtectionLevel : int KeyProtectionLevel;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    
                    typedef enum KeySize : int KeySize;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    
                    typedef enum SignatureValidationResult : int SignatureValidationResult;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
















































namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class CertificateKeyUsages;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class CertificateQuery;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class CertificateRequestProperties;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class CertificateStore;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class ChainBuildingParameters;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class ChainValidationParameters;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class CmsAttachedSignature;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class CmsDetachedSignature;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class CmsTimestampInfo;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */





namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class PfxImportParameters;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class SubjectAlternativeNameInfo;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class UserCertificateEnrollmentManager;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class UserCertificateStore;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */












/*
 *
 * Struct Windows.Security.Cryptography.Certificates.CertificateChainPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [v1_enum, contract] */
                    enum CertificateChainPolicy : int
                    {
                        CertificateChainPolicy_Base = 0,
                        CertificateChainPolicy_Ssl = 1,
                        CertificateChainPolicy_NTAuthentication = 2,
                        CertificateChainPolicy_MicrosoftRoot = 3,
                    };
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.ChainValidationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [v1_enum, contract] */
                    enum ChainValidationResult : int
                    {
                        ChainValidationResult_Success = 0,
                        ChainValidationResult_Untrusted = 1,
                        ChainValidationResult_Revoked = 2,
                        ChainValidationResult_Expired = 3,
                        ChainValidationResult_IncompleteChain = 4,
                        ChainValidationResult_InvalidSignature = 5,
                        ChainValidationResult_WrongUsage = 6,
                        ChainValidationResult_InvalidName = 7,
                        ChainValidationResult_InvalidCertificateAuthorityPolicy = 8,
                        ChainValidationResult_BasicConstraintsError = 9,
                        ChainValidationResult_UnknownCriticalExtension = 10,
                        ChainValidationResult_RevocationInformationMissing = 11,
                        ChainValidationResult_RevocationFailure = 12,
                        ChainValidationResult_OtherErrors = 13,
                    };
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.EnrollKeyUsages
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [v1_enum, flags, contract] */
                    enum EnrollKeyUsages : unsigned int
                    {
                        EnrollKeyUsages_None = 0,
                        EnrollKeyUsages_Decryption = 0x1,
                        EnrollKeyUsages_Signing = 0x2,
                        EnrollKeyUsages_KeyAgreement = 0x4,
                        EnrollKeyUsages_All = 0xffffff,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(EnrollKeyUsages)
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.ExportOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [v1_enum, contract] */
                    enum ExportOption : int
                    {
                        ExportOption_NotExportable = 0,
                        ExportOption_Exportable = 1,
                    };
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.InstallOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [v1_enum, flags, contract] */
                    enum InstallOptions : unsigned int
                    {
                        InstallOptions_None = 0,
                        InstallOptions_DeleteExpired = 0x1,
                    };
                    
                    DEFINE_ENUM_FLAG_OPERATORS(InstallOptions)
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.KeyProtectionLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [v1_enum, contract] */
                    enum KeyProtectionLevel : int
                    {
                        KeyProtectionLevel_NoConsent = 0,
                        KeyProtectionLevel_ConsentOnly = 1,
                        KeyProtectionLevel_ConsentWithPassword = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        KeyProtectionLevel_ConsentWithFingerprint = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                    };
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.KeySize
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [v1_enum, contract] */
                    enum KeySize : int
                    {
                        KeySize_Invalid = 0,
                        KeySize_Rsa2048 = 2048,
                        KeySize_Rsa4096 = 4096,
                    };
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.SignatureValidationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [v1_enum, contract] */
                    enum SignatureValidationResult : int
                    {
                        SignatureValidationResult_Success = 0,
                        SignatureValidationResult_InvalidParameter = 1,
                        SignatureValidationResult_BadMessage = 2,
                        SignatureValidationResult_InvalidSignature = 3,
                        SignatureValidationResult_OtherErrors = 4,
                    };
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.Certificate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificate[] = L"Windows.Security.Cryptography.Certificates.ICertificate";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("333F740C-04D8-43B3-B278-8C5FCC9BE5A0"), exclusiveto, contract] */
                    MIDL_INTERFACE("333F740C-04D8-43B3-B278-8C5FCC9BE5A0")
                    ICertificate : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE BuildChainAsync(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * certificates,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE BuildChainWithParametersAsync(
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * certificates,
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::IChainBuildingParameters * parameters,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SerialNumber(
                            /* [out] */__RPC__out UINT32 * __valueSize,
                            /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetHashValue(
                            /* [out] */__RPC__out UINT32 * __valueSize,
                            /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE GetHashValueWithAlgorithm(
                            /* [in] */__RPC__in HSTRING hashAlgorithmName,
                            /* [out] */__RPC__out UINT32 * __valueSize,
                            /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCertificateBlob(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subject(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Issuer(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HasPrivateKey(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsStronglyProtected(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ValidFrom(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ValidTo(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EnhancedKeyUsages(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FriendlyName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FriendlyName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificate=_uuidof(ICertificate);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificate2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.Certificate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificate2[] = L"Windows.Security.Cryptography.Certificates.ICertificate2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("17B8374C-8A25-4D96-A492-8FC29AC4FDA6"), exclusiveto, contract] */
                    MIDL_INTERFACE("17B8374C-8A25-4D96-A492-8FC29AC4FDA6")
                    ICertificate2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsSecurityDeviceBound(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyUsages(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificateKeyUsages * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyAlgorithmName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SignatureAlgorithmName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SignatureHashAlgorithmName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SubjectAlternativeName(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificate2=_uuidof(ICertificate2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificate3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.Certificate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificate3[] = L"Windows.Security.Cryptography.Certificates.ICertificate3";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("BE51A966-AE5F-4652-ACE7-C6D7E7724CF3"), exclusiveto, contract] */
                    MIDL_INTERFACE("BE51A966-AE5F-4652-ACE7-C6D7E7724CF3")
                    ICertificate3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsPerUser(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StoreName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyStorageProviderName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificate3=_uuidof(ICertificate3);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateChain
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateChain
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateChain[] = L"Windows.Security.Cryptography.Certificates.ICertificateChain";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("20BF5385-3691-4501-A62C-FD97278B31EE"), exclusiveto, contract] */
                    MIDL_INTERFACE("20BF5385-3691-4501-A62C-FD97278B31EE")
                    ICertificateChain : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE Validate(
                            /* [retval, out] */__RPC__out ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult * status
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ValidateWithParameters(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::IChainValidationParameters * parameter,
                            /* [retval, out] */__RPC__out ABI::Windows::Security::Cryptography::Certificates::ChainValidationResult * status
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetCertificates(
                            /* [in] */boolean includeRoot,
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * certificates
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateChain=_uuidof(ICertificateChain);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateEnrollmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics[] = L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("8846EF3F-A986-48FB-9FD7-9AEC06935BF1"), exclusiveto, contract] */
                    MIDL_INTERFACE("8846EF3F-A986-48FB-9FD7-9AEC06935BF1")
                    ICertificateEnrollmentManagerStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateRequestAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties * request,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE InstallCertificateAsync(
                            /* [in] */__RPC__in HSTRING certificate,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::InstallOptions installOption,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ImportPfxDataAsync(
                            /* [in] */__RPC__in HSTRING pfxData,
                            /* [in] */__RPC__in HSTRING password,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::ExportOption exportable,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::KeyProtectionLevel keyProtectionLevel,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::InstallOptions installOption,
                            /* [in] */__RPC__in HSTRING friendlyName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateEnrollmentManagerStatics=_uuidof(ICertificateEnrollmentManagerStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateEnrollmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics2[] = L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("DC5B1C33-6429-4014-999C-5D9735802D1D"), exclusiveto, contract] */
                    MIDL_INTERFACE("DC5B1C33-6429-4014-999C-5D9735802D1D")
                    ICertificateEnrollmentManagerStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UserCertificateEnrollmentManager(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::IUserCertificateEnrollmentManager * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ImportPfxDataToKspAsync(
                            /* [in] */__RPC__in HSTRING pfxData,
                            /* [in] */__RPC__in HSTRING password,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::ExportOption exportable,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::KeyProtectionLevel keyProtectionLevel,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::InstallOptions installOption,
                            /* [in] */__RPC__in HSTRING friendlyName,
                            /* [in] */__RPC__in HSTRING keyStorageProvider,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateEnrollmentManagerStatics2=_uuidof(ICertificateEnrollmentManagerStatics2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateEnrollmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics3[] = L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics3";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("FDEC82BE-617C-425A-B72D-398B26AC7264"), exclusiveto, contract] */
                    MIDL_INTERFACE("FDEC82BE-617C-425A-B72D-398B26AC7264")
                    ICertificateEnrollmentManagerStatics3 : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ImportPfxDataToKspWithParametersAsync(
                            /* [in] */__RPC__in HSTRING pfxData,
                            /* [in] */__RPC__in HSTRING password,
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::IPfxImportParameters * pfxImportParameters,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateEnrollmentManagerStatics3=_uuidof(ICertificateEnrollmentManagerStatics3);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateExtension
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateExtension[] = L"Windows.Security.Cryptography.Certificates.ICertificateExtension";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("84CF0656-A9E6-454D-8E45-2EA7C4BCD53B"), exclusiveto, contract] */
                    MIDL_INTERFACE("84CF0656-A9E6-454D-8E45-2EA7C4BCD53B")
                    ICertificateExtension : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ObjectId(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ObjectId(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IsCritical(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IsCritical(
                            /* [in] */boolean value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE EncodeValue(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [out] */__RPC__out UINT32 * __valueSize,
                            /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                            /* [in] */UINT32 __valueSize,
                            /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateExtension=_uuidof(ICertificateExtension);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.Certificate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateFactory[] = L"Windows.Security.Cryptography.Certificates.ICertificateFactory";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("17B4221C-4BAF-44A2-9608-04FB62B16942"), exclusiveto, contract] */
                    MIDL_INTERFACE("17B4221C-4BAF-44A2-9608-04FB62B16942")
                    ICertificateFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateCertificate(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * certBlob,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * certificate
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateFactory=_uuidof(ICertificateFactory);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateKeyUsages
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateKeyUsages
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages[] = L"Windows.Security.Cryptography.Certificates.ICertificateKeyUsages";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("6AC6206F-E1CF-486A-B485-A69C83E46FD1"), exclusiveto, contract] */
                    MIDL_INTERFACE("6AC6206F-E1CF-486A-B485-A69C83E46FD1")
                    ICertificateKeyUsages : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EncipherOnly(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_EncipherOnly(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CrlSign(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CrlSign(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyCertificateSign(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyCertificateSign(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyAgreement(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyAgreement(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DataEncipherment(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DataEncipherment(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyEncipherment(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyEncipherment(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NonRepudiation(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NonRepudiation(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DigitalSignature(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DigitalSignature(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateKeyUsages=_uuidof(ICertificateKeyUsages);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateQuery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateQuery
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateQuery[] = L"Windows.Security.Cryptography.Certificates.ICertificateQuery";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("5B082A31-A728-4916-B5EE-FFCB8ACF2417"), exclusiveto, contract] */
                    MIDL_INTERFACE("5B082A31-A728-4916-B5EE-FFCB8ACF2417")
                    ICertificateQuery : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EnhancedKeyUsages(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IssuerName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IssuerName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FriendlyName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FriendlyName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Thumbprint(
                            /* [out] */__RPC__out UINT32 * __valueSize,
                            /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Thumbprint(
                            /* [in] */UINT32 __valueSize,
                            /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HardwareOnly(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HardwareOnly(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateQuery=_uuidof(ICertificateQuery);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateQuery2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateQuery
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateQuery2[] = L"Windows.Security.Cryptography.Certificates.ICertificateQuery2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("935A0AF7-0BD9-4F75-B8C2-E27A7F74EECD"), exclusiveto, contract] */
                    MIDL_INTERFACE("935A0AF7-0BD9-4F75-B8C2-E27A7F74EECD")
                    ICertificateQuery2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncludeDuplicates(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IncludeDuplicates(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IncludeExpiredCertificates(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_IncludeExpiredCertificates(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_StoreName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_StoreName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateQuery2=_uuidof(ICertificateQuery2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateRequestProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateRequestProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties[] = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("487E84F6-94E2-4DCE-8833-1A700A37A29A"), exclusiveto, contract] */
                    MIDL_INTERFACE("487E84F6-94E2-4DCE-8833-1A700A37A29A")
                    ICertificateRequestProperties : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Subject(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Subject(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyAlgorithmName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyAlgorithmName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeySize(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeySize(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FriendlyName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FriendlyName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HashAlgorithmName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HashAlgorithmName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Exportable(
                            /* [retval, out] */__RPC__out ABI::Windows::Security::Cryptography::Certificates::ExportOption * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Exportable(
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::ExportOption value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyUsages(
                            /* [retval, out] */__RPC__out ABI::Windows::Security::Cryptography::Certificates::EnrollKeyUsages * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyUsages(
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::EnrollKeyUsages value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyProtectionLevel(
                            /* [retval, out] */__RPC__out ABI::Windows::Security::Cryptography::Certificates::KeyProtectionLevel * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyProtectionLevel(
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::KeyProtectionLevel value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyStorageProviderName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyStorageProviderName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateRequestProperties=_uuidof(ICertificateRequestProperties);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateRequestProperties2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateRequestProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2[] = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("3DA0C954-D73F-4FF3-A0A6-0677C0ADA05B"), exclusiveto, contract] */
                    MIDL_INTERFACE("3DA0C954-D73F-4FF3-A0A6-0677C0ADA05B")
                    ICertificateRequestProperties2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SmartcardReaderName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SmartcardReaderName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SigningCertificate(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SigningCertificate(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AttestationCredentialCertificate(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AttestationCredentialCertificate(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateRequestProperties2=_uuidof(ICertificateRequestProperties2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateRequestProperties3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateRequestProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3[] = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties3";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("E687F616-734D-46B1-9D4C-6EDFDBFC845B"), exclusiveto, contract] */
                    MIDL_INTERFACE("E687F616-734D-46B1-9D4C-6EDFDBFC845B")
                    ICertificateRequestProperties3 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurveName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CurveName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurveParameters(
                            /* [out] */__RPC__out UINT32 * __valueSize,
                            /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CurveParameters(
                            /* [in] */UINT32 __valueSize,
                            /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContainerNamePrefix(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ContainerNamePrefix(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContainerName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ContainerName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_UseExistingKey(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_UseExistingKey(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateRequestProperties3=_uuidof(ICertificateRequestProperties3);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateRequestProperties4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateRequestProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4[] = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties4";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("4E429AD2-1C61-4FEA-B8FE-135FB19CDCE4"), exclusiveto, contract] */
                    MIDL_INTERFACE("4E429AD2-1C61-4FEA-B8FE-135FB19CDCE4")
                    ICertificateRequestProperties4 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SuppressedDefaults(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SubjectAlternativeName(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ISubjectAlternativeNameInfo * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Extensions(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateRequestProperties4=_uuidof(ICertificateRequestProperties4);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateStore[] = L"Windows.Security.Cryptography.Certificates.ICertificateStore";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("B0BFF720-344E-4331-AF14-A7F7A7EBC93A"), exclusiveto, contract] */
                    MIDL_INTERFACE("B0BFF720-344E-4331-AF14-A7F7A7EBC93A")
                    ICertificateStore : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Add(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * certificate
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Delete(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * certificate
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateStore=_uuidof(ICertificateStore);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateStore2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateStore2[] = L"Windows.Security.Cryptography.Certificates.ICertificateStore2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("C7E68E4A-417D-4D1A-BABD-15687E549974"), exclusiveto, contract] */
                    MIDL_INTERFACE("C7E68E4A-417D-4D1A-BABD-15687E549974")
                    ICertificateStore2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateStore2=_uuidof(ICertificateStore2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateStoresStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateStores
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics[] = L"Windows.Security.Cryptography.Certificates.ICertificateStoresStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("FBECC739-C6FE-4DE7-99CF-74C3E596E032"), exclusiveto, contract] */
                    MIDL_INTERFACE("FBECC739-C6FE-4DE7-99CF-74C3E596E032")
                    ICertificateStoresStatics : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllAsync(
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE FindAllWithQueryAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificateQuery * query,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrustedRootCertificationAuthorities(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificateStore * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IntermediateCertificationAuthorities(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificateStore * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetStoreByName(
                            /* [in] */__RPC__in HSTRING storeName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificateStore * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateStoresStatics=_uuidof(ICertificateStoresStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateStoresStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateStores
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics2[] = L"Windows.Security.Cryptography.Certificates.ICertificateStoresStatics2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("FA900B79-A0D4-4B8C-BC55-C0A37EB141ED"), exclusiveto, contract] */
                    MIDL_INTERFACE("FA900B79-A0D4-4B8C-BC55-C0A37EB141ED")
                    ICertificateStoresStatics2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetUserStoreByName(
                            /* [in] */__RPC__in HSTRING storeName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::IUserCertificateStore * * result
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICertificateStoresStatics2=_uuidof(ICertificateStoresStatics2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IChainBuildingParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.ChainBuildingParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IChainBuildingParameters[] = L"Windows.Security.Cryptography.Certificates.IChainBuildingParameters";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("422BA922-7C8D-47B7-B59B-B12703733AC3"), exclusiveto, contract] */
                    MIDL_INTERFACE("422BA922-7C8D-47B7-B59B-B12703733AC3")
                    IChainBuildingParameters : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EnhancedKeyUsages(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ValidationTimestamp(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ValidationTimestamp(
                            /* [in] */ABI::Windows::Foundation::DateTime value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RevocationCheckEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RevocationCheckEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NetworkRetrievalEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NetworkRetrievalEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthorityInformationAccessEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AuthorityInformationAccessEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CurrentTimeValidationEnabled(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CurrentTimeValidationEnabled(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ExclusiveTrustRoots(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * certificates
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IChainBuildingParameters=_uuidof(IChainBuildingParameters);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IChainValidationParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.ChainValidationParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IChainValidationParameters[] = L"Windows.Security.Cryptography.Certificates.IChainValidationParameters";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("C4743B4A-7EB0-4B56-A040-B9C8E655DDF3"), exclusiveto, contract] */
                    MIDL_INTERFACE("C4743B4A-7EB0-4B56-A040-B9C8E655DDF3")
                    IChainValidationParameters : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CertificateChainPolicy(
                            /* [retval, out] */__RPC__out ABI::Windows::Security::Cryptography::Certificates::CertificateChainPolicy * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_CertificateChainPolicy(
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::CertificateChainPolicy value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ServerDnsName(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Networking::IHostName * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ServerDnsName(
                            /* [in] */__RPC__in_opt ABI::Windows::Networking::IHostName * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IChainValidationParameters=_uuidof(IChainValidationParameters);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsAttachedSignature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsAttachedSignature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature[] = L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignature";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("61899D9D-3757-4ECB-BDDC-0CA357D7A936"), exclusiveto, contract] */
                    MIDL_INTERFACE("61899D9D-3757-4ECB-BDDC-0CA357D7A936")
                    ICmsAttachedSignature : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Certificates(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Content(
                            /* [out] */__RPC__out UINT32 * __valueSize,
                            /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Signers(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE VerifySignature(
                            /* [retval, out] */__RPC__out ABI::Windows::Security::Cryptography::Certificates::SignatureValidationResult * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICmsAttachedSignature=_uuidof(ICmsAttachedSignature);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsAttachedSignature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureFactory[] = L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureFactory";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("D0C8FC15-F757-4C64-A362-52CC1C77CFFB"), exclusiveto, contract] */
                    MIDL_INTERFACE("D0C8FC15-F757-4C64-A362-52CC1C77CFFB")
                    ICmsAttachedSignatureFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateCmsAttachedSignature(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * inputBlob,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICmsAttachedSignature * * cmsSignedData
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICmsAttachedSignatureFactory=_uuidof(ICmsAttachedSignatureFactory);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsAttachedSignature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureStatics[] = L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("87989C8E-B0AD-498D-A7F5-78B59BCE4B36"), exclusiveto, contract] */
                    MIDL_INTERFACE("87989C8E-B0AD-498D-A7F5-78B59BCE4B36")
                    ICmsAttachedSignatureStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GenerateSignatureAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * signers,
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * certificates,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * outputBlob
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICmsAttachedSignatureStatics=_uuidof(ICmsAttachedSignatureStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsDetachedSignature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsDetachedSignature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature[] = L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignature";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("0F1EF154-F65E-4536-8339-5944081DB2CA"), exclusiveto, contract] */
                    MIDL_INTERFACE("0F1EF154-F65E-4536-8339-5944081DB2CA")
                    ICmsDetachedSignature : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Certificates(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Signers(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE VerifySignatureAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * data,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICmsDetachedSignature=_uuidof(ICmsDetachedSignature);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsDetachedSignature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureFactory[] = L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureFactory";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("C4AB3503-AE7F-4387-AD19-00F150E48EBB"), exclusiveto, contract] */
                    MIDL_INTERFACE("C4AB3503-AE7F-4387-AD19-00F150E48EBB")
                    ICmsDetachedSignatureFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateCmsDetachedSignature(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * inputBlob,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICmsDetachedSignature * * cmsSignedData
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICmsDetachedSignatureFactory=_uuidof(ICmsDetachedSignatureFactory);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsDetachedSignature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureStatics[] = L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("3D114CFD-BF9B-4682-9BE6-91F57C053808"), exclusiveto, contract] */
                    MIDL_INTERFACE("3D114CFD-BF9B-4682-9BE6-91F57C053808")
                    ICmsDetachedSignatureStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GenerateSignatureAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IInputStream * data,
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * signers,
                            /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * certificates,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * outputBlob
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICmsDetachedSignatureStatics=_uuidof(ICmsDetachedSignatureStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsSignerInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsSignerInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsSignerInfo[] = L"Windows.Security.Cryptography.Certificates.ICmsSignerInfo";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("50D020DB-1D2F-4C1A-B5C5-D0188FF91F47"), exclusiveto, contract] */
                    MIDL_INTERFACE("50D020DB-1D2F-4C1A-B5C5-D0188FF91F47")
                    ICmsSignerInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Certificate(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Certificate(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HashAlgorithmName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_HashAlgorithmName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TimestampInfo(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICmsTimestampInfo * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICmsSignerInfo=_uuidof(ICmsSignerInfo);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsTimestampInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsTimestampInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo[] = L"Windows.Security.Cryptography.Certificates.ICmsTimestampInfo";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("2F5F00F2-2C18-4F88-8435-C534086076F5"), exclusiveto, contract] */
                    MIDL_INTERFACE("2F5F00F2-2C18-4F88-8435-C534086076F5")
                    ICmsTimestampInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SigningCertificate(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Certificates(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                            /* [retval, out] */__RPC__out ABI::Windows::Foundation::DateTime * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICmsTimestampInfo=_uuidof(ICmsTimestampInfo);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.KeyAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("479065D7-7AC7-4581-8C3B-D07027140448"), exclusiveto, contract] */
                    MIDL_INTERFACE("479065D7-7AC7-4581-8C3B-D07027140448")
                    IKeyAlgorithmNamesStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rsa(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Dsa(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ecdh256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ecdh384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ecdh521(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ecdsa256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ecdsa384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ecdsa521(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyAlgorithmNamesStatics=_uuidof(IKeyAlgorithmNamesStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.KeyAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics2[] = L"Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("C99B5686-E1FD-4A4A-893D-A26F33DD8BB4"), exclusiveto, contract] */
                    MIDL_INTERFACE("C99B5686-E1FD-4A4A-893D-A26F33DD8BB4")
                    IKeyAlgorithmNamesStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ecdsa(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ecdh(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyAlgorithmNamesStatics2=_uuidof(IKeyAlgorithmNamesStatics2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.KeyAttestationHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics[] = L"Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("1648E246-F644-4326-88BE-3AF102D30E0C"), exclusiveto, contract] */
                    MIDL_INTERFACE("1648E246-F644-4326-88BE-3AF102D30E0C")
                    IKeyAttestationHelperStatics : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE DecryptTpmAttestationCredentialAsync(
                            /* [in] */__RPC__in HSTRING credential,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetTpmAttestationCredentialId(
                            /* [in] */__RPC__in HSTRING credential,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyAttestationHelperStatics=_uuidof(IKeyAttestationHelperStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.KeyAttestationHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics2[] = L"Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("9C590B2C-A6C6-4A5E-9E64-E85D5279DF97"), exclusiveto, contract] */
                    MIDL_INTERFACE("9C590B2C-A6C6-4A5E-9E64-E85D5279DF97")
                    IKeyAttestationHelperStatics2 : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE DecryptTpmAttestationCredentialWithContainerNameAsync(
                            /* [in] */__RPC__in HSTRING credential,
                            /* [in] */__RPC__in HSTRING containerName,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyAttestationHelperStatics2=_uuidof(IKeyAttestationHelperStatics2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.KeyStorageProviderNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics[] = L"Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("AF186AE0-5529-4602-BD94-0AAB91957B5C"), exclusiveto, contract] */
                    MIDL_INTERFACE("AF186AE0-5529-4602-BD94-0AAB91957B5C")
                    IKeyStorageProviderNamesStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SoftwareKeyStorageProvider(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SmartcardKeyStorageProvider(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PlatformKeyStorageProvider(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyStorageProviderNamesStatics=_uuidof(IKeyStorageProviderNamesStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.KeyStorageProviderNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics2[] = L"Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("262D743D-9C2E-41CC-8812-C4D971DD7C60"), exclusiveto, contract] */
                    MIDL_INTERFACE("262D743D-9C2E-41CC-8812-C4D971DD7C60")
                    IKeyStorageProviderNamesStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PassportKeyStorageProvider(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyStorageProviderNamesStatics2=_uuidof(IKeyStorageProviderNamesStatics2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IPfxImportParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.PfxImportParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IPfxImportParameters[] = L"Windows.Security.Cryptography.Certificates.IPfxImportParameters";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("680D3511-9A08-47C8-864A-2EDD4D8EB46C"), exclusiveto, contract] */
                    MIDL_INTERFACE("680D3511-9A08-47C8-864A-2EDD4D8EB46C")
                    IPfxImportParameters : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Exportable(
                            /* [retval, out] */__RPC__out ABI::Windows::Security::Cryptography::Certificates::ExportOption * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Exportable(
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::ExportOption value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyProtectionLevel(
                            /* [retval, out] */__RPC__out ABI::Windows::Security::Cryptography::Certificates::KeyProtectionLevel * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyProtectionLevel(
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::KeyProtectionLevel value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstallOptions(
                            /* [retval, out] */__RPC__out ABI::Windows::Security::Cryptography::Certificates::InstallOptions * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InstallOptions(
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::InstallOptions value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FriendlyName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_FriendlyName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeyStorageProviderName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KeyStorageProviderName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContainerNamePrefix(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ContainerNamePrefix(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ReaderName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ReaderName(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPfxImportParameters=_uuidof(IPfxImportParameters);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IStandardCertificateStoreNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.StandardCertificateStoreNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics[] = L"Windows.Security.Cryptography.Certificates.IStandardCertificateStoreNamesStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("0C154ADB-A496-41F8-8FE5-9E96F36EFBF8"), exclusiveto, contract] */
                    MIDL_INTERFACE("0C154ADB-A496-41F8-8FE5-9E96F36EFBF8")
                    IStandardCertificateStoreNamesStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Personal(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TrustedRootCertificationAuthorities(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IntermediateCertificationAuthorities(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IStandardCertificateStoreNamesStatics=_uuidof(IStandardCertificateStoreNamesStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.SubjectAlternativeNameInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo[] = L"Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("582859F1-569D-4C20-BE7B-4E1C9A0BC52B"), exclusiveto, contract] */
                    MIDL_INTERFACE("582859F1-569D-4C20-BE7B-4E1C9A0BC52B")
                    ISubjectAlternativeNameInfo : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailName(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IPAddress(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Url(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DnsName(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DistinguishedName(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrincipalName(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISubjectAlternativeNameInfo=_uuidof(ISubjectAlternativeNameInfo);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.SubjectAlternativeNameInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2[] = L"Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("437A78C6-1C51-41EA-B34A-3D654398A370"), exclusiveto, contract] */
                    MIDL_INTERFACE("437A78C6-1C51-41EA-B34A-3D654398A370")
                    ISubjectAlternativeNameInfo2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EmailNames(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IPAddresses(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Urls(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DnsNames(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DistinguishedNames(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PrincipalNames(
                            /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Extension(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Certificates::ICertificateExtension * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISubjectAlternativeNameInfo2=_uuidof(ISubjectAlternativeNameInfo2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.UserCertificateEnrollmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager[] = L"Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("96313718-22E1-4819-B20B-AB46A6ECA06E"), exclusiveto, contract] */
                    MIDL_INTERFACE("96313718-22E1-4819-B20B-AB46A6ECA06E")
                    IUserCertificateEnrollmentManager : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateRequestAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificateRequestProperties * request,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE InstallCertificateAsync(
                            /* [in] */__RPC__in HSTRING certificate,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::InstallOptions installOption,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ImportPfxDataAsync(
                            /* [in] */__RPC__in HSTRING pfxData,
                            /* [in] */__RPC__in HSTRING password,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::ExportOption exportable,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::KeyProtectionLevel keyProtectionLevel,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::InstallOptions installOption,
                            /* [in] */__RPC__in HSTRING friendlyName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ImportPfxDataToKspAsync(
                            /* [in] */__RPC__in HSTRING pfxData,
                            /* [in] */__RPC__in HSTRING password,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::ExportOption exportable,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::KeyProtectionLevel keyProtectionLevel,
                            /* [in] */ABI::Windows::Security::Cryptography::Certificates::InstallOptions installOption,
                            /* [in] */__RPC__in HSTRING friendlyName,
                            /* [in] */__RPC__in HSTRING keyStorageProvider,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserCertificateEnrollmentManager=_uuidof(IUserCertificateEnrollmentManager);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.UserCertificateEnrollmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager2[] = L"Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("0DAD9CB1-65DE-492A-B86D-FC5C482C3747"), exclusiveto, contract] */
                    MIDL_INTERFACE("0DAD9CB1-65DE-492A-B86D-FC5C482C3747")
                    IUserCertificateEnrollmentManager2 : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ImportPfxDataToKspWithParametersAsync(
                            /* [in] */__RPC__in HSTRING pfxData,
                            /* [in] */__RPC__in HSTRING password,
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::IPfxImportParameters * pfxImportParameters,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserCertificateEnrollmentManager2=_uuidof(IUserCertificateEnrollmentManager2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IUserCertificateStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.UserCertificateStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IUserCertificateStore[] = L"Windows.Security.Cryptography.Certificates.IUserCertificateStore";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    /* [object, uuid("C9FB1D83-789F-4B4E-9180-045A757AAC6D"), exclusiveto, contract] */
                    MIDL_INTERFACE("C9FB1D83-789F-4B4E-9180-045A757AAC6D")
                    IUserCertificateStore : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE RequestAddAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * certificate,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RequestDeleteAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * certificate,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IUserCertificateStore=_uuidof(IUserCertificateStore);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.Certificate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Cryptography.Certificates.ICertificateFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificate ** Default Interface **
 *    Windows.Security.Cryptography.Certificates.ICertificate2
 *    Windows.Security.Cryptography.Certificates.ICertificate3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_Certificate_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_Certificate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_Certificate[] = L"Windows.Security.Cryptography.Certificates.Certificate";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateChain
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificateChain ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateChain_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateChain_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateChain[] = L"Windows.Security.Cryptography.Certificates.CertificateChain";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateEnrollmentManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateEnrollmentManager_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateEnrollmentManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateEnrollmentManager[] = L"Windows.Security.Cryptography.Certificates.CertificateEnrollmentManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateExtension
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificateExtension ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateExtension_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateExtension_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateExtension[] = L"Windows.Security.Cryptography.Certificates.CertificateExtension";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateKeyUsages
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificateKeyUsages ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateKeyUsages_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateKeyUsages_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateKeyUsages[] = L"Windows.Security.Cryptography.Certificates.CertificateKeyUsages";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateQuery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificateQuery ** Default Interface **
 *    Windows.Security.Cryptography.Certificates.ICertificateQuery2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateQuery_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateQuery_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateQuery[] = L"Windows.Security.Cryptography.Certificates.CertificateQuery";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateRequestProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificateRequestProperties ** Default Interface **
 *    Windows.Security.Cryptography.Certificates.ICertificateRequestProperties2
 *    Windows.Security.Cryptography.Certificates.ICertificateRequestProperties3
 *    Windows.Security.Cryptography.Certificates.ICertificateRequestProperties4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateRequestProperties_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateRequestProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateRequestProperties[] = L"Windows.Security.Cryptography.Certificates.CertificateRequestProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificateStore ** Default Interface **
 *    Windows.Security.Cryptography.Certificates.ICertificateStore2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateStore_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateStore[] = L"Windows.Security.Cryptography.Certificates.CertificateStore";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateStores
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICertificateStoresStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICertificateStoresStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateStores_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateStores_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateStores[] = L"Windows.Security.Cryptography.Certificates.CertificateStores";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.ChainBuildingParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.IChainBuildingParameters ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_ChainBuildingParameters_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_ChainBuildingParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_ChainBuildingParameters[] = L"Windows.Security.Cryptography.Certificates.ChainBuildingParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.ChainValidationParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.IChainValidationParameters ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_ChainValidationParameters_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_ChainValidationParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_ChainValidationParameters[] = L"Windows.Security.Cryptography.Certificates.ChainValidationParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CmsAttachedSignature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICmsAttachedSignature ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsAttachedSignature_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsAttachedSignature_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CmsAttachedSignature[] = L"Windows.Security.Cryptography.Certificates.CmsAttachedSignature";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CmsDetachedSignature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICmsDetachedSignature ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsDetachedSignature_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsDetachedSignature_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CmsDetachedSignature[] = L"Windows.Security.Cryptography.Certificates.CmsDetachedSignature";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CmsSignerInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICmsSignerInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsSignerInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsSignerInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CmsSignerInfo[] = L"Windows.Security.Cryptography.Certificates.CmsSignerInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CmsTimestampInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICmsTimestampInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsTimestampInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsTimestampInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CmsTimestampInfo[] = L"Windows.Security.Cryptography.Certificates.CmsTimestampInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.KeyAlgorithmNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_KeyAlgorithmNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_KeyAlgorithmNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_KeyAlgorithmNames[] = L"Windows.Security.Cryptography.Certificates.KeyAlgorithmNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.KeyAttestationHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_KeyAttestationHelper_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_KeyAttestationHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_KeyAttestationHelper[] = L"Windows.Security.Cryptography.Certificates.KeyAttestationHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.KeyStorageProviderNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_KeyStorageProviderNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_KeyStorageProviderNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_KeyStorageProviderNames[] = L"Windows.Security.Cryptography.Certificates.KeyStorageProviderNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.PfxImportParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.IPfxImportParameters ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_PfxImportParameters_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_PfxImportParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_PfxImportParameters[] = L"Windows.Security.Cryptography.Certificates.PfxImportParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.StandardCertificateStoreNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IStandardCertificateStoreNamesStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_StandardCertificateStoreNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_StandardCertificateStoreNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_StandardCertificateStoreNames[] = L"Windows.Security.Cryptography.Certificates.StandardCertificateStoreNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.SubjectAlternativeNameInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo ** Default Interface **
 *    Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_SubjectAlternativeNameInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_SubjectAlternativeNameInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_SubjectAlternativeNameInfo[] = L"Windows.Security.Cryptography.Certificates.SubjectAlternativeNameInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.UserCertificateEnrollmentManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager ** Default Interface **
 *    Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_UserCertificateEnrollmentManager_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_UserCertificateEnrollmentManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_UserCertificateEnrollmentManager[] = L"Windows.Security.Cryptography.Certificates.UserCertificateEnrollmentManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.UserCertificateStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.IUserCertificateStore ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_UserCertificateStore_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_UserCertificateStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_UserCertificateStore[] = L"Windows.Security.Cryptography.Certificates.UserCertificateStore";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef  struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;

typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl;

interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;

typedef  struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl;

interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;
#if !defined(____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__



#if !defined(____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef  struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo;

typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl;

interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo;

typedef  struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo **first);

    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl;

interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;

typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl;

interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if !defined(____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [in] */ enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo;

typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
            /* [in] */ __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl;

interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfoVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [in] */ __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *value);

    END_INTERFACE
} __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension;

typedef struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This, /* [in] */ __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * *value);

    END_INTERFACE
} __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl;

interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension
{
    CONST_VTBL struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtensionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


#if !defined(____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;

typedef struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, /* [in] */ __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *value);

    END_INTERFACE
} __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;

interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult_INTERFACE_DEFINED__



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;

typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, /* [retval][out] */ __RPC__out __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;

interface __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChainVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChainVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChainVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChainVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChainVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChainVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CSignatureValidationResult;
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_INTERFACE_DEFINED__



#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * This, /* [retval][out] */ __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CSignatureValidationResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResultVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult_INTERFACE_DEFINED__


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


#if !defined(____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_HSTRING __FIAsyncOperationCompletedHandler_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_HSTRING;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_HSTRING * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_HSTRING *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl;

interface __FIAsyncOperationCompletedHandler_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_HSTRING_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_HSTRING __FIAsyncOperation_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_HSTRING;

typedef struct __FIAsyncOperation_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_HSTRING *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *results);
    END_INTERFACE
} __FIAsyncOperation_1_HSTRINGVtbl;

interface __FIAsyncOperation_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_HSTRING_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_HSTRING_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_HSTRING_INTERFACE_DEFINED__


#if !defined(____FIVector_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIVector_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_HSTRING;

typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_HSTRING * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt HSTRING *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_HSTRING * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ __RPC__in HSTRING item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in HSTRING item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, /* [in] */ __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) HSTRING *value);

    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;

interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_HSTRING_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_HSTRING_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_HSTRING_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_HSTRING_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_HSTRING_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_HSTRING_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_HSTRING_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_HSTRING_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_HSTRING_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_HSTRING_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_HSTRING_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_HSTRING_INTERFACE_DEFINED__


#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer;

typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIBuffer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIBuffer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl;

interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBufferVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#if !defined(____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;

interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_boolean_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_boolean_INTERFACE_DEFINED__


#if !defined(____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;

typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, /* [retval][out] */ __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;

interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_boolean_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_boolean_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_boolean_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_boolean_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_boolean_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_boolean_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_boolean_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_boolean_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_boolean_INTERFACE_DEFINED__




typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;

#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
#define ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;

#endif // ____x_ABI_CWindows_CNetworking_CIHostName_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIInputStream_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy;


typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;


typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CEnrollKeyUsages __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CEnrollKeyUsages;


typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption;


typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions;


typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel;


typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeySize __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeySize;


typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CSignatureValidationResult __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CSignatureValidationResult;













































































/*
 *
 * Struct Windows.Security.Cryptography.Certificates.CertificateChainPolicy
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy
{
    CertificateChainPolicy_Base = 0,
    CertificateChainPolicy_Ssl = 1,
    CertificateChainPolicy_NTAuthentication = 2,
    CertificateChainPolicy_MicrosoftRoot = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.ChainValidationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult
{
    ChainValidationResult_Success = 0,
    ChainValidationResult_Untrusted = 1,
    ChainValidationResult_Revoked = 2,
    ChainValidationResult_Expired = 3,
    ChainValidationResult_IncompleteChain = 4,
    ChainValidationResult_InvalidSignature = 5,
    ChainValidationResult_WrongUsage = 6,
    ChainValidationResult_InvalidName = 7,
    ChainValidationResult_InvalidCertificateAuthorityPolicy = 8,
    ChainValidationResult_BasicConstraintsError = 9,
    ChainValidationResult_UnknownCriticalExtension = 10,
    ChainValidationResult_RevocationInformationMissing = 11,
    ChainValidationResult_RevocationFailure = 12,
    ChainValidationResult_OtherErrors = 13,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.EnrollKeyUsages
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CEnrollKeyUsages
{
    EnrollKeyUsages_None = 0,
    EnrollKeyUsages_Decryption = 0x1,
    EnrollKeyUsages_Signing = 0x2,
    EnrollKeyUsages_KeyAgreement = 0x4,
    EnrollKeyUsages_All = 0xffffff,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.ExportOption
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption
{
    ExportOption_NotExportable = 0,
    ExportOption_Exportable = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.InstallOptions
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, flags, contract] */
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions
{
    InstallOptions_None = 0,
    InstallOptions_DeleteExpired = 0x1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.KeyProtectionLevel
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel
{
    KeyProtectionLevel_NoConsent = 0,
    KeyProtectionLevel_ConsentOnly = 1,
    KeyProtectionLevel_ConsentWithPassword = 2,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    KeyProtectionLevel_ConsentWithFingerprint = 3,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.KeySize
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeySize
{
    KeySize_Invalid = 0,
    KeySize_Rsa2048 = 2048,
    KeySize_Rsa4096 = 4096,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Certificates.SignatureValidationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CSignatureValidationResult
{
    SignatureValidationResult_Success = 0,
    SignatureValidationResult_InvalidParameter = 1,
    SignatureValidationResult_BadMessage = 2,
    SignatureValidationResult_InvalidSignature = 3,
    SignatureValidationResult_OtherErrors = 4,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.Certificate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificate[] = L"Windows.Security.Cryptography.Certificates.ICertificate";
/* [object, uuid("333F740C-04D8-43B3-B278-8C5FCC9BE5A0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *BuildChainAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * certificates,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *BuildChainWithParametersAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * certificates,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * parameters,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateChain * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetHashValue )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *GetHashValueWithAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [in] */__RPC__in HSTRING hashAlgorithmName,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCertificateBlob )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Issuer )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HasPrivateKey )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsStronglyProtected )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ValidFrom )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ValidTo )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EnhancedKeyUsages )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_BuildChainAsync(This,certificates,value) \
    ( (This)->lpVtbl->BuildChainAsync(This,certificates,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_BuildChainWithParametersAsync(This,certificates,parameters,value) \
    ( (This)->lpVtbl->BuildChainWithParametersAsync(This,certificates,parameters,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_get_SerialNumber(This,__valueSize,value) \
    ( (This)->lpVtbl->get_SerialNumber(This,__valueSize,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_GetHashValue(This,__valueSize,value) \
    ( (This)->lpVtbl->GetHashValue(This,__valueSize,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_GetHashValueWithAlgorithm(This,hashAlgorithmName,__valueSize,value) \
    ( (This)->lpVtbl->GetHashValueWithAlgorithm(This,hashAlgorithmName,__valueSize,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_GetCertificateBlob(This,value) \
    ( (This)->lpVtbl->GetCertificateBlob(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_get_Subject(This,value) \
    ( (This)->lpVtbl->get_Subject(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_get_Issuer(This,value) \
    ( (This)->lpVtbl->get_Issuer(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_get_HasPrivateKey(This,value) \
    ( (This)->lpVtbl->get_HasPrivateKey(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_get_IsStronglyProtected(This,value) \
    ( (This)->lpVtbl->get_IsStronglyProtected(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_get_ValidFrom(This,value) \
    ( (This)->lpVtbl->get_ValidFrom(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_get_ValidTo(This,value) \
    ( (This)->lpVtbl->get_ValidTo(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_get_EnhancedKeyUsages(This,value) \
    ( (This)->lpVtbl->get_EnhancedKeyUsages(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_put_FriendlyName(This,value) \
    ( (This)->lpVtbl->put_FriendlyName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_get_FriendlyName(This,value) \
    ( (This)->lpVtbl->get_FriendlyName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificate2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.Certificate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificate2[] = L"Windows.Security.Cryptography.Certificates.ICertificate2";
/* [object, uuid("17B8374C-8A25-4D96-A492-8FC29AC4FDA6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsSecurityDeviceBound )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyUsages )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SignatureAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SignatureHashAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SubjectAlternativeName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_get_IsSecurityDeviceBound(This,value) \
    ( (This)->lpVtbl->get_IsSecurityDeviceBound(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_get_KeyUsages(This,value) \
    ( (This)->lpVtbl->get_KeyUsages(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_get_KeyAlgorithmName(This,value) \
    ( (This)->lpVtbl->get_KeyAlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_get_SignatureAlgorithmName(This,value) \
    ( (This)->lpVtbl->get_SignatureAlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_get_SignatureHashAlgorithmName(This,value) \
    ( (This)->lpVtbl->get_SignatureHashAlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_get_SubjectAlternativeName(This,value) \
    ( (This)->lpVtbl->get_SubjectAlternativeName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificate3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.Certificate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificate3[] = L"Windows.Security.Cryptography.Certificates.ICertificate3";
/* [object, uuid("BE51A966-AE5F-4652-ACE7-C6D7E7724CF3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsPerUser )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StoreName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyStorageProviderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_get_IsPerUser(This,value) \
    ( (This)->lpVtbl->get_IsPerUser(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_get_StoreName(This,value) \
    ( (This)->lpVtbl->get_StoreName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_get_KeyStorageProviderName(This,value) \
    ( (This)->lpVtbl->get_KeyStorageProviderName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateChain
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateChain
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateChain[] = L"Windows.Security.Cryptography.Certificates.ICertificateChain";
/* [object, uuid("20BF5385-3691-4501-A62C-FD97278B31EE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChainVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *Validate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult * status
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ValidateWithParameters )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * parameter,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult * status
        );
    HRESULT ( STDMETHODCALLTYPE *GetCertificates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain * This,
        /* [in] */boolean includeRoot,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * certificates
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChainVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChainVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_Validate(This,status) \
    ( (This)->lpVtbl->Validate(This,status) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_ValidateWithParameters(This,parameter,status) \
    ( (This)->lpVtbl->ValidateWithParameters(This,parameter,status) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_GetCertificates(This,includeRoot,certificates) \
    ( (This)->lpVtbl->GetCertificates(This,includeRoot,certificates) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateChain_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateEnrollmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics[] = L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics";
/* [object, uuid("8846EF3F-A986-48FB-9FD7-9AEC06935BF1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateRequestAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * request,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *InstallCertificateAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
        /* [in] */__RPC__in HSTRING certificate,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions installOption,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ImportPfxDataAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics * This,
        /* [in] */__RPC__in HSTRING pfxData,
        /* [in] */__RPC__in HSTRING password,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption exportable,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel keyProtectionLevel,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions installOption,
        /* [in] */__RPC__in HSTRING friendlyName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_CreateRequestAsync(This,request,value) \
    ( (This)->lpVtbl->CreateRequestAsync(This,request,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_InstallCertificateAsync(This,certificate,installOption,value) \
    ( (This)->lpVtbl->InstallCertificateAsync(This,certificate,installOption,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_ImportPfxDataAsync(This,pfxData,password,exportable,keyProtectionLevel,installOption,friendlyName,value) \
    ( (This)->lpVtbl->ImportPfxDataAsync(This,pfxData,password,exportable,keyProtectionLevel,installOption,friendlyName,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateEnrollmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics2[] = L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics2";
/* [object, uuid("DC5B1C33-6429-4014-999C-5D9735802D1D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UserCertificateEnrollmentManager )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ImportPfxDataToKspAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2 * This,
        /* [in] */__RPC__in HSTRING pfxData,
        /* [in] */__RPC__in HSTRING password,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption exportable,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel keyProtectionLevel,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions installOption,
        /* [in] */__RPC__in HSTRING friendlyName,
        /* [in] */__RPC__in HSTRING keyStorageProvider,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_get_UserCertificateEnrollmentManager(This,value) \
    ( (This)->lpVtbl->get_UserCertificateEnrollmentManager(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_ImportPfxDataToKspAsync(This,pfxData,password,exportable,keyProtectionLevel,installOption,friendlyName,keyStorageProvider,value) \
    ( (This)->lpVtbl->ImportPfxDataToKspAsync(This,pfxData,password,exportable,keyProtectionLevel,installOption,friendlyName,keyStorageProvider,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateEnrollmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateEnrollmentManagerStatics3[] = L"Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics3";
/* [object, uuid("FDEC82BE-617C-425A-B72D-398B26AC7264"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *ImportPfxDataToKspWithParametersAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3 * This,
        /* [in] */__RPC__in HSTRING pfxData,
        /* [in] */__RPC__in HSTRING password,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * pfxImportParameters,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_ImportPfxDataToKspWithParametersAsync(This,pfxData,password,pfxImportParameters,value) \
    ( (This)->lpVtbl->ImportPfxDataToKspWithParametersAsync(This,pfxData,password,pfxImportParameters,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateEnrollmentManagerStatics3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateExtension
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateExtension
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateExtension[] = L"Windows.Security.Cryptography.Certificates.ICertificateExtension";
/* [object, uuid("84CF0656-A9E6-454D-8E45-2EA7C4BCD53B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ObjectId )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ObjectId )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IsCritical )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IsCritical )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
        /* [in] */boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *EncodeValue )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * This,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtensionVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtensionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_get_ObjectId(This,value) \
    ( (This)->lpVtbl->get_ObjectId(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_put_ObjectId(This,value) \
    ( (This)->lpVtbl->put_ObjectId(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_get_IsCritical(This,value) \
    ( (This)->lpVtbl->get_IsCritical(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_put_IsCritical(This,value) \
    ( (This)->lpVtbl->put_IsCritical(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_EncodeValue(This,value) \
    ( (This)->lpVtbl->EncodeValue(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_get_Value(This,__valueSize,value) \
    ( (This)->lpVtbl->get_Value(This,__valueSize,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_put_Value(This,__valueSize,value) \
    ( (This)->lpVtbl->put_Value(This,__valueSize,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.Certificate
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateFactory[] = L"Windows.Security.Cryptography.Certificates.ICertificateFactory";
/* [object, uuid("17B4221C-4BAF-44A2-9608-04FB62B16942"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * certBlob,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * certificate
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactoryVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_CreateCertificate(This,certBlob,certificate) \
    ( (This)->lpVtbl->CreateCertificate(This,certBlob,certificate) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateKeyUsages
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateKeyUsages
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateKeyUsages[] = L"Windows.Security.Cryptography.Certificates.ICertificateKeyUsages";
/* [object, uuid("6AC6206F-E1CF-486A-B485-A69C83E46FD1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsagesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EncipherOnly )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_EncipherOnly )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CrlSign )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CrlSign )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyCertificateSign )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyCertificateSign )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyAgreement )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyAgreement )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DataEncipherment )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DataEncipherment )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyEncipherment )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyEncipherment )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NonRepudiation )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NonRepudiation )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DigitalSignature )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DigitalSignature )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsagesVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsagesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_get_EncipherOnly(This,value) \
    ( (This)->lpVtbl->get_EncipherOnly(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_put_EncipherOnly(This,value) \
    ( (This)->lpVtbl->put_EncipherOnly(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_get_CrlSign(This,value) \
    ( (This)->lpVtbl->get_CrlSign(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_put_CrlSign(This,value) \
    ( (This)->lpVtbl->put_CrlSign(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_get_KeyCertificateSign(This,value) \
    ( (This)->lpVtbl->get_KeyCertificateSign(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_put_KeyCertificateSign(This,value) \
    ( (This)->lpVtbl->put_KeyCertificateSign(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_get_KeyAgreement(This,value) \
    ( (This)->lpVtbl->get_KeyAgreement(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_put_KeyAgreement(This,value) \
    ( (This)->lpVtbl->put_KeyAgreement(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_get_DataEncipherment(This,value) \
    ( (This)->lpVtbl->get_DataEncipherment(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_put_DataEncipherment(This,value) \
    ( (This)->lpVtbl->put_DataEncipherment(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_get_KeyEncipherment(This,value) \
    ( (This)->lpVtbl->get_KeyEncipherment(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_put_KeyEncipherment(This,value) \
    ( (This)->lpVtbl->put_KeyEncipherment(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_get_NonRepudiation(This,value) \
    ( (This)->lpVtbl->get_NonRepudiation(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_put_NonRepudiation(This,value) \
    ( (This)->lpVtbl->put_NonRepudiation(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_get_DigitalSignature(This,value) \
    ( (This)->lpVtbl->get_DigitalSignature(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_put_DigitalSignature(This,value) \
    ( (This)->lpVtbl->put_DigitalSignature(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateKeyUsages_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateQuery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateQuery
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateQuery[] = L"Windows.Security.Cryptography.Certificates.ICertificateQuery";
/* [object, uuid("5B082A31-A728-4916-B5EE-FFCB8ACF2417"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQueryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EnhancedKeyUsages )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IssuerName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IssuerName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Thumbprint )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Thumbprint )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HardwareOnly )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HardwareOnly )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQueryVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQueryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_get_EnhancedKeyUsages(This,value) \
    ( (This)->lpVtbl->get_EnhancedKeyUsages(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_get_IssuerName(This,value) \
    ( (This)->lpVtbl->get_IssuerName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_put_IssuerName(This,value) \
    ( (This)->lpVtbl->put_IssuerName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_get_FriendlyName(This,value) \
    ( (This)->lpVtbl->get_FriendlyName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_put_FriendlyName(This,value) \
    ( (This)->lpVtbl->put_FriendlyName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_get_Thumbprint(This,__valueSize,value) \
    ( (This)->lpVtbl->get_Thumbprint(This,__valueSize,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_put_Thumbprint(This,__valueSize,value) \
    ( (This)->lpVtbl->put_Thumbprint(This,__valueSize,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_get_HardwareOnly(This,value) \
    ( (This)->lpVtbl->get_HardwareOnly(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_put_HardwareOnly(This,value) \
    ( (This)->lpVtbl->put_HardwareOnly(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateQuery2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateQuery
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateQuery2[] = L"Windows.Security.Cryptography.Certificates.ICertificateQuery2";
/* [object, uuid("935A0AF7-0BD9-4F75-B8C2-E27A7F74EECD"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncludeDuplicates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IncludeDuplicates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IncludeExpiredCertificates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_IncludeExpiredCertificates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_StoreName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_StoreName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_get_IncludeDuplicates(This,value) \
    ( (This)->lpVtbl->get_IncludeDuplicates(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_put_IncludeDuplicates(This,value) \
    ( (This)->lpVtbl->put_IncludeDuplicates(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_get_IncludeExpiredCertificates(This,value) \
    ( (This)->lpVtbl->get_IncludeExpiredCertificates(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_put_IncludeExpiredCertificates(This,value) \
    ( (This)->lpVtbl->put_IncludeExpiredCertificates(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_get_StoreName(This,value) \
    ( (This)->lpVtbl->get_StoreName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_put_StoreName(This,value) \
    ( (This)->lpVtbl->put_StoreName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateRequestProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateRequestProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties[] = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties";
/* [object, uuid("487E84F6-94E2-4DCE-8833-1A700A37A29A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Subject )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Subject )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeySize )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeySize )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Exportable )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Exportable )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyUsages )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CEnrollKeyUsages * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyUsages )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CEnrollKeyUsages value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyProtectionLevel )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyProtectionLevel )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyStorageProviderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyStorageProviderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestPropertiesVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestPropertiesVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_get_Subject(This,value) \
    ( (This)->lpVtbl->get_Subject(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_put_Subject(This,value) \
    ( (This)->lpVtbl->put_Subject(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_get_KeyAlgorithmName(This,value) \
    ( (This)->lpVtbl->get_KeyAlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_put_KeyAlgorithmName(This,value) \
    ( (This)->lpVtbl->put_KeyAlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_get_KeySize(This,value) \
    ( (This)->lpVtbl->get_KeySize(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_put_KeySize(This,value) \
    ( (This)->lpVtbl->put_KeySize(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_get_FriendlyName(This,value) \
    ( (This)->lpVtbl->get_FriendlyName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_put_FriendlyName(This,value) \
    ( (This)->lpVtbl->put_FriendlyName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_get_HashAlgorithmName(This,value) \
    ( (This)->lpVtbl->get_HashAlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_put_HashAlgorithmName(This,value) \
    ( (This)->lpVtbl->put_HashAlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_get_Exportable(This,value) \
    ( (This)->lpVtbl->get_Exportable(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_put_Exportable(This,value) \
    ( (This)->lpVtbl->put_Exportable(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_get_KeyUsages(This,value) \
    ( (This)->lpVtbl->get_KeyUsages(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_put_KeyUsages(This,value) \
    ( (This)->lpVtbl->put_KeyUsages(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_get_KeyProtectionLevel(This,value) \
    ( (This)->lpVtbl->get_KeyProtectionLevel(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_put_KeyProtectionLevel(This,value) \
    ( (This)->lpVtbl->put_KeyProtectionLevel(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_get_KeyStorageProviderName(This,value) \
    ( (This)->lpVtbl->get_KeyStorageProviderName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_put_KeyStorageProviderName(This,value) \
    ( (This)->lpVtbl->put_KeyStorageProviderName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateRequestProperties2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateRequestProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties2[] = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties2";
/* [object, uuid("3DA0C954-D73F-4FF3-A0A6-0677C0ADA05B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SmartcardReaderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SmartcardReaderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SigningCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SigningCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AttestationCredentialCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AttestationCredentialCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_get_SmartcardReaderName(This,value) \
    ( (This)->lpVtbl->get_SmartcardReaderName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_put_SmartcardReaderName(This,value) \
    ( (This)->lpVtbl->put_SmartcardReaderName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_get_SigningCertificate(This,value) \
    ( (This)->lpVtbl->get_SigningCertificate(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_put_SigningCertificate(This,value) \
    ( (This)->lpVtbl->put_SigningCertificate(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_get_AttestationCredentialCertificate(This,value) \
    ( (This)->lpVtbl->get_AttestationCredentialCertificate(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_put_AttestationCredentialCertificate(This,value) \
    ( (This)->lpVtbl->put_AttestationCredentialCertificate(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateRequestProperties3
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateRequestProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties3[] = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties3";
/* [object, uuid("E687F616-734D-46B1-9D4C-6EDFDBFC845B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurveName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CurveName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurveParameters )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CurveParameters )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
        /* [in] */UINT32 __valueSize,
        /* [size_is(__valueSize), in] */__RPC__in_ecount_full(__valueSize) BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContainerNamePrefix )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ContainerNamePrefix )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContainerName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ContainerName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_UseExistingKey )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_UseExistingKey )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3 * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_get_CurveName(This,value) \
    ( (This)->lpVtbl->get_CurveName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_put_CurveName(This,value) \
    ( (This)->lpVtbl->put_CurveName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_get_CurveParameters(This,__valueSize,value) \
    ( (This)->lpVtbl->get_CurveParameters(This,__valueSize,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_put_CurveParameters(This,__valueSize,value) \
    ( (This)->lpVtbl->put_CurveParameters(This,__valueSize,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_get_ContainerNamePrefix(This,value) \
    ( (This)->lpVtbl->get_ContainerNamePrefix(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_put_ContainerNamePrefix(This,value) \
    ( (This)->lpVtbl->put_ContainerNamePrefix(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_get_ContainerName(This,value) \
    ( (This)->lpVtbl->get_ContainerName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_put_ContainerName(This,value) \
    ( (This)->lpVtbl->put_ContainerName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_get_UseExistingKey(This,value) \
    ( (This)->lpVtbl->get_UseExistingKey(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_put_UseExistingKey(This,value) \
    ( (This)->lpVtbl->put_UseExistingKey(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties3_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateRequestProperties4
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateRequestProperties
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateRequestProperties4[] = L"Windows.Security.Cryptography.Certificates.ICertificateRequestProperties4";
/* [object, uuid("4E429AD2-1C61-4FEA-B8FE-135FB19CDCE4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SuppressedDefaults )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SubjectAlternativeName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Extensions )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateExtension * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_get_SuppressedDefaults(This,value) \
    ( (This)->lpVtbl->get_SuppressedDefaults(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_get_SubjectAlternativeName(This,value) \
    ( (This)->lpVtbl->get_SubjectAlternativeName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_get_Extensions(This,value) \
    ( (This)->lpVtbl->get_Extensions(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties4_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateStore[] = L"Windows.Security.Cryptography.Certificates.ICertificateStore";
/* [object, uuid("B0BFF720-344E-4331-AF14-A7F7A7EBC93A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Add )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate
        );
    HRESULT ( STDMETHODCALLTYPE *Delete )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoreVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_Add(This,certificate) \
    ( (This)->lpVtbl->Add(This,certificate) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_Delete(This,certificate) \
    ( (This)->lpVtbl->Delete(This,certificate) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateStore2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateStore2[] = L"Windows.Security.Cryptography.Certificates.ICertificateStore2";
/* [object, uuid("C7E68E4A-417D-4D1A-BABD-15687E549974"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateStoresStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateStores
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics[] = L"Windows.Security.Cryptography.Certificates.ICertificateStoresStatics";
/* [object, uuid("FBECC739-C6FE-4DE7-99CF-74C3E596E032"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *FindAllWithQueryAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateQuery * query,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrustedRootCertificationAuthorities )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IntermediateCertificationAuthorities )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetStoreByName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics * This,
        /* [in] */__RPC__in HSTRING storeName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStore * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_FindAllAsync(This,value) \
    ( (This)->lpVtbl->FindAllAsync(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_FindAllWithQueryAsync(This,query,value) \
    ( (This)->lpVtbl->FindAllWithQueryAsync(This,query,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_get_TrustedRootCertificationAuthorities(This,value) \
    ( (This)->lpVtbl->get_TrustedRootCertificationAuthorities(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_get_IntermediateCertificationAuthorities(This,value) \
    ( (This)->lpVtbl->get_IntermediateCertificationAuthorities(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_GetStoreByName(This,storeName,value) \
    ( (This)->lpVtbl->GetStoreByName(This,storeName,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICertificateStoresStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CertificateStores
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICertificateStoresStatics2[] = L"Windows.Security.Cryptography.Certificates.ICertificateStoresStatics2";
/* [object, uuid("FA900B79-A0D4-4B8C-BC55-C0A37EB141ED"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetUserStoreByName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2 * This,
        /* [in] */__RPC__in HSTRING storeName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * * result
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_GetUserStoreByName(This,storeName,result) \
    ( (This)->lpVtbl->GetUserStoreByName(This,storeName,result) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateStoresStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IChainBuildingParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.ChainBuildingParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IChainBuildingParameters[] = L"Windows.Security.Cryptography.Certificates.IChainBuildingParameters";
/* [object, uuid("422BA922-7C8D-47B7-B59B-B12703733AC3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EnhancedKeyUsages )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ValidationTimestamp )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ValidationTimestamp )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
        /* [in] */__x_ABI_CWindows_CFoundation_CDateTime value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RevocationCheckEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RevocationCheckEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NetworkRetrievalEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NetworkRetrievalEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthorityInformationAccessEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AuthorityInformationAccessEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CurrentTimeValidationEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CurrentTimeValidationEnabled )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ExclusiveTrustRoots )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * certificates
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParametersVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParametersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_get_EnhancedKeyUsages(This,value) \
    ( (This)->lpVtbl->get_EnhancedKeyUsages(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_get_ValidationTimestamp(This,value) \
    ( (This)->lpVtbl->get_ValidationTimestamp(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_put_ValidationTimestamp(This,value) \
    ( (This)->lpVtbl->put_ValidationTimestamp(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_get_RevocationCheckEnabled(This,value) \
    ( (This)->lpVtbl->get_RevocationCheckEnabled(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_put_RevocationCheckEnabled(This,value) \
    ( (This)->lpVtbl->put_RevocationCheckEnabled(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_get_NetworkRetrievalEnabled(This,value) \
    ( (This)->lpVtbl->get_NetworkRetrievalEnabled(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_put_NetworkRetrievalEnabled(This,value) \
    ( (This)->lpVtbl->put_NetworkRetrievalEnabled(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_get_AuthorityInformationAccessEnabled(This,value) \
    ( (This)->lpVtbl->get_AuthorityInformationAccessEnabled(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_put_AuthorityInformationAccessEnabled(This,value) \
    ( (This)->lpVtbl->put_AuthorityInformationAccessEnabled(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_get_CurrentTimeValidationEnabled(This,value) \
    ( (This)->lpVtbl->get_CurrentTimeValidationEnabled(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_put_CurrentTimeValidationEnabled(This,value) \
    ( (This)->lpVtbl->put_CurrentTimeValidationEnabled(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_get_ExclusiveTrustRoots(This,certificates) \
    ( (This)->lpVtbl->get_ExclusiveTrustRoots(This,certificates) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainBuildingParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IChainValidationParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.ChainValidationParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IChainValidationParameters[] = L"Windows.Security.Cryptography.Certificates.IChainValidationParameters";
/* [object, uuid("C4743B4A-7EB0-4B56-A040-B9C8E655DDF3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CertificateChainPolicy )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_CertificateChainPolicy )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CCertificateChainPolicy value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ServerDnsName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ServerDnsName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParametersVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParametersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_get_CertificateChainPolicy(This,value) \
    ( (This)->lpVtbl->get_CertificateChainPolicy(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_put_CertificateChainPolicy(This,value) \
    ( (This)->lpVtbl->put_CertificateChainPolicy(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_get_ServerDnsName(This,value) \
    ( (This)->lpVtbl->get_ServerDnsName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_put_ServerDnsName(This,value) \
    ( (This)->lpVtbl->put_ServerDnsName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIChainValidationParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsAttachedSignature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsAttachedSignature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsAttachedSignature[] = L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignature";
/* [object, uuid("61899D9D-3757-4ECB-BDDC-0CA357D7A936"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Certificates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
        /* [out] */__RPC__out UINT32 * __valueSize,
        /* [size_is(, *(__valueSize)), retval, out] */__RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Signers )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *VerifySignature )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CSignatureValidationResult * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_get_Certificates(This,value) \
    ( (This)->lpVtbl->get_Certificates(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_get_Content(This,__valueSize,value) \
    ( (This)->lpVtbl->get_Content(This,__valueSize,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_get_Signers(This,value) \
    ( (This)->lpVtbl->get_Signers(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_VerifySignature(This,value) \
    ( (This)->lpVtbl->VerifySignature(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsAttachedSignature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureFactory[] = L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureFactory";
/* [object, uuid("D0C8FC15-F757-4C64-A362-52CC1C77CFFB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCmsAttachedSignature )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * inputBlob,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignature * * cmsSignedData
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactoryVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_CreateCmsAttachedSignature(This,inputBlob,cmsSignedData) \
    ( (This)->lpVtbl->CreateCmsAttachedSignature(This,inputBlob,cmsSignedData) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsAttachedSignature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsAttachedSignatureStatics[] = L"Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureStatics";
/* [object, uuid("87989C8E-B0AD-498D-A7F5-78B59BCE4B36"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GenerateSignatureAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * signers,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * certificates,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * outputBlob
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_GenerateSignatureAsync(This,data,signers,certificates,outputBlob) \
    ( (This)->lpVtbl->GenerateSignatureAsync(This,data,signers,certificates,outputBlob) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsAttachedSignatureStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsDetachedSignature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsDetachedSignature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsDetachedSignature[] = L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignature";
/* [object, uuid("0F1EF154-F65E-4536-8339-5944081DB2CA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Certificates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Signers )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *VerifySignatureAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * data,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCertificates__CSignatureValidationResult * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_get_Certificates(This,value) \
    ( (This)->lpVtbl->get_Certificates(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_get_Signers(This,value) \
    ( (This)->lpVtbl->get_Signers(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_VerifySignatureAsync(This,data,value) \
    ( (This)->lpVtbl->VerifySignatureAsync(This,data,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsDetachedSignature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureFactory[] = L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureFactory";
/* [object, uuid("C4AB3503-AE7F-4387-AD19-00F150E48EBB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCmsDetachedSignature )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * inputBlob,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignature * * cmsSignedData
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactoryVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_CreateCmsDetachedSignature(This,inputBlob,cmsSignedData) \
    ( (This)->lpVtbl->CreateCmsDetachedSignature(This,inputBlob,cmsSignedData) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsDetachedSignature
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsDetachedSignatureStatics[] = L"Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureStatics";
/* [object, uuid("3D114CFD-BF9B-4682-9BE6-91F57C053808"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GenerateSignatureAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * data,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCmsSignerInfo * signers,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * certificates,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * outputBlob
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_GenerateSignatureAsync(This,data,signers,certificates,outputBlob) \
    ( (This)->lpVtbl->GenerateSignatureAsync(This,data,signers,certificates,outputBlob) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsDetachedSignatureStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsSignerInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsSignerInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsSignerInfo[] = L"Windows.Security.Cryptography.Certificates.ICmsSignerInfo";
/* [object, uuid("50D020DB-1D2F-4C1A-B5C5-D0188FF91F47"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Certificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Certificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TimestampInfo )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfoVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_get_Certificate(This,value) \
    ( (This)->lpVtbl->get_Certificate(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_put_Certificate(This,value) \
    ( (This)->lpVtbl->put_Certificate(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_get_HashAlgorithmName(This,value) \
    ( (This)->lpVtbl->get_HashAlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_put_HashAlgorithmName(This,value) \
    ( (This)->lpVtbl->put_HashAlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_get_TimestampInfo(This,value) \
    ( (This)->lpVtbl->get_TimestampInfo(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsSignerInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ICmsTimestampInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.CmsTimestampInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ICmsTimestampInfo[] = L"Windows.Security.Cryptography.Certificates.ICmsTimestampInfo";
/* [object, uuid("2F5F00F2-2C18-4F88-8435-C534086076F5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SigningCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Certificates )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfoVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_get_SigningCertificate(This,value) \
    ( (This)->lpVtbl->get_SigningCertificate(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_get_Certificates(This,value) \
    ( (This)->lpVtbl->get_Certificates(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICmsTimestampInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.KeyAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics";
/* [object, uuid("479065D7-7AC7-4581-8C3B-D07027140448"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rsa )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Dsa )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ecdh256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ecdh384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ecdh521 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ecdsa256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ecdsa384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ecdsa521 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_get_Rsa(This,value) \
    ( (This)->lpVtbl->get_Rsa(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_get_Dsa(This,value) \
    ( (This)->lpVtbl->get_Dsa(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_get_Ecdh256(This,value) \
    ( (This)->lpVtbl->get_Ecdh256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_get_Ecdh384(This,value) \
    ( (This)->lpVtbl->get_Ecdh384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_get_Ecdh521(This,value) \
    ( (This)->lpVtbl->get_Ecdh521(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_get_Ecdsa256(This,value) \
    ( (This)->lpVtbl->get_Ecdsa256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_get_Ecdsa384(This,value) \
    ( (This)->lpVtbl->get_Ecdsa384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_get_Ecdsa521(This,value) \
    ( (This)->lpVtbl->get_Ecdsa521(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.KeyAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyAlgorithmNamesStatics2[] = L"Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics2";
/* [object, uuid("C99B5686-E1FD-4A4A-893D-A26F33DD8BB4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ecdsa )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ecdh )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_get_Ecdsa(This,value) \
    ( (This)->lpVtbl->get_Ecdsa(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_get_Ecdh(This,value) \
    ( (This)->lpVtbl->get_Ecdh(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAlgorithmNamesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.KeyAttestationHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics[] = L"Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics";
/* [object, uuid("1648E246-F644-4326-88BE-3AF102D30E0C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *DecryptTpmAttestationCredentialAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This,
        /* [in] */__RPC__in HSTRING credential,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTpmAttestationCredentialId )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics * This,
        /* [in] */__RPC__in HSTRING credential,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_DecryptTpmAttestationCredentialAsync(This,credential,value) \
    ( (This)->lpVtbl->DecryptTpmAttestationCredentialAsync(This,credential,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_GetTpmAttestationCredentialId(This,credential,value) \
    ( (This)->lpVtbl->GetTpmAttestationCredentialId(This,credential,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.KeyAttestationHelper
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyAttestationHelperStatics2[] = L"Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics2";
/* [object, uuid("9C590B2C-A6C6-4A5E-9E64-E85D5279DF97"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *DecryptTpmAttestationCredentialWithContainerNameAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2 * This,
        /* [in] */__RPC__in HSTRING credential,
        /* [in] */__RPC__in HSTRING containerName,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_DecryptTpmAttestationCredentialWithContainerNameAsync(This,credential,containerName,value) \
    ( (This)->lpVtbl->DecryptTpmAttestationCredentialWithContainerNameAsync(This,credential,containerName,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyAttestationHelperStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.KeyStorageProviderNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics[] = L"Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics";
/* [object, uuid("AF186AE0-5529-4602-BD94-0AAB91957B5C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SoftwareKeyStorageProvider )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SmartcardKeyStorageProvider )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PlatformKeyStorageProvider )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_get_SoftwareKeyStorageProvider(This,value) \
    ( (This)->lpVtbl->get_SoftwareKeyStorageProvider(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_get_SmartcardKeyStorageProvider(This,value) \
    ( (This)->lpVtbl->get_SmartcardKeyStorageProvider(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_get_PlatformKeyStorageProvider(This,value) \
    ( (This)->lpVtbl->get_PlatformKeyStorageProvider(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.KeyStorageProviderNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IKeyStorageProviderNamesStatics2[] = L"Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics2";
/* [object, uuid("262D743D-9C2E-41CC-8812-C4D971DD7C60"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PassportKeyStorageProvider )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_get_PassportKeyStorageProvider(This,value) \
    ( (This)->lpVtbl->get_PassportKeyStorageProvider(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIKeyStorageProviderNamesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IPfxImportParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.PfxImportParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IPfxImportParameters[] = L"Windows.Security.Cryptography.Certificates.IPfxImportParameters";
/* [object, uuid("680D3511-9A08-47C8-864A-2EDD4D8EB46C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Exportable )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Exportable )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyProtectionLevel )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyProtectionLevel )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstallOptions )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InstallOptions )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeyStorageProviderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KeyStorageProviderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContainerNamePrefix )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ContainerNamePrefix )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ReaderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ReaderName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParametersVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParametersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_get_Exportable(This,value) \
    ( (This)->lpVtbl->get_Exportable(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_put_Exportable(This,value) \
    ( (This)->lpVtbl->put_Exportable(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_get_KeyProtectionLevel(This,value) \
    ( (This)->lpVtbl->get_KeyProtectionLevel(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_put_KeyProtectionLevel(This,value) \
    ( (This)->lpVtbl->put_KeyProtectionLevel(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_get_InstallOptions(This,value) \
    ( (This)->lpVtbl->get_InstallOptions(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_put_InstallOptions(This,value) \
    ( (This)->lpVtbl->put_InstallOptions(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_get_FriendlyName(This,value) \
    ( (This)->lpVtbl->get_FriendlyName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_put_FriendlyName(This,value) \
    ( (This)->lpVtbl->put_FriendlyName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_get_KeyStorageProviderName(This,value) \
    ( (This)->lpVtbl->get_KeyStorageProviderName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_put_KeyStorageProviderName(This,value) \
    ( (This)->lpVtbl->put_KeyStorageProviderName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_get_ContainerNamePrefix(This,value) \
    ( (This)->lpVtbl->get_ContainerNamePrefix(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_put_ContainerNamePrefix(This,value) \
    ( (This)->lpVtbl->put_ContainerNamePrefix(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_get_ReaderName(This,value) \
    ( (This)->lpVtbl->get_ReaderName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_put_ReaderName(This,value) \
    ( (This)->lpVtbl->put_ReaderName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IStandardCertificateStoreNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.StandardCertificateStoreNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IStandardCertificateStoreNamesStatics[] = L"Windows.Security.Cryptography.Certificates.IStandardCertificateStoreNamesStatics";
/* [object, uuid("0C154ADB-A496-41F8-8FE5-9E96F36EFBF8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Personal )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TrustedRootCertificationAuthorities )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IntermediateCertificationAuthorities )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_get_Personal(This,value) \
    ( (This)->lpVtbl->get_Personal(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_get_TrustedRootCertificationAuthorities(This,value) \
    ( (This)->lpVtbl->get_TrustedRootCertificationAuthorities(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_get_IntermediateCertificationAuthorities(This,value) \
    ( (This)->lpVtbl->get_IntermediateCertificationAuthorities(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIStandardCertificateStoreNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.SubjectAlternativeNameInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo[] = L"Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo";
/* [object, uuid("582859F1-569D-4C20-BE7B-4E1C9A0BC52B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IPAddress )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Url )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DnsName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DistinguishedName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrincipalName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfoVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfoVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_get_EmailName(This,value) \
    ( (This)->lpVtbl->get_EmailName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_get_IPAddress(This,value) \
    ( (This)->lpVtbl->get_IPAddress(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_get_Url(This,value) \
    ( (This)->lpVtbl->get_Url(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_get_DnsName(This,value) \
    ( (This)->lpVtbl->get_DnsName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_get_DistinguishedName(This,value) \
    ( (This)->lpVtbl->get_DistinguishedName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_get_PrincipalName(This,value) \
    ( (This)->lpVtbl->get_PrincipalName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.SubjectAlternativeNameInfo
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_ISubjectAlternativeNameInfo2[] = L"Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo2";
/* [object, uuid("437A78C6-1C51-41EA-B34A-3D654398A370"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EmailNames )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IPAddresses )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Urls )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DnsNames )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DistinguishedNames )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PrincipalNames )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Extension )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2 * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateExtension * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_get_EmailNames(This,value) \
    ( (This)->lpVtbl->get_EmailNames(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_get_IPAddresses(This,value) \
    ( (This)->lpVtbl->get_IPAddresses(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_get_Urls(This,value) \
    ( (This)->lpVtbl->get_Urls(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_get_DnsNames(This,value) \
    ( (This)->lpVtbl->get_DnsNames(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_get_DistinguishedNames(This,value) \
    ( (This)->lpVtbl->get_DistinguishedNames(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_get_PrincipalNames(This,value) \
    ( (This)->lpVtbl->get_PrincipalNames(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_get_Extension(This,value) \
    ( (This)->lpVtbl->get_Extension(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CISubjectAlternativeNameInfo2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.UserCertificateEnrollmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager[] = L"Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager";
/* [object, uuid("96313718-22E1-4819-B20B-AB46A6ECA06E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateRequestAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificateRequestProperties * request,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *InstallCertificateAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
        /* [in] */__RPC__in HSTRING certificate,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions installOption,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ImportPfxDataAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
        /* [in] */__RPC__in HSTRING pfxData,
        /* [in] */__RPC__in HSTRING password,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption exportable,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel keyProtectionLevel,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions installOption,
        /* [in] */__RPC__in HSTRING friendlyName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ImportPfxDataToKspAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager * This,
        /* [in] */__RPC__in HSTRING pfxData,
        /* [in] */__RPC__in HSTRING password,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CExportOption exportable,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CKeyProtectionLevel keyProtectionLevel,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CInstallOptions installOption,
        /* [in] */__RPC__in HSTRING friendlyName,
        /* [in] */__RPC__in HSTRING keyStorageProvider,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManagerVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManagerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_CreateRequestAsync(This,request,value) \
    ( (This)->lpVtbl->CreateRequestAsync(This,request,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_InstallCertificateAsync(This,certificate,installOption,value) \
    ( (This)->lpVtbl->InstallCertificateAsync(This,certificate,installOption,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_ImportPfxDataAsync(This,pfxData,password,exportable,keyProtectionLevel,installOption,friendlyName,value) \
    ( (This)->lpVtbl->ImportPfxDataAsync(This,pfxData,password,exportable,keyProtectionLevel,installOption,friendlyName,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_ImportPfxDataToKspAsync(This,pfxData,password,exportable,keyProtectionLevel,installOption,friendlyName,keyStorageProvider,value) \
    ( (This)->lpVtbl->ImportPfxDataToKspAsync(This,pfxData,password,exportable,keyProtectionLevel,installOption,friendlyName,keyStorageProvider,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.UserCertificateEnrollmentManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IUserCertificateEnrollmentManager2[] = L"Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager2";
/* [object, uuid("0DAD9CB1-65DE-492A-B86D-FC5C482C3747"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *ImportPfxDataToKspWithParametersAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2 * This,
        /* [in] */__RPC__in HSTRING pfxData,
        /* [in] */__RPC__in HSTRING password,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIPfxImportParameters * pfxImportParameters,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_ImportPfxDataToKspWithParametersAsync(This,pfxData,password,pfxImportParameters,value) \
    ( (This)->lpVtbl->ImportPfxDataToKspWithParametersAsync(This,pfxData,password,pfxImportParameters,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateEnrollmentManager2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Certificates.IUserCertificateStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Certificates.UserCertificateStore
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Certificates_IUserCertificateStore[] = L"Windows.Security.Cryptography.Certificates.IUserCertificateStore";
/* [object, uuid("C9FB1D83-789F-4B4E-9180-045A757AAC6D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestAddAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestDeleteAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_boolean * * result
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStoreVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStoreVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_RequestAddAsync(This,certificate,result) \
    ( (This)->lpVtbl->RequestAddAsync(This,certificate,result) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_RequestDeleteAsync(This,certificate,result) \
    ( (This)->lpVtbl->RequestDeleteAsync(This,certificate,result) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CIUserCertificateStore_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.Certificate
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Cryptography.Certificates.ICertificateFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificate ** Default Interface **
 *    Windows.Security.Cryptography.Certificates.ICertificate2
 *    Windows.Security.Cryptography.Certificates.ICertificate3
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_Certificate_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_Certificate_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_Certificate[] = L"Windows.Security.Cryptography.Certificates.Certificate";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateChain
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificateChain ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateChain_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateChain_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateChain[] = L"Windows.Security.Cryptography.Certificates.CertificateChain";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateEnrollmentManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics3 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICertificateEnrollmentManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateEnrollmentManager_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateEnrollmentManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateEnrollmentManager[] = L"Windows.Security.Cryptography.Certificates.CertificateEnrollmentManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateExtension
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 4.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 4.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificateExtension ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateExtension_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateExtension_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateExtension[] = L"Windows.Security.Cryptography.Certificates.CertificateExtension";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x40000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateKeyUsages
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificateKeyUsages ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateKeyUsages_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateKeyUsages_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateKeyUsages[] = L"Windows.Security.Cryptography.Certificates.CertificateKeyUsages";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateQuery
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificateQuery ** Default Interface **
 *    Windows.Security.Cryptography.Certificates.ICertificateQuery2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateQuery_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateQuery_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateQuery[] = L"Windows.Security.Cryptography.Certificates.CertificateQuery";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateRequestProperties
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificateRequestProperties ** Default Interface **
 *    Windows.Security.Cryptography.Certificates.ICertificateRequestProperties2
 *    Windows.Security.Cryptography.Certificates.ICertificateRequestProperties3
 *    Windows.Security.Cryptography.Certificates.ICertificateRequestProperties4
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateRequestProperties_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateRequestProperties_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateRequestProperties[] = L"Windows.Security.Cryptography.Certificates.CertificateRequestProperties";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICertificateStore ** Default Interface **
 *    Windows.Security.Cryptography.Certificates.ICertificateStore2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateStore_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateStore[] = L"Windows.Security.Cryptography.Certificates.CertificateStore";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CertificateStores
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICertificateStoresStatics2 interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICertificateStoresStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateStores_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CertificateStores_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CertificateStores[] = L"Windows.Security.Cryptography.Certificates.CertificateStores";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.ChainBuildingParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.IChainBuildingParameters ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_ChainBuildingParameters_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_ChainBuildingParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_ChainBuildingParameters[] = L"Windows.Security.Cryptography.Certificates.ChainBuildingParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.ChainValidationParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.IChainValidationParameters ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_ChainValidationParameters_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_ChainValidationParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_ChainValidationParameters[] = L"Windows.Security.Cryptography.Certificates.ChainValidationParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CmsAttachedSignature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICmsAttachedSignatureStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICmsAttachedSignature ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsAttachedSignature_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsAttachedSignature_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CmsAttachedSignature[] = L"Windows.Security.Cryptography.Certificates.CmsAttachedSignature";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CmsDetachedSignature
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.ICmsDetachedSignatureStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICmsDetachedSignature ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsDetachedSignature_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsDetachedSignature_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CmsDetachedSignature[] = L"Windows.Security.Cryptography.Certificates.CmsDetachedSignature";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CmsSignerInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICmsSignerInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsSignerInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsSignerInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CmsSignerInfo[] = L"Windows.Security.Cryptography.Certificates.CmsSignerInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.CmsTimestampInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ICmsTimestampInfo ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsTimestampInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_CmsTimestampInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_CmsTimestampInfo[] = L"Windows.Security.Cryptography.Certificates.CmsTimestampInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.KeyAlgorithmNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IKeyAlgorithmNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_KeyAlgorithmNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_KeyAlgorithmNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_KeyAlgorithmNames[] = L"Windows.Security.Cryptography.Certificates.KeyAlgorithmNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.KeyAttestationHelper
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IKeyAttestationHelperStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_KeyAttestationHelper_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_KeyAttestationHelper_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_KeyAttestationHelper[] = L"Windows.Security.Cryptography.Certificates.KeyAttestationHelper";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.KeyStorageProviderNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IKeyStorageProviderNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_KeyStorageProviderNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_KeyStorageProviderNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_KeyStorageProviderNames[] = L"Windows.Security.Cryptography.Certificates.KeyStorageProviderNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.PfxImportParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.IPfxImportParameters ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_PfxImportParameters_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_PfxImportParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_PfxImportParameters[] = L"Windows.Security.Cryptography.Certificates.PfxImportParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.StandardCertificateStoreNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Certificates.IStandardCertificateStoreNamesStatics interface starting with version 3.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_StandardCertificateStoreNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_StandardCertificateStoreNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_StandardCertificateStoreNames[] = L"Windows.Security.Cryptography.Certificates.StandardCertificateStoreNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.SubjectAlternativeNameInfo
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo ** Default Interface **
 *    Windows.Security.Cryptography.Certificates.ISubjectAlternativeNameInfo2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_SubjectAlternativeNameInfo_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_SubjectAlternativeNameInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_SubjectAlternativeNameInfo[] = L"Windows.Security.Cryptography.Certificates.SubjectAlternativeNameInfo";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.UserCertificateEnrollmentManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager ** Default Interface **
 *    Windows.Security.Cryptography.Certificates.IUserCertificateEnrollmentManager2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_UserCertificateEnrollmentManager_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_UserCertificateEnrollmentManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_UserCertificateEnrollmentManager[] = L"Windows.Security.Cryptography.Certificates.UserCertificateEnrollmentManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Certificates.UserCertificateStore
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 3.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Certificates.IUserCertificateStore ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x30000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Certificates_UserCertificateStore_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Certificates_UserCertificateStore_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Certificates_UserCertificateStore[] = L"Windows.Security.Cryptography.Certificates.UserCertificateStore";
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
#endif // __windows2Esecurity2Ecryptography2Ecertificates_p_h__

#endif // __windows2Esecurity2Ecryptography2Ecertificates_h__
