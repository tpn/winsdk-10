/* Header file automatically generated from windows.devices.midi.idl */
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
#ifndef __windows2Edevices2Emidi_h__
#define __windows2Edevices2Emidi_h__
#ifndef __windows2Edevices2Emidi_p_h__
#define __windows2Edevices2Emidi_p_h__


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
#include "Windows.Devices.Enumeration.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiChannelPressureMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage ABI::Windows::Devices::Midi::IMidiChannelPressureMessage

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiChannelPressureMessageFactory;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory ABI::Windows::Devices::Midi::IMidiChannelPressureMessageFactory

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiControlChangeMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage ABI::Windows::Devices::Midi::IMidiControlChangeMessage

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiControlChangeMessageFactory;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory ABI::Windows::Devices::Midi::IMidiControlChangeMessageFactory

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiInPort;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort ABI::Windows::Devices::Midi::IMidiInPort

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiInPortStatics;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics ABI::Windows::Devices::Midi::IMidiInPortStatics

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage ABI::Windows::Devices::Midi::IMidiMessage

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiMessageReceivedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs ABI::Windows::Devices::Midi::IMidiMessageReceivedEventArgs

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiNoteOffMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage ABI::Windows::Devices::Midi::IMidiNoteOffMessage

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiNoteOffMessageFactory;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory ABI::Windows::Devices::Midi::IMidiNoteOffMessageFactory

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiNoteOnMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage ABI::Windows::Devices::Midi::IMidiNoteOnMessage

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiNoteOnMessageFactory;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory ABI::Windows::Devices::Midi::IMidiNoteOnMessageFactory

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiOutPort;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort ABI::Windows::Devices::Midi::IMidiOutPort

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiOutPortStatics;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics ABI::Windows::Devices::Midi::IMidiOutPortStatics

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiPitchBendChangeMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage ABI::Windows::Devices::Midi::IMidiPitchBendChangeMessage

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiPitchBendChangeMessageFactory;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory ABI::Windows::Devices::Midi::IMidiPitchBendChangeMessageFactory

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiPolyphonicKeyPressureMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage ABI::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiPolyphonicKeyPressureMessageFactory;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory ABI::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessageFactory

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiProgramChangeMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage ABI::Windows::Devices::Midi::IMidiProgramChangeMessage

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiProgramChangeMessageFactory;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory ABI::Windows::Devices::Midi::IMidiProgramChangeMessageFactory

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiSongPositionPointerMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage ABI::Windows::Devices::Midi::IMidiSongPositionPointerMessage

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiSongPositionPointerMessageFactory;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory ABI::Windows::Devices::Midi::IMidiSongPositionPointerMessageFactory

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiSongSelectMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage ABI::Windows::Devices::Midi::IMidiSongSelectMessage

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiSongSelectMessageFactory;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory ABI::Windows::Devices::Midi::IMidiSongSelectMessageFactory

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiSynthesizer;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer ABI::Windows::Devices::Midi::IMidiSynthesizer

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiSynthesizerStatics;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics ABI::Windows::Devices::Midi::IMidiSynthesizerStatics

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiSystemExclusiveMessageFactory;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory ABI::Windows::Devices::Midi::IMidiSystemExclusiveMessageFactory

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiTimeCodeMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage ABI::Windows::Devices::Midi::IMidiTimeCodeMessage

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                interface IMidiTimeCodeMessageFactory;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory ABI::Windows::Devices::Midi::IMidiTimeCodeMessageFactory

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("eed37805-2a49-59b4-b4d4-1188c6819122"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Midi::IMidiOutPort*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Devices::Midi::IMidiOutPort*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Midi.IMidiOutPort>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Midi::IMidiOutPort*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Midi::IMidiOutPort*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Midi::IMidiOutPort*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("32699a4d-1cc0-5a1c-9da6-875197875086"))
IAsyncOperation<ABI::Windows::Devices::Midi::IMidiOutPort*> : IAsyncOperation_impl<ABI::Windows::Devices::Midi::IMidiOutPort*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Midi.IMidiOutPort>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Midi::IMidiOutPort*> __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_t;
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Midi::IMidiOutPort*>
//#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Midi::IMidiOutPort*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiInPort;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("6c090fb2-8099-558f-8a92-9a8ea806e6fb"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Midi::MidiInPort*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Midi::MidiInPort*, ABI::Windows::Devices::Midi::IMidiInPort*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Midi.MidiInPort>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Midi::MidiInPort*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Midi::IMidiInPort*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Midi::IMidiInPort*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("cc664f0e-edb1-55c8-9ef7-ec9007e4561c"))
IAsyncOperation<ABI::Windows::Devices::Midi::MidiInPort*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Midi::MidiInPort*, ABI::Windows::Devices::Midi::IMidiInPort*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Midi.MidiInPort>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Midi::MidiInPort*> __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_t;
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Midi::IMidiInPort*>
//#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Midi::IMidiInPort*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiSynthesizer;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5d716335-d087-516f-ad0a-63f61cbcf342"))
IAsyncOperationCompletedHandler<ABI::Windows::Devices::Midi::MidiSynthesizer*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Midi::MidiSynthesizer*, ABI::Windows::Devices::Midi::IMidiSynthesizer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Devices.Midi.MidiSynthesizer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Devices::Midi::MidiSynthesizer*> __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Midi::IMidiSynthesizer*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Devices::Midi::IMidiSynthesizer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_USE
#define DEF___FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("9388b978-13f1-5e37-8133-94430d90dd50"))
IAsyncOperation<ABI::Windows::Devices::Midi::MidiSynthesizer*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Midi::MidiSynthesizer*, ABI::Windows::Devices::Midi::IMidiSynthesizer*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Devices.Midi.MidiSynthesizer>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Devices::Midi::MidiSynthesizer*> __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_t;
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Midi::IMidiSynthesizer*>
//#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Devices::Midi::IMidiSynthesizer*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiMessageReceivedEventArgs;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs_USE
#define DEF___FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("50017240-cc39-5775-8a6b-f6f22386bfca"))
ITypedEventHandler<ABI::Windows::Devices::Midi::MidiInPort*,ABI::Windows::Devices::Midi::MidiMessageReceivedEventArgs*> : ITypedEventHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Midi::MidiInPort*, ABI::Windows::Devices::Midi::IMidiInPort*>,ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Devices::Midi::MidiMessageReceivedEventArgs*, ABI::Windows::Devices::Midi::IMidiMessageReceivedEventArgs*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.TypedEventHandler`2<Windows.Devices.Midi.MidiInPort, Windows.Devices.Midi.MidiMessageReceivedEventArgs>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef ITypedEventHandler<ABI::Windows::Devices::Midi::MidiInPort*,ABI::Windows::Devices::Midi::MidiMessageReceivedEventArgs*> __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs_t;
#define __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs ABI::Windows::Foundation::__FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Midi::IMidiInPort*,ABI::Windows::Devices::Midi::IMidiMessageReceivedEventArgs*>
//#define __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs_t ABI::Windows::Foundation::ITypedEventHandler<ABI::Windows::Devices::Midi::IMidiInPort*,ABI::Windows::Devices::Midi::IMidiMessageReceivedEventArgs*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                class DeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */

#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Enumeration {
                interface IDeviceInformation;
            } /* Windows */
        } /* Devices */
    } /* Enumeration */} /* ABI */
#define __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation ABI::Windows::Devices::Enumeration::IDeviceInformation

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Foundation {
            interface IClosable;
        } /* Windows */
    } /* Foundation */} /* ABI */
#define __x_ABI_CWindows_CFoundation_CIClosable ABI::Windows::Foundation::IClosable

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__


namespace ABI {
    namespace Windows {
        namespace Foundation {
            
            typedef struct TimeSpan TimeSpan;
            
        } /* Windows */
    } /* Foundation */} /* ABI */




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





namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                
                typedef enum MidiMessageType : int MidiMessageType;
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */






























namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiActiveSensingMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiChannelPressureMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiContinueMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiControlChangeMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */




namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiNoteOffMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiNoteOnMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiOutPort;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiPitchBendChangeMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiPolyphonicKeyPressureMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiProgramChangeMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiSongPositionPointerMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiSongSelectMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiStartMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiStopMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiSystemExclusiveMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiSystemResetMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiTimeCodeMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiTimingClockMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                class MidiTuneRequestMessage;
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */










/*
 *
 * Struct Windows.Devices.Midi.MidiMessageType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [v1_enum, contract] */
                enum MidiMessageType : int
                {
                    MidiMessageType_None = 0,
                    MidiMessageType_NoteOff = 128,
                    MidiMessageType_NoteOn = 144,
                    MidiMessageType_PolyphonicKeyPressure = 160,
                    MidiMessageType_ControlChange = 176,
                    MidiMessageType_ProgramChange = 192,
                    MidiMessageType_ChannelPressure = 208,
                    MidiMessageType_PitchBendChange = 224,
                    MidiMessageType_SystemExclusive = 240,
                    MidiMessageType_MidiTimeCode = 241,
                    MidiMessageType_SongPositionPointer = 242,
                    MidiMessageType_SongSelect = 243,
                    MidiMessageType_TuneRequest = 246,
                    MidiMessageType_EndSystemExclusive = 247,
                    MidiMessageType_TimingClock = 248,
                    MidiMessageType_Start = 250,
                    MidiMessageType_Continue = 251,
                    MidiMessageType_Stop = 252,
                    MidiMessageType_ActiveSensing = 254,
                    MidiMessageType_SystemReset = 255,
                };
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiChannelPressureMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiChannelPressureMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiChannelPressureMessage[] = L"Windows.Devices.Midi.IMidiChannelPressureMessage";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("BE1FA860-62B4-4D52-A37E-92E54D35B909"), exclusiveto, contract] */
                MIDL_INTERFACE("BE1FA860-62B4-4D52-A37E-92E54D35B909")
                IMidiChannelPressureMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Channel(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pressure(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiChannelPressureMessage=_uuidof(IMidiChannelPressureMessage);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiChannelPressureMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiChannelPressureMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiChannelPressureMessageFactory[] = L"Windows.Devices.Midi.IMidiChannelPressureMessageFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("6218ED2F-2284-412A-94CF-10FB04842C6C"), exclusiveto, contract] */
                MIDL_INTERFACE("6218ED2F-2284-412A-94CF-10FB04842C6C")
                IMidiChannelPressureMessageFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateMidiChannelPressureMessage(
                        /* [in] */BYTE channel,
                        /* [in] */BYTE pressure,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Midi::IMidiChannelPressureMessage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiChannelPressureMessageFactory=_uuidof(IMidiChannelPressureMessageFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiControlChangeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiControlChangeMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiControlChangeMessage[] = L"Windows.Devices.Midi.IMidiControlChangeMessage";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("B7E15F83-780D-405F-B781-3E1598C97F40"), exclusiveto, contract] */
                MIDL_INTERFACE("B7E15F83-780D-405F-B781-3E1598C97F40")
                IMidiControlChangeMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Channel(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Controller(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ControlValue(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiControlChangeMessage=_uuidof(IMidiControlChangeMessage);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiControlChangeMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiControlChangeMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiControlChangeMessageFactory[] = L"Windows.Devices.Midi.IMidiControlChangeMessageFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("2AB14321-956C-46AD-9752-F87F55052FE3"), exclusiveto, contract] */
                MIDL_INTERFACE("2AB14321-956C-46AD-9752-F87F55052FE3")
                IMidiControlChangeMessageFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateMidiControlChangeMessage(
                        /* [in] */BYTE channel,
                        /* [in] */BYTE controller,
                        /* [in] */BYTE controlValue,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Midi::IMidiControlChangeMessage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiControlChangeMessageFactory=_uuidof(IMidiControlChangeMessageFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiInPort
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiInPort
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiInPort[] = L"Windows.Devices.Midi.IMidiInPort";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("D5C1D9DB-971A-4EAF-A23D-EA19FE607FF9"), exclusiveto, contract] */
                MIDL_INTERFACE("D5C1D9DB-971A-4EAF-A23D-EA19FE607FF9")
                IMidiInPort : IInspectable
                {
                    /* [eventadd] */virtual HRESULT STDMETHODCALLTYPE add_MessageReceived(
                        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs * handler,
                        /* [retval, out] */__RPC__out EventRegistrationToken * token
                        ) = 0;
                    /* [eventremove] */virtual HRESULT STDMETHODCALLTYPE remove_MessageReceived(
                        /* [in] */EventRegistrationToken token
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiInPort=_uuidof(IMidiInPort);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiInPort;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiInPortStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiInPort
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiInPortStatics[] = L"Windows.Devices.Midi.IMidiInPortStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("44C439DC-67FF-4A6E-8BAC-FDB6610CF296"), exclusiveto, contract] */
                MIDL_INTERFACE("44C439DC-67FF-4A6E-8BAC-FDB6610CF296")
                IMidiInPortStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiInPortStatics=_uuidof(IMidiInPortStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiMessage[] = L"Windows.Devices.Midi.IMidiMessage";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("79767945-1094-4283-9BE0-289FC0EE8334"), contract] */
                MIDL_INTERFACE("79767945-1094-4283-9BE0-289FC0EE8334")
                IMidiMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Timestamp(
                        /* [retval, out] */__RPC__out ABI::Windows::Foundation::TimeSpan * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_RawData(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Storage::Streams::IBuffer * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Type(
                        /* [retval, out] */__RPC__out ABI::Windows::Devices::Midi::MidiMessageType * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiMessage=_uuidof(IMidiMessage);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiMessageReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiMessageReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiMessageReceivedEventArgs[] = L"Windows.Devices.Midi.IMidiMessageReceivedEventArgs";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("76566E56-F328-4B51-907D-B3A8CE96BF80"), exclusiveto, contract] */
                MIDL_INTERFACE("76566E56-F328-4B51-907D-B3A8CE96BF80")
                IMidiMessageReceivedEventArgs : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Message(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Midi::IMidiMessage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiMessageReceivedEventArgs=_uuidof(IMidiMessageReceivedEventArgs);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiNoteOffMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiNoteOffMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiNoteOffMessage[] = L"Windows.Devices.Midi.IMidiNoteOffMessage";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("16FD8AF4-198E-4D8F-A654-D305A293548F"), exclusiveto, contract] */
                MIDL_INTERFACE("16FD8AF4-198E-4D8F-A654-D305A293548F")
                IMidiNoteOffMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Channel(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Note(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Velocity(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiNoteOffMessage=_uuidof(IMidiNoteOffMessage);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiNoteOffMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiNoteOffMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiNoteOffMessageFactory[] = L"Windows.Devices.Midi.IMidiNoteOffMessageFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("A6B240E0-A749-425F-8AF4-A4D979CC15B5"), exclusiveto, contract] */
                MIDL_INTERFACE("A6B240E0-A749-425F-8AF4-A4D979CC15B5")
                IMidiNoteOffMessageFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateMidiNoteOffMessage(
                        /* [in] */BYTE channel,
                        /* [in] */BYTE note,
                        /* [in] */BYTE velocity,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Midi::IMidiNoteOffMessage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiNoteOffMessageFactory=_uuidof(IMidiNoteOffMessageFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiNoteOnMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiNoteOnMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiNoteOnMessage[] = L"Windows.Devices.Midi.IMidiNoteOnMessage";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("E0224AF5-6181-46DD-AFA2-410004C057AA"), exclusiveto, contract] */
                MIDL_INTERFACE("E0224AF5-6181-46DD-AFA2-410004C057AA")
                IMidiNoteOnMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Channel(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Note(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Velocity(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiNoteOnMessage=_uuidof(IMidiNoteOnMessage);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiNoteOnMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiNoteOnMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiNoteOnMessageFactory[] = L"Windows.Devices.Midi.IMidiNoteOnMessageFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("9B4280A0-59C1-420E-B517-15A10AA9606B"), exclusiveto, contract] */
                MIDL_INTERFACE("9B4280A0-59C1-420E-B517-15A10AA9606B")
                IMidiNoteOnMessageFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateMidiNoteOnMessage(
                        /* [in] */BYTE channel,
                        /* [in] */BYTE note,
                        /* [in] */BYTE velocity,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Midi::IMidiNoteOnMessage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiNoteOnMessageFactory=_uuidof(IMidiNoteOnMessageFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiOutPort
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiOutPort[] = L"Windows.Devices.Midi.IMidiOutPort";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("931D6D9F-57A2-4A3A-ADB8-4640886F6693"), contract] */
                MIDL_INTERFACE("931D6D9F-57A2-4A3A-ADB8-4640886F6693")
                IMidiOutPort : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE SendMessage(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Midi::IMidiMessage * midiMessage
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE SendBuffer(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * midiData
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DeviceId(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiOutPort=_uuidof(IMidiOutPort);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiOutPortStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiOutPort
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiOutPortStatics[] = L"Windows.Devices.Midi.IMidiOutPortStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("065CC3E9-0F88-448B-9B64-A95826C65B8F"), exclusiveto, contract] */
                MIDL_INTERFACE("065CC3E9-0F88-448B-9B64-A95826C65B8F")
                IMidiOutPortStatics : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE FromIdAsync(
                        /* [in] */__RPC__in HSTRING deviceId,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE GetDeviceSelector(
                        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiOutPortStatics=_uuidof(IMidiOutPortStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiPitchBendChangeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiPitchBendChangeMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiPitchBendChangeMessage[] = L"Windows.Devices.Midi.IMidiPitchBendChangeMessage";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("29DF4CB1-2E9F-4FAF-8C2B-9CB82A9079CA"), exclusiveto, contract] */
                MIDL_INTERFACE("29DF4CB1-2E9F-4FAF-8C2B-9CB82A9079CA")
                IMidiPitchBendChangeMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Channel(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Bend(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiPitchBendChangeMessage=_uuidof(IMidiPitchBendChangeMessage);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiPitchBendChangeMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiPitchBendChangeMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiPitchBendChangeMessageFactory[] = L"Windows.Devices.Midi.IMidiPitchBendChangeMessageFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("F5EEDF55-CFC8-4926-B30E-A3622393306C"), exclusiveto, contract] */
                MIDL_INTERFACE("F5EEDF55-CFC8-4926-B30E-A3622393306C")
                IMidiPitchBendChangeMessageFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateMidiPitchBendChangeMessage(
                        /* [in] */BYTE channel,
                        /* [in] */UINT16 bend,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Midi::IMidiPitchBendChangeMessage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiPitchBendChangeMessageFactory=_uuidof(IMidiPitchBendChangeMessageFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiPolyphonicKeyPressureMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessage[] = L"Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessage";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("1F7337FE-ACE8-48A0-868E-7CDBF20F04D6"), exclusiveto, contract] */
                MIDL_INTERFACE("1F7337FE-ACE8-48A0-868E-7CDBF20F04D6")
                IMidiPolyphonicKeyPressureMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Channel(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Note(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Pressure(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiPolyphonicKeyPressureMessage=_uuidof(IMidiPolyphonicKeyPressureMessage);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiPolyphonicKeyPressureMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessageFactory[] = L"Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessageFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("E98F483E-C4B3-4DD2-917C-E349815A1B3B"), exclusiveto, contract] */
                MIDL_INTERFACE("E98F483E-C4B3-4DD2-917C-E349815A1B3B")
                IMidiPolyphonicKeyPressureMessageFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateMidiPolyphonicKeyPressureMessage(
                        /* [in] */BYTE channel,
                        /* [in] */BYTE note,
                        /* [in] */BYTE pressure,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Midi::IMidiPolyphonicKeyPressureMessage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiPolyphonicKeyPressureMessageFactory=_uuidof(IMidiPolyphonicKeyPressureMessageFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiProgramChangeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiProgramChangeMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiProgramChangeMessage[] = L"Windows.Devices.Midi.IMidiProgramChangeMessage";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("9CBB3C78-7A3E-4327-AA98-20B8E4485AF8"), exclusiveto, contract] */
                MIDL_INTERFACE("9CBB3C78-7A3E-4327-AA98-20B8E4485AF8")
                IMidiProgramChangeMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Channel(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Program(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiProgramChangeMessage=_uuidof(IMidiProgramChangeMessage);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiProgramChangeMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiProgramChangeMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiProgramChangeMessageFactory[] = L"Windows.Devices.Midi.IMidiProgramChangeMessageFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("D6B04387-524B-4104-9C99-6572BFD2E261"), exclusiveto, contract] */
                MIDL_INTERFACE("D6B04387-524B-4104-9C99-6572BFD2E261")
                IMidiProgramChangeMessageFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateMidiProgramChangeMessage(
                        /* [in] */BYTE channel,
                        /* [in] */BYTE program,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Midi::IMidiProgramChangeMessage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiProgramChangeMessageFactory=_uuidof(IMidiProgramChangeMessageFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSongPositionPointerMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSongPositionPointerMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSongPositionPointerMessage[] = L"Windows.Devices.Midi.IMidiSongPositionPointerMessage";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("4CA50C56-EC5E-4AE4-A115-88DC57CC2B79"), exclusiveto, contract] */
                MIDL_INTERFACE("4CA50C56-EC5E-4AE4-A115-88DC57CC2B79")
                IMidiSongPositionPointerMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Beats(
                        /* [retval, out] */__RPC__out UINT16 * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiSongPositionPointerMessage=_uuidof(IMidiSongPositionPointerMessage);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSongPositionPointerMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSongPositionPointerMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSongPositionPointerMessageFactory[] = L"Windows.Devices.Midi.IMidiSongPositionPointerMessageFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("9C00E996-F10B-4FEA-B395-F5D6CF80F64E"), exclusiveto, contract] */
                MIDL_INTERFACE("9C00E996-F10B-4FEA-B395-F5D6CF80F64E")
                IMidiSongPositionPointerMessageFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateMidiSongPositionPointerMessage(
                        /* [in] */UINT16 beats,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Midi::IMidiSongPositionPointerMessage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiSongPositionPointerMessageFactory=_uuidof(IMidiSongPositionPointerMessageFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSongSelectMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSongSelectMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSongSelectMessage[] = L"Windows.Devices.Midi.IMidiSongSelectMessage";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("49F0F27F-6D83-4741-A5BF-4629F6BE974F"), exclusiveto, contract] */
                MIDL_INTERFACE("49F0F27F-6D83-4741-A5BF-4629F6BE974F")
                IMidiSongSelectMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Song(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiSongSelectMessage=_uuidof(IMidiSongSelectMessage);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSongSelectMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSongSelectMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSongSelectMessageFactory[] = L"Windows.Devices.Midi.IMidiSongSelectMessageFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("848878E4-8748-4129-A66C-A05493F75DAA"), exclusiveto, contract] */
                MIDL_INTERFACE("848878E4-8748-4129-A66C-A05493F75DAA")
                IMidiSongSelectMessageFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateMidiSongSelectMessage(
                        /* [in] */BYTE song,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Midi::IMidiSongSelectMessage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiSongSelectMessageFactory=_uuidof(IMidiSongSelectMessageFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSynthesizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSynthesizer
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiOutPort
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSynthesizer[] = L"Windows.Devices.Midi.IMidiSynthesizer";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("F0DA155E-DB90-405F-B8AE-21D2E17F2E45"), exclusiveto, contract] */
                MIDL_INTERFACE("F0DA155E-DB90-405F-B8AE-21D2E17F2E45")
                IMidiSynthesizer : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_AudioDevice(
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Volume(
                        /* [retval, out] */__RPC__out DOUBLE * value
                        ) = 0;
                    /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Volume(
                        /* [in] */DOUBLE value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiSynthesizer=_uuidof(IMidiSynthesizer);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSynthesizerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSynthesizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSynthesizerStatics[] = L"Windows.Devices.Midi.IMidiSynthesizerStatics";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("4224EAA8-6629-4D6B-AA8F-D4521A5A31CE"), exclusiveto, contract] */
                MIDL_INTERFACE("4224EAA8-6629-4D6B-AA8F-D4521A5A31CE")
                IMidiSynthesizerStatics : IInspectable
                {
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateAsync(
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * * value
                        ) = 0;
                    /* [overload] */virtual HRESULT STDMETHODCALLTYPE CreateFromAudioDeviceAsync(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * audioDevice,
                        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * * value
                        ) = 0;
                    virtual HRESULT STDMETHODCALLTYPE IsSynthesizer(
                        /* [in] */__RPC__in_opt ABI::Windows::Devices::Enumeration::IDeviceInformation * midiDevice,
                        /* [retval, out] */__RPC__out boolean * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiSynthesizerStatics=_uuidof(IMidiSynthesizerStatics);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSystemExclusiveMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSystemExclusiveMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSystemExclusiveMessageFactory[] = L"Windows.Devices.Midi.IMidiSystemExclusiveMessageFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("083DE222-3B74-4320-9B42-0CA8545F8A24"), exclusiveto, contract] */
                MIDL_INTERFACE("083DE222-3B74-4320-9B42-0CA8545F8A24")
                IMidiSystemExclusiveMessageFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateMidiSystemExclusiveMessage(
                        /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * rawData,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Midi::IMidiMessage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiSystemExclusiveMessageFactory=_uuidof(IMidiSystemExclusiveMessageFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiTimeCodeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiTimeCodeMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiTimeCodeMessage[] = L"Windows.Devices.Midi.IMidiTimeCodeMessage";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("0BF7087D-FA63-4A1C-8DEB-C0E87796A6D7"), exclusiveto, contract] */
                MIDL_INTERFACE("0BF7087D-FA63-4A1C-8DEB-C0E87796A6D7")
                IMidiTimeCodeMessage : IInspectable
                {
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FrameType(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Values(
                        /* [retval, out] */__RPC__out BYTE * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiTimeCodeMessage=_uuidof(IMidiTimeCodeMessage);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiTimeCodeMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiTimeCodeMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiTimeCodeMessageFactory[] = L"Windows.Devices.Midi.IMidiTimeCodeMessageFactory";
namespace ABI {
    namespace Windows {
        namespace Devices {
            namespace Midi {
                /* [object, uuid("EB3099C5-771C-40DE-B961-175A7489A85E"), exclusiveto, contract] */
                MIDL_INTERFACE("EB3099C5-771C-40DE-B961-175A7489A85E")
                IMidiTimeCodeMessageFactory : IInspectable
                {
                    virtual HRESULT STDMETHODCALLTYPE CreateMidiTimeCodeMessage(
                        /* [in] */BYTE frameType,
                        /* [in] */BYTE values,
                        /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Devices::Midi::IMidiTimeCodeMessage * * value
                        ) = 0;
                    
                };

                extern MIDL_CONST_ID IID & IID_IMidiTimeCodeMessageFactory=_uuidof(IMidiTimeCodeMessageFactory);
                
            } /* Windows */
        } /* Devices */
    } /* Midi */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiActiveSensingMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiActiveSensingMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiActiveSensingMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiActiveSensingMessage[] = L"Windows.Devices.Midi.MidiActiveSensingMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiChannelPressureMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiChannelPressureMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiChannelPressureMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiChannelPressureMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiChannelPressureMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiChannelPressureMessage[] = L"Windows.Devices.Midi.MidiChannelPressureMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiContinueMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiContinueMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiContinueMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiContinueMessage[] = L"Windows.Devices.Midi.MidiContinueMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiControlChangeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiControlChangeMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiControlChangeMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiControlChangeMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiControlChangeMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiControlChangeMessage[] = L"Windows.Devices.Midi.MidiControlChangeMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiInPort
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Midi.IMidiInPortStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiInPort ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiInPort_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiInPort_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiInPort[] = L"Windows.Devices.Midi.MidiInPort";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiMessageReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessageReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiMessageReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiMessageReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiMessageReceivedEventArgs[] = L"Windows.Devices.Midi.MidiMessageReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiNoteOffMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiNoteOffMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiNoteOffMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiNoteOffMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiNoteOffMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiNoteOffMessage[] = L"Windows.Devices.Midi.MidiNoteOffMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiNoteOnMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiNoteOnMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiNoteOnMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiNoteOnMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiNoteOnMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiNoteOnMessage[] = L"Windows.Devices.Midi.MidiNoteOnMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiOutPort
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Midi.IMidiOutPortStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiOutPort ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiOutPort_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiOutPort_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiOutPort[] = L"Windows.Devices.Midi.MidiOutPort";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiPitchBendChangeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiPitchBendChangeMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiPitchBendChangeMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiPitchBendChangeMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiPitchBendChangeMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiPitchBendChangeMessage[] = L"Windows.Devices.Midi.MidiPitchBendChangeMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiPolyphonicKeyPressureMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiPolyphonicKeyPressureMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiPolyphonicKeyPressureMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiPolyphonicKeyPressureMessage[] = L"Windows.Devices.Midi.MidiPolyphonicKeyPressureMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiProgramChangeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiProgramChangeMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiProgramChangeMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiProgramChangeMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiProgramChangeMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiProgramChangeMessage[] = L"Windows.Devices.Midi.MidiProgramChangeMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiSongPositionPointerMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiSongPositionPointerMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiSongPositionPointerMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiSongPositionPointerMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiSongPositionPointerMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSongPositionPointerMessage[] = L"Windows.Devices.Midi.MidiSongPositionPointerMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiSongSelectMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiSongSelectMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiSongSelectMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiSongSelectMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiSongSelectMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSongSelectMessage[] = L"Windows.Devices.Midi.MidiSongSelectMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiStartMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiStartMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiStartMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiStartMessage[] = L"Windows.Devices.Midi.MidiStartMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiStopMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiStopMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiStopMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiStopMessage[] = L"Windows.Devices.Midi.MidiStopMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiSynthesizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Midi.IMidiSynthesizerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiSynthesizer ** Default Interface **
 *    Windows.Devices.Midi.IMidiOutPort
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiSynthesizer_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiSynthesizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSynthesizer[] = L"Windows.Devices.Midi.MidiSynthesizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiSystemExclusiveMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiSystemExclusiveMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiSystemExclusiveMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiSystemExclusiveMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSystemExclusiveMessage[] = L"Windows.Devices.Midi.MidiSystemExclusiveMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiSystemResetMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiSystemResetMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiSystemResetMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSystemResetMessage[] = L"Windows.Devices.Midi.MidiSystemResetMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiTimeCodeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiTimeCodeMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiTimeCodeMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiTimeCodeMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiTimeCodeMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiTimeCodeMessage[] = L"Windows.Devices.Midi.MidiTimeCodeMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiTimingClockMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiTimingClockMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiTimingClockMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiTimingClockMessage[] = L"Windows.Devices.Midi.MidiTimingClockMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiTuneRequestMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiTuneRequestMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiTuneRequestMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiTuneRequestMessage[] = L"Windows.Devices.Midi.MidiTuneRequestMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000




#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory;

#endif // ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPortVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPortVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPortVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CIMidiOutPort **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPortVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPortVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPortVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPortVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPortVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiInPort **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPortVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPortVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizerVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizerVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer;

typedef struct __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CDevices__CMidi__CMidiSynthesizer **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizerVtbl;

interface __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs_INTERFACE_DEFINED__

typedef interface __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs;

typedef struct __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs * This,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * sender,/* [in] */ __RPC__in_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * *e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgsVtbl;

interface __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs_Invoke(This,sender,e)	\
    ( (This)->lpVtbl -> Invoke(This,sender,e) ) 
#endif /* COBJMACROS */



#endif // ____FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
#define ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;

#endif // ____x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation_FWD_DEFINED__





#ifndef ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;

#endif // ____x_ABI_CWindows_CFoundation_CIClosable_FWD_DEFINED__



typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CDevices_CMidi_CMidiMessageType __x_ABI_CWindows_CDevices_CMidi_CMidiMessageType;




























































/*
 *
 * Struct Windows.Devices.Midi.MidiMessageType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CDevices_CMidi_CMidiMessageType
{
    MidiMessageType_None = 0,
    MidiMessageType_NoteOff = 128,
    MidiMessageType_NoteOn = 144,
    MidiMessageType_PolyphonicKeyPressure = 160,
    MidiMessageType_ControlChange = 176,
    MidiMessageType_ProgramChange = 192,
    MidiMessageType_ChannelPressure = 208,
    MidiMessageType_PitchBendChange = 224,
    MidiMessageType_SystemExclusive = 240,
    MidiMessageType_MidiTimeCode = 241,
    MidiMessageType_SongPositionPointer = 242,
    MidiMessageType_SongSelect = 243,
    MidiMessageType_TuneRequest = 246,
    MidiMessageType_EndSystemExclusive = 247,
    MidiMessageType_TimingClock = 248,
    MidiMessageType_Start = 250,
    MidiMessageType_Continue = 251,
    MidiMessageType_Stop = 252,
    MidiMessageType_ActiveSensing = 254,
    MidiMessageType_SystemReset = 255,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiChannelPressureMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiChannelPressureMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiChannelPressureMessage[] = L"Windows.Devices.Midi.IMidiChannelPressureMessage";
/* [object, uuid("BE1FA860-62B4-4D52-A37E-92E54D35B909"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_get_Channel(This,value) \
    ( (This)->lpVtbl->get_Channel(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_get_Pressure(This,value) \
    ( (This)->lpVtbl->get_Pressure(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiChannelPressureMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiChannelPressureMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiChannelPressureMessageFactory[] = L"Windows.Devices.Midi.IMidiChannelPressureMessageFactory";
/* [object, uuid("6218ED2F-2284-412A-94CF-10FB04842C6C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiChannelPressureMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory * This,
        /* [in] */BYTE channel,
        /* [in] */BYTE pressure,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_CreateMidiChannelPressureMessage(This,channel,pressure,value) \
    ( (This)->lpVtbl->CreateMidiChannelPressureMessage(This,channel,pressure,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiChannelPressureMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiControlChangeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiControlChangeMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiControlChangeMessage[] = L"Windows.Devices.Midi.IMidiControlChangeMessage";
/* [object, uuid("B7E15F83-780D-405F-B781-3E1598C97F40"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Controller )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ControlValue )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_get_Channel(This,value) \
    ( (This)->lpVtbl->get_Channel(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_get_Controller(This,value) \
    ( (This)->lpVtbl->get_Controller(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_get_ControlValue(This,value) \
    ( (This)->lpVtbl->get_ControlValue(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiControlChangeMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiControlChangeMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiControlChangeMessageFactory[] = L"Windows.Devices.Midi.IMidiControlChangeMessageFactory";
/* [object, uuid("2AB14321-956C-46AD-9752-F87F55052FE3"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiControlChangeMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory * This,
        /* [in] */BYTE channel,
        /* [in] */BYTE controller,
        /* [in] */BYTE controlValue,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_CreateMidiControlChangeMessage(This,channel,controller,controlValue,value) \
    ( (This)->lpVtbl->CreateMidiControlChangeMessage(This,channel,controller,controlValue,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiControlChangeMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiInPort
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiInPort
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiInPort[] = L"Windows.Devices.Midi.IMidiInPort";
/* [object, uuid("D5C1D9DB-971A-4EAF-A23D-EA19FE607FF9"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [eventadd] */HRESULT ( STDMETHODCALLTYPE *add_MessageReceived )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
        /* [in] */__RPC__in_opt __FITypedEventHandler_2_Windows__CDevices__CMidi__CMidiInPort_Windows__CDevices__CMidi__CMidiMessageReceivedEventArgs * handler,
        /* [retval, out] */__RPC__out EventRegistrationToken * token
        );
    /* [eventremove] */HRESULT ( STDMETHODCALLTYPE *remove_MessageReceived )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
        /* [in] */EventRegistrationToken token
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_add_MessageReceived(This,handler,token) \
    ( (This)->lpVtbl->add_MessageReceived(This,handler,token) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_remove_MessageReceived(This,token) \
    ( (This)->lpVtbl->remove_MessageReceived(This,token) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiInPort;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiInPort_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiInPortStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiInPort
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiInPortStatics[] = L"Windows.Devices.Midi.IMidiInPortStatics";
/* [object, uuid("44C439DC-67FF-4A6E-8BAC-FDB6610CF296"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiInPort * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_FromIdAsync(This,deviceId,value) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_GetDeviceSelector(This,value) \
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiInPortStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiMessage[] = L"Windows.Devices.Midi.IMidiMessage";
/* [object, uuid("79767945-1094-4283-9BE0-289FC0EE8334"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_RawData )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CDevices_CMidi_CMidiMessageType * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_get_Timestamp(This,value) \
    ( (This)->lpVtbl->get_Timestamp(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_get_RawData(This,value) \
    ( (This)->lpVtbl->get_RawData(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_get_Type(This,value) \
    ( (This)->lpVtbl->get_Type(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiMessageReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiMessageReceivedEventArgs
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiMessageReceivedEventArgs[] = L"Windows.Devices.Midi.IMidiMessageReceivedEventArgs";
/* [object, uuid("76566E56-F328-4B51-907D-B3A8CE96BF80"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgsVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_get_Message(This,value) \
    ( (This)->lpVtbl->get_Message(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiMessageReceivedEventArgs_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiNoteOffMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiNoteOffMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiNoteOffMessage[] = L"Windows.Devices.Midi.IMidiNoteOffMessage";
/* [object, uuid("16FD8AF4-198E-4D8F-A654-D305A293548F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Note )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Velocity )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_get_Channel(This,value) \
    ( (This)->lpVtbl->get_Channel(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_get_Note(This,value) \
    ( (This)->lpVtbl->get_Note(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_get_Velocity(This,value) \
    ( (This)->lpVtbl->get_Velocity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiNoteOffMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiNoteOffMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiNoteOffMessageFactory[] = L"Windows.Devices.Midi.IMidiNoteOffMessageFactory";
/* [object, uuid("A6B240E0-A749-425F-8AF4-A4D979CC15B5"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiNoteOffMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory * This,
        /* [in] */BYTE channel,
        /* [in] */BYTE note,
        /* [in] */BYTE velocity,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_CreateMidiNoteOffMessage(This,channel,note,velocity,value) \
    ( (This)->lpVtbl->CreateMidiNoteOffMessage(This,channel,note,velocity,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOffMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiNoteOnMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiNoteOnMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiNoteOnMessage[] = L"Windows.Devices.Midi.IMidiNoteOnMessage";
/* [object, uuid("E0224AF5-6181-46DD-AFA2-410004C057AA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Note )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Velocity )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_get_Channel(This,value) \
    ( (This)->lpVtbl->get_Channel(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_get_Note(This,value) \
    ( (This)->lpVtbl->get_Note(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_get_Velocity(This,value) \
    ( (This)->lpVtbl->get_Velocity(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiNoteOnMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiNoteOnMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiNoteOnMessageFactory[] = L"Windows.Devices.Midi.IMidiNoteOnMessageFactory";
/* [object, uuid("9B4280A0-59C1-420E-B517-15A10AA9606B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiNoteOnMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory * This,
        /* [in] */BYTE channel,
        /* [in] */BYTE note,
        /* [in] */BYTE velocity,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_CreateMidiNoteOnMessage(This,channel,note,velocity,value) \
    ( (This)->lpVtbl->CreateMidiNoteOnMessage(This,channel,note,velocity,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiNoteOnMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiOutPort
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiOutPort[] = L"Windows.Devices.Midi.IMidiOutPort";
/* [object, uuid("931D6D9F-57A2-4A3A-ADB8-4640886F6693"), contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SendMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * midiMessage
        );
    HRESULT ( STDMETHODCALLTYPE *SendBuffer )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * midiData
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_SendMessage(This,midiMessage) \
    ( (This)->lpVtbl->SendMessage(This,midiMessage) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_SendBuffer(This,midiData) \
    ( (This)->lpVtbl->SendBuffer(This,midiData) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_get_DeviceId(This,value) \
    ( (This)->lpVtbl->get_DeviceId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPort_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiOutPortStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiOutPort
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiOutPortStatics[] = L"Windows.Devices.Midi.IMidiOutPortStatics";
/* [object, uuid("065CC3E9-0F88-448B-9B64-A95826C65B8F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This,
        /* [in] */__RPC__in HSTRING deviceId,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CIMidiOutPort * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_FromIdAsync(This,deviceId,value) \
    ( (This)->lpVtbl->FromIdAsync(This,deviceId,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_GetDeviceSelector(This,value) \
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiOutPortStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiPitchBendChangeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiPitchBendChangeMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiPitchBendChangeMessage[] = L"Windows.Devices.Midi.IMidiPitchBendChangeMessage";
/* [object, uuid("29DF4CB1-2E9F-4FAF-8C2B-9CB82A9079CA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Bend )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_get_Channel(This,value) \
    ( (This)->lpVtbl->get_Channel(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_get_Bend(This,value) \
    ( (This)->lpVtbl->get_Bend(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiPitchBendChangeMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiPitchBendChangeMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiPitchBendChangeMessageFactory[] = L"Windows.Devices.Midi.IMidiPitchBendChangeMessageFactory";
/* [object, uuid("F5EEDF55-CFC8-4926-B30E-A3622393306C"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiPitchBendChangeMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory * This,
        /* [in] */BYTE channel,
        /* [in] */UINT16 bend,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_CreateMidiPitchBendChangeMessage(This,channel,bend,value) \
    ( (This)->lpVtbl->CreateMidiPitchBendChangeMessage(This,channel,bend,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPitchBendChangeMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiPolyphonicKeyPressureMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessage[] = L"Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessage";
/* [object, uuid("1F7337FE-ACE8-48A0-868E-7CDBF20F04D6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Note )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_get_Channel(This,value) \
    ( (This)->lpVtbl->get_Channel(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_get_Note(This,value) \
    ( (This)->lpVtbl->get_Note(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_get_Pressure(This,value) \
    ( (This)->lpVtbl->get_Pressure(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiPolyphonicKeyPressureMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiPolyphonicKeyPressureMessageFactory[] = L"Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessageFactory";
/* [object, uuid("E98F483E-C4B3-4DD2-917C-E349815A1B3B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiPolyphonicKeyPressureMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory * This,
        /* [in] */BYTE channel,
        /* [in] */BYTE note,
        /* [in] */BYTE pressure,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_CreateMidiPolyphonicKeyPressureMessage(This,channel,note,pressure,value) \
    ( (This)->lpVtbl->CreateMidiPolyphonicKeyPressureMessage(This,channel,note,pressure,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiPolyphonicKeyPressureMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiProgramChangeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiProgramChangeMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiProgramChangeMessage[] = L"Windows.Devices.Midi.IMidiProgramChangeMessage";
/* [object, uuid("9CBB3C78-7A3E-4327-AA98-20B8E4485AF8"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Channel )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Program )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_get_Channel(This,value) \
    ( (This)->lpVtbl->get_Channel(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_get_Program(This,value) \
    ( (This)->lpVtbl->get_Program(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiProgramChangeMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiProgramChangeMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiProgramChangeMessageFactory[] = L"Windows.Devices.Midi.IMidiProgramChangeMessageFactory";
/* [object, uuid("D6B04387-524B-4104-9C99-6572BFD2E261"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiProgramChangeMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory * This,
        /* [in] */BYTE channel,
        /* [in] */BYTE program,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_CreateMidiProgramChangeMessage(This,channel,program,value) \
    ( (This)->lpVtbl->CreateMidiProgramChangeMessage(This,channel,program,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiProgramChangeMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSongPositionPointerMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSongPositionPointerMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSongPositionPointerMessage[] = L"Windows.Devices.Midi.IMidiSongPositionPointerMessage";
/* [object, uuid("4CA50C56-EC5E-4AE4-A115-88DC57CC2B79"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Beats )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * This,
        /* [retval, out] */__RPC__out UINT16 * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_get_Beats(This,value) \
    ( (This)->lpVtbl->get_Beats(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSongPositionPointerMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSongPositionPointerMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSongPositionPointerMessageFactory[] = L"Windows.Devices.Midi.IMidiSongPositionPointerMessageFactory";
/* [object, uuid("9C00E996-F10B-4FEA-B395-F5D6CF80F64E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiSongPositionPointerMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory * This,
        /* [in] */UINT16 beats,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_CreateMidiSongPositionPointerMessage(This,beats,value) \
    ( (This)->lpVtbl->CreateMidiSongPositionPointerMessage(This,beats,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongPositionPointerMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSongSelectMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSongSelectMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSongSelectMessage[] = L"Windows.Devices.Midi.IMidiSongSelectMessage";
/* [object, uuid("49F0F27F-6D83-4741-A5BF-4629F6BE974F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Song )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_get_Song(This,value) \
    ( (This)->lpVtbl->get_Song(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSongSelectMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSongSelectMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSongSelectMessageFactory[] = L"Windows.Devices.Midi.IMidiSongSelectMessageFactory";
/* [object, uuid("848878E4-8748-4129-A66C-A05493F75DAA"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiSongSelectMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory * This,
        /* [in] */BYTE song,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_CreateMidiSongSelectMessage(This,song,value) \
    ( (This)->lpVtbl->CreateMidiSongSelectMessage(This,song,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSongSelectMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSynthesizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSynthesizer
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiOutPort
 *     Windows.Foundation.IClosable
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSynthesizer[] = L"Windows.Devices.Midi.IMidiSynthesizer";
/* [object, uuid("F0DA155E-DB90-405F-B8AE-21D2E17F2E45"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_AudioDevice )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Volume )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
        /* [retval, out] */__RPC__out DOUBLE * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Volume )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer * This,
        /* [in] */DOUBLE value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_get_AudioDevice(This,value) \
    ( (This)->lpVtbl->get_AudioDevice(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_get_Volume(This,value) \
    ( (This)->lpVtbl->get_Volume(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_put_Volume(This,value) \
    ( (This)->lpVtbl->put_Volume(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSynthesizerStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSynthesizer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSynthesizerStatics[] = L"Windows.Devices.Midi.IMidiSynthesizerStatics";
/* [object, uuid("4224EAA8-6629-4D6B-AA8F-D4521A5A31CE"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * * value
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *CreateFromAudioDeviceAsync )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * audioDevice,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CDevices__CMidi__CMidiSynthesizer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsSynthesizer )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * midiDevice,
        /* [retval, out] */__RPC__out boolean * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStaticsVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_CreateAsync(This,value) \
    ( (This)->lpVtbl->CreateAsync(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_CreateFromAudioDeviceAsync(This,audioDevice,value) \
    ( (This)->lpVtbl->CreateFromAudioDeviceAsync(This,audioDevice,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_IsSynthesizer(This,midiDevice,value) \
    ( (This)->lpVtbl->IsSynthesizer(This,midiDevice,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSynthesizerStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiSystemExclusiveMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiSystemExclusiveMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiSystemExclusiveMessageFactory[] = L"Windows.Devices.Midi.IMidiSystemExclusiveMessageFactory";
/* [object, uuid("083DE222-3B74-4320-9B42-0CA8545F8A24"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiSystemExclusiveMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * rawData,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_CreateMidiSystemExclusiveMessage(This,rawData,value) \
    ( (This)->lpVtbl->CreateMidiSystemExclusiveMessage(This,rawData,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiSystemExclusiveMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiTimeCodeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiTimeCodeMessage
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Devices.Midi.IMidiMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiTimeCodeMessage[] = L"Windows.Devices.Midi.IMidiTimeCodeMessage";
/* [object, uuid("0BF7087D-FA63-4A1C-8DEB-C0E87796A6D7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FrameType )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Values )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * This,
        /* [retval, out] */__RPC__out BYTE * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_get_FrameType(This,value) \
    ( (This)->lpVtbl->get_FrameType(This,value) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_get_Values(This,value) \
    ( (This)->lpVtbl->get_Values(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Devices.Midi.IMidiTimeCodeMessageFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Devices.Midi.MidiTimeCodeMessage
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Devices_Midi_IMidiTimeCodeMessageFactory[] = L"Windows.Devices.Midi.IMidiTimeCodeMessageFactory";
/* [object, uuid("EB3099C5-771C-40DE-B961-175A7489A85E"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateMidiTimeCodeMessage )(
        __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory * This,
        /* [in] */BYTE frameType,
        /* [in] */BYTE values,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessage * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactoryVtbl;

interface __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_CreateMidiTimeCodeMessage(This,frameType,values,value) \
    ( (This)->lpVtbl->CreateMidiTimeCodeMessage(This,frameType,values,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory;
#endif /* !defined(____x_ABI_CWindows_CDevices_CMidi_CIMidiTimeCodeMessageFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiActiveSensingMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiActiveSensingMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiActiveSensingMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiActiveSensingMessage[] = L"Windows.Devices.Midi.MidiActiveSensingMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiChannelPressureMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiChannelPressureMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiChannelPressureMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiChannelPressureMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiChannelPressureMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiChannelPressureMessage[] = L"Windows.Devices.Midi.MidiChannelPressureMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiContinueMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiContinueMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiContinueMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiContinueMessage[] = L"Windows.Devices.Midi.MidiContinueMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiControlChangeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiControlChangeMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiControlChangeMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiControlChangeMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiControlChangeMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiControlChangeMessage[] = L"Windows.Devices.Midi.MidiControlChangeMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiInPort
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Midi.IMidiInPortStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiInPort ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiInPort_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiInPort_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiInPort[] = L"Windows.Devices.Midi.MidiInPort";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiMessageReceivedEventArgs
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessageReceivedEventArgs ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiMessageReceivedEventArgs_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiMessageReceivedEventArgs_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiMessageReceivedEventArgs[] = L"Windows.Devices.Midi.MidiMessageReceivedEventArgs";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiNoteOffMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiNoteOffMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiNoteOffMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiNoteOffMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiNoteOffMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiNoteOffMessage[] = L"Windows.Devices.Midi.MidiNoteOffMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiNoteOnMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiNoteOnMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiNoteOnMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiNoteOnMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiNoteOnMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiNoteOnMessage[] = L"Windows.Devices.Midi.MidiNoteOnMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiOutPort
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Midi.IMidiOutPortStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiOutPort ** Default Interface **
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiOutPort_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiOutPort_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiOutPort[] = L"Windows.Devices.Midi.MidiOutPort";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiPitchBendChangeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiPitchBendChangeMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiPitchBendChangeMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiPitchBendChangeMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiPitchBendChangeMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiPitchBendChangeMessage[] = L"Windows.Devices.Midi.MidiPitchBendChangeMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiPolyphonicKeyPressureMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiPolyphonicKeyPressureMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiPolyphonicKeyPressureMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiPolyphonicKeyPressureMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiPolyphonicKeyPressureMessage[] = L"Windows.Devices.Midi.MidiPolyphonicKeyPressureMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiProgramChangeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiProgramChangeMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiProgramChangeMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiProgramChangeMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiProgramChangeMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiProgramChangeMessage[] = L"Windows.Devices.Midi.MidiProgramChangeMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiSongPositionPointerMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiSongPositionPointerMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiSongPositionPointerMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiSongPositionPointerMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiSongPositionPointerMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSongPositionPointerMessage[] = L"Windows.Devices.Midi.MidiSongPositionPointerMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiSongSelectMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiSongSelectMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiSongSelectMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiSongSelectMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiSongSelectMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSongSelectMessage[] = L"Windows.Devices.Midi.MidiSongSelectMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiStartMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiStartMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiStartMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiStartMessage[] = L"Windows.Devices.Midi.MidiStartMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiStopMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiStopMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiStopMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiStopMessage[] = L"Windows.Devices.Midi.MidiStopMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiSynthesizer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Devices.Midi.IMidiSynthesizerStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiSynthesizer ** Default Interface **
 *    Windows.Devices.Midi.IMidiOutPort
 *    Windows.Foundation.IClosable
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiSynthesizer_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiSynthesizer_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSynthesizer[] = L"Windows.Devices.Midi.MidiSynthesizer";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiSystemExclusiveMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiSystemExclusiveMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiSystemExclusiveMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiSystemExclusiveMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSystemExclusiveMessage[] = L"Windows.Devices.Midi.MidiSystemExclusiveMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiSystemResetMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiSystemResetMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiSystemResetMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiSystemResetMessage[] = L"Windows.Devices.Midi.MidiSystemResetMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiTimeCodeMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Devices.Midi.IMidiTimeCodeMessageFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiTimeCodeMessage ** Default Interface **
 *    Windows.Devices.Midi.IMidiMessage
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiTimeCodeMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiTimeCodeMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiTimeCodeMessage[] = L"Windows.Devices.Midi.MidiTimeCodeMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiTimingClockMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiTimingClockMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiTimingClockMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiTimingClockMessage[] = L"Windows.Devices.Midi.MidiTimingClockMessage";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Devices.Midi.MidiTuneRequestMessage
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Devices.Midi.IMidiMessage ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Devices_Midi_MidiTuneRequestMessage_DEFINED
#define RUNTIMECLASS_Windows_Devices_Midi_MidiTuneRequestMessage_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Devices_Midi_MidiTuneRequestMessage[] = L"Windows.Devices.Midi.MidiTuneRequestMessage";
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
#endif // __windows2Edevices2Emidi_p_h__

#endif // __windows2Edevices2Emidi_h__
