/* Header file automatically generated from windows.applicationmodel.voicecommands.idl */
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
#ifndef __windows2Eapplicationmodel2Evoicecommands_h__
#define __windows2Eapplicationmodel2Evoicecommands_h__
#ifndef __windows2Eapplicationmodel2Evoicecommands_p_h__
#define __windows2Eapplicationmodel2Evoicecommands_p_h__


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
#include "Windows.ApplicationModel.AppService.h"
#include "Windows.Globalization.h"
#include "Windows.Media.SpeechRecognition.h"
#include "Windows.Storage.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                interface IVoiceCommand;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommand

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                interface IVoiceCommandCompletedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                interface IVoiceCommandConfirmationResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                interface IVoiceCommandContentTile;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                interface IVoiceCommandDefinition;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                interface IVoiceCommandDefinitionManagerStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinitionManagerStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                interface IVoiceCommandDisambiguationResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                interface IVoiceCommandResponse;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                interface IVoiceCommandResponseStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponseStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                interface IVoiceCommandServiceConnection;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                interface IVoiceCommandServiceConnectionStatics;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnectionStatics

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                interface IVoiceCommandUserMessage;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                class VoiceCommandContentTile;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_USE
#define DEF___FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("968d589c-0710-52f0-85ed-112fac4cff35"))
IIterator<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile*> : IIterator_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile*> __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_t;
#define __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile*>
//#define __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_USE
#define DEF___FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bd13249b-8099-5573-bf74-7457796e92e5"))
IIterable<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile*> : IIterable_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile*> __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_t;
#define __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile*>
//#define __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                class VoiceCommandDefinition;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_USE
#define DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a932bfda-2ce5-5012-ae83-f397976e4a86"))
IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition*> : IKeyValuePair_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition*> __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_t;
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition*>
//#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("91fbb58b-fb9c-5165-a1bf-815d2767300d"))
IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition*> : IIterator_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition*> __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("67693dd1-ac45-5ef3-9ba6-4d78709d9ee0"))
IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition*> : IIterable_impl<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition*> __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_USE
#define DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("4c1168f0-a0b2-5312-b99a-471abd334e85"))
IMapView<HSTRING,ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition*> : IMapView_impl<HSTRING,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandDefinition*> __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_t;
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition*>
//#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDefinition*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_USE
#define DEF___FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("cb2c6693-1fc9-5b95-99b5-7239679619b9"))
IVectorView<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile*> : IVectorView_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile*> __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_t;
#define __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile*>
//#define __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_USE
#define DEF___FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("e45fe700-ea08-5172-b88c-c4b3e048c3e8"))
IVector<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile*> : IVector_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVector`1<Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTile>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVector<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTile*> __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_t;
#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile ABI::Windows::Foundation::Collections::__FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile*>
//#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_t ABI::Windows::Foundation::Collections::IVector<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                class VoiceCommand;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("1024f849-b4a1-52e6-b771-6d2f08c30e63"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommand*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommand*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.VoiceCommands.VoiceCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommand*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommand*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("815f1854-4d79-570d-9b57-5b47e282cd66"))
IAsyncOperation<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommand*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommand*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommand*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.VoiceCommands.VoiceCommand>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommand*> __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommand*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommand*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                class VoiceCommandConfirmationResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f5244cb8-f912-50c9-b218-d7a0403971aa"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.VoiceCommands.VoiceCommandConfirmationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("3b39db5f-d2a4-5d88-851f-e9a0ea0d947e"))
IAsyncOperation<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.VoiceCommands.VoiceCommandConfirmationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandConfirmationResult*> __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandConfirmationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                class VoiceCommandDisambiguationResult;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("46b96890-2942-5564-82d8-31a4851bd7b8"))
IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.ApplicationModel.VoiceCommands.VoiceCommandDisambiguationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult*> __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_USE
#define DEF___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("b03d44c8-060f-5b98-953a-fd1eb1d46abc"))
IAsyncOperation<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.ApplicationModel.VoiceCommands.VoiceCommandDisambiguationResult>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandDisambiguationResult*> __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_t;
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult*>
//#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandDisambiguationResult*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                class VoiceCommandServiceConnection;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                class VoiceCommandCompletedEventArgs;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("780a6352-b400-5767-993b-90875710d937"))
ITypedEventHandler<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection*,ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs*, ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.ApplicationModel.VoiceCommands.VoiceCommandServiceConnection, Windows.ApplicationModel.VoiceCommands.VoiceCommandCompletedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandServiceConnection*,ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletedEventArgs*> __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection*,ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection*,ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandCompletedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs_USE */


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





#ifndef DEF___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_USE
#define DEF___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("bcde03ad-ea71-5077-a961-1c0ecff57202"))
IKeyValuePair<HSTRING,__FIVectorView_1_HSTRING*> : IKeyValuePair_impl<HSTRING,__FIVectorView_1_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.Collections.IVectorView`1<String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IKeyValuePair<HSTRING,__FIVectorView_1_HSTRING*> __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_t;
#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
//#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_USE */





