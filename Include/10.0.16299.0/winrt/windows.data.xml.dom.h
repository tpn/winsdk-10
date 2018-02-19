/* Header file automatically generated from windows.data.xml.dom.idl */
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
#ifndef __windows2Edata2Exml2Edom_h__
#define __windows2Edata2Exml2Edom_h__
#ifndef __windows2Edata2Exml2Edom_p_h__
#define __windows2Edata2Exml2Edom_p_h__


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
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
// Importing Collections header
#include <windows.foundation.collections.h>

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IDtdEntity;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity ABI::Windows::Data::Xml::Dom::IDtdEntity

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IDtdNotation;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation ABI::Windows::Data::Xml::Dom::IDtdNotation

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlAttribute;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute ABI::Windows::Data::Xml::Dom::IXmlAttribute

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlCDataSection;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection ABI::Windows::Data::Xml::Dom::IXmlCDataSection

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlCharacterData;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData ABI::Windows::Data::Xml::Dom::IXmlCharacterData

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlComment;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment ABI::Windows::Data::Xml::Dom::IXmlComment

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlDocument;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument ABI::Windows::Data::Xml::Dom::IXmlDocument

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlDocumentFragment;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment ABI::Windows::Data::Xml::Dom::IXmlDocumentFragment

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlDocumentIO;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO ABI::Windows::Data::Xml::Dom::IXmlDocumentIO

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlDocumentIO2;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 ABI::Windows::Data::Xml::Dom::IXmlDocumentIO2

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlDocumentStatics;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics ABI::Windows::Data::Xml::Dom::IXmlDocumentStatics

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlDocumentType;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType ABI::Windows::Data::Xml::Dom::IXmlDocumentType

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlDomImplementation;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation ABI::Windows::Data::Xml::Dom::IXmlDomImplementation

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlElement;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement ABI::Windows::Data::Xml::Dom::IXmlElement

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlEntityReference;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference ABI::Windows::Data::Xml::Dom::IXmlEntityReference

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlLoadSettings;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings ABI::Windows::Data::Xml::Dom::IXmlLoadSettings

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlNamedNodeMap;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap ABI::Windows::Data::Xml::Dom::IXmlNamedNodeMap

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlNode;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode ABI::Windows::Data::Xml::Dom::IXmlNode

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlNodeList;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList ABI::Windows::Data::Xml::Dom::IXmlNodeList

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlNodeSelector;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector ABI::Windows::Data::Xml::Dom::IXmlNodeSelector

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlNodeSerializer;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer ABI::Windows::Data::Xml::Dom::IXmlNodeSerializer

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlProcessingInstruction;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction ABI::Windows::Data::Xml::Dom::IXmlProcessingInstruction

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlText_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlText_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    interface IXmlText;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlText ABI::Windows::Data::Xml::Dom::IXmlText

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlText_FWD_DEFINED__

// Parameterized interface forward declarations (C++)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_USE
#define DEF___FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("3833a35e-2c61-56bd-b093-3694165f8898"))
IIterator<ABI::Windows::Data::Xml::Dom::IXmlNode*> : IIterator_impl<ABI::Windows::Data::Xml::Dom::IXmlNode*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterator`1<Windows.Data.Xml.Dom.IXmlNode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterator<ABI::Windows::Data::Xml::Dom::IXmlNode*> __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_t;
#define __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode ABI::Windows::Foundation::Collections::__FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Data::Xml::Dom::IXmlNode*>
//#define __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_t ABI::Windows::Foundation::Collections::IIterator<ABI::Windows::Data::Xml::Dom::IXmlNode*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_USE
#define DEF___FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("f1146ffc-8c92-56e8-93f1-711f86722633"))
IIterable<ABI::Windows::Data::Xml::Dom::IXmlNode*> : IIterable_impl<ABI::Windows::Data::Xml::Dom::IXmlNode*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IIterable`1<Windows.Data.Xml.Dom.IXmlNode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IIterable<ABI::Windows::Data::Xml::Dom::IXmlNode*> __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_t;
#define __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode ABI::Windows::Foundation::Collections::__FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Data::Xml::Dom::IXmlNode*>
//#define __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_t ABI::Windows::Foundation::Collections::IIterable<ABI::Windows::Data::Xml::Dom::IXmlNode*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_USE
#define DEF___FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation { namespace Collections {
template <>
struct __declspec(uuid("139d959e-e7b5-5cb6-a596-4b544478da9b"))
IVectorView<ABI::Windows::Data::Xml::Dom::IXmlNode*> : IVectorView_impl<ABI::Windows::Data::Xml::Dom::IXmlNode*> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.Collections.IVectorView`1<Windows.Data.Xml.Dom.IXmlNode>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IVectorView<ABI::Windows::Data::Xml::Dom::IXmlNode*> __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_t;
#define __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode ABI::Windows::Foundation::Collections::__FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_t
/* ABI */ } /* Windows */ } /* Foundation */ } /* Collections */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Xml::Dom::IXmlNode*>
//#define __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_t ABI::Windows::Foundation::Collections::IVectorView<ABI::Windows::Data::Xml::Dom::IXmlNode*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlDocument;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument_USE
#define DEF___FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("5eef7817-93dd-5c0b-9e5a-eb490408f3a9"))
IAsyncOperationCompletedHandler<ABI::Windows::Data::Xml::Dom::XmlDocument*> : IAsyncOperationCompletedHandler_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Data::Xml::Dom::XmlDocument*, ABI::Windows::Data::Xml::Dom::IXmlDocument*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Data.Xml.Dom.XmlDocument>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperationCompletedHandler<ABI::Windows::Data::Xml::Dom::XmlDocument*> __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument_t;
#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument ABI::Windows::Foundation::__FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Data::Xml::Dom::IXmlDocument*>
//#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument_t ABI::Windows::Foundation::IAsyncOperationCompletedHandler<ABI::Windows::Data::Xml::Dom::IXmlDocument*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef DEF___FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_USE
#define DEF___FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_USE
#if !defined(RO_NO_TEMPLATE_NAME)
namespace ABI { namespace Windows { namespace Foundation {
template <>
struct __declspec(uuid("f858e239-1896-5982-8495-143168478eb8"))
IAsyncOperation<ABI::Windows::Data::Xml::Dom::XmlDocument*> : IAsyncOperation_impl<ABI::Windows::Foundation::Internal::AggregateType<ABI::Windows::Data::Xml::Dom::XmlDocument*, ABI::Windows::Data::Xml::Dom::IXmlDocument*>> 
{
    static const wchar_t* z_get_rc_name_impl() 
    {
        return L"Windows.Foundation.IAsyncOperation`1<Windows.Data.Xml.Dom.XmlDocument>"; 
    }
};
// Define a typedef for the parameterized interface specialization's mangled name.
// This allows code which uses the mangled name for the parameterized interface to access the
// correct parameterized interface specialization.
typedef IAsyncOperation<ABI::Windows::Data::Xml::Dom::XmlDocument*> __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_t;
#define __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument ABI::Windows::Foundation::__FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_t
/* ABI */ } /* Windows */ } /* Foundation */ }

////  Define an alias for the C version of the interface for compatibility purposes.
//#define __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Data::Xml::Dom::IXmlDocument*>
//#define __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_t ABI::Windows::Foundation::IAsyncOperation<ABI::Windows::Data::Xml::Dom::IXmlDocument*>
#endif // !defined(RO_NO_TEMPLATE_NAME)
#endif /* DEF___FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_USE */


