/* Header file automatically generated from windows.security.cryptography.core.idl */
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
#ifndef __windows2Esecurity2Ecryptography2Ecore_h__
#define __windows2Esecurity2Ecryptography2Ecore_h__
#ifndef __windows2Esecurity2Ecryptography2Ecore_p_h__
#define __windows2Esecurity2Ecryptography2Ecore_p_h__


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
#include "Windows.Security.Cryptography.Certificates.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IAsymmetricAlgorithmNamesStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics ABI::Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IAsymmetricAlgorithmNamesStatics2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 ABI::Windows::Security::Cryptography::Core::IAsymmetricAlgorithmNamesStatics2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IAsymmetricKeyAlgorithmProvider;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider ABI::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IAsymmetricKeyAlgorithmProvider2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 ABI::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IAsymmetricKeyAlgorithmProviderStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics ABI::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProviderStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface ICryptographicEngineStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics ABI::Windows::Security::Cryptography::Core::ICryptographicEngineStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface ICryptographicEngineStatics2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 ABI::Windows::Security::Cryptography::Core::ICryptographicEngineStatics2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface ICryptographicKey;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey ABI::Windows::Security::Cryptography::Core::ICryptographicKey

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IEccCurveNamesStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics ABI::Windows::Security::Cryptography::Core::IEccCurveNamesStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IEncryptedAndAuthenticatedData;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData ABI::Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IHashAlgorithmNamesStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics ABI::Windows::Security::Cryptography::Core::IHashAlgorithmNamesStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IHashAlgorithmProvider;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider ABI::Windows::Security::Cryptography::Core::IHashAlgorithmProvider

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IHashAlgorithmProviderStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics ABI::Windows::Security::Cryptography::Core::IHashAlgorithmProviderStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IHashComputation;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation ABI::Windows::Security::Cryptography::Core::IHashComputation

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IKeyDerivationAlgorithmNamesStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics ABI::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IKeyDerivationAlgorithmNamesStatics2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 ABI::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmNamesStatics2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IKeyDerivationAlgorithmProvider;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider ABI::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IKeyDerivationAlgorithmProviderStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics ABI::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProviderStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IKeyDerivationParameters;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters ABI::Windows::Security::Cryptography::Core::IKeyDerivationParameters

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IKeyDerivationParameters2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 ABI::Windows::Security::Cryptography::Core::IKeyDerivationParameters2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IKeyDerivationParametersStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics ABI::Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IKeyDerivationParametersStatics2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 ABI::Windows::Security::Cryptography::Core::IKeyDerivationParametersStatics2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IMacAlgorithmNamesStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics ABI::Windows::Security::Cryptography::Core::IMacAlgorithmNamesStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IMacAlgorithmProvider;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider ABI::Windows::Security::Cryptography::Core::IMacAlgorithmProvider

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IMacAlgorithmProvider2;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 ABI::Windows::Security::Cryptography::Core::IMacAlgorithmProvider2

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IMacAlgorithmProviderStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics ABI::Windows::Security::Cryptography::Core::IMacAlgorithmProviderStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface IPersistedKeyProviderStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics ABI::Windows::Security::Cryptography::Core::IPersistedKeyProviderStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface ISymmetricAlgorithmNamesStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics ABI::Windows::Security::Cryptography::Core::ISymmetricAlgorithmNamesStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface ISymmetricKeyAlgorithmProvider;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider ABI::Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    interface ISymmetricKeyAlgorithmProviderStatics;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics ABI::Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProviderStatics

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    class CryptographicKey;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("04ca4378-f594-5de6-a555-304f62cb4faf"))
IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Core::CryptographicKey*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Core::CryptographicKey*, ABI::Windows::Security::Cryptography::Core::ICryptographicKey*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Security.Cryptography.Core.CryptographicKey>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Core::CryptographicKey*> __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Core::ICryptographicKey*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Security::Cryptography::Core::ICryptographicKey*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_USE
#define DEF___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("81ca789b-98df-5c6a-9531-966238e3e7ae"))
IAsyncOperation<ABI::Windows::Security::Cryptography::Core::CryptographicKey*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Security::Cryptography::Core::CryptographicKey*, ABI::Windows::Security::Cryptography::Core::ICryptographicKey*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Security.Cryptography.Core.CryptographicKey>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Security::Cryptography::Core::CryptographicKey*> __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_t;
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Cryptography::Core::ICryptographicKey*>
//#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Security::Cryptography::Core::ICryptographicKey*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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
        namespace Security {
            namespace Cryptography {
                namespace Certificates {
                    class Certificate;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Certificates */} /* ABI */

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










namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    
                    typedef enum Capi1KdfTargetAlgorithm : int Capi1KdfTargetAlgorithm;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    
                    typedef enum CryptographicPadding : int CryptographicPadding;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    
                    typedef enum CryptographicPrivateKeyBlobType : int CryptographicPrivateKeyBlobType;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    
                    typedef enum CryptographicPublicKeyBlobType : int CryptographicPublicKeyBlobType;
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
































namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    class AsymmetricKeyAlgorithmProvider;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    class CryptographicHash;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    class EncryptedAndAuthenticatedData;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    class HashAlgorithmProvider;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    class KeyDerivationAlgorithmProvider;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    class KeyDerivationParameters;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    class MacAlgorithmProvider;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    class SymmetricKeyAlgorithmProvider;
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */












/*
 *
 * Struct Windows.Security.Cryptography.Core.Capi1KdfTargetAlgorithm
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
                namespace Core {
                    /* [v1_enum, contract] */
                    enum Capi1KdfTargetAlgorithm : int
                    {
                        Capi1KdfTargetAlgorithm_NotAes = 0,
                        Capi1KdfTargetAlgorithm_Aes = 1,
                    };
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Core.CryptographicPadding
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
                namespace Core {
                    /* [v1_enum, contract] */
                    enum CryptographicPadding : int
                    {
                        CryptographicPadding_None = 0,
                        CryptographicPadding_RsaOaep = 1,
                        CryptographicPadding_RsaPkcs1V15 = 2,
                        CryptographicPadding_RsaPss = 3,
                    };
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Core.CryptographicPrivateKeyBlobType
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
                namespace Core {
                    /* [v1_enum, contract] */
                    enum CryptographicPrivateKeyBlobType : int
                    {
                        CryptographicPrivateKeyBlobType_Pkcs8RawPrivateKeyInfo = 0,
                        CryptographicPrivateKeyBlobType_Pkcs1RsaPrivateKey = 1,
                        CryptographicPrivateKeyBlobType_BCryptPrivateKey = 2,
                        CryptographicPrivateKeyBlobType_Capi1PrivateKey = 3,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        CryptographicPrivateKeyBlobType_BCryptEccFullPrivateKey = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                    };
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Core.CryptographicPublicKeyBlobType
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
                namespace Core {
                    /* [v1_enum, contract] */
                    enum CryptographicPublicKeyBlobType : int
                    {
                        CryptographicPublicKeyBlobType_X509SubjectPublicKeyInfo = 0,
                        CryptographicPublicKeyBlobType_Pkcs1RsaPublicKey = 1,
                        CryptographicPublicKeyBlobType_BCryptPublicKey = 2,
                        CryptographicPublicKeyBlobType_Capi1PublicKey = 3,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                        CryptographicPublicKeyBlobType_BCryptEccFullPublicKey = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
                        
                    };
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.AsymmetricAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("CAF6FCE4-67C0-46AA-84F9-752E77449F9B"), exclusiveto, contract] */
                    MIDL_INTERFACE("CAF6FCE4-67C0-46AA-84F9-752E77449F9B")
                    IAsymmetricAlgorithmNamesStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RsaPkcs1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RsaOaepSha1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RsaOaepSha256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RsaOaepSha384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RsaOaepSha512(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EcdsaP256Sha256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EcdsaP384Sha384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EcdsaP521Sha512(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DsaSha1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DsaSha256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RsaSignPkcs1Sha1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RsaSignPkcs1Sha256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RsaSignPkcs1Sha384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RsaSignPkcs1Sha512(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RsaSignPssSha1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RsaSignPssSha256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RsaSignPssSha384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RsaSignPssSha512(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAsymmetricAlgorithmNamesStatics=_uuidof(IAsymmetricAlgorithmNamesStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.AsymmetricAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics2[] = L"Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("F141C0D6-4BFF-4F23-BA66-6045B137D5DF"), exclusiveto, contract] */
                    MIDL_INTERFACE("F141C0D6-4BFF-4F23-BA66-6045B137D5DF")
                    IAsymmetricAlgorithmNamesStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EcdsaSha256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EcdsaSha384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EcdsaSha512(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAsymmetricAlgorithmNamesStatics2=_uuidof(IAsymmetricAlgorithmNamesStatics2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("E8D2FF37-6259-4E88-B7E0-94191FDE699E"), exclusiveto, contract] */
                    MIDL_INTERFACE("E8D2FF37-6259-4E88-B7E0-94191FDE699E")
                    IAsymmetricKeyAlgorithmProvider : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlgorithmName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateKeyPair(
                            /* [in] */UINT32 keySize,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * * key
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ImportDefaultPrivateKeyBlob(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * keyBlob,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * * key
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ImportKeyPairWithBlobType(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * keyBlob,
                            /* [in] */ABI::Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType BlobType,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * * key
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ImportDefaultPublicKeyBlob(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * keyBlob,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * * key
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ImportPublicKeyWithBlobType(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * keyBlob,
                            /* [in] */ABI::Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType BlobType,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * * key
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAsymmetricKeyAlgorithmProvider=_uuidof(IAsymmetricKeyAlgorithmProvider);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider2[] = L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("4E322A7E-7C4D-4997-AC4F-1B848B36306E"), exclusiveto, contract] */
                    MIDL_INTERFACE("4E322A7E-7C4D-4997-AC4F-1B848B36306E")
                    IAsymmetricKeyAlgorithmProvider2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateKeyPairWithCurveName(
                            /* [in] */__RPC__in HSTRING curveName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * * key
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateKeyPairWithCurveParameters(
                            /* [in, range(0, 65536)] */__RPC__in_range(0,0x10000) UINT32 __parametersSize,
                            /* [size_is(__parametersSize), in] */__RPC__in_ecount_full(__parametersSize) BYTE * parameters,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * * key
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAsymmetricKeyAlgorithmProvider2=_uuidof(IAsymmetricKeyAlgorithmProvider2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProviderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProviderStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("425BDE18-A7F3-47A6-A8D2-C48D6033A65C"), exclusiveto, contract] */
                    MIDL_INTERFACE("425BDE18-A7F3-47A6-A8D2-C48D6033A65C")
                    IAsymmetricKeyAlgorithmProviderStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE OpenAlgorithm(
                            /* [in] */__RPC__in HSTRING algorithm,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::IAsymmetricKeyAlgorithmProvider * * provider
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IAsymmetricKeyAlgorithmProviderStatics=_uuidof(IAsymmetricKeyAlgorithmProviderStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.ICryptographicEngineStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.CryptographicEngine
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ICryptographicEngineStatics[] = L"Windows.Security.Cryptography.Core.ICryptographicEngineStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("9FEA0639-6FF7-4C85-A095-95EB31715EB9"), exclusiveto, contract] */
                    MIDL_INTERFACE("9FEA0639-6FF7-4C85-A095-95EB31715EB9")
                    ICryptographicEngineStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Encrypt(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * key,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * iv,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Decrypt(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * key,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * iv,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE EncryptAndAuthenticate(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * key,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * nonce,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * authenticatedData,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::IEncryptedAndAuthenticatedData * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DecryptAndAuthenticate(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * key,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * nonce,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * authenticationTag,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * authenticatedData,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Sign(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * key,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE VerifySignature(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * key,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * signature,
                            /* [retval, out] */__RPC__out boolean * isAuthenticated
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeriveKeyMaterial(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * key,
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Core::IKeyDerivationParameters * parameters,
                            /* [in] */UINT32 desiredKeySize,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * keyMaterial
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICryptographicEngineStatics=_uuidof(ICryptographicEngineStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.ICryptographicEngineStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.CryptographicEngine
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2[] = L"Windows.Security.Cryptography.Core.ICryptographicEngineStatics2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("675948FE-DF9F-4191-92C7-6CE6F58420E0"), exclusiveto, contract] */
                    MIDL_INTERFACE("675948FE-DF9F-4191-92C7-6CE6F58420E0")
                    ICryptographicEngineStatics2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SignHashedData(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * key,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE VerifySignatureWithHashInput(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * key,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * signature,
                            /* [retval, out] */__RPC__out boolean * isAuthenticated
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DecryptAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * key,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * iv,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SignAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * key,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SignHashedDataAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * key,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICryptographicEngineStatics2=_uuidof(ICryptographicEngineStatics2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.ICryptographicKey
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.CryptographicKey
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ICryptographicKey[] = L"Windows.Security.Cryptography.Core.ICryptographicKey";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("ED2A3B70-8E7B-4009-8401-FFD1A62EEB27"), exclusiveto, contract] */
                    MIDL_INTERFACE("ED2A3B70-8E7B-4009-8401-FFD1A62EEB27")
                    ICryptographicKey : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KeySize(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ExportDefaultPrivateKeyBlobType(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ExportPrivateKeyWithBlobType(
                            /* [in] */ABI::Windows::Security::Cryptography::Core::CryptographicPrivateKeyBlobType BlobType,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ExportDefaultPublicKeyBlobType(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE ExportPublicKeyWithBlobType(
                            /* [in] */ABI::Windows::Security::Cryptography::Core::CryptographicPublicKeyBlobType BlobType,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ICryptographicKey=_uuidof(ICryptographicKey);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IEccCurveNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.EccCurveNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IEccCurveNamesStatics[] = L"Windows.Security.Cryptography.Core.IEccCurveNamesStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("B3FF930C-AEEB-409E-B7D4-9B95295AAECF"), exclusiveto, contract] */
                    MIDL_INTERFACE("B3FF930C-AEEB-409E-B7D4-9B95295AAECF")
                    IEccCurveNamesStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP160r1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP160t1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP192r1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP192t1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP224r1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP224t1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP256r1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP256t1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP320r1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP320t1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP384r1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP384t1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP512r1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BrainpoolP512t1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Curve25519(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Ec192wapi(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NistP192(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NistP224(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NistP256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NistP384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NistP521(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NumsP256t1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NumsP384t1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NumsP512t1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecP160k1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecP160r1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecP160r2(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecP192k1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecP192r1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecP224k1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecP224r1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecP256k1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecP256r1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecP384r1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SecP521r1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Wtls7(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Wtls9(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Wtls12(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_X962P192v1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_X962P192v2(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_X962P192v3(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_X962P239v1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_X962P239v2(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_X962P239v3(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_X962P256v1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AllEccCurveNames(
                            /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEccCurveNamesStatics=_uuidof(IEccCurveNamesStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IEncryptedAndAuthenticatedData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.EncryptedAndAuthenticatedData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IEncryptedAndAuthenticatedData[] = L"Windows.Security.Cryptography.Core.IEncryptedAndAuthenticatedData";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("6FA42FE7-1ECB-4B00-BEA5-60B83F862F17"), exclusiveto, contract] */
                    MIDL_INTERFACE("6FA42FE7-1ECB-4B00-BEA5-60B83F862F17")
                    IEncryptedAndAuthenticatedData : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_EncryptedData(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AuthenticationTag(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IEncryptedAndAuthenticatedData=_uuidof(IEncryptedAndAuthenticatedData);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IHashAlgorithmNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.HashAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.IHashAlgorithmNamesStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("6B5E0516-DE96-4F0A-8D57-DCC9DAE36C76"), exclusiveto, contract] */
                    MIDL_INTERFACE("6B5E0516-DE96-4F0A-8D57-DCC9DAE36C76")
                    IHashAlgorithmNamesStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Md5(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sha1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sha256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sha384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sha512(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHashAlgorithmNamesStatics=_uuidof(IHashAlgorithmNamesStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IHashAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.HashAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IHashAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.IHashAlgorithmProvider";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("BE9B3080-B2C3-422B-BCE1-EC90EFB5D7B5"), exclusiveto, contract] */
                    MIDL_INTERFACE("BE9B3080-B2C3-422B-BCE1-EC90EFB5D7B5")
                    IHashAlgorithmProvider : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlgorithmName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HashLength(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE HashData(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateHash(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::IHashComputation * * Value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHashAlgorithmProvider=_uuidof(IHashAlgorithmProvider);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IHashAlgorithmProviderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.HashAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IHashAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.IHashAlgorithmProviderStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("9FAC9741-5CC4-4336-AE38-6212B75A915A"), exclusiveto, contract] */
                    MIDL_INTERFACE("9FAC9741-5CC4-4336-AE38-6212B75A915A")
                    IHashAlgorithmProviderStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE OpenAlgorithm(
                            /* [in] */__RPC__in HSTRING algorithm,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::IHashAlgorithmProvider * * provider
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHashAlgorithmProviderStatics=_uuidof(IHashAlgorithmProviderStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IHashComputation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.CryptographicHash
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IHashComputation[] = L"Windows.Security.Cryptography.Core.IHashComputation";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("5904D1B6-AD31-4603-A3A4-B1BDA98E2562"), exclusiveto, contract] */
                    MIDL_INTERFACE("5904D1B6-AD31-4603-A3A4-B1BDA98E2562")
                    IHashComputation : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE Append(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * data
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetValueAndReset(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IHashComputation=_uuidof(IHashComputation);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("7B6E363E-94D2-4739-A57B-022E0C3A402A"), exclusiveto, contract] */
                    MIDL_INTERFACE("7B6E363E-94D2-4739-A57B-022E0C3A402A")
                    IKeyDerivationAlgorithmNamesStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pbkdf2Md5(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pbkdf2Sha1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pbkdf2Sha256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pbkdf2Sha384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pbkdf2Sha512(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sp800108CtrHmacMd5(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sp800108CtrHmacSha1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sp800108CtrHmacSha256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sp800108CtrHmacSha384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sp800108CtrHmacSha512(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sp80056aConcatMd5(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sp80056aConcatSha1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sp80056aConcatSha256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sp80056aConcatSha384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Sp80056aConcatSha512(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyDerivationAlgorithmNamesStatics=_uuidof(IKeyDerivationAlgorithmNamesStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2[] = L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("57953FAB-6044-466F-97F4-337B7808384D"), exclusiveto, contract] */
                    MIDL_INTERFACE("57953FAB-6044-466F-97F4-337B7808384D")
                    IKeyDerivationAlgorithmNamesStatics2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CapiKdfMd5(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CapiKdfSha1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CapiKdfSha256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CapiKdfSha384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CapiKdfSha512(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyDerivationAlgorithmNamesStatics2=_uuidof(IKeyDerivationAlgorithmNamesStatics2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProvider";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("E1FBA83B-4671-43B7-9158-763AAA98B6BF"), exclusiveto, contract] */
                    MIDL_INTERFACE("E1FBA83B-4671-43B7-9158-763AAA98B6BF")
                    IKeyDerivationAlgorithmProvider : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlgorithmName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateKey(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * keyMaterial,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * * key
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyDerivationAlgorithmProvider=_uuidof(IKeyDerivationAlgorithmProvider);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProviderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProviderStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("0A22097A-0A1C-443B-9418-B9498AEB1603"), exclusiveto, contract] */
                    MIDL_INTERFACE("0A22097A-0A1C-443B-9418-B9498AEB1603")
                    IKeyDerivationAlgorithmProviderStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE OpenAlgorithm(
                            /* [in] */__RPC__in HSTRING algorithm,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::IKeyDerivationAlgorithmProvider * * provider
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyDerivationAlgorithmProviderStatics=_uuidof(IKeyDerivationAlgorithmProviderStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationParameters[] = L"Windows.Security.Cryptography.Core.IKeyDerivationParameters";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("7BF05967-047B-4A8C-964A-469FFD5522E2"), exclusiveto, contract] */
                    MIDL_INTERFACE("7BF05967-047B-4A8C-964A-469FFD5522E2")
                    IKeyDerivationParameters : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_KdfGenericBinary(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_KdfGenericBinary(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_IterationCount(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyDerivationParameters=_uuidof(IKeyDerivationParameters);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationParameters2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationParameters2[] = L"Windows.Security.Cryptography.Core.IKeyDerivationParameters2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("CD4166D1-417E-4F4C-B666-C0D879F3F8E0"), exclusiveto, contract] */
                    MIDL_INTERFACE("CD4166D1-417E-4F4C-B666-C0D879F3F8E0")
                    IKeyDerivationParameters2 : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Capi1KdfTargetAlgorithm(
                            /* [retval, out] */__RPC__out ABI::Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Capi1KdfTargetAlgorithm(
                            /* [in] */ABI::Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyDerivationParameters2=_uuidof(IKeyDerivationParameters2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics[] = L"Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("EA961FBE-F37F-4146-9DFE-A456F1735F4B"), exclusiveto, contract] */
                    MIDL_INTERFACE("EA961FBE-F37F-4146-9DFE-A456F1735F4B")
                    IKeyDerivationParametersStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE BuildForPbkdf2(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * pbkdf2Salt,
                            /* [in] */UINT32 iterationCount,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::IKeyDerivationParameters * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE BuildForSP800108(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * label,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * context,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::IKeyDerivationParameters * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE BuildForSP80056a(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * algorithmId,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * partyUInfo,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * partyVInfo,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * suppPubInfo,
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * suppPrivInfo,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::IKeyDerivationParameters * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyDerivationParametersStatics=_uuidof(IKeyDerivationParametersStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics2[] = L"Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("A5783DD5-58E3-4EFB-B283-A1653126E1BE"), exclusiveto, contract] */
                    MIDL_INTERFACE("A5783DD5-58E3-4EFB-B283-A1653126E1BE")
                    IKeyDerivationParametersStatics2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE BuildForCapi1Kdf(
                            /* [in] */ABI::Windows::Security::Cryptography::Core::Capi1KdfTargetAlgorithm capi1KdfTargetAlgorithm,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::IKeyDerivationParameters * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IKeyDerivationParametersStatics2=_uuidof(IKeyDerivationParametersStatics2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IMacAlgorithmNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.MacAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.IMacAlgorithmNamesStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("41412678-FB1E-43A4-895E-A9026E4390A3"), exclusiveto, contract] */
                    MIDL_INTERFACE("41412678-FB1E-43A4-895E-A9026E4390A3")
                    IMacAlgorithmNamesStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HmacMd5(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HmacSha1(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HmacSha256(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HmacSha384(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_HmacSha512(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AesCmac(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMacAlgorithmNamesStatics=_uuidof(IMacAlgorithmNamesStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IMacAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.MacAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IMacAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.IMacAlgorithmProvider";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("4A3FC5C3-1CBD-41CE-A092-AA0BC5D2D2F5"), exclusiveto, contract] */
                    MIDL_INTERFACE("4A3FC5C3-1CBD-41CE-A092-AA0BC5D2D2F5")
                    IMacAlgorithmProvider : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlgorithmName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MacLength(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateKey(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * keyMaterial,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * * macKey
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMacAlgorithmProvider=_uuidof(IMacAlgorithmProvider);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IMacAlgorithmProvider2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.MacAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IMacAlgorithmProvider2[] = L"Windows.Security.Cryptography.Core.IMacAlgorithmProvider2";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("6DA32A15-D931-42ED-8E7E-C301CAEE119C"), exclusiveto, contract] */
                    MIDL_INTERFACE("6DA32A15-D931-42ED-8E7E-C301CAEE119C")
                    IMacAlgorithmProvider2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateHash(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * keyMaterial,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::IHashComputation * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMacAlgorithmProvider2=_uuidof(IMacAlgorithmProvider2);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IMacAlgorithmProviderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.MacAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IMacAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.IMacAlgorithmProviderStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("C9BDC147-CC77-4DF0-9E4E-B921E080644C"), exclusiveto, contract] */
                    MIDL_INTERFACE("C9BDC147-CC77-4DF0-9E4E-B921E080644C")
                    IMacAlgorithmProviderStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE OpenAlgorithm(
                            /* [in] */__RPC__in HSTRING algorithm,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::IMacAlgorithmProvider * * provider
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IMacAlgorithmProviderStatics=_uuidof(IMacAlgorithmProviderStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IPersistedKeyProviderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.PersistedKeyProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IPersistedKeyProviderStatics[] = L"Windows.Security.Cryptography.Core.IPersistedKeyProviderStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("77274814-D9D4-4CF5-B668-E0457DF30894"), exclusiveto, contract] */
                    MIDL_INTERFACE("77274814-D9D4-4CF5-B668-E0457DF30894")
                    IPersistedKeyProviderStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE OpenKeyPairFromCertificateAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * certificate,
                            /* [in] */__RPC__in HSTRING hashAlgorithmName,
                            /* [in] */ABI::Windows::Security::Cryptography::Core::CryptographicPadding padding,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * * operation
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE OpenPublicKeyFromCertificate(
                            /* [in] */__RPC__in_opt ABI::Windows::Security::Cryptography::Certificates::ICertificate * certificate,
                            /* [in] */__RPC__in HSTRING hashAlgorithmName,
                            /* [in] */ABI::Windows::Security::Cryptography::Core::CryptographicPadding padding,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * * key
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IPersistedKeyProviderStatics=_uuidof(IPersistedKeyProviderStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.ISymmetricAlgorithmNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.SymmetricAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.ISymmetricAlgorithmNamesStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("6870727B-C996-4EAE-84D7-79B2AEB73B9C"), exclusiveto, contract] */
                    MIDL_INTERFACE("6870727B-C996-4EAE-84D7-79B2AEB73B9C")
                    ISymmetricAlgorithmNamesStatics : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesCbc(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesEcb(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TripleDesCbc(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TripleDesEcb(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rc2Cbc(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rc2Ecb(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AesCbc(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AesEcb(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AesGcm(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AesCcm(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AesCbcPkcs7(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AesEcbPkcs7(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesCbcPkcs7(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DesEcbPkcs7(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TripleDesCbcPkcs7(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TripleDesEcbPkcs7(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rc2CbcPkcs7(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rc2EcbPkcs7(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Rc4(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISymmetricAlgorithmNamesStatics=_uuidof(ISymmetricAlgorithmNamesStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.SymmetricKeyAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProvider";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("3D7E4A33-3BD0-4902-8AC8-470D50D21376"), exclusiveto, contract] */
                    MIDL_INTERFACE("3D7E4A33-3BD0-4902-8AC8-470D50D21376")
                    ISymmetricKeyAlgorithmProvider : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AlgorithmName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_BlockLength(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateSymmetricKey(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * keyMaterial,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::ICryptographicKey * * key
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISymmetricKeyAlgorithmProvider=_uuidof(ISymmetricKeyAlgorithmProvider);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProviderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.SymmetricKeyAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProviderStatics";
namespace ABI {
    namespace Windows {
        namespace Security {
            namespace Cryptography {
                namespace Core {
                    /* [object, uuid("8D3B2326-1F37-491F-B60E-F5431B26B483"), exclusiveto, contract] */
                    MIDL_INTERFACE("8D3B2326-1F37-491F-B60E-F5431B26B483")
                    ISymmetricKeyAlgorithmProviderStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE OpenAlgorithm(
                            /* [in] */__RPC__in HSTRING algorithm,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Security::Cryptography::Core::ISymmetricKeyAlgorithmProvider * * provider
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_ISymmetricKeyAlgorithmProviderStatics=_uuidof(ISymmetricKeyAlgorithmProviderStatics);
                    
                } /* Windows */
            } /* Security */
        } /* Cryptography */
    } /* Core */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.AsymmetricAlgorithmNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_AsymmetricAlgorithmNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_AsymmetricAlgorithmNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_AsymmetricAlgorithmNames[] = L"Windows.Security.Cryptography.Core.AsymmetricAlgorithmNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProviderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider ** Default Interface **
 *    Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_AsymmetricKeyAlgorithmProvider_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_AsymmetricKeyAlgorithmProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_AsymmetricKeyAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.CryptographicEngine
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.ICryptographicEngineStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Core.ICryptographicEngineStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_CryptographicEngine_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_CryptographicEngine_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_CryptographicEngine[] = L"Windows.Security.Cryptography.Core.CryptographicEngine";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.CryptographicHash
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IHashComputation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_CryptographicHash_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_CryptographicHash_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_CryptographicHash[] = L"Windows.Security.Cryptography.Core.CryptographicHash";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.CryptographicKey
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.ICryptographicKey ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_CryptographicKey_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_CryptographicKey_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_CryptographicKey[] = L"Windows.Security.Cryptography.Core.CryptographicKey";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.EccCurveNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IEccCurveNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_EccCurveNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_EccCurveNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_EccCurveNames[] = L"Windows.Security.Cryptography.Core.EccCurveNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.EncryptedAndAuthenticatedData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IEncryptedAndAuthenticatedData ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_EncryptedAndAuthenticatedData_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_EncryptedAndAuthenticatedData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_EncryptedAndAuthenticatedData[] = L"Windows.Security.Cryptography.Core.EncryptedAndAuthenticatedData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.HashAlgorithmNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IHashAlgorithmNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_HashAlgorithmNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_HashAlgorithmNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_HashAlgorithmNames[] = L"Windows.Security.Cryptography.Core.HashAlgorithmNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.HashAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IHashAlgorithmProviderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IHashAlgorithmProvider ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_HashAlgorithmProvider_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_HashAlgorithmProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_HashAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.HashAlgorithmProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.KeyDerivationAlgorithmNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmNames[] = L"Windows.Security.Cryptography.Core.KeyDerivationAlgorithmNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.KeyDerivationAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProviderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProvider ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmProvider_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.KeyDerivationAlgorithmProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.KeyDerivationParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IKeyDerivationParameters ** Default Interface **
 *    Windows.Security.Cryptography.Core.IKeyDerivationParameters2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_KeyDerivationParameters_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_KeyDerivationParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_KeyDerivationParameters[] = L"Windows.Security.Cryptography.Core.KeyDerivationParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.MacAlgorithmNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IMacAlgorithmNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_MacAlgorithmNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_MacAlgorithmNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_MacAlgorithmNames[] = L"Windows.Security.Cryptography.Core.MacAlgorithmNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.MacAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IMacAlgorithmProviderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IMacAlgorithmProvider ** Default Interface **
 *    Windows.Security.Cryptography.Core.IMacAlgorithmProvider2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_MacAlgorithmProvider_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_MacAlgorithmProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_MacAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.MacAlgorithmProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.PersistedKeyProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IPersistedKeyProviderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_PersistedKeyProvider_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_PersistedKeyProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_PersistedKeyProvider[] = L"Windows.Security.Cryptography.Core.PersistedKeyProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.SymmetricAlgorithmNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.ISymmetricAlgorithmNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_SymmetricAlgorithmNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_SymmetricAlgorithmNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_SymmetricAlgorithmNames[] = L"Windows.Security.Cryptography.Core.SymmetricAlgorithmNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.SymmetricKeyAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProviderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProvider ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_SymmetricKeyAlgorithmProvider_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_SymmetricKeyAlgorithmProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_SymmetricKeyAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.SymmetricKeyAlgorithmProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey;

typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl;

interface __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKeyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

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






#ifndef ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;

#endif // ____x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate_FWD_DEFINED__











typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCapi1KdfTargetAlgorithm __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCapi1KdfTargetAlgorithm;


typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPadding __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPadding;


typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPrivateKeyBlobType __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPrivateKeyBlobType;


typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType;


























































/*
 *
 * Struct Windows.Security.Cryptography.Core.Capi1KdfTargetAlgorithm
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCapi1KdfTargetAlgorithm
{
    Capi1KdfTargetAlgorithm_NotAes = 0,
    Capi1KdfTargetAlgorithm_Aes = 1,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Core.CryptographicPadding
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPadding
{
    CryptographicPadding_None = 0,
    CryptographicPadding_RsaOaep = 1,
    CryptographicPadding_RsaPkcs1V15 = 2,
    CryptographicPadding_RsaPss = 3,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Core.CryptographicPrivateKeyBlobType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPrivateKeyBlobType
{
    CryptographicPrivateKeyBlobType_Pkcs8RawPrivateKeyInfo = 0,
    CryptographicPrivateKeyBlobType_Pkcs1RsaPrivateKey = 1,
    CryptographicPrivateKeyBlobType_BCryptPrivateKey = 2,
    CryptographicPrivateKeyBlobType_Capi1PrivateKey = 3,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    CryptographicPrivateKeyBlobType_BCryptEccFullPrivateKey = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.Security.Cryptography.Core.CryptographicPublicKeyBlobType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType
{
    CryptographicPublicKeyBlobType_X509SubjectPublicKeyInfo = 0,
    CryptographicPublicKeyBlobType_Pkcs1RsaPublicKey = 1,
    CryptographicPublicKeyBlobType_BCryptPublicKey = 2,
    CryptographicPublicKeyBlobType_Capi1PublicKey = 3,
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
    CryptographicPublicKeyBlobType_BCryptEccFullPublicKey = 4,
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
    
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.AsymmetricAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics";
/* [object, uuid("CAF6FCE4-67C0-46AA-84F9-752E77449F9B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RsaPkcs1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RsaOaepSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RsaOaepSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RsaOaepSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RsaOaepSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EcdsaP256Sha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EcdsaP384Sha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EcdsaP521Sha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DsaSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DsaSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RsaSignPkcs1Sha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RsaSignPkcs1Sha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RsaSignPkcs1Sha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RsaSignPkcs1Sha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RsaSignPssSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RsaSignPssSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RsaSignPssSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RsaSignPssSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_RsaPkcs1(This,value) \
    ( (This)->lpVtbl->get_RsaPkcs1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_RsaOaepSha1(This,value) \
    ( (This)->lpVtbl->get_RsaOaepSha1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_RsaOaepSha256(This,value) \
    ( (This)->lpVtbl->get_RsaOaepSha256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_RsaOaepSha384(This,value) \
    ( (This)->lpVtbl->get_RsaOaepSha384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_RsaOaepSha512(This,value) \
    ( (This)->lpVtbl->get_RsaOaepSha512(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_EcdsaP256Sha256(This,value) \
    ( (This)->lpVtbl->get_EcdsaP256Sha256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_EcdsaP384Sha384(This,value) \
    ( (This)->lpVtbl->get_EcdsaP384Sha384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_EcdsaP521Sha512(This,value) \
    ( (This)->lpVtbl->get_EcdsaP521Sha512(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_DsaSha1(This,value) \
    ( (This)->lpVtbl->get_DsaSha1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_DsaSha256(This,value) \
    ( (This)->lpVtbl->get_DsaSha256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_RsaSignPkcs1Sha1(This,value) \
    ( (This)->lpVtbl->get_RsaSignPkcs1Sha1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_RsaSignPkcs1Sha256(This,value) \
    ( (This)->lpVtbl->get_RsaSignPkcs1Sha256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_RsaSignPkcs1Sha384(This,value) \
    ( (This)->lpVtbl->get_RsaSignPkcs1Sha384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_RsaSignPkcs1Sha512(This,value) \
    ( (This)->lpVtbl->get_RsaSignPkcs1Sha512(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_RsaSignPssSha1(This,value) \
    ( (This)->lpVtbl->get_RsaSignPssSha1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_RsaSignPssSha256(This,value) \
    ( (This)->lpVtbl->get_RsaSignPssSha256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_RsaSignPssSha384(This,value) \
    ( (This)->lpVtbl->get_RsaSignPssSha384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_get_RsaSignPssSha512(This,value) \
    ( (This)->lpVtbl->get_RsaSignPssSha512(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.AsymmetricAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricAlgorithmNamesStatics2[] = L"Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics2";
/* [object, uuid("F141C0D6-4BFF-4F23-BA66-6045B137D5DF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EcdsaSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EcdsaSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EcdsaSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_get_EcdsaSha256(This,value) \
    ( (This)->lpVtbl->get_EcdsaSha256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_get_EcdsaSha384(This,value) \
    ( (This)->lpVtbl->get_EcdsaSha384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_get_EcdsaSha512(This,value) \
    ( (This)->lpVtbl->get_EcdsaSha512(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricAlgorithmNamesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider";
/* [object, uuid("E8D2FF37-6259-4E88-B7E0-94191FDE699E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateKeyPair )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
        /* [in] */UINT32 keySize,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ImportDefaultPrivateKeyBlob )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyBlob,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ImportKeyPairWithBlobType )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyBlob,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPrivateKeyBlobType BlobType,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ImportDefaultPublicKeyBlob )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyBlob,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ImportPublicKeyWithBlobType )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyBlob,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType BlobType,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_get_AlgorithmName(This,value) \
    ( (This)->lpVtbl->get_AlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_CreateKeyPair(This,keySize,key) \
    ( (This)->lpVtbl->CreateKeyPair(This,keySize,key) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_ImportDefaultPrivateKeyBlob(This,keyBlob,key) \
    ( (This)->lpVtbl->ImportDefaultPrivateKeyBlob(This,keyBlob,key) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_ImportKeyPairWithBlobType(This,keyBlob,BlobType,key) \
    ( (This)->lpVtbl->ImportKeyPairWithBlobType(This,keyBlob,BlobType,key) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_ImportDefaultPublicKeyBlob(This,keyBlob,key) \
    ( (This)->lpVtbl->ImportDefaultPublicKeyBlob(This,keyBlob,key) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_ImportPublicKeyWithBlobType(This,keyBlob,BlobType,key) \
    ( (This)->lpVtbl->ImportPublicKeyWithBlobType(This,keyBlob,BlobType,key) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProvider2[] = L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider2";
/* [object, uuid("4E322A7E-7C4D-4997-AC4F-1B848B36306E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateKeyPairWithCurveName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This,
        /* [in] */__RPC__in HSTRING curveName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    HRESULT ( STDMETHODCALLTYPE *CreateKeyPairWithCurveParameters )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2 * This,
        /* [in, range(0, 65536)] */__RPC__in_range(0,0x10000) UINT32 __parametersSize,
        /* [size_is(__parametersSize), in] */__RPC__in_ecount_full(__parametersSize) BYTE * parameters,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_CreateKeyPairWithCurveName(This,curveName,key) \
    ( (This)->lpVtbl->CreateKeyPairWithCurveName(This,curveName,key) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_CreateKeyPairWithCurveParameters(This,__parametersSize,parameters,key) \
    ( (This)->lpVtbl->CreateKeyPairWithCurveParameters(This,__parametersSize,parameters,key) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProviderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IAsymmetricKeyAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProviderStatics";
/* [object, uuid("425BDE18-A7F3-47A6-A8D2-C48D6033A65C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics * This,
        /* [in] */__RPC__in HSTRING algorithm,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProvider * * provider
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_OpenAlgorithm(This,algorithm,provider) \
    ( (This)->lpVtbl->OpenAlgorithm(This,algorithm,provider) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIAsymmetricKeyAlgorithmProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.ICryptographicEngineStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.CryptographicEngine
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ICryptographicEngineStatics[] = L"Windows.Security.Cryptography.Core.ICryptographicEngineStatics";
/* [object, uuid("9FEA0639-6FF7-4C85-A095-95EB31715EB9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Encrypt )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * iv,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Decrypt )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * iv,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *EncryptAndAuthenticate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * nonce,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * authenticatedData,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * * value
        );
    HRESULT ( STDMETHODCALLTYPE *DecryptAndAuthenticate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * nonce,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * authenticationTag,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * authenticatedData,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Sign )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *VerifySignature )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * signature,
        /* [retval, out] */__RPC__out boolean * isAuthenticated
        );
    HRESULT ( STDMETHODCALLTYPE *DeriveKeyMaterial )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * parameters,
        /* [in] */UINT32 desiredKeySize,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * keyMaterial
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_Encrypt(This,key,data,iv,value) \
    ( (This)->lpVtbl->Encrypt(This,key,data,iv,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_Decrypt(This,key,data,iv,value) \
    ( (This)->lpVtbl->Decrypt(This,key,data,iv,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_EncryptAndAuthenticate(This,key,data,nonce,authenticatedData,value) \
    ( (This)->lpVtbl->EncryptAndAuthenticate(This,key,data,nonce,authenticatedData,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_DecryptAndAuthenticate(This,key,data,nonce,authenticationTag,authenticatedData,value) \
    ( (This)->lpVtbl->DecryptAndAuthenticate(This,key,data,nonce,authenticationTag,authenticatedData,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_Sign(This,key,data,value) \
    ( (This)->lpVtbl->Sign(This,key,data,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_VerifySignature(This,key,data,signature,isAuthenticated) \
    ( (This)->lpVtbl->VerifySignature(This,key,data,signature,isAuthenticated) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_DeriveKeyMaterial(This,key,parameters,desiredKeySize,keyMaterial) \
    ( (This)->lpVtbl->DeriveKeyMaterial(This,key,parameters,desiredKeySize,keyMaterial) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.ICryptographicEngineStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.CryptographicEngine
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ICryptographicEngineStatics2[] = L"Windows.Security.Cryptography.Core.ICryptographicEngineStatics2";
/* [object, uuid("675948FE-DF9F-4191-92C7-6CE6F58420E0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SignHashedData )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *VerifySignatureWithHashInput )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * signature,
        /* [retval, out] */__RPC__out boolean * isAuthenticated
        );
    HRESULT ( STDMETHODCALLTYPE *DecryptAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * iv,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SignAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SignHashedDataAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * key,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_SignHashedData(This,key,data,value) \
    ( (This)->lpVtbl->SignHashedData(This,key,data,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_VerifySignatureWithHashInput(This,key,data,signature,isAuthenticated) \
    ( (This)->lpVtbl->VerifySignatureWithHashInput(This,key,data,signature,isAuthenticated) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_DecryptAsync(This,key,data,iv,value) \
    ( (This)->lpVtbl->DecryptAsync(This,key,data,iv,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_SignAsync(This,key,data,value) \
    ( (This)->lpVtbl->SignAsync(This,key,data,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_SignHashedDataAsync(This,key,data,value) \
    ( (This)->lpVtbl->SignHashedDataAsync(This,key,data,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicEngineStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.ICryptographicKey
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.CryptographicKey
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ICryptographicKey[] = L"Windows.Security.Cryptography.Core.ICryptographicKey";
/* [object, uuid("ED2A3B70-8E7B-4009-8401-FFD1A62EEB27"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKeyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KeySize )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ExportDefaultPrivateKeyBlobType )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ExportPrivateKeyWithBlobType )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPrivateKeyBlobType BlobType,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ExportDefaultPublicKeyBlobType )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *ExportPublicKeyWithBlobType )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPublicKeyBlobType BlobType,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKeyVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKeyVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_get_KeySize(This,value) \
    ( (This)->lpVtbl->get_KeySize(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_ExportDefaultPrivateKeyBlobType(This,value) \
    ( (This)->lpVtbl->ExportDefaultPrivateKeyBlobType(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_ExportPrivateKeyWithBlobType(This,BlobType,value) \
    ( (This)->lpVtbl->ExportPrivateKeyWithBlobType(This,BlobType,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_ExportDefaultPublicKeyBlobType(This,value) \
    ( (This)->lpVtbl->ExportDefaultPublicKeyBlobType(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_ExportPublicKeyWithBlobType(This,BlobType,value) \
    ( (This)->lpVtbl->ExportPublicKeyWithBlobType(This,BlobType,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IEccCurveNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.EccCurveNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IEccCurveNamesStatics[] = L"Windows.Security.Cryptography.Core.IEccCurveNamesStatics";
/* [object, uuid("B3FF930C-AEEB-409E-B7D4-9B95295AAECF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP160r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP160t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP192r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP192t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP224r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP224t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP256r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP256t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP320r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP320t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP384r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP384t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP512r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BrainpoolP512t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Curve25519 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Ec192wapi )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NistP192 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NistP224 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NistP256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NistP384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NistP521 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NumsP256t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NumsP384t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NumsP512t1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecP160k1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecP160r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecP160r2 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecP192k1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecP192r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecP224k1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecP224r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecP256k1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecP256r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecP384r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SecP521r1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Wtls7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Wtls9 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Wtls12 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_X962P192v1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_X962P192v2 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_X962P192v3 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_X962P239v1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_X962P239v2 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_X962P239v3 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_X962P256v1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AllEccCurveNames )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP160r1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP160r1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP160t1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP160t1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP192r1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP192r1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP192t1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP192t1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP224r1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP224r1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP224t1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP224t1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP256r1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP256r1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP256t1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP256t1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP320r1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP320r1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP320t1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP320t1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP384r1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP384r1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP384t1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP384t1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP512r1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP512r1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_BrainpoolP512t1(This,value) \
    ( (This)->lpVtbl->get_BrainpoolP512t1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_Curve25519(This,value) \
    ( (This)->lpVtbl->get_Curve25519(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_Ec192wapi(This,value) \
    ( (This)->lpVtbl->get_Ec192wapi(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_NistP192(This,value) \
    ( (This)->lpVtbl->get_NistP192(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_NistP224(This,value) \
    ( (This)->lpVtbl->get_NistP224(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_NistP256(This,value) \
    ( (This)->lpVtbl->get_NistP256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_NistP384(This,value) \
    ( (This)->lpVtbl->get_NistP384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_NistP521(This,value) \
    ( (This)->lpVtbl->get_NistP521(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_NumsP256t1(This,value) \
    ( (This)->lpVtbl->get_NumsP256t1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_NumsP384t1(This,value) \
    ( (This)->lpVtbl->get_NumsP384t1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_NumsP512t1(This,value) \
    ( (This)->lpVtbl->get_NumsP512t1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_SecP160k1(This,value) \
    ( (This)->lpVtbl->get_SecP160k1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_SecP160r1(This,value) \
    ( (This)->lpVtbl->get_SecP160r1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_SecP160r2(This,value) \
    ( (This)->lpVtbl->get_SecP160r2(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_SecP192k1(This,value) \
    ( (This)->lpVtbl->get_SecP192k1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_SecP192r1(This,value) \
    ( (This)->lpVtbl->get_SecP192r1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_SecP224k1(This,value) \
    ( (This)->lpVtbl->get_SecP224k1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_SecP224r1(This,value) \
    ( (This)->lpVtbl->get_SecP224r1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_SecP256k1(This,value) \
    ( (This)->lpVtbl->get_SecP256k1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_SecP256r1(This,value) \
    ( (This)->lpVtbl->get_SecP256r1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_SecP384r1(This,value) \
    ( (This)->lpVtbl->get_SecP384r1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_SecP521r1(This,value) \
    ( (This)->lpVtbl->get_SecP521r1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_Wtls7(This,value) \
    ( (This)->lpVtbl->get_Wtls7(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_Wtls9(This,value) \
    ( (This)->lpVtbl->get_Wtls9(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_Wtls12(This,value) \
    ( (This)->lpVtbl->get_Wtls12(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_X962P192v1(This,value) \
    ( (This)->lpVtbl->get_X962P192v1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_X962P192v2(This,value) \
    ( (This)->lpVtbl->get_X962P192v2(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_X962P192v3(This,value) \
    ( (This)->lpVtbl->get_X962P192v3(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_X962P239v1(This,value) \
    ( (This)->lpVtbl->get_X962P239v1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_X962P239v2(This,value) \
    ( (This)->lpVtbl->get_X962P239v2(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_X962P239v3(This,value) \
    ( (This)->lpVtbl->get_X962P239v3(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_X962P256v1(This,value) \
    ( (This)->lpVtbl->get_X962P256v1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_get_AllEccCurveNames(This,value) \
    ( (This)->lpVtbl->get_AllEccCurveNames(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEccCurveNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IEncryptedAndAuthenticatedData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.EncryptedAndAuthenticatedData
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IEncryptedAndAuthenticatedData[] = L"Windows.Security.Cryptography.Core.IEncryptedAndAuthenticatedData";
/* [object, uuid("6FA42FE7-1ECB-4B00-BEA5-60B83F862F17"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_EncryptedData )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AuthenticationTag )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedDataVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_get_EncryptedData(This,value) \
    ( (This)->lpVtbl->get_EncryptedData(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_get_AuthenticationTag(This,value) \
    ( (This)->lpVtbl->get_AuthenticationTag(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIEncryptedAndAuthenticatedData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IHashAlgorithmNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.HashAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IHashAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.IHashAlgorithmNamesStatics";
/* [object, uuid("6B5E0516-DE96-4F0A-8D57-DCC9DAE36C76"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Md5 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_get_Md5(This,value) \
    ( (This)->lpVtbl->get_Md5(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_get_Sha1(This,value) \
    ( (This)->lpVtbl->get_Sha1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_get_Sha256(This,value) \
    ( (This)->lpVtbl->get_Sha256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_get_Sha384(This,value) \
    ( (This)->lpVtbl->get_Sha384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_get_Sha512(This,value) \
    ( (This)->lpVtbl->get_Sha512(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IHashAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.HashAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IHashAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.IHashAlgorithmProvider";
/* [object, uuid("BE9B3080-B2C3-422B-BCE1-EC90EFB5D7B5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HashLength )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *HashData )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateHash )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * * Value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_get_AlgorithmName(This,value) \
    ( (This)->lpVtbl->get_AlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_get_HashLength(This,value) \
    ( (This)->lpVtbl->get_HashLength(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_HashData(This,data,value) \
    ( (This)->lpVtbl->HashData(This,data,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_CreateHash(This,Value) \
    ( (This)->lpVtbl->CreateHash(This,Value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IHashAlgorithmProviderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.HashAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IHashAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.IHashAlgorithmProviderStatics";
/* [object, uuid("9FAC9741-5CC4-4336-AE38-6212B75A915A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics * This,
        /* [in] */__RPC__in HSTRING algorithm,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProvider * * provider
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_OpenAlgorithm(This,algorithm,provider) \
    ( (This)->lpVtbl->OpenAlgorithm(This,algorithm,provider) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashAlgorithmProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IHashComputation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.CryptographicHash
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IHashComputation[] = L"Windows.Security.Cryptography.Core.IHashComputation";
/* [object, uuid("5904D1B6-AD31-4603-A3A4-B1BDA98E2562"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Append )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data
        );
    HRESULT ( STDMETHODCALLTYPE *GetValueAndReset )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputationVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_Append(This,data) \
    ( (This)->lpVtbl->Append(This,data) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_GetValueAndReset(This,value) \
    ( (This)->lpVtbl->GetValueAndReset(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics";
/* [object, uuid("7B6E363E-94D2-4739-A57B-022E0C3A402A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pbkdf2Md5 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pbkdf2Sha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pbkdf2Sha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pbkdf2Sha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pbkdf2Sha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sp800108CtrHmacMd5 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sp800108CtrHmacSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sp800108CtrHmacSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sp800108CtrHmacSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sp800108CtrHmacSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sp80056aConcatMd5 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sp80056aConcatSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sp80056aConcatSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sp80056aConcatSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Sp80056aConcatSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Pbkdf2Md5(This,value) \
    ( (This)->lpVtbl->get_Pbkdf2Md5(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Pbkdf2Sha1(This,value) \
    ( (This)->lpVtbl->get_Pbkdf2Sha1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Pbkdf2Sha256(This,value) \
    ( (This)->lpVtbl->get_Pbkdf2Sha256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Pbkdf2Sha384(This,value) \
    ( (This)->lpVtbl->get_Pbkdf2Sha384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Pbkdf2Sha512(This,value) \
    ( (This)->lpVtbl->get_Pbkdf2Sha512(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Sp800108CtrHmacMd5(This,value) \
    ( (This)->lpVtbl->get_Sp800108CtrHmacMd5(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Sp800108CtrHmacSha1(This,value) \
    ( (This)->lpVtbl->get_Sp800108CtrHmacSha1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Sp800108CtrHmacSha256(This,value) \
    ( (This)->lpVtbl->get_Sp800108CtrHmacSha256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Sp800108CtrHmacSha384(This,value) \
    ( (This)->lpVtbl->get_Sp800108CtrHmacSha384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Sp800108CtrHmacSha512(This,value) \
    ( (This)->lpVtbl->get_Sp800108CtrHmacSha512(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Sp80056aConcatMd5(This,value) \
    ( (This)->lpVtbl->get_Sp80056aConcatMd5(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Sp80056aConcatSha1(This,value) \
    ( (This)->lpVtbl->get_Sp80056aConcatSha1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Sp80056aConcatSha256(This,value) \
    ( (This)->lpVtbl->get_Sp80056aConcatSha256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Sp80056aConcatSha384(This,value) \
    ( (This)->lpVtbl->get_Sp80056aConcatSha384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_get_Sp80056aConcatSha512(This,value) \
    ( (This)->lpVtbl->get_Sp80056aConcatSha512(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmNamesStatics2[] = L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics2";
/* [object, uuid("57953FAB-6044-466F-97F4-337B7808384D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CapiKdfMd5 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CapiKdfSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CapiKdfSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CapiKdfSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CapiKdfSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2 * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_get_CapiKdfMd5(This,value) \
    ( (This)->lpVtbl->get_CapiKdfMd5(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_get_CapiKdfSha1(This,value) \
    ( (This)->lpVtbl->get_CapiKdfSha1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_get_CapiKdfSha256(This,value) \
    ( (This)->lpVtbl->get_CapiKdfSha256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_get_CapiKdfSha384(This,value) \
    ( (This)->lpVtbl->get_CapiKdfSha384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_get_CapiKdfSha512(This,value) \
    ( (This)->lpVtbl->get_CapiKdfSha512(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmNamesStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProvider";
/* [object, uuid("E1FBA83B-4671-43B7-9158-763AAA98B6BF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateKey )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyMaterial,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_get_AlgorithmName(This,value) \
    ( (This)->lpVtbl->get_AlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_CreateKey(This,keyMaterial,key) \
    ( (This)->lpVtbl->CreateKey(This,keyMaterial,key) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProviderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProviderStatics";
/* [object, uuid("0A22097A-0A1C-443B-9418-B9498AEB1603"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics * This,
        /* [in] */__RPC__in HSTRING algorithm,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProvider * * provider
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_OpenAlgorithm(This,algorithm,provider) \
    ( (This)->lpVtbl->OpenAlgorithm(This,algorithm,provider) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationAlgorithmProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationParameters[] = L"Windows.Security.Cryptography.Core.IKeyDerivationParameters";
/* [object, uuid("7BF05967-047B-4A8C-964A-469FFD5522E2"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_KdfGenericBinary )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_KdfGenericBinary )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_IterationCount )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_get_KdfGenericBinary(This,value) \
    ( (This)->lpVtbl->get_KdfGenericBinary(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_put_KdfGenericBinary(This,value) \
    ( (This)->lpVtbl->put_KdfGenericBinary(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_get_IterationCount(This,value) \
    ( (This)->lpVtbl->get_IterationCount(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationParameters2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationParameters2[] = L"Windows.Security.Cryptography.Core.IKeyDerivationParameters2";
/* [object, uuid("CD4166D1-417E-4F4C-B666-C0D879F3F8E0"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Capi1KdfTargetAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCore_CCapi1KdfTargetAlgorithm * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Capi1KdfTargetAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2 * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCore_CCapi1KdfTargetAlgorithm value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_get_Capi1KdfTargetAlgorithm(This,value) \
    ( (This)->lpVtbl->get_Capi1KdfTargetAlgorithm(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_put_Capi1KdfTargetAlgorithm(This,value) \
    ( (This)->lpVtbl->put_Capi1KdfTargetAlgorithm(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics[] = L"Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics";
/* [object, uuid("EA961FBE-F37F-4146-9DFE-A456F1735F4B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *BuildForPbkdf2 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * pbkdf2Salt,
        /* [in] */UINT32 iterationCount,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * * value
        );
    HRESULT ( STDMETHODCALLTYPE *BuildForSP800108 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * label,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * context,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * * value
        );
    HRESULT ( STDMETHODCALLTYPE *BuildForSP80056a )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * algorithmId,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * partyUInfo,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * partyVInfo,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * suppPubInfo,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * suppPrivInfo,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_BuildForPbkdf2(This,pbkdf2Salt,iterationCount,value) \
    ( (This)->lpVtbl->BuildForPbkdf2(This,pbkdf2Salt,iterationCount,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_BuildForSP800108(This,label,context,value) \
    ( (This)->lpVtbl->BuildForSP800108(This,label,context,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_BuildForSP80056a(This,algorithmId,partyUInfo,partyVInfo,suppPubInfo,suppPrivInfo,value) \
    ( (This)->lpVtbl->BuildForSP80056a(This,algorithmId,partyUInfo,partyVInfo,suppPubInfo,suppPrivInfo,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.KeyDerivationParameters
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IKeyDerivationParametersStatics2[] = L"Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics2";
/* [object, uuid("A5783DD5-58E3-4EFB-B283-A1653126E1BE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *BuildForCapi1Kdf )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2 * This,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCore_CCapi1KdfTargetAlgorithm capi1KdfTargetAlgorithm,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParameters * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_BuildForCapi1Kdf(This,capi1KdfTargetAlgorithm,value) \
    ( (This)->lpVtbl->BuildForCapi1Kdf(This,capi1KdfTargetAlgorithm,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIKeyDerivationParametersStatics2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IMacAlgorithmNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.MacAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IMacAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.IMacAlgorithmNamesStatics";
/* [object, uuid("41412678-FB1E-43A4-895E-A9026E4390A3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HmacMd5 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HmacSha1 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HmacSha256 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HmacSha384 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_HmacSha512 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AesCmac )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_get_HmacMd5(This,value) \
    ( (This)->lpVtbl->get_HmacMd5(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_get_HmacSha1(This,value) \
    ( (This)->lpVtbl->get_HmacSha1(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_get_HmacSha256(This,value) \
    ( (This)->lpVtbl->get_HmacSha256(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_get_HmacSha384(This,value) \
    ( (This)->lpVtbl->get_HmacSha384(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_get_HmacSha512(This,value) \
    ( (This)->lpVtbl->get_HmacSha512(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_get_AesCmac(This,value) \
    ( (This)->lpVtbl->get_AesCmac(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IMacAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.MacAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IMacAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.IMacAlgorithmProvider";
/* [object, uuid("4A3FC5C3-1CBD-41CE-A092-AA0BC5D2D2F5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MacLength )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateKey )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyMaterial,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * macKey
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_get_AlgorithmName(This,value) \
    ( (This)->lpVtbl->get_AlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_get_MacLength(This,value) \
    ( (This)->lpVtbl->get_MacLength(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_CreateKey(This,keyMaterial,macKey) \
    ( (This)->lpVtbl->CreateKey(This,keyMaterial,macKey) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IMacAlgorithmProvider2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.MacAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IMacAlgorithmProvider2[] = L"Windows.Security.Cryptography.Core.IMacAlgorithmProvider2";
/* [object, uuid("6DA32A15-D931-42ED-8E7E-C301CAEE119C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateHash )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyMaterial,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIHashComputation * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2Vtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_CreateHash(This,keyMaterial,value) \
    ( (This)->lpVtbl->CreateHash(This,keyMaterial,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IMacAlgorithmProviderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.MacAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IMacAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.IMacAlgorithmProviderStatics";
/* [object, uuid("C9BDC147-CC77-4DF0-9E4E-B921E080644C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics * This,
        /* [in] */__RPC__in HSTRING algorithm,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProvider * * provider
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_OpenAlgorithm(This,algorithm,provider) \
    ( (This)->lpVtbl->OpenAlgorithm(This,algorithm,provider) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIMacAlgorithmProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.IPersistedKeyProviderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.PersistedKeyProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_IPersistedKeyProviderStatics[] = L"Windows.Security.Cryptography.Core.IPersistedKeyProviderStatics";
/* [object, uuid("77274814-D9D4-4CF5-B668-E0457DF30894"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenKeyPairFromCertificateAsync )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate,
        /* [in] */__RPC__in HSTRING hashAlgorithmName,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPadding padding,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCryptography__CCore__CCryptographicKey * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *OpenPublicKeyFromCertificate )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate,
        /* [in] */__RPC__in HSTRING hashAlgorithmName,
        /* [in] */__x_ABI_CWindows_CSecurity_CCryptography_CCore_CCryptographicPadding padding,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_OpenKeyPairFromCertificateAsync(This,certificate,hashAlgorithmName,padding,operation) \
    ( (This)->lpVtbl->OpenKeyPairFromCertificateAsync(This,certificate,hashAlgorithmName,padding,operation) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_OpenPublicKeyFromCertificate(This,certificate,hashAlgorithmName,padding,key) \
    ( (This)->lpVtbl->OpenPublicKeyFromCertificate(This,certificate,hashAlgorithmName,padding,key) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CIPersistedKeyProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.ISymmetricAlgorithmNamesStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.SymmetricAlgorithmNames
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ISymmetricAlgorithmNamesStatics[] = L"Windows.Security.Cryptography.Core.ISymmetricAlgorithmNamesStatics";
/* [object, uuid("6870727B-C996-4EAE-84D7-79B2AEB73B9C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesCbc )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesEcb )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TripleDesCbc )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TripleDesEcb )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rc2Cbc )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rc2Ecb )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AesCbc )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AesEcb )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AesGcm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AesCcm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AesCbcPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AesEcbPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesCbcPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DesEcbPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TripleDesCbcPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TripleDesEcbPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rc2CbcPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rc2EcbPkcs7 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Rc4 )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_DesCbc(This,value) \
    ( (This)->lpVtbl->get_DesCbc(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_DesEcb(This,value) \
    ( (This)->lpVtbl->get_DesEcb(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_TripleDesCbc(This,value) \
    ( (This)->lpVtbl->get_TripleDesCbc(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_TripleDesEcb(This,value) \
    ( (This)->lpVtbl->get_TripleDesEcb(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_Rc2Cbc(This,value) \
    ( (This)->lpVtbl->get_Rc2Cbc(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_Rc2Ecb(This,value) \
    ( (This)->lpVtbl->get_Rc2Ecb(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_AesCbc(This,value) \
    ( (This)->lpVtbl->get_AesCbc(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_AesEcb(This,value) \
    ( (This)->lpVtbl->get_AesEcb(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_AesGcm(This,value) \
    ( (This)->lpVtbl->get_AesGcm(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_AesCcm(This,value) \
    ( (This)->lpVtbl->get_AesCcm(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_AesCbcPkcs7(This,value) \
    ( (This)->lpVtbl->get_AesCbcPkcs7(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_AesEcbPkcs7(This,value) \
    ( (This)->lpVtbl->get_AesEcbPkcs7(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_DesCbcPkcs7(This,value) \
    ( (This)->lpVtbl->get_DesCbcPkcs7(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_DesEcbPkcs7(This,value) \
    ( (This)->lpVtbl->get_DesEcbPkcs7(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_TripleDesCbcPkcs7(This,value) \
    ( (This)->lpVtbl->get_TripleDesCbcPkcs7(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_TripleDesEcbPkcs7(This,value) \
    ( (This)->lpVtbl->get_TripleDesEcbPkcs7(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_Rc2CbcPkcs7(This,value) \
    ( (This)->lpVtbl->get_Rc2CbcPkcs7(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_Rc2EcbPkcs7(This,value) \
    ( (This)->lpVtbl->get_Rc2EcbPkcs7(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_get_Rc4(This,value) \
    ( (This)->lpVtbl->get_Rc4(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricAlgorithmNamesStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.SymmetricKeyAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProvider";
/* [object, uuid("3D7E4A33-3BD0-4902-8AC8-470D50D21376"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AlgorithmName )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_BlockLength )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSymmetricKey )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * keyMaterial,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CICryptographicKey * * key
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_get_AlgorithmName(This,value) \
    ( (This)->lpVtbl->get_AlgorithmName(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_get_BlockLength(This,value) \
    ( (This)->lpVtbl->get_BlockLength(This,value) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_CreateSymmetricKey(This,keyMaterial,key) \
    ( (This)->lpVtbl->CreateSymmetricKey(This,keyMaterial,key) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProviderStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Security.Cryptography.Core.SymmetricKeyAlgorithmProvider
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_Core_ISymmetricKeyAlgorithmProviderStatics[] = L"Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProviderStatics";
/* [object, uuid("8D3B2326-1F37-491F-B60E-F5431B26B483"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *OpenAlgorithm )(
        __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics * This,
        /* [in] */__RPC__in HSTRING algorithm,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProvider * * provider
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStaticsVtbl;

interface __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_OpenAlgorithm(This,algorithm,provider) \
    ( (This)->lpVtbl->OpenAlgorithm(This,algorithm,provider) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics;
#endif /* !defined(____x_ABI_CWindows_CSecurity_CCryptography_CCore_CISymmetricKeyAlgorithmProviderStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.AsymmetricAlgorithmNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IAsymmetricAlgorithmNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_AsymmetricAlgorithmNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_AsymmetricAlgorithmNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_AsymmetricAlgorithmNames[] = L"Windows.Security.Cryptography.Core.AsymmetricAlgorithmNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProviderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider ** Default Interface **
 *    Windows.Security.Cryptography.Core.IAsymmetricKeyAlgorithmProvider2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_AsymmetricKeyAlgorithmProvider_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_AsymmetricKeyAlgorithmProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_AsymmetricKeyAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.AsymmetricKeyAlgorithmProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.CryptographicEngine
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.ICryptographicEngineStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Core.ICryptographicEngineStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_CryptographicEngine_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_CryptographicEngine_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_CryptographicEngine[] = L"Windows.Security.Cryptography.Core.CryptographicEngine";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.CryptographicHash
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IHashComputation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_CryptographicHash_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_CryptographicHash_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_CryptographicHash[] = L"Windows.Security.Cryptography.Core.CryptographicHash";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.CryptographicKey
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.ICryptographicKey ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_CryptographicKey_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_CryptographicKey_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_CryptographicKey[] = L"Windows.Security.Cryptography.Core.CryptographicKey";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.EccCurveNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IEccCurveNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_EccCurveNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_EccCurveNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_EccCurveNames[] = L"Windows.Security.Cryptography.Core.EccCurveNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.EncryptedAndAuthenticatedData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IEncryptedAndAuthenticatedData ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_EncryptedAndAuthenticatedData_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_EncryptedAndAuthenticatedData_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_EncryptedAndAuthenticatedData[] = L"Windows.Security.Cryptography.Core.EncryptedAndAuthenticatedData";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.HashAlgorithmNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IHashAlgorithmNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_HashAlgorithmNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_HashAlgorithmNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_HashAlgorithmNames[] = L"Windows.Security.Cryptography.Core.HashAlgorithmNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.HashAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IHashAlgorithmProviderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IHashAlgorithmProvider ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_HashAlgorithmProvider_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_HashAlgorithmProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_HashAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.HashAlgorithmProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.KeyDerivationAlgorithmNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmNames[] = L"Windows.Security.Cryptography.Core.KeyDerivationAlgorithmNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.KeyDerivationAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProviderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IKeyDerivationAlgorithmProvider ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmProvider_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_KeyDerivationAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.KeyDerivationAlgorithmProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.KeyDerivationParameters
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics2 interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IKeyDerivationParametersStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IKeyDerivationParameters ** Default Interface **
 *    Windows.Security.Cryptography.Core.IKeyDerivationParameters2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_KeyDerivationParameters_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_KeyDerivationParameters_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_KeyDerivationParameters[] = L"Windows.Security.Cryptography.Core.KeyDerivationParameters";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.MacAlgorithmNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IMacAlgorithmNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_MacAlgorithmNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_MacAlgorithmNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_MacAlgorithmNames[] = L"Windows.Security.Cryptography.Core.MacAlgorithmNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.MacAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IMacAlgorithmProviderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.IMacAlgorithmProvider ** Default Interface **
 *    Windows.Security.Cryptography.Core.IMacAlgorithmProvider2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_MacAlgorithmProvider_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_MacAlgorithmProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_MacAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.MacAlgorithmProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.PersistedKeyProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.IPersistedKeyProviderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_PersistedKeyProvider_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_PersistedKeyProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_PersistedKeyProvider[] = L"Windows.Security.Cryptography.Core.PersistedKeyProvider";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.SymmetricAlgorithmNames
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.ISymmetricAlgorithmNamesStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_SymmetricAlgorithmNames_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_SymmetricAlgorithmNames_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_SymmetricAlgorithmNames[] = L"Windows.Security.Cryptography.Core.SymmetricAlgorithmNames";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Security.Cryptography.Core.SymmetricKeyAlgorithmProvider
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProviderStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Security.Cryptography.Core.ISymmetricKeyAlgorithmProvider ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Security_Cryptography_Core_SymmetricKeyAlgorithmProvider_DEFINED
#define RUNTIMECLASS_Windows_Security_Cryptography_Core_SymmetricKeyAlgorithmProvider_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_Core_SymmetricKeyAlgorithmProvider[] = L"Windows.Security.Cryptography.Core.SymmetricKeyAlgorithmProvider";
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
#endif // __windows2Esecurity2Ecryptography2Ecore_p_h__

#endif // __windows2Esecurity2Ecryptography2Ecore_h__