#ifndef DEF___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_USE
#define DEF___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("643b6d83-457e-5a43-800f-b0449f91d96b"))
IIterator<__FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING*> : IIterator_impl<__FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.Collections.IVectorView`1<String>>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<__FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING*> __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_t;
#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>*>
//#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_USE */





#ifndef DEF___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_USE
#define DEF___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("a4cd6151-2cc1-56f1-9014-df6ba3410beb"))
IIterable<__FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING*> : IIterable_impl<__FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Foundation.Collections.IKeyValuePair`2<String, Windows.Foundation.Collections.IVectorView`1<String>>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<__FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING*> __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_t;
#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>*>
//#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Foundation::Collections::IKeyValuePair<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_USE */





#ifndef DEF___FIMapView_2_HSTRING___FIVectorView_1_HSTRING_USE
#define DEF___FIMapView_2_HSTRING___FIVectorView_1_HSTRING_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("2843d34f-d3e5-5fca-9fdc-b568dd5c1e64"))
IMapView<HSTRING,__FIVectorView_1_HSTRING*> : IMapView_impl<HSTRING,__FIVectorView_1_HSTRING*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IMapView`2<String, Windows.Foundation.Collections.IVectorView`1<String>>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IMapView<HSTRING,__FIVectorView_1_HSTRING*> __FIMapView_2_HSTRING___FIVectorView_1_HSTRING_t;
#define __FIMapView_2_HSTRING___FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::__FIMapView_2_HSTRING___FIVectorView_1_HSTRING_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIMapView_2_HSTRING___FIVectorView_1_HSTRING ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
//#define __FIMapView_2_HSTRING___FIVectorView_1_HSTRING_t ABI::Windows::Foundation::Collections::IMapView<HSTRING,ABI::Windows::Foundation::Collections::IVectorView<HSTRING>*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIMapView_2_HSTRING___FIVectorView_1_HSTRING_USE */





namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                class AppServiceTriggerDetails;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */

#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace AppService {
                interface IAppServiceTriggerDetails;
            } /* Windows */
        } /* ApplicationModel */
    } /* AppService */} /* ABI */
#define __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails ABI::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_FWD_DEFINED__





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
        namespace Globalization {
            class Language;
        } /* Windows */
    } /* Globalization */} /* ABI */

#ifndef ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Globalization {
            interface ILanguage;
        } /* Windows */
    } /* Globalization */} /* ABI */
#define __x_ABI_CWindows_CGlobalization_CILanguage ABI::Windows::Globalization::ILanguage

#endif // ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__




namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechRecognition {
                class SpeechRecognitionResult;
            } /* Windows */
        } /* Media */
    } /* SpeechRecognition */} /* ABI */

#ifndef ____x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Media {
            namespace SpeechRecognition {
                interface ISpeechRecognitionResult;
            } /* Windows */
        } /* Media */
    } /* SpeechRecognition */} /* ABI */
#define __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult ABI::Windows::Media::SpeechRecognition::ISpeechRecognitionResult

#endif // ____x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Storage {
            interface IStorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */
#define __x_ABI_CWindows_CStorage_CIStorageFile ABI::Windows::Storage::IStorageFile

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Storage {
            class StorageFile;
        } /* Windows */
    } /* Storage */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                
                typedef enum VoiceCommandCompletionReason : int VoiceCommandCompletionReason;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */

namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                
                typedef enum VoiceCommandContentTileType : int VoiceCommandContentTileType;
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */




















namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                class VoiceCommandResponse;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                class VoiceCommandUserMessage;
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */










/*
 *
 * Struct Windows.ApplicationModel.VoiceCommands.VoiceCommandCompletionReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [v1_enum, contract] */
                enum VoiceCommandCompletionReason : int
                {
                    VoiceCommandCompletionReason_Unknown = 0,
                    VoiceCommandCompletionReason_CommunicationFailed = 1,
                    VoiceCommandCompletionReason_ResourceLimitsExceeded = 2,
                    VoiceCommandCompletionReason_Canceled = 3,
                    VoiceCommandCompletionReason_TimeoutExceeded = 4,
                    VoiceCommandCompletionReason_AppLaunched = 5,
                    VoiceCommandCompletionReason_Completed = 6,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTileType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [v1_enum, contract] */
                enum VoiceCommandContentTileType : int
                {
                    VoiceCommandContentTileType_TitleOnly = 0,
                    VoiceCommandContentTileType_TitleWithText = 1,
                    VoiceCommandContentTileType_TitleWith68x68Icon = 2,
                    VoiceCommandContentTileType_TitleWith68x68IconAndText = 3,
                    VoiceCommandContentTileType_TitleWith68x92Icon = 4,
                    VoiceCommandContentTileType_TitleWith68x92IconAndText = 5,
                    VoiceCommandContentTileType_TitleWith280x140Icon = 6,
                    VoiceCommandContentTileType_TitleWith280x140IconAndText = 7,
                };
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommand[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommand";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [object, uuid("936F5273-EC82-42A6-A55C-D2D79EC6F920"), exclusiveto, contract] */
                MIDL_INTERFACE("936F5273-EC82-42A6-A55C-D2D79EC6F920")
                IVoiceCommand : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_CommandName(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Properties(
                        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpeechRecognitionResult(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Media::SpeechRecognition::ISpeechRecognitionResult * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceCommand=_uuidof(IVoiceCommand);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandCompletedEventArgs[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandCompletedEventArgs";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [object, uuid("C85E675D-FE42-432C-9907-09DF9FCF64E8"), exclusiveto, contract] */
                MIDL_INTERFACE("C85E675D-FE42-432C-9907-09DF9FCF64E8")
                IVoiceCommandCompletedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Reason(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandCompletionReason * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceCommandCompletedEventArgs=_uuidof(IVoiceCommandCompletedEventArgs);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandConfirmationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandConfirmationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandConfirmationResult[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandConfirmationResult";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [object, uuid("A022593E-8221-4526-B083-840972262247"), exclusiveto, contract] */
                MIDL_INTERFACE("A022593E-8221-4526-B083-840972262247")
                IVoiceCommandConfirmationResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Confirmed(
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceCommandConfirmationResult=_uuidof(IVoiceCommandConfirmationResult);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandContentTile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandContentTile";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [object, uuid("3EEFE9F0-B8C7-4C76-A0DE-1607895EE327"), exclusiveto, contract] */
                MIDL_INTERFACE("3EEFE9F0-B8C7-4C76-A0DE-1607895EE327")
                IVoiceCommandContentTile : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Title(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Title(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextLine1(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TextLine1(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextLine2(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TextLine2(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TextLine3(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_TextLine3(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Image(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::IStorageFile * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Image(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppContext(
                        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AppContext(
                        /* [in] */__RPC__in_opt IInspectable * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppLaunchArgument(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AppLaunchArgument(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ContentTileType(
                        /* [retval, out] */__RPC__out ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTileType * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ContentTileType(
                        /* [in] */ABI::Windows::ApplicationModel::VoiceCommands::VoiceCommandContentTileType value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceCommandContentTile=_uuidof(IVoiceCommandContentTile);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinition[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinition";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [object, uuid("7972AAD0-0974-4979-984B-CB8959CD61AE"), exclusiveto, contract] */
                MIDL_INTERFACE("7972AAD0-0974-4979-984B-CB8959CD61AE")
                IVoiceCommandDefinition : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Language(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SetPhraseListAsync(
                        /* [in] */__RPC__in HSTRING phraseListName,
                        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * phraseList,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * updateAction
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceCommandDefinition=_uuidof(IVoiceCommandDefinition);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinitionManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinitionManagerStatics[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinitionManagerStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [object, uuid("8FE7A69E-067E-4F16-A18C-5B17E9499940"), exclusiveto, contract] */
                MIDL_INTERFACE("8FE7A69E-067E-4F16-A18C-5B17E9499940")
                IVoiceCommandDefinitionManagerStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE InstallCommandDefinitionsFromStorageFileAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * installAction
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InstalledCommandDefinitions(
                        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * * voiceCommandDefinitions
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceCommandDefinitionManagerStatics=_uuidof(IVoiceCommandDefinitionManagerStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandDisambiguationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandDisambiguationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDisambiguationResult[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandDisambiguationResult";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [object, uuid("ECC68CFE-C9AC-45DF-A8EA-FEEA08EF9C5E"), exclusiveto, contract] */
                MIDL_INTERFACE("ECC68CFE-C9AC-45DF-A8EA-FEEA08EF9C5E")
                IVoiceCommandDisambiguationResult : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SelectedItem(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandContentTile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceCommandDisambiguationResult=_uuidof(IVoiceCommandDisambiguationResult);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponse[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponse";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [object, uuid("0284B30E-8A3B-4CC4-A6A1-CAD5BE2716B5"), exclusiveto, contract] */
                MIDL_INTERFACE("0284B30E-8A3B-4CC4-A6A1-CAD5BE2716B5")
                IVoiceCommandResponse : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Message(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RepeatMessage(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage * * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_RepeatMessage(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AppLaunchArgument(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_AppLaunchArgument(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_VoiceCommandContentTiles(
                        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceCommandResponse=_uuidof(IVoiceCommandResponse);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponseStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponseStatics[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponseStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [object, uuid("2932F813-0D3B-49F2-96DD-625019BD3B5D"), exclusiveto, contract] */
                MIDL_INTERFACE("2932F813-0D3B-49F2-96DD-625019BD3B5D")
                IVoiceCommandResponseStatics : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxSupportedVoiceCommandContentTiles(
                        /* [retval, out] */__RPC__out UINT32 * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateResponse(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage * userMessage,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse * * response
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateResponseWithTiles(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage * message,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * contentTiles,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse * * response
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateResponseForPrompt(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage * message,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage * repeatMessage,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse * * response
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateResponseForPromptWithTiles(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage * message,
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandUserMessage * repeatMessage,
                        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * contentTiles,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse * * response
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceCommandResponseStatics=_uuidof(IVoiceCommandResponseStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandServiceConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnection";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [object, uuid("D894BB9F-21DA-44A4-98A2-FB131920A9CC"), exclusiveto, contract] */
                MIDL_INTERFACE("D894BB9F-21DA-44A4-98A2-FB131920A9CC")
                IVoiceCommandServiceConnection : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE GetVoiceCommandAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestConfirmationAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse * response,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestDisambiguationAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse * response,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * * operation
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReportProgressAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse * response,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReportSuccessAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse * response,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE ReportFailureAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse * response,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE RequestAppLaunchAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandResponse * response,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * action
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Language(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Globalization::ILanguage * * language
                        ) = 0;
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_VoiceCommandCompleted(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_VoiceCommandCompleted(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceCommandServiceConnection=_uuidof(IVoiceCommandServiceConnection);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnectionStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandServiceConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnectionStatics[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnectionStatics";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [object, uuid("370EBFFB-2D34-42DF-8770-074D0F334697"), exclusiveto, contract] */
                MIDL_INTERFACE("370EBFFB-2D34-42DF-8770-074D0F334697")
                IVoiceCommandServiceConnectionStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromAppServiceTriggerDetails(
                        /* [in] */__RPC__in_opt ABI::Windows::ApplicationModel::AppService::IAppServiceTriggerDetails * triggerDetails,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::ApplicationModel::VoiceCommands::IVoiceCommandServiceConnection * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceCommandServiceConnectionStatics=_uuidof(IVoiceCommandServiceConnectionStatics);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandUserMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandUserMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandUserMessage[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandUserMessage";
namespace ABI {
    namespace Windows {
        namespace ApplicationModel {
            namespace VoiceCommands {
                /* [object, uuid("674EB3C0-44F6-4F07-B979-4C723FC08597"), exclusiveto, contract] */
                MIDL_INTERFACE("674EB3C0-44F6-4F07-B979-4C723FC08597")
                IVoiceCommandUserMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DisplayMessage(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_DisplayMessage(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SpokenMessage(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_SpokenMessage(
                        /* [in] */__RPC__in HSTRING value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IVoiceCommandUserMessage=_uuidof(IVoiceCommandUserMessage);
                
            } /* Windows */
        } /* ApplicationModel */
    } /* VoiceCommands */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommand ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommand_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommand[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommand";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandCompletedEventArgs[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandConfirmationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandConfirmationResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandConfirmationResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandConfirmationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandConfirmationResult[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandConfirmationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandContentTile ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandContentTile_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandContentTile_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandContentTile[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTile";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinition ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinition_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinition[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinitionManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinitionManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinitionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinitionManager[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandDisambiguationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandDisambiguationResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandDisambiguationResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandDisambiguationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandDisambiguationResult[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandDisambiguationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponseStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponse ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandResponse_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandResponse[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandResponse";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandServiceConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnectionStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnection ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandServiceConnection_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandServiceConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandServiceConnection[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandServiceConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandUserMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandUserMessage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandUserMessage_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandUserMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandUserMessage[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandUserMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand;

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs;

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult;

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile;

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition;

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult;

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse;

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection;

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics;

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage;

#endif // ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;

typedef struct __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl;

interface __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;

typedef  struct __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile **first);

    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl;

interface __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;

typedef struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl;

interface __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition;

typedef struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl;

interface __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;

typedef struct __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
            /* [in] */ __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl;

interface __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_INTERFACE_DEFINED__)
#define ____FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_INTERFACE_DEFINED__

typedef interface __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile;

typedef struct __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, /* [out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
        /* [in] */ unsigned int index,
        /* [retval][out] */ __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *item);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
        __RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
        /* [retval][out] */ __RPC__out unsigned int *size);

    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile **view);

    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * item,
        /* [out] */ __RPC__out unsigned int *index,
        /* [retval][out] */ __RPC__out boolean *found);

    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * item);

    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
        /* [in] */ unsigned int index,
        /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * item);

    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, /* [in] */ unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This, /* [in] */ __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
        /* [in] */ unsigned int startIndex,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * This,
        /* [in] */ unsigned int count,
        /* [size_is][in] */ __RPC__in_ecount_full(count) __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * *value);

    END_INTERFACE
} __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl;

interface __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile
{
    CONST_VTBL struct __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTileVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetView(This,view)	\
    ( (This)->lpVtbl -> GetView(This,view) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_SetAt(This,index,item)	\
    ( (This)->lpVtbl -> SetAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_InsertAt(This,index,item)	\
    ( (This)->lpVtbl -> InsertAt(This,index,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_RemoveAt(This,index)	\
    ( (This)->lpVtbl -> RemoveAt(This,index) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_Append(This,item)	\
    ( (This)->lpVtbl -> Append(This,item) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_RemoveAtEnd(This)	\
    ( (This)->lpVtbl -> RemoveAtEnd(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_Clear(This)	\
    ( (This)->lpVtbl -> Clear(This) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#define __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_ReplaceAll(This,count,value)	\
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) ) 

#endif /* COBJMACROS */



#endif // ____FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResultVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResultVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResultVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult;

typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResultVtbl;

interface __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs_INTERFACE_DEFINED__

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



#if !defined(____FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;

typedef struct __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
            /* [out] */ __RPC__out ULONG *iidCount,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, /* [retval][out] */ __RPC__out HSTRING *key);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl;

interface __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_get_Key(This,key)	\
    ( (This)->lpVtbl -> get_Key(This,key) ) 

#define __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_get_Value(This,value)	\
    ( (This)->lpVtbl -> get_Value(This,value) ) 
#endif /* COBJMACROS */


#endif // ____FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;

typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, /* [retval][out] */ __RPC__out __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl;

interface __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING;

typedef  struct __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING **first);

    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl;

interface __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1___FIKeyValuePair_2_HSTRING___FIVectorView_1_HSTRING_INTERFACE_DEFINED__



#if !defined(____FIMapView_2_HSTRING___FIVectorView_1_HSTRING_INTERFACE_DEFINED__)
#define ____FIMapView_2_HSTRING___FIVectorView_1_HSTRING_INTERFACE_DEFINED__

typedef interface __FIMapView_2_HSTRING___FIVectorView_1_HSTRING __FIMapView_2_HSTRING___FIVectorView_1_HSTRING;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIMapView_2_HSTRING___FIVectorView_1_HSTRING;

typedef struct __FIMapView_2_HSTRING___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This,/* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This,
        /* [in] */ __RPC__in HSTRING key,
        /* [retval][out] */ __RPC__deref_out_opt __FIVectorView_1_HSTRING * *value);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This, /* [retval][out] */ __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This, /* [in] */ __RPC__in HSTRING key, /* [retval][out] */ __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * This,/* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_HSTRING **firstPartition,
        /* [out] */ __RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING___FIVectorView_1_HSTRINGVtbl;

interface __FIMapView_2_HSTRING___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIMapView_2_HSTRING___FIVectorView_1_HSTRING_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_HSTRING_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_HSTRING_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIMapView_2_HSTRING___FIVectorView_1_HSTRING_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_HSTRING_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_HSTRING_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIMapView_2_HSTRING___FIVectorView_1_HSTRING_Lookup(This,key,value)	\
    ( (This)->lpVtbl -> Lookup(This,key,value) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_HSTRING_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_HSTRING_HasKey(This,key,found)	\
    ( (This)->lpVtbl -> HasKey(This,key,found) ) 
#define __FIMapView_2_HSTRING___FIVectorView_1_HSTRING_Split(This,firstPartition,secondPartition)	\
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) ) 
#endif /* COBJMACROS */


#endif // ____FIMapView_2_HSTRING___FIVectorView_1_HSTRING_INTERFACE_DEFINED__



#ifndef ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_FWD_DEFINED__
#define ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails;

#endif // ____x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__
#define ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGlobalization_CILanguage __x_ABI_CWindows_CGlobalization_CILanguage;

#endif // ____x_ABI_CWindows_CGlobalization_CILanguage_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult_FWD_DEFINED__
#define ____x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult;

#endif // ____x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandCompletionReason __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandCompletionReason;


typedef enum __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandContentTileType __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandContentTileType;































/*
 *
 * Struct Windows.ApplicationModel.VoiceCommands.VoiceCommandCompletionReason
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandCompletionReason
{
    VoiceCommandCompletionReason_Unknown = 0,
    VoiceCommandCompletionReason_CommunicationFailed = 1,
    VoiceCommandCompletionReason_ResourceLimitsExceeded = 2,
    VoiceCommandCompletionReason_Canceled = 3,
    VoiceCommandCompletionReason_TimeoutExceeded = 4,
    VoiceCommandCompletionReason_AppLaunched = 5,
    VoiceCommandCompletionReason_Completed = 6,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Struct Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTileType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandContentTileType
{
    VoiceCommandContentTileType_TitleOnly = 0,
    VoiceCommandContentTileType_TitleWithText = 1,
    VoiceCommandContentTileType_TitleWith68x68Icon = 2,
    VoiceCommandContentTileType_TitleWith68x68IconAndText = 3,
    VoiceCommandContentTileType_TitleWith68x92Icon = 4,
    VoiceCommandContentTileType_TitleWith68x92IconAndText = 5,
    VoiceCommandContentTileType_TitleWith280x140Icon = 6,
    VoiceCommandContentTileType_TitleWith280x140IconAndText = 7,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommand
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommand[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommand";
/* [object, uuid("936F5273-EC82-42A6-A55C-D2D79EC6F920"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_CommandName )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING___FIVectorView_1_HSTRING * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpeechRecognitionResult )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CMedia_CSpeechRecognition_CISpeechRecognitionResult * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandVtbl;

interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_get_CommandName(This,value) \
    ( (This)->lpVtbl->get_CommandName(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_get_Properties(This,value) \
    ( (This)->lpVtbl->get_Properties(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_get_SpeechRecognitionResult(This,value) \
    ( (This)->lpVtbl->get_SpeechRecognitionResult(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommand_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandCompletedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandCompletedEventArgs[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandCompletedEventArgs";
/* [object, uuid("C85E675D-FE42-432C-9907-09DF9FCF64E8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandCompletionReason * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_get_Reason(This,value) \
    ( (This)->lpVtbl->get_Reason(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandCompletedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandConfirmationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandConfirmationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandConfirmationResult[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandConfirmationResult";
/* [object, uuid("A022593E-8221-4526-B083-840972262247"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Confirmed )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResultVtbl;

interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_get_Confirmed(This,value) \
    ( (This)->lpVtbl->get_Confirmed(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandConfirmationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandContentTile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTile
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandContentTile[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandContentTile";
/* [object, uuid("3EEFE9F0-B8C7-4C76-A0DE-1607895EE327"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextLine1 )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TextLine1 )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextLine2 )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TextLine2 )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TextLine3 )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_TextLine3 )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Image )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CIStorageFile * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Image )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppContext )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AppContext )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppLaunchArgument )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AppLaunchArgument )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ContentTileType )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandContentTileType * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ContentTileType )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * This,
        /* [in] */__x_ABI_CWindows_CApplicationModel_CVoiceCommands_CVoiceCommandContentTileType value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTileVtbl;

interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTileVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_get_Title(This,value) \
    ( (This)->lpVtbl->get_Title(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_put_Title(This,value) \
    ( (This)->lpVtbl->put_Title(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_get_TextLine1(This,value) \
    ( (This)->lpVtbl->get_TextLine1(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_put_TextLine1(This,value) \
    ( (This)->lpVtbl->put_TextLine1(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_get_TextLine2(This,value) \
    ( (This)->lpVtbl->get_TextLine2(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_put_TextLine2(This,value) \
    ( (This)->lpVtbl->put_TextLine2(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_get_TextLine3(This,value) \
    ( (This)->lpVtbl->get_TextLine3(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_put_TextLine3(This,value) \
    ( (This)->lpVtbl->put_TextLine3(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_get_Image(This,value) \
    ( (This)->lpVtbl->get_Image(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_put_Image(This,value) \
    ( (This)->lpVtbl->put_Image(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_get_AppContext(This,value) \
    ( (This)->lpVtbl->get_AppContext(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_put_AppContext(This,value) \
    ( (This)->lpVtbl->put_AppContext(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_get_AppLaunchArgument(This,value) \
    ( (This)->lpVtbl->get_AppLaunchArgument(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_put_AppLaunchArgument(This,value) \
    ( (This)->lpVtbl->put_AppLaunchArgument(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_get_ContentTileType(This,value) \
    ( (This)->lpVtbl->get_ContentTileType(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_put_ContentTileType(This,value) \
    ( (This)->lpVtbl->put_ContentTileType(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinition[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinition";
/* [object, uuid("7972AAD0-0974-4979-984B-CB8959CD61AE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPhraseListAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition * This,
        /* [in] */__RPC__in HSTRING phraseListName,
        /* [in] */__RPC__in_opt __FIIterable_1_HSTRING * phraseList,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * updateAction
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionVtbl;

interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_get_Language(This,value) \
    ( (This)->lpVtbl->get_Language(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_SetPhraseListAsync(This,phraseListName,phraseList,updateAction) \
    ( (This)->lpVtbl->SetPhraseListAsync(This,phraseListName,phraseList,updateAction) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinition_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinitionManagerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDefinitionManagerStatics[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinitionManagerStatics";
/* [object, uuid("8FE7A69E-067E-4F16-A18C-5B17E9499940"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *InstallCommandDefinitionsFromStorageFileAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * installAction
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InstalledCommandDefinitions )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDefinition * * voiceCommandDefinitions
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_InstallCommandDefinitionsFromStorageFileAsync(This,file,installAction) \
    ( (This)->lpVtbl->InstallCommandDefinitionsFromStorageFileAsync(This,file,installAction) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_get_InstalledCommandDefinitions(This,voiceCommandDefinitions) \
    ( (This)->lpVtbl->get_InstalledCommandDefinitions(This,voiceCommandDefinitions) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDefinitionManagerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandDisambiguationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandDisambiguationResult
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandDisambiguationResult[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandDisambiguationResult";
/* [object, uuid("ECC68CFE-C9AC-45DF-A8EA-FEEA08EF9C5E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SelectedItem )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandContentTile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResultVtbl;

interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResultVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_get_SelectedItem(This,value) \
    ( (This)->lpVtbl->get_SelectedItem(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandDisambiguationResult_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponse[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponse";
/* [object, uuid("0284B30E-8A3B-4CC4-A6A1-CAD5BE2716B5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Message )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RepeatMessage )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_RepeatMessage )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AppLaunchArgument )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_AppLaunchArgument )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_VoiceCommandContentTiles )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * This,
        /* [retval, out] */__RPC__deref_out_opt __FIVector_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseVtbl;

interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_put_Message(This,value) \
    ( (This)->lpVtbl->put_Message(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_get_RepeatMessage(This,value) \
    ( (This)->lpVtbl->get_RepeatMessage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_put_RepeatMessage(This,value) \
    ( (This)->lpVtbl->put_RepeatMessage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_get_AppLaunchArgument(This,value) \
    ( (This)->lpVtbl->get_AppLaunchArgument(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_put_AppLaunchArgument(This,value) \
    ( (This)->lpVtbl->put_AppLaunchArgument(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_get_VoiceCommandContentTiles(This,value) \
    ( (This)->lpVtbl->get_VoiceCommandContentTiles(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponseStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandResponse
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandResponseStatics[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponseStatics";
/* [object, uuid("2932F813-0D3B-49F2-96DD-625019BD3B5D"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxSupportedVoiceCommandContentTiles )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateResponse )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * userMessage,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * * response
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateResponseWithTiles )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * message,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * contentTiles,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * * response
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateResponseForPrompt )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * message,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * repeatMessage,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * * response
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateResponseForPromptWithTiles )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * message,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * repeatMessage,
        /* [in] */__RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandContentTile * contentTiles,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * * response
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_get_MaxSupportedVoiceCommandContentTiles(This,value) \
    ( (This)->lpVtbl->get_MaxSupportedVoiceCommandContentTiles(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_CreateResponse(This,userMessage,response) \
    ( (This)->lpVtbl->CreateResponse(This,userMessage,response) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_CreateResponseWithTiles(This,message,contentTiles,response) \
    ( (This)->lpVtbl->CreateResponseWithTiles(This,message,contentTiles,response) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_CreateResponseForPrompt(This,message,repeatMessage,response) \
    ( (This)->lpVtbl->CreateResponseForPrompt(This,message,repeatMessage,response) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_CreateResponseForPromptWithTiles(This,message,repeatMessage,contentTiles,response) \
    ( (This)->lpVtbl->CreateResponseForPromptWithTiles(This,message,repeatMessage,contentTiles,response) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponseStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandServiceConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnection[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnection";
/* [object, uuid("D894BB9F-21DA-44A4-98A2-FB131920A9CC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetVoiceCommandAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommand * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestConfirmationAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * response,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandConfirmationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *RequestDisambiguationAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * response,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandDisambiguationResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ReportProgressAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * response,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *ReportSuccessAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * response,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *ReportFailureAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * response,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAppLaunchAsync )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandResponse * response,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CILanguage * * language
        );
    /* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_VoiceCommandCompleted )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandServiceConnection_Windows__CApplicationModel__CVoiceCommands__CVoiceCommandCompletedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_VoiceCommandCompleted )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * This,
        /* [in] */EventRegistrationToken token
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionVtbl;

interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_GetVoiceCommandAsync(This,operation) \
    ( (This)->lpVtbl->GetVoiceCommandAsync(This,operation) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_RequestConfirmationAsync(This,response,operation) \
    ( (This)->lpVtbl->RequestConfirmationAsync(This,response,operation) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_RequestDisambiguationAsync(This,response,operation) \
    ( (This)->lpVtbl->RequestDisambiguationAsync(This,response,operation) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_ReportProgressAsync(This,response,action) \
    ( (This)->lpVtbl->ReportProgressAsync(This,response,action) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_ReportSuccessAsync(This,response,action) \
    ( (This)->lpVtbl->ReportSuccessAsync(This,response,action) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_ReportFailureAsync(This,response,action) \
    ( (This)->lpVtbl->ReportFailureAsync(This,response,action) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_RequestAppLaunchAsync(This,response,action) \
    ( (This)->lpVtbl->RequestAppLaunchAsync(This,response,action) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_get_Language(This,language) \
    ( (This)->lpVtbl->get_Language(This,language) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_add_VoiceCommandCompleted(This,handler,token) \
    ( (This)->lpVtbl->add_VoiceCommandCompleted(This,handler,token) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_remove_VoiceCommandCompleted(This,token) \
    ( (This)->lpVtbl->remove_VoiceCommandCompleted(This,token) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnectionStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandServiceConnection
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandServiceConnectionStatics[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnectionStatics";
/* [object, uuid("370EBFFB-2D34-42DF-8770-074D0F334697"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromAppServiceTriggerDetails )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceTriggerDetails * triggerDetails,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnection * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStaticsVtbl;

interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_FromAppServiceTriggerDetails(This,triggerDetails,value) \
    ( (This)->lpVtbl->FromAppServiceTriggerDetails(This,triggerDetails,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandServiceConnectionStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.ApplicationModel.VoiceCommands.IVoiceCommandUserMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.ApplicationModel.VoiceCommands.VoiceCommandUserMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_VoiceCommands_IVoiceCommandUserMessage[] = L"Windows.ApplicationModel.VoiceCommands.IVoiceCommandUserMessage";
/* [object, uuid("674EB3C0-44F6-4F07-B979-4C723FC08597"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DisplayMessage )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_DisplayMessage )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SpokenMessage )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_SpokenMessage )(
        __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessageVtbl;

interface __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_get_DisplayMessage(This,value) \
    ( (This)->lpVtbl->get_DisplayMessage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_put_DisplayMessage(This,value) \
    ( (This)->lpVtbl->put_DisplayMessage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_get_SpokenMessage(This,value) \
    ( (This)->lpVtbl->get_SpokenMessage(This,value) )

#define __x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_put_SpokenMessage(This,value) \
    ( (This)->lpVtbl->put_SpokenMessage(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage;
#endif /* !defined(____x_ABI_CWindows_CApplicationModel_CVoiceCommands_CIVoiceCommandUserMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommand
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommand ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommand_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommand_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommand[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommand";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandCompletedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandCompletedEventArgs ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandCompletedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandCompletedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandCompletedEventArgs[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandCompletedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandConfirmationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandConfirmationResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandConfirmationResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandConfirmationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandConfirmationResult[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandConfirmationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTile
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandContentTile ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandContentTile_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandContentTile_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandContentTile[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandContentTile";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinition ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinition_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinition_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinition[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinition";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.VoiceCommands.IVoiceCommandDefinitionManagerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinitionManager_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinitionManager_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandDefinitionManager[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandDefinitionManager";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandDisambiguationResult
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandDisambiguationResult ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandDisambiguationResult_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandDisambiguationResult_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandDisambiguationResult[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandDisambiguationResult";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandResponse
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponseStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandResponse ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandResponse_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandResponse_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandResponse[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandResponse";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandServiceConnection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnectionStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandServiceConnection ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandServiceConnection_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandServiceConnection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandServiceConnection[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandServiceConnection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.ApplicationModel.VoiceCommands.VoiceCommandUserMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.ApplicationModel.VoiceCommands.IVoiceCommandUserMessage ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandUserMessage_DEFINED
#define RUNTIMECLASS_Windows_ApplicationModel_VoiceCommands_VoiceCommandUserMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_VoiceCommands_VoiceCommandUserMessage[] = L"Windows.ApplicationModel.VoiceCommands.VoiceCommandUserMessage";
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
#endif // __windows2Eapplicationmodel2Evoicecommands_p_h__

#endif // __windows2Eapplicationmodel2Evoicecommands_h__