#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000



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
        namespace Data {
            namespace Xml {
                namespace Dom {
                    
                    typedef enum NodeType : int NodeType;
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
























namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class DtdEntity;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class DtdNotation;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlAttribute;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlCDataSection;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlComment;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */



namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlDocumentFragment;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlDocumentType;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlDomImplementation;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlElement;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlEntityReference;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlLoadSettings;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlNamedNodeMap;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlNodeList;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlProcessingInstruction;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */


namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    class XmlText;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */












/*
 *
 * Struct Windows.Data.Xml.Dom.NodeType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [v1_enum, contract] */
                    enum NodeType : int
                    {
                        NodeType_Invalid = 0,
                        NodeType_ElementNode = 1,
                        NodeType_AttributeNode = 2,
                        NodeType_TextNode = 3,
                        NodeType_DataSectionNode = 4,
                        NodeType_EntityReferenceNode = 5,
                        NodeType_EntityNode = 6,
                        NodeType_ProcessingInstructionNode = 7,
                        NodeType_CommentNode = 8,
                        NodeType_DocumentNode = 9,
                        NodeType_DocumentTypeNode = 10,
                        NodeType_DocumentFragmentNode = 11,
                        NodeType_NotationNode = 12,
                    };
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IDtdEntity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.DtdEntity
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IDtdEntity[] = L"Windows.Data.Xml.Dom.IDtdEntity";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("6A0B5FFC-63B4-480F-9E6A-8A92816AADE4"), exclusiveto, contract] */
                    MIDL_INTERFACE("6A0B5FFC-63B4-480F-9E6A-8A92816AADE4")
                    IDtdEntity : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PublicId(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SystemId(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NotationName(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDtdEntity=_uuidof(IDtdEntity);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IDtdNotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.DtdNotation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IDtdNotation[] = L"Windows.Data.Xml.Dom.IDtdNotation";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("8CB4E04D-6D46-4EDB-AB73-DF83C51AD397"), exclusiveto, contract] */
                    MIDL_INTERFACE("8CB4E04D-6D46-4EDB-AB73-DF83C51AD397")
                    IDtdNotation : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PublicId(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_SystemId(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IDtdNotation=_uuidof(IDtdNotation);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlAttribute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlAttribute
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlAttribute[] = L"Windows.Data.Xml.Dom.IXmlAttribute";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("AC144AA4-B4F1-4DB6-B206-8A22C308DB0A"), exclusiveto, contract] */
                    MIDL_INTERFACE("AC144AA4-B4F1-4DB6-B206-8A22C308DB0A")
                    IXmlAttribute : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Specified(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Value(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Value(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlAttribute=_uuidof(IXmlAttribute);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlCDataSection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlCDataSection
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlText
 *     Windows.Data.Xml.Dom.IXmlCharacterData
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlCDataSection[] = L"Windows.Data.Xml.Dom.IXmlCDataSection";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("4D04B46F-C8BD-45B4-8899-0400D7C2C60F"), exclusiveto, contract] */
                    MIDL_INTERFACE("4D04B46F-C8BD-45B4-8899-0400D7C2C60F")
                    IXmlCDataSection : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlCDataSection=_uuidof(IXmlCDataSection);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlCharacterData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlCharacterData[] = L"Windows.Data.Xml.Dom.IXmlCharacterData";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("132E42AB-4E36-4DF6-B1C8-0CE62FD88B26"), contract] */
                    MIDL_INTERFACE("132E42AB-4E36-4DF6-B1C8-0CE62FD88B26")
                    IXmlCharacterData : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Data(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Length(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SubstringData(
                            /* [in] */UINT32 offset,
                            /* [in] */UINT32 count,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * data
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AppendData(
                            /* [in] */__RPC__in HSTRING data
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE InsertData(
                            /* [in] */UINT32 offset,
                            /* [in] */__RPC__in HSTRING data
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE DeleteData(
                            /* [in] */UINT32 offset,
                            /* [in] */UINT32 count
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReplaceData(
                            /* [in] */UINT32 offset,
                            /* [in] */UINT32 count,
                            /* [in] */__RPC__in HSTRING data
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlCharacterData=_uuidof(IXmlCharacterData);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlComment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlComment
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlCharacterData
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlComment[] = L"Windows.Data.Xml.Dom.IXmlComment";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("BCA474D5-B61F-4611-9CAC-2E92E3476D47"), exclusiveto, contract] */
                    MIDL_INTERFACE("BCA474D5-B61F-4611-9CAC-2E92E3476D47")
                    IXmlComment : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlComment=_uuidof(IXmlComment);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlComment;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDocument
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocument[] = L"Windows.Data.Xml.Dom.IXmlDocument";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("F7F3A506-1E87-42D6-BCFB-B8C809FA5494"), exclusiveto, contract] */
                    MIDL_INTERFACE("F7F3A506-1E87-42D6-BCFB-B8C809FA5494")
                    IXmlDocument : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Doctype(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlDocumentType * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Implementation(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlDomImplementation * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentElement(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlElement * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateElement(
                            /* [in] */__RPC__in HSTRING tagName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlElement * * newElement
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateDocumentFragment(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlDocumentFragment * * newDocumentFragment
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateTextNode(
                            /* [in] */__RPC__in HSTRING data,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlText * * newTextNode
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateComment(
                            /* [in] */__RPC__in HSTRING data,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlComment * * newComment
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateProcessingInstruction(
                            /* [in] */__RPC__in HSTRING target,
                            /* [in] */__RPC__in HSTRING data,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlProcessingInstruction * * newProcessingInstruction
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateAttribute(
                            /* [in] */__RPC__in HSTRING name,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlAttribute * * newAttribute
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateEntityReference(
                            /* [in] */__RPC__in HSTRING name,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlEntityReference * * newEntityReference
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetElementsByTagName(
                            /* [in] */__RPC__in HSTRING tagName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNodeList * * elements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateCDataSection(
                            /* [in] */__RPC__in HSTRING data,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlCDataSection * * newCDataSection
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_DocumentUri(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateAttributeNS(
                            /* [in] */__RPC__in_opt IInspectable * namespaceUri,
                            /* [in] */__RPC__in HSTRING qualifiedName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlAttribute * * newAttribute
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CreateElementNS(
                            /* [in] */__RPC__in_opt IInspectable * namespaceUri,
                            /* [in] */__RPC__in HSTRING qualifiedName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlElement * * newElement
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetElementById(
                            /* [in] */__RPC__in HSTRING elementId,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlElement * * element
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ImportNode(
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlNode * node,
                            /* [in] */boolean deep,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * newNode
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlDocument=_uuidof(IXmlDocument);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDocumentFragment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDocumentFragment
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentFragment[] = L"Windows.Data.Xml.Dom.IXmlDocumentFragment";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("E2EA6A96-0C21-44A5-8BC9-9E4A262708EC"), exclusiveto, contract] */
                    MIDL_INTERFACE("E2EA6A96-0C21-44A5-8BC9-9E4A262708EC")
                    IXmlDocumentFragment : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlDocumentFragment=_uuidof(IXmlDocumentFragment);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDocumentIO
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentIO[] = L"Windows.Data.Xml.Dom.IXmlDocumentIO";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("6CD0E74E-EE65-4489-9EBF-CA43E87BA637"), exclusiveto, contract] */
                    MIDL_INTERFACE("6CD0E74E-EE65-4489-9EBF-CA43E87BA637")
                    IXmlDocumentIO : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadXml(
                            /* [in] */__RPC__in HSTRING xml
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadXmlWithSettings(
                            /* [in] */__RPC__in HSTRING xml,
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlLoadSettings * loadSettings
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SaveToFileAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Foundation::IAsyncAction * * asyncInfo
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlDocumentIO=_uuidof(IXmlDocumentIO);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDocumentIO2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentIO2[] = L"Windows.Data.Xml.Dom.IXmlDocumentIO2";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("5D034661-7BD8-4AD5-9EBF-81E6347263B1"), exclusiveto, contract] */
                    MIDL_INTERFACE("5D034661-7BD8-4AD5-9EBF-81E6347263B1")
                    IXmlDocumentIO2 : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadXmlFromBuffer(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * buffer
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadXmlFromBufferWithSettings(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::Streams::IBuffer * buffer,
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlLoadSettings * loadSettings
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlDocumentIO2=_uuidof(IXmlDocumentIO2);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDocumentStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentStatics[] = L"Windows.Data.Xml.Dom.IXmlDocumentStatics";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("5543D254-D757-4B79-9539-232B18F50BF1"), exclusiveto, contract] */
                    MIDL_INTERFACE("5543D254-D757-4B79-9539-232B18F50BF1")
                    IXmlDocumentStatics : IInspectable
                    {
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadFromUriAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * * asyncInfo
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadFromUriWithSettingsAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Foundation::IUriRuntimeClass * uri,
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlLoadSettings * loadSettings,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * * asyncInfo
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadFromFileAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * * asyncInfo
                            ) = 0;
                        /* [overload] */virtual HRESULT STDMETHODCALLTYPE LoadFromFileWithSettingsAsync(
                            /* [in] */__RPC__in_opt ABI::Windows::Storage::IStorageFile * file,
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlLoadSettings * loadSettings,
                            /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * * asyncInfo
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlDocumentStatics=_uuidof(IXmlDocumentStatics);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDocumentType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDocumentType
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentType[] = L"Windows.Data.Xml.Dom.IXmlDocumentType";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("F7342425-9781-4964-8E94-9B1C6DFC9BC7"), exclusiveto, contract] */
                    MIDL_INTERFACE("F7342425-9781-4964-8E94-9B1C6DFC9BC7")
                    IXmlDocumentType : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Name(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Entities(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNamedNodeMap * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Notations(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNamedNodeMap * * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlDocumentType=_uuidof(IXmlDocumentType);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDomImplementation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDomImplementation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDomImplementation[] = L"Windows.Data.Xml.Dom.IXmlDomImplementation";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("6DE58132-F11D-4FBB-8CC6-583CBA93112F"), exclusiveto, contract] */
                    MIDL_INTERFACE("6DE58132-F11D-4FBB-8CC6-583CBA93112F")
                    IXmlDomImplementation : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE HasFeature(
                            /* [in] */__RPC__in HSTRING feature,
                            /* [in] */__RPC__in_opt IInspectable * version,
                            /* [retval, out] */__RPC__out boolean * featureSupported
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlDomImplementation=_uuidof(IXmlDomImplementation);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlElement
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlElement[] = L"Windows.Data.Xml.Dom.IXmlElement";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("2DFB8A1F-6B10-4EF8-9F83-EFCCE8FAEC37"), exclusiveto, contract] */
                    MIDL_INTERFACE("2DFB8A1F-6B10-4EF8-9F83-EFCCE8FAEC37")
                    IXmlElement : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_TagName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAttribute(
                            /* [in] */__RPC__in HSTRING attributeName,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetAttribute(
                            /* [in] */__RPC__in HSTRING attributeName,
                            /* [in] */__RPC__in HSTRING attributeValue
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveAttribute(
                            /* [in] */__RPC__in HSTRING attributeName
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAttributeNode(
                            /* [in] */__RPC__in HSTRING attributeName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlAttribute * * attributeNode
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetAttributeNode(
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlAttribute * newAttribute,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlAttribute * * previousAttribute
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveAttributeNode(
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlAttribute * attributeNode,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlAttribute * * removedAttribute
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetElementsByTagName(
                            /* [in] */__RPC__in HSTRING tagName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNodeList * * elements
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetAttributeNS(
                            /* [in] */__RPC__in_opt IInspectable * namespaceUri,
                            /* [in] */__RPC__in HSTRING qualifiedName,
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAttributeNS(
                            /* [in] */__RPC__in_opt IInspectable * namespaceUri,
                            /* [in] */__RPC__in HSTRING localName,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveAttributeNS(
                            /* [in] */__RPC__in_opt IInspectable * namespaceUri,
                            /* [in] */__RPC__in HSTRING localName
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetAttributeNodeNS(
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlAttribute * newAttribute,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlAttribute * * previousAttribute
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetAttributeNodeNS(
                            /* [in] */__RPC__in_opt IInspectable * namespaceUri,
                            /* [in] */__RPC__in HSTRING localName,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlAttribute * * previousAttribute
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlElement=_uuidof(IXmlElement);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlElement;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlEntityReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlEntityReference
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlEntityReference[] = L"Windows.Data.Xml.Dom.IXmlEntityReference";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("2E2F47BC-C3D0-4CCF-BB86-0AB8C36A61CF"), exclusiveto, contract] */
                    MIDL_INTERFACE("2E2F47BC-C3D0-4CCF-BB86-0AB8C36A61CF")
                    IXmlEntityReference : IInspectable
                    {
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlEntityReference=_uuidof(IXmlEntityReference);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlLoadSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlLoadSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlLoadSettings[] = L"Windows.Data.Xml.Dom.IXmlLoadSettings";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("58AA07A8-FED6-46F7-B4C5-FB1BA72108D6"), exclusiveto, contract] */
                    MIDL_INTERFACE("58AA07A8-FED6-46F7-B4C5-FB1BA72108D6")
                    IXmlLoadSettings : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_MaxElementDepth(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_MaxElementDepth(
                            /* [in] */UINT32 value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ProhibitDtd(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ProhibitDtd(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ResolveExternals(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ResolveExternals(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ValidateOnParse(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ValidateOnParse(
                            /* [in] */boolean value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ElementContentWhiteSpace(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_ElementContentWhiteSpace(
                            /* [in] */boolean value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlLoadSettings=_uuidof(IXmlLoadSettings);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlNamedNodeMap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlNamedNodeMap
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IVectorView_1_Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Foundation.Collections.IIterable_1_Windows.Data.Xml.Dom.IXmlNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNamedNodeMap[] = L"Windows.Data.Xml.Dom.IXmlNamedNodeMap";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("B3A69EB0-AAB0-4B82-A6FA-B1453F7C021B"), exclusiveto, contract] */
                    MIDL_INTERFACE("B3A69EB0-AAB0-4B82-A6FA-B1453F7C021B")
                    IXmlNamedNodeMap : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Length(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Item(
                            /* [in] */UINT32 index,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * node
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetNamedItem(
                            /* [in] */__RPC__in HSTRING name,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * node
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetNamedItem(
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlNode * node,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * previousNode
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveNamedItem(
                            /* [in] */__RPC__in HSTRING name,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * previousNode
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetNamedItemNS(
                            /* [in] */__RPC__in_opt IInspectable * namespaceUri,
                            /* [in] */__RPC__in HSTRING name,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * node
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveNamedItemNS(
                            /* [in] */__RPC__in_opt IInspectable * namespaceUri,
                            /* [in] */__RPC__in HSTRING name,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * previousNode
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SetNamedItemNS(
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlNode * node,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * previousNode
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlNamedNodeMap=_uuidof(IXmlNamedNodeMap);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNode[] = L"Windows.Data.Xml.Dom.IXmlNode";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("1C741D59-2122-47D5-A856-83F3D4214875"), contract] */
                    MIDL_INTERFACE("1C741D59-2122-47D5-A856-83F3D4214875")
                    IXmlNode : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NodeValue(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_NodeValue(
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NodeType(
                            /* [retval, out] */__RPC__out ABI::Windows::Data::Xml::Dom::NodeType * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NodeName(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ParentNode(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_ChildNodes(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNodeList * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_FirstChild(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LastChild(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_PreviousSibling(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NextSibling(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Attributes(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNamedNodeMap * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE HasChildNodes(
                            /* [retval, out] */__RPC__out boolean * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_OwnerDocument(
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlDocument * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE InsertBefore(
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlNode * newChild,
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlNode * referenceChild,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * insertedChild
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE ReplaceChild(
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlNode * newChild,
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlNode * referenceChild,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * previousChild
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE RemoveChild(
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlNode * childNode,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * removedChild
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE AppendChild(
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlNode * newChild,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * appendedChild
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE CloneNode(
                            /* [in] */boolean deep,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * newNode
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_NamespaceUri(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_LocalName(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Prefix(
                            /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Normalize(void) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Prefix(
                            /* [in] */__RPC__in_opt IInspectable * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlNode=_uuidof(IXmlNode);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNode;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlNodeList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlNodeList
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IVectorView_1_Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Foundation.Collections.IIterable_1_Windows.Data.Xml.Dom.IXmlNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNodeList[] = L"Windows.Data.Xml.Dom.IXmlNodeList";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("8C60AD77-83A4-4EC1-9C54-7BA429E13DA6"), exclusiveto, contract] */
                    MIDL_INTERFACE("8C60AD77-83A4-4EC1-9C54-7BA429E13DA6")
                    IXmlNodeList : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Length(
                            /* [retval, out] */__RPC__out UINT32 * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE Item(
                            /* [in] */UINT32 index,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * node
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlNodeList=_uuidof(IXmlNodeList);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNodeSelector[] = L"Windows.Data.Xml.Dom.IXmlNodeSelector";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("63DBBA8B-D0DB-4FE1-B745-F9433AFDC25B"), contract] */
                    MIDL_INTERFACE("63DBBA8B-D0DB-4FE1-B745-F9433AFDC25B")
                    IXmlNodeSelector : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SelectSingleNode(
                            /* [in] */__RPC__in HSTRING xpath,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * node
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SelectNodes(
                            /* [in] */__RPC__in HSTRING xpath,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNodeList * * nodelist
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SelectSingleNodeNS(
                            /* [in] */__RPC__in HSTRING xpath,
                            /* [in] */__RPC__in_opt IInspectable * namespaces,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNode * * node
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE SelectNodesNS(
                            /* [in] */__RPC__in HSTRING xpath,
                            /* [in] */__RPC__in_opt IInspectable * namespaces,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlNodeList * * nodelist
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlNodeSelector=_uuidof(IXmlNodeSelector);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNodeSerializer[] = L"Windows.Data.Xml.Dom.IXmlNodeSerializer";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("5CC5B382-E6DD-4991-ABEF-06D8D2E7BD0C"), contract] */
                    MIDL_INTERFACE("5CC5B382-E6DD-4991-ABEF-06D8D2E7BD0C")
                    IXmlNodeSerializer : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetXml(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * outerXml
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_InnerText(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_InnerText(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlNodeSerializer=_uuidof(IXmlNodeSerializer);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlProcessingInstruction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlProcessingInstruction
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlProcessingInstruction[] = L"Windows.Data.Xml.Dom.IXmlProcessingInstruction";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("2707FD1E-1E92-4ECE-B6F4-26F069078DDC"), exclusiveto, contract] */
                    MIDL_INTERFACE("2707FD1E-1E92-4ECE-B6F4-26F069078DDC")
                    IXmlProcessingInstruction : IInspectable
                    {
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Target(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propget] */virtual HRESULT STDMETHODCALLTYPE get_Data(
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        /* [propput] */virtual HRESULT STDMETHODCALLTYPE put_Data(
                            /* [in] */__RPC__in HSTRING value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlProcessingInstruction=_uuidof(IXmlProcessingInstruction);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlCharacterData
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlText_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlText_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlText[] = L"Windows.Data.Xml.Dom.IXmlText";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Dom {
                    /* [object, uuid("F931A4CB-308D-4760-A1D5-43B67450AC7E"), contract] */
                    MIDL_INTERFACE("F931A4CB-308D-4760-A1D5-43B67450AC7E")
                    IXmlText : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE SplitText(
                            /* [in] */UINT32 offset,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlText * * secondPart
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXmlText=_uuidof(IXmlText);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Dom */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlText;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlText_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.DtdEntity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IDtdEntity ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_DtdEntity_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_DtdEntity_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_DtdEntity[] = L"Windows.Data.Xml.Dom.DtdEntity";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.DtdNotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IDtdNotation ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_DtdNotation_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_DtdNotation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_DtdNotation[] = L"Windows.Data.Xml.Dom.DtdNotation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlAttribute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlAttribute ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlAttribute_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlAttribute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlAttribute[] = L"Windows.Data.Xml.Dom.XmlAttribute";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlCDataSection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlCDataSection ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlText
 *    Windows.Data.Xml.Dom.IXmlCharacterData
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlCDataSection_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlCDataSection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlCDataSection[] = L"Windows.Data.Xml.Dom.XmlCDataSection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlComment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlComment ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlCharacterData
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlComment_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlComment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlComment[] = L"Windows.Data.Xml.Dom.XmlComment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Xml.Dom.IXmlDocumentStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlDocument ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *    Windows.Data.Xml.Dom.IXmlDocumentIO
 *    Windows.Data.Xml.Dom.IXmlDocumentIO2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDocument_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlDocument[] = L"Windows.Data.Xml.Dom.XmlDocument";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlDocumentFragment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlDocumentFragment ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDocumentFragment_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDocumentFragment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlDocumentFragment[] = L"Windows.Data.Xml.Dom.XmlDocumentFragment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlDocumentType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlDocumentType ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDocumentType_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDocumentType_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlDocumentType[] = L"Windows.Data.Xml.Dom.XmlDocumentType";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlDomImplementation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlDomImplementation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDomImplementation_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDomImplementation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlDomImplementation[] = L"Windows.Data.Xml.Dom.XmlDomImplementation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlElement ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlElement_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlElement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlElement[] = L"Windows.Data.Xml.Dom.XmlElement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlEntityReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlEntityReference ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlEntityReference_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlEntityReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlEntityReference[] = L"Windows.Data.Xml.Dom.XmlEntityReference";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlLoadSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlLoadSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlLoadSettings_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlLoadSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlLoadSettings[] = L"Windows.Data.Xml.Dom.XmlLoadSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlNamedNodeMap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlNamedNodeMap ** Default Interface **
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Foundation.Collections.IIterable_1_Windows.Data.Xml.Dom.IXmlNode
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlNamedNodeMap_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlNamedNodeMap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlNamedNodeMap[] = L"Windows.Data.Xml.Dom.XmlNamedNodeMap";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlNodeList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlNodeList ** Default Interface **
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Foundation.Collections.IIterable_1_Windows.Data.Xml.Dom.IXmlNode
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlNodeList_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlNodeList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlNodeList[] = L"Windows.Data.Xml.Dom.XmlNodeList";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlProcessingInstruction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlProcessingInstruction ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlProcessingInstruction_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlProcessingInstruction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlProcessingInstruction[] = L"Windows.Data.Xml.Dom.XmlProcessingInstruction";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlText ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlCharacterData
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlText_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlText_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlText[] = L"Windows.Data.Xml.Dom.XmlText";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlText_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlText_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlText __x_ABI_CWindows_CData_CXml_CDom_CIXmlText;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlText_FWD_DEFINED__

// Parameterized interface forward declarations (C)

// Collection interface definitions

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_INTERFACE_DEFINED__)
#define ____FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_INTERFACE_DEFINED__

typedef interface __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode;

typedef struct __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * *current);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This, /* [retval][out] */ __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode * This,
        /* [in] */ unsigned int capacity,
        /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * *items,
        /* [retval][out] */ __RPC__out unsigned int *actual);

    END_INTERFACE
} __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl;

interface __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode
{
    CONST_VTBL struct __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_get_Current(This,current)	\
    ( (This)->lpVtbl -> get_Current(This,current) ) 

#define __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_get_HasCurrent(This,hasCurrent)	\
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_MoveNext(This,hasCurrent)	\
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) ) 

#define __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_GetMany(This,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) ) 

#endif /* COBJMACROS */


#endif // ____FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_INTERFACE_DEFINED__)
#define ____FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_INTERFACE_DEFINED__

typedef interface __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode;

typedef  struct __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This);

    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                                           /* [out] */ __RPC__out ULONG *iidCount,
                                           /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode * This, /* [retval][out] */ __RPC__deref_out_opt __FIIterator_1_Windows__CData__CXml__CDom__CIXmlNode **first);

    END_INTERFACE
} __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl;

interface __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode
{
    CONST_VTBL struct __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl *lpVtbl;
};

#ifdef COBJMACROS

#define __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_First(This,first)	\
    ( (This)->lpVtbl -> First(This,first) ) 

#endif /* COBJMACROS */


#endif // ____FIIterable_1_Windows__CData__CXml__CDom__CIXmlNode_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_INTERFACE_DEFINED__)
#define ____FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_INTERFACE_DEFINED__

typedef interface __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode;

typedef struct __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
        __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);

    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This);

    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                                            /* [out] */ __RPC__out ULONG *iidCount,
                                            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);

    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( 
        __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
            /* [out] */ __RPC__deref_out_opt HSTRING *className);

    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( 
        __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
            /* [out] */ __RPC__out TrustLevel *trustLevel);

    HRESULT ( STDMETHODCALLTYPE *GetAt )( 
                                         __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
                                         /* [in] */ unsigned int index,
                                         /* [retval][out] */ __RPC__out __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * *item);

        /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Size )( 
            __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
            /* [retval][out] */ __RPC__out unsigned int *size);

        HRESULT ( STDMETHODCALLTYPE *IndexOf )( 
                                               __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
            /* [in] */ __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * item,
            /* [out] */ __RPC__out unsigned int *index,
            /* [retval][out] */ __RPC__out boolean *found);

        HRESULT ( STDMETHODCALLTYPE *GetMany )( 
                                               __RPC__in __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode * This,
            /* [in] */ unsigned int startIndex,
            /* [in] */ unsigned int capacity,
            /* [size_is][length_is][out] */ __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * *items,
            /* [retval][out] */ __RPC__out unsigned int *actual);

        END_INTERFACE
} __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl;

interface __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNodeVtbl *lpVtbl;
};



#ifdef COBJMACROS


#define __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 

#define __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 

#define __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 


#define __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_GetAt(This,index,item)	\
    ( (This)->lpVtbl -> GetAt(This,index,item) ) 

#define __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_get_Size(This,size)	\
    ( (This)->lpVtbl -> get_Size(This,size) ) 

#define __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_IndexOf(This,item,index,found)	\
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) ) 

#define __FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_GetMany(This,startIndex,capacity,items,actual)	\
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) ) 

#endif /* COBJMACROS */



#endif // ____FIVectorView_1_Windows__CData__CXml__CDom__CIXmlNode_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument_INTERFACE_DEFINED__)
#define ____FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument_INTERFACE_DEFINED__

typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument;

// Forward declare the async operation.
typedef interface __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument;

typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocumentVtbl
{
    BEGIN_INTERFACE

    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument * This);

    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument * This,/* [in] */ __RPC__in_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument *asyncInfo, /* [in] */ AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocumentVtbl;

interface __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocumentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument_Invoke(This,asyncInfo,status)	\
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_INTERFACE_DEFINED__)
#define ____FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_INTERFACE_DEFINED__

typedef interface __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument;

//  Declare the parameterized interface IID.
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument;

typedef struct __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This,
        /* [in] */ __RPC__in REFIID riid,
        /* [annotation][iid_is][out] */ 
        _COM_Outptr_  void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This);

    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This,
        /* [out] */ __RPC__out ULONG *iidCount,
        /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This, /* [out] */ __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This, /* [out] */ __RPC__out TrustLevel *trustLevel);

    /* [propput] */ HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This, /* [in] */ __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument *handler);
    /* [propget] */ HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This, /* [retval][out] */ __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CData__CXml__CDom__CXmlDocument **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * This, /* [retval][out] */ __RPC__out __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocumentVtbl;

interface __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocumentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 
#define __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 
#define __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 

#define __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_GetIids(This,iidCount,iids)	\
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) ) 
#define __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_GetRuntimeClassName(This,className)	\
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) ) 
#define __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_GetTrustLevel(This,trustLevel)	\
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) ) 

#define __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_put_Completed(This,handler)	\
    ( (This)->lpVtbl -> put_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_get_Completed(This,handler)	\
    ( (This)->lpVtbl -> get_Completed(This,handler) ) 
#define __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_GetResults(This,results)	\
    ( (This)->lpVtbl -> GetResults(This,results) ) 
#endif /* COBJMACROS */


#endif // ____FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument_INTERFACE_DEFINED__

#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


#ifndef ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;

#endif // ____x_ABI_CWindows_CFoundation_CIAsyncAction_FWD_DEFINED__



#ifndef ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
#define ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;

#endif // ____x_ABI_CWindows_CFoundation_CIUriRuntimeClass_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;

#endif // ____x_ABI_CWindows_CStorage_CIStorageFile_FWD_DEFINED__




#ifndef ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
#define ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;

#endif // ____x_ABI_CWindows_CStorage_CStreams_CIBuffer_FWD_DEFINED__






typedef enum __x_ABI_CWindows_CData_CXml_CDom_CNodeType __x_ABI_CWindows_CData_CXml_CDom_CNodeType;


















































/*
 *
 * Struct Windows.Data.Xml.Dom.NodeType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */

#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
/* [v1_enum, contract] */
enum __x_ABI_CWindows_CData_CXml_CDom_CNodeType
{
    NodeType_Invalid = 0,
    NodeType_ElementNode = 1,
    NodeType_AttributeNode = 2,
    NodeType_TextNode = 3,
    NodeType_DataSectionNode = 4,
    NodeType_EntityReferenceNode = 5,
    NodeType_EntityNode = 6,
    NodeType_ProcessingInstructionNode = 7,
    NodeType_CommentNode = 8,
    NodeType_DocumentNode = 9,
    NodeType_DocumentTypeNode = 10,
    NodeType_DocumentFragmentNode = 11,
    NodeType_NotationNode = 12,
};
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IDtdEntity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.DtdEntity
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IDtdEntity[] = L"Windows.Data.Xml.Dom.IDtdEntity";
/* [object, uuid("6A0B5FFC-63B4-480F-9E6A-8A92816AADE4"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PublicId )(
        __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SystemId )(
        __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NotationName )(
        __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntityVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntityVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_get_PublicId(This,value) \
    ( (This)->lpVtbl->get_PublicId(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_get_SystemId(This,value) \
    ( (This)->lpVtbl->get_SystemId(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_get_NotationName(This,value) \
    ( (This)->lpVtbl->get_NotationName(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIDtdEntity_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IDtdNotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.DtdNotation
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IDtdNotation[] = L"Windows.Data.Xml.Dom.IDtdNotation";
/* [object, uuid("8CB4E04D-6D46-4EDB-AB73-DF83C51AD397"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PublicId )(
        __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_SystemId )(
        __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotationVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_get_PublicId(This,value) \
    ( (This)->lpVtbl->get_PublicId(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_get_SystemId(This,value) \
    ( (This)->lpVtbl->get_SystemId(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIDtdNotation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlAttribute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlAttribute
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlAttribute[] = L"Windows.Data.Xml.Dom.IXmlAttribute";
/* [object, uuid("AC144AA4-B4F1-4DB6-B206-8A22C308DB0A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttributeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Specified )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttributeVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttributeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_get_Specified(This,value) \
    ( (This)->lpVtbl->get_Specified(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_get_Value(This,value) \
    ( (This)->lpVtbl->get_Value(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_put_Value(This,value) \
    ( (This)->lpVtbl->put_Value(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlCDataSection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlCDataSection
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlText
 *     Windows.Data.Xml.Dom.IXmlCharacterData
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlCDataSection[] = L"Windows.Data.Xml.Dom.IXmlCDataSection";
/* [object, uuid("4D04B46F-C8BD-45B4-8899-0400D7C2C60F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSectionVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSectionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlCharacterData
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlCharacterData[] = L"Windows.Data.Xml.Dom.IXmlCharacterData";
/* [object, uuid("132E42AB-4E36-4DF6-B1C8-0CE62FD88B26"), contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
        /* [in] */__RPC__in HSTRING value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *SubstringData )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
        /* [in] */UINT32 offset,
        /* [in] */UINT32 count,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * data
        );
    HRESULT ( STDMETHODCALLTYPE *AppendData )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
        /* [in] */__RPC__in HSTRING data
        );
    HRESULT ( STDMETHODCALLTYPE *InsertData )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
        /* [in] */UINT32 offset,
        /* [in] */__RPC__in HSTRING data
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteData )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
        /* [in] */UINT32 offset,
        /* [in] */UINT32 count
        );
    HRESULT ( STDMETHODCALLTYPE *ReplaceData )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData * This,
        /* [in] */UINT32 offset,
        /* [in] */UINT32 count,
        /* [in] */__RPC__in HSTRING data
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterDataVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterDataVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_put_Data(This,value) \
    ( (This)->lpVtbl->put_Data(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_get_Length(This,value) \
    ( (This)->lpVtbl->get_Length(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_SubstringData(This,offset,count,data) \
    ( (This)->lpVtbl->SubstringData(This,offset,count,data) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_AppendData(This,data) \
    ( (This)->lpVtbl->AppendData(This,data) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_InsertData(This,offset,data) \
    ( (This)->lpVtbl->InsertData(This,offset,data) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_DeleteData(This,offset,count) \
    ( (This)->lpVtbl->DeleteData(This,offset,count) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_ReplaceData(This,offset,count,data) \
    ( (This)->lpVtbl->ReplaceData(This,offset,count,data) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlCharacterData_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlComment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlComment
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlCharacterData
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlComment[] = L"Windows.Data.Xml.Dom.IXmlComment";
/* [object, uuid("BCA474D5-B61F-4611-9CAC-2E92E3476D47"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlCommentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlCommentVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlCommentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlComment;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlComment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDocument
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocument[] = L"Windows.Data.Xml.Dom.IXmlDocument";
/* [object, uuid("F7F3A506-1E87-42D6-BCFB-B8C809FA5494"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Doctype )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Implementation )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentElement )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateElement )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [in] */__RPC__in HSTRING tagName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * * newElement
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDocumentFragment )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * * newDocumentFragment
        );
    HRESULT ( STDMETHODCALLTYPE *CreateTextNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [in] */__RPC__in HSTRING data,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * * newTextNode
        );
    HRESULT ( STDMETHODCALLTYPE *CreateComment )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [in] */__RPC__in HSTRING data,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlComment * * newComment
        );
    HRESULT ( STDMETHODCALLTYPE *CreateProcessingInstruction )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [in] */__RPC__in HSTRING target,
        /* [in] */__RPC__in HSTRING data,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * * newProcessingInstruction
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAttribute )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * newAttribute
        );
    HRESULT ( STDMETHODCALLTYPE *CreateEntityReference )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * * newEntityReference
        );
    HRESULT ( STDMETHODCALLTYPE *GetElementsByTagName )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [in] */__RPC__in HSTRING tagName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * * elements
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCDataSection )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [in] */__RPC__in HSTRING data,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlCDataSection * * newCDataSection
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_DocumentUri )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAttributeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [in] */__RPC__in_opt IInspectable * namespaceUri,
        /* [in] */__RPC__in HSTRING qualifiedName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * newAttribute
        );
    HRESULT ( STDMETHODCALLTYPE *CreateElementNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [in] */__RPC__in_opt IInspectable * namespaceUri,
        /* [in] */__RPC__in HSTRING qualifiedName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * * newElement
        );
    HRESULT ( STDMETHODCALLTYPE *GetElementById )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [in] */__RPC__in HSTRING elementId,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * * element
        );
    HRESULT ( STDMETHODCALLTYPE *ImportNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * node,
        /* [in] */boolean deep,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * newNode
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_get_Doctype(This,value) \
    ( (This)->lpVtbl->get_Doctype(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_get_Implementation(This,value) \
    ( (This)->lpVtbl->get_Implementation(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_get_DocumentElement(This,value) \
    ( (This)->lpVtbl->get_DocumentElement(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_CreateElement(This,tagName,newElement) \
    ( (This)->lpVtbl->CreateElement(This,tagName,newElement) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_CreateDocumentFragment(This,newDocumentFragment) \
    ( (This)->lpVtbl->CreateDocumentFragment(This,newDocumentFragment) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_CreateTextNode(This,data,newTextNode) \
    ( (This)->lpVtbl->CreateTextNode(This,data,newTextNode) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_CreateComment(This,data,newComment) \
    ( (This)->lpVtbl->CreateComment(This,data,newComment) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_CreateProcessingInstruction(This,target,data,newProcessingInstruction) \
    ( (This)->lpVtbl->CreateProcessingInstruction(This,target,data,newProcessingInstruction) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_CreateAttribute(This,name,newAttribute) \
    ( (This)->lpVtbl->CreateAttribute(This,name,newAttribute) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_CreateEntityReference(This,name,newEntityReference) \
    ( (This)->lpVtbl->CreateEntityReference(This,name,newEntityReference) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_GetElementsByTagName(This,tagName,elements) \
    ( (This)->lpVtbl->GetElementsByTagName(This,tagName,elements) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_CreateCDataSection(This,data,newCDataSection) \
    ( (This)->lpVtbl->CreateCDataSection(This,data,newCDataSection) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_get_DocumentUri(This,value) \
    ( (This)->lpVtbl->get_DocumentUri(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_CreateAttributeNS(This,namespaceUri,qualifiedName,newAttribute) \
    ( (This)->lpVtbl->CreateAttributeNS(This,namespaceUri,qualifiedName,newAttribute) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_CreateElementNS(This,namespaceUri,qualifiedName,newElement) \
    ( (This)->lpVtbl->CreateElementNS(This,namespaceUri,qualifiedName,newElement) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_GetElementById(This,elementId,element) \
    ( (This)->lpVtbl->GetElementById(This,elementId,element) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_ImportNode(This,node,deep,newNode) \
    ( (This)->lpVtbl->ImportNode(This,node,deep,newNode) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDocumentFragment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDocumentFragment
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentFragment[] = L"Windows.Data.Xml.Dom.IXmlDocumentFragment";
/* [object, uuid("E2EA6A96-0C21-44A5-8BC9-9E4A262708EC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragmentVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragmentVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentFragment_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDocumentIO
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentIO[] = L"Windows.Data.Xml.Dom.IXmlDocumentIO";
/* [object, uuid("6CD0E74E-EE65-4489-9EBF-CA43E87BA637"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIOVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadXml )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
        /* [in] */__RPC__in HSTRING xml
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadXmlWithSettings )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
        /* [in] */__RPC__in HSTRING xml,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * loadSettings
        );
    HRESULT ( STDMETHODCALLTYPE *SaveToFileAsync )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIOVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIOVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_LoadXml(This,xml) \
    ( (This)->lpVtbl->LoadXml(This,xml) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_LoadXmlWithSettings(This,xml,loadSettings) \
    ( (This)->lpVtbl->LoadXmlWithSettings(This,xml,loadSettings) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_SaveToFileAsync(This,file,asyncInfo) \
    ( (This)->lpVtbl->SaveToFileAsync(This,file,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDocumentIO2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentIO2[] = L"Windows.Data.Xml.Dom.IXmlDocumentIO2";
/* [object, uuid("5D034661-7BD8-4AD5-9EBF-81E6347263B1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadXmlFromBuffer )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadXmlFromBufferWithSettings )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * loadSettings
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2Vtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_LoadXmlFromBuffer(This,buffer) \
    ( (This)->lpVtbl->LoadXmlFromBuffer(This,buffer) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_LoadXmlFromBufferWithSettings(This,buffer,loadSettings) \
    ( (This)->lpVtbl->LoadXmlFromBufferWithSettings(This,buffer,loadSettings) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentIO2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDocumentStatics
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDocument
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentStatics[] = L"Windows.Data.Xml.Dom.IXmlDocumentStatics";
/* [object, uuid("5543D254-D757-4B79-9539-232B18F50BF1"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadFromUriAsync )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadFromUriWithSettingsAsync )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * loadSettings,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadFromFileAsync )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * * asyncInfo
        );
    /* [overload] */HRESULT ( STDMETHODCALLTYPE *LoadFromFileWithSettingsAsync )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * loadSettings,
        /* [retval, out] */__RPC__deref_out_opt __FIAsyncOperation_1_Windows__CData__CXml__CDom__CXmlDocument * * asyncInfo
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStaticsVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_LoadFromUriAsync(This,uri,asyncInfo) \
    ( (This)->lpVtbl->LoadFromUriAsync(This,uri,asyncInfo) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_LoadFromUriWithSettingsAsync(This,uri,loadSettings,asyncInfo) \
    ( (This)->lpVtbl->LoadFromUriWithSettingsAsync(This,uri,loadSettings,asyncInfo) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_LoadFromFileAsync(This,file,asyncInfo) \
    ( (This)->lpVtbl->LoadFromFileAsync(This,file,asyncInfo) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_LoadFromFileWithSettingsAsync(This,file,loadSettings,asyncInfo) \
    ( (This)->lpVtbl->LoadFromFileWithSettingsAsync(This,file,loadSettings,asyncInfo) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDocumentType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDocumentType
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDocumentType[] = L"Windows.Data.Xml.Dom.IXmlDocumentType";
/* [object, uuid("F7342425-9781-4964-8E94-9B1C6DFC9BC7"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Entities )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Notations )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentTypeVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentTypeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_get_Name(This,value) \
    ( (This)->lpVtbl->get_Name(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_get_Entities(This,value) \
    ( (This)->lpVtbl->get_Entities(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_get_Notations(This,value) \
    ( (This)->lpVtbl->get_Notations(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocumentType_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlDomImplementation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlDomImplementation
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlDomImplementation[] = L"Windows.Data.Xml.Dom.IXmlDomImplementation";
/* [object, uuid("6DE58132-F11D-4FBB-8CC6-583CBA93112F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *HasFeature )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation * This,
        /* [in] */__RPC__in HSTRING feature,
        /* [in] */__RPC__in_opt IInspectable * version,
        /* [retval, out] */__RPC__out boolean * featureSupported
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementationVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementationVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_HasFeature(This,feature,version,featureSupported) \
    ( (This)->lpVtbl->HasFeature(This,feature,version,featureSupported) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlDomImplementation_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlElement
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlElement[] = L"Windows.Data.Xml.Dom.IXmlElement";
/* [object, uuid("2DFB8A1F-6B10-4EF8-9F83-EFCCE8FAEC37"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_TagName )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttribute )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
        /* [in] */__RPC__in HSTRING attributeName,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * attributeValue
        );
    HRESULT ( STDMETHODCALLTYPE *SetAttribute )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
        /* [in] */__RPC__in HSTRING attributeName,
        /* [in] */__RPC__in HSTRING attributeValue
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAttribute )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
        /* [in] */__RPC__in HSTRING attributeName
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttributeNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
        /* [in] */__RPC__in HSTRING attributeName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * attributeNode
        );
    HRESULT ( STDMETHODCALLTYPE *SetAttributeNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * newAttribute,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * previousAttribute
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAttributeNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * attributeNode,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * removedAttribute
        );
    HRESULT ( STDMETHODCALLTYPE *GetElementsByTagName )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
        /* [in] */__RPC__in HSTRING tagName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * * elements
        );
    HRESULT ( STDMETHODCALLTYPE *SetAttributeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
        /* [in] */__RPC__in_opt IInspectable * namespaceUri,
        /* [in] */__RPC__in HSTRING qualifiedName,
        /* [in] */__RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttributeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
        /* [in] */__RPC__in_opt IInspectable * namespaceUri,
        /* [in] */__RPC__in HSTRING localName,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAttributeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
        /* [in] */__RPC__in_opt IInspectable * namespaceUri,
        /* [in] */__RPC__in HSTRING localName
        );
    HRESULT ( STDMETHODCALLTYPE *SetAttributeNodeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * newAttribute,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * previousAttribute
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttributeNodeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement * This,
        /* [in] */__RPC__in_opt IInspectable * namespaceUri,
        /* [in] */__RPC__in HSTRING localName,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlAttribute * * previousAttribute
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlElementVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlElementVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_get_TagName(This,value) \
    ( (This)->lpVtbl->get_TagName(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_GetAttribute(This,attributeName,attributeValue) \
    ( (This)->lpVtbl->GetAttribute(This,attributeName,attributeValue) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_SetAttribute(This,attributeName,attributeValue) \
    ( (This)->lpVtbl->SetAttribute(This,attributeName,attributeValue) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_RemoveAttribute(This,attributeName) \
    ( (This)->lpVtbl->RemoveAttribute(This,attributeName) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_GetAttributeNode(This,attributeName,attributeNode) \
    ( (This)->lpVtbl->GetAttributeNode(This,attributeName,attributeNode) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_SetAttributeNode(This,newAttribute,previousAttribute) \
    ( (This)->lpVtbl->SetAttributeNode(This,newAttribute,previousAttribute) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_RemoveAttributeNode(This,attributeNode,removedAttribute) \
    ( (This)->lpVtbl->RemoveAttributeNode(This,attributeNode,removedAttribute) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_GetElementsByTagName(This,tagName,elements) \
    ( (This)->lpVtbl->GetElementsByTagName(This,tagName,elements) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_SetAttributeNS(This,namespaceUri,qualifiedName,value) \
    ( (This)->lpVtbl->SetAttributeNS(This,namespaceUri,qualifiedName,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_GetAttributeNS(This,namespaceUri,localName,value) \
    ( (This)->lpVtbl->GetAttributeNS(This,namespaceUri,localName,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_RemoveAttributeNS(This,namespaceUri,localName) \
    ( (This)->lpVtbl->RemoveAttributeNS(This,namespaceUri,localName) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_SetAttributeNodeNS(This,newAttribute,previousAttribute) \
    ( (This)->lpVtbl->SetAttributeNodeNS(This,newAttribute,previousAttribute) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_GetAttributeNodeNS(This,namespaceUri,localName,previousAttribute) \
    ( (This)->lpVtbl->GetAttributeNodeNS(This,namespaceUri,localName,previousAttribute) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlElement;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlElement_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlEntityReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlEntityReference
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlEntityReference[] = L"Windows.Data.Xml.Dom.IXmlEntityReference";
/* [object, uuid("2E2F47BC-C3D0-4CCF-BB86-0AB8C36A61CF"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReferenceVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReferenceVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlEntityReference_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlLoadSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlLoadSettings
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlLoadSettings[] = L"Windows.Data.Xml.Dom.IXmlLoadSettings";
/* [object, uuid("58AA07A8-FED6-46F7-B4C5-FB1BA72108D6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_MaxElementDepth )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_MaxElementDepth )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
        /* [in] */UINT32 value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ProhibitDtd )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ProhibitDtd )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ResolveExternals )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ResolveExternals )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ValidateOnParse )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ValidateOnParse )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
        /* [in] */boolean value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ElementContentWhiteSpace )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_ElementContentWhiteSpace )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings * This,
        /* [in] */boolean value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettingsVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettingsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_get_MaxElementDepth(This,value) \
    ( (This)->lpVtbl->get_MaxElementDepth(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_put_MaxElementDepth(This,value) \
    ( (This)->lpVtbl->put_MaxElementDepth(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_get_ProhibitDtd(This,value) \
    ( (This)->lpVtbl->get_ProhibitDtd(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_put_ProhibitDtd(This,value) \
    ( (This)->lpVtbl->put_ProhibitDtd(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_get_ResolveExternals(This,value) \
    ( (This)->lpVtbl->get_ResolveExternals(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_put_ResolveExternals(This,value) \
    ( (This)->lpVtbl->put_ResolveExternals(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_get_ValidateOnParse(This,value) \
    ( (This)->lpVtbl->get_ValidateOnParse(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_put_ValidateOnParse(This,value) \
    ( (This)->lpVtbl->put_ValidateOnParse(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_get_ElementContentWhiteSpace(This,value) \
    ( (This)->lpVtbl->get_ElementContentWhiteSpace(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_put_ElementContentWhiteSpace(This,value) \
    ( (This)->lpVtbl->put_ElementContentWhiteSpace(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlLoadSettings_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlNamedNodeMap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlNamedNodeMap
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IVectorView_1_Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Foundation.Collections.IIterable_1_Windows.Data.Xml.Dom.IXmlNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNamedNodeMap[] = L"Windows.Data.Xml.Dom.IXmlNamedNodeMap";
/* [object, uuid("B3A69EB0-AAB0-4B82-A6FA-B1453F7C021B"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Item )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
        /* [in] */UINT32 index,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * node
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedItem )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * node
        );
    HRESULT ( STDMETHODCALLTYPE *SetNamedItem )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * node,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * previousNode
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveNamedItem )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * previousNode
        );
    HRESULT ( STDMETHODCALLTYPE *GetNamedItemNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
        /* [in] */__RPC__in_opt IInspectable * namespaceUri,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * node
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveNamedItemNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
        /* [in] */__RPC__in_opt IInspectable * namespaceUri,
        /* [in] */__RPC__in HSTRING name,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * previousNode
        );
    HRESULT ( STDMETHODCALLTYPE *SetNamedItemNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * node,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * previousNode
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMapVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMapVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_get_Length(This,value) \
    ( (This)->lpVtbl->get_Length(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_Item(This,index,node) \
    ( (This)->lpVtbl->Item(This,index,node) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_GetNamedItem(This,name,node) \
    ( (This)->lpVtbl->GetNamedItem(This,name,node) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_SetNamedItem(This,node,previousNode) \
    ( (This)->lpVtbl->SetNamedItem(This,node,previousNode) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_RemoveNamedItem(This,name,previousNode) \
    ( (This)->lpVtbl->RemoveNamedItem(This,name,previousNode) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_GetNamedItemNS(This,namespaceUri,name,node) \
    ( (This)->lpVtbl->GetNamedItemNS(This,namespaceUri,name,node) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_RemoveNamedItemNS(This,namespaceUri,name,previousNode) \
    ( (This)->lpVtbl->RemoveNamedItemNS(This,namespaceUri,name,previousNode) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_SetNamedItemNS(This,node,previousNode) \
    ( (This)->lpVtbl->SetNamedItemNS(This,node,previousNode) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlNode
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNode[] = L"Windows.Data.Xml.Dom.IXmlNode";
/* [object, uuid("1C741D59-2122-47D5-A856-83F3D4214875"), contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NodeValue )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_NodeValue )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NodeType )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__out __x_ABI_CWindows_CData_CXml_CDom_CNodeType * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NodeName )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ParentNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_ChildNodes )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_FirstChild )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LastChild )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_PreviousSibling )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NextSibling )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNamedNodeMap * * value
        );
    HRESULT ( STDMETHODCALLTYPE *HasChildNodes )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__out boolean * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_OwnerDocument )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * value
        );
    HRESULT ( STDMETHODCALLTYPE *InsertBefore )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * newChild,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * referenceChild,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * insertedChild
        );
    HRESULT ( STDMETHODCALLTYPE *ReplaceChild )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * newChild,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * referenceChild,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * previousChild
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveChild )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * childNode,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * removedChild
        );
    HRESULT ( STDMETHODCALLTYPE *AppendChild )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * newChild,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * appendedChild
        );
    HRESULT ( STDMETHODCALLTYPE *CloneNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [in] */boolean deep,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * newNode
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_NamespaceUri )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_LocalName )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Prefix )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [retval, out] */__RPC__deref_out_opt IInspectable * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Normalize )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Prefix )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * This,
        /* [in] */__RPC__in_opt IInspectable * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_NodeValue(This,value) \
    ( (This)->lpVtbl->get_NodeValue(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_put_NodeValue(This,value) \
    ( (This)->lpVtbl->put_NodeValue(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_NodeType(This,value) \
    ( (This)->lpVtbl->get_NodeType(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_NodeName(This,value) \
    ( (This)->lpVtbl->get_NodeName(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_ParentNode(This,value) \
    ( (This)->lpVtbl->get_ParentNode(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_ChildNodes(This,value) \
    ( (This)->lpVtbl->get_ChildNodes(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_FirstChild(This,value) \
    ( (This)->lpVtbl->get_FirstChild(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_LastChild(This,value) \
    ( (This)->lpVtbl->get_LastChild(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_PreviousSibling(This,value) \
    ( (This)->lpVtbl->get_PreviousSibling(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_NextSibling(This,value) \
    ( (This)->lpVtbl->get_NextSibling(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_Attributes(This,value) \
    ( (This)->lpVtbl->get_Attributes(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_HasChildNodes(This,value) \
    ( (This)->lpVtbl->HasChildNodes(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_OwnerDocument(This,value) \
    ( (This)->lpVtbl->get_OwnerDocument(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_InsertBefore(This,newChild,referenceChild,insertedChild) \
    ( (This)->lpVtbl->InsertBefore(This,newChild,referenceChild,insertedChild) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_ReplaceChild(This,newChild,referenceChild,previousChild) \
    ( (This)->lpVtbl->ReplaceChild(This,newChild,referenceChild,previousChild) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_RemoveChild(This,childNode,removedChild) \
    ( (This)->lpVtbl->RemoveChild(This,childNode,removedChild) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_AppendChild(This,newChild,appendedChild) \
    ( (This)->lpVtbl->AppendChild(This,newChild,appendedChild) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_CloneNode(This,deep,newNode) \
    ( (This)->lpVtbl->CloneNode(This,deep,newNode) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_NamespaceUri(This,value) \
    ( (This)->lpVtbl->get_NamespaceUri(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_LocalName(This,value) \
    ( (This)->lpVtbl->get_LocalName(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_get_Prefix(This,value) \
    ( (This)->lpVtbl->get_Prefix(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_Normalize(This) \
    ( (This)->lpVtbl->Normalize(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_put_Prefix(This,value) \
    ( (This)->lpVtbl->put_Prefix(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNode;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlNodeList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlNodeList
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Foundation.Collections.IVectorView_1_Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Foundation.Collections.IIterable_1_Windows.Data.Xml.Dom.IXmlNode
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNodeList[] = L"Windows.Data.Xml.Dom.IXmlNodeList";
/* [object, uuid("8C60AD77-83A4-4EC1-9C54-7BA429E13DA6"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This,
        /* [retval, out] */__RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Item )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * This,
        /* [in] */UINT32 index,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * node
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeListVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeListVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_get_Length(This,value) \
    ( (This)->lpVtbl->get_Length(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_Item(This,index,node) \
    ( (This)->lpVtbl->Item(This,index,node) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNodeSelector[] = L"Windows.Data.Xml.Dom.IXmlNodeSelector";
/* [object, uuid("63DBBA8B-D0DB-4FE1-B745-F9433AFDC25B"), contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SelectSingleNode )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
        /* [in] */__RPC__in HSTRING xpath,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * node
        );
    HRESULT ( STDMETHODCALLTYPE *SelectNodes )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
        /* [in] */__RPC__in HSTRING xpath,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * * nodelist
        );
    HRESULT ( STDMETHODCALLTYPE *SelectSingleNodeNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
        /* [in] */__RPC__in HSTRING xpath,
        /* [in] */__RPC__in_opt IInspectable * namespaces,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * * node
        );
    HRESULT ( STDMETHODCALLTYPE *SelectNodesNS )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector * This,
        /* [in] */__RPC__in HSTRING xpath,
        /* [in] */__RPC__in_opt IInspectable * namespaces,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeList * * nodelist
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelectorVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelectorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_SelectSingleNode(This,xpath,node) \
    ( (This)->lpVtbl->SelectSingleNode(This,xpath,node) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_SelectNodes(This,xpath,nodelist) \
    ( (This)->lpVtbl->SelectNodes(This,xpath,nodelist) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_SelectSingleNodeNS(This,xpath,namespaces,node) \
    ( (This)->lpVtbl->SelectSingleNodeNS(This,xpath,namespaces,node) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_SelectNodesNS(This,xpath,namespaces,nodelist) \
    ( (This)->lpVtbl->SelectNodesNS(This,xpath,namespaces,nodelist) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSelector_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlNodeSerializer[] = L"Windows.Data.Xml.Dom.IXmlNodeSerializer";
/* [object, uuid("5CC5B382-E6DD-4991-ABEF-06D8D2E7BD0C"), contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetXml )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * outerXml
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_InnerText )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_InnerText )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializerVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializerVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_GetXml(This,outerXml) \
    ( (This)->lpVtbl->GetXml(This,outerXml) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_get_InnerText(This,value) \
    ( (This)->lpVtbl->get_InnerText(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_put_InnerText(This,value) \
    ( (This)->lpVtbl->put_InnerText(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlNodeSerializer_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlProcessingInstruction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Dom.XmlProcessingInstruction
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlProcessingInstruction[] = L"Windows.Data.Xml.Dom.IXmlProcessingInstruction";
/* [object, uuid("2707FD1E-1E92-4ECE-B6F4-26F069078DDC"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstructionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
/* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Target )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propget] */HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    /* [propput] */HRESULT ( STDMETHODCALLTYPE *put_Data )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction * This,
        /* [in] */__RPC__in HSTRING value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstructionVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstructionVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_get_Target(This,value) \
    ( (This)->lpVtbl->get_Target(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_get_Data(This,value) \
    ( (This)->lpVtbl->get_Data(This,value) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_put_Data(This,value) \
    ( (This)->lpVtbl->put_Data(This,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlProcessingInstruction_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Dom.IXmlText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Any object which implements this interface must also implement the following interfaces:
 *     Windows.Data.Xml.Dom.IXmlCharacterData
 *     Windows.Data.Xml.Dom.IXmlNode
 *     Windows.Data.Xml.Dom.IXmlNodeSelector
 *     Windows.Data.Xml.Dom.IXmlNodeSerializer
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlText_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlText_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Dom_IXmlText[] = L"Windows.Data.Xml.Dom.IXmlText";
/* [object, uuid("F931A4CB-308D-4760-A1D5-43B67450AC7E"), contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlTextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SplitText )(
        __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * This,
        /* [in] */UINT32 offset,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlText * * secondPart
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CDom_CIXmlTextVtbl;

interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlText
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CDom_CIXmlTextVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlText_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlText_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlText_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlText_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlText_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlText_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CDom_CIXmlText_SplitText(This,offset,secondPart) \
    ( (This)->lpVtbl->SplitText(This,offset,secondPart) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CDom_CIXmlText;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CDom_CIXmlText_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.DtdEntity
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IDtdEntity ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_DtdEntity_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_DtdEntity_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_DtdEntity[] = L"Windows.Data.Xml.Dom.DtdEntity";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.DtdNotation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IDtdNotation ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_DtdNotation_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_DtdNotation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_DtdNotation[] = L"Windows.Data.Xml.Dom.DtdNotation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlAttribute
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlAttribute ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlAttribute_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlAttribute_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlAttribute[] = L"Windows.Data.Xml.Dom.XmlAttribute";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlCDataSection
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlCDataSection ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlText
 *    Windows.Data.Xml.Dom.IXmlCharacterData
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlCDataSection_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlCDataSection_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlCDataSection[] = L"Windows.Data.Xml.Dom.XmlCDataSection";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlComment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlComment ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlCharacterData
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlComment_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlComment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlComment[] = L"Windows.Data.Xml.Dom.XmlComment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlDocument
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Data.Xml.Dom.IXmlDocumentStatics interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlDocument ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *    Windows.Data.Xml.Dom.IXmlDocumentIO
 *    Windows.Data.Xml.Dom.IXmlDocumentIO2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDocument_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDocument_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlDocument[] = L"Windows.Data.Xml.Dom.XmlDocument";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlDocumentFragment
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlDocumentFragment ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDocumentFragment_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDocumentFragment_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlDocumentFragment[] = L"Windows.Data.Xml.Dom.XmlDocumentFragment";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlDocumentType
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlDocumentType ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDocumentType_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDocumentType_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlDocumentType[] = L"Windows.Data.Xml.Dom.XmlDocumentType";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlDomImplementation
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlDomImplementation ** Default Interface **
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDomImplementation_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlDomImplementation_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlDomImplementation[] = L"Windows.Data.Xml.Dom.XmlDomImplementation";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlElement
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlElement ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlElement_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlElement_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlElement[] = L"Windows.Data.Xml.Dom.XmlElement";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlEntityReference
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlEntityReference ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlEntityReference_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlEntityReference_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlEntityReference[] = L"Windows.Data.Xml.Dom.XmlEntityReference";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlLoadSettings
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via RoActivateInstance starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlLoadSettings ** Default Interface **
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlLoadSettings_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlLoadSettings_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlLoadSettings[] = L"Windows.Data.Xml.Dom.XmlLoadSettings";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlNamedNodeMap
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlNamedNodeMap ** Default Interface **
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Foundation.Collections.IIterable_1_Windows.Data.Xml.Dom.IXmlNode
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlNamedNodeMap_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlNamedNodeMap_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlNamedNodeMap[] = L"Windows.Data.Xml.Dom.XmlNamedNodeMap";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlNodeList
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlNodeList ** Default Interface **
 *    Windows.Foundation.Collections.IVectorView_1_Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Foundation.Collections.IIterable_1_Windows.Data.Xml.Dom.IXmlNode
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlNodeList_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlNodeList_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlNodeList[] = L"Windows.Data.Xml.Dom.XmlNodeList";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlProcessingInstruction
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlProcessingInstruction ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlProcessingInstruction_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlProcessingInstruction_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlProcessingInstruction[] = L"Windows.Data.Xml.Dom.XmlProcessingInstruction";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Dom.XmlText
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Dom.IXmlText ** Default Interface **
 *    Windows.Data.Xml.Dom.IXmlCharacterData
 *    Windows.Data.Xml.Dom.IXmlNode
 *    Windows.Data.Xml.Dom.IXmlNodeSerializer
 *    Windows.Data.Xml.Dom.IXmlNodeSelector
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Dom_XmlText_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Dom_XmlText_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Dom_XmlText[] = L"Windows.Data.Xml.Dom.XmlText";
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
#endif // __windows2Edata2Exml2Edom_p_h__

#endif // __windows2Edata2Exml2Edom_h__
