/* Header file automatically generated from windows.data.xml.xsl.idl */
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
#ifndef __windows2Edata2Exml2Exsl_h__
#define __windows2Edata2Exml2Exsl_h__
#ifndef __windows2Edata2Exml2Exsl_p_h__
#define __windows2Edata2Exml2Exsl_p_h__


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
#include "Windows.Data.Xml.Dom.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Xsl {
                    interface IXsltProcessor;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Xsl */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor ABI::Windows::Data::Xml::Xsl::IXsltProcessor

#endif // ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Xsl {
                    interface IXsltProcessor2;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Xsl */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 ABI::Windows::Data::Xml::Xsl::IXsltProcessor2

#endif // ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Xsl {
                    interface IXsltProcessorFactory;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Xsl */} /* ABI */
#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory ABI::Windows::Data::Xml::Xsl::IXsltProcessorFactory

#endif // ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_FWD_DEFINED__


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












namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Xsl {
                    class XsltProcessor;
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Xsl */} /* ABI */







/*
 *
 * Interface Windows.Data.Xml.Xsl.IXsltProcessor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Xsl.XsltProcessor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Xsl_IXsltProcessor[] = L"Windows.Data.Xml.Xsl.IXsltProcessor";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Xsl {
                    /* [object, uuid("7B64703F-550C-48C6-A90F-93A5B964518F"), exclusiveto, contract] */
                    MIDL_INTERFACE("7B64703F-550C-48C6-A90F-93A5B964518F")
                    IXsltProcessor : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE TransformToString(
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlNode * inputNode,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * output
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXsltProcessor=_uuidof(IXsltProcessor);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Xsl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Xsl.IXsltProcessor2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Xsl.XsltProcessor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Xsl_IXsltProcessor2[] = L"Windows.Data.Xml.Xsl.IXsltProcessor2";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Xsl {
                    /* [object, uuid("8DA45C56-97A5-44CB-A8BE-27D86280C70A"), exclusiveto, contract] */
                    MIDL_INTERFACE("8DA45C56-97A5-44CB-A8BE-27D86280C70A")
                    IXsltProcessor2 : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE TransformToDocument(
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlNode * inputNode,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Dom::IXmlDocument * * output
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXsltProcessor2=_uuidof(IXsltProcessor2);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Xsl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Xsl.IXsltProcessorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Xsl.XsltProcessor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Xsl_IXsltProcessorFactory[] = L"Windows.Data.Xml.Xsl.IXsltProcessorFactory";
namespace ABI {
    namespace Windows {
        namespace Data {
            namespace Xml {
                namespace Xsl {
                    /* [object, uuid("274146C0-9A51-4663-BF30-0EF742146F20"), exclusiveto, contract] */
                    MIDL_INTERFACE("274146C0-9A51-4663-BF30-0EF742146F20")
                    IXsltProcessorFactory : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE CreateInstance(
                            /* [in] */__RPC__in_opt ABI::Windows::Data::Xml::Dom::IXmlDocument * document,
                            /* [retval, out] */__RPC__deref_out_opt ABI::Windows::Data::Xml::Xsl::IXsltProcessor * * xsltProcessor
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IXsltProcessorFactory=_uuidof(IXsltProcessorFactory);
                    
                } /* Windows */
            } /* Data */
        } /* Xml */
    } /* Xsl */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Xsl.XsltProcessor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Data.Xml.Xsl.IXsltProcessorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Xsl.IXsltProcessor ** Default Interface **
 *    Windows.Data.Xml.Xsl.IXsltProcessor2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Xsl_XsltProcessor_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Xsl_XsltProcessor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Xsl_XsltProcessor[] = L"Windows.Data.Xml.Xsl.XsltProcessor";
#endif
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor;

#endif // ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2;

#endif // ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory;

#endif // ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlNode_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__
#define ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument;

#endif // ____x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument_FWD_DEFINED__


















/*
 *
 * Interface Windows.Data.Xml.Xsl.IXsltProcessor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Xsl.XsltProcessor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Xsl_IXsltProcessor[] = L"Windows.Data.Xml.Xsl.IXsltProcessor";
/* [object, uuid("7B64703F-550C-48C6-A90F-93A5B964518F"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TransformToString )(
        __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * inputNode,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * output
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorVtbl;

interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_TransformToString(This,inputNode,output) \
    ( (This)->lpVtbl->TransformToString(This,inputNode,output) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Xsl.IXsltProcessor2
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Xsl.XsltProcessor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Xsl_IXsltProcessor2[] = L"Windows.Data.Xml.Xsl.IXsltProcessor2";
/* [object, uuid("8DA45C56-97A5-44CB-A8BE-27D86280C70A"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TransformToDocument )(
        __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2 * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlNode * inputNode,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * output
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2Vtbl;

interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2Vtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_TransformToDocument(This,inputNode,output) \
    ( (This)->lpVtbl->TransformToDocument(This,inputNode,output) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor2_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Interface Windows.Data.Xml.Xsl.IXsltProcessorFactory
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Data.Xml.Xsl.XsltProcessor
 *
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Xml_Xsl_IXsltProcessorFactory[] = L"Windows.Data.Xml.Xsl.IXsltProcessorFactory";
/* [object, uuid("274146C0-9A51-4663-BF30-0EF742146F20"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * document,
        /* [retval, out] */__RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessor * * xsltProcessor
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactoryVtbl;

interface __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactoryVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_CreateInstance(This,document,xsltProcessor) \
    ( (This)->lpVtbl->CreateInstance(This,document,xsltProcessor) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory;
#endif /* !defined(____x_ABI_CWindows_CData_CXml_CXsl_CIXsltProcessorFactory_INTERFACE_DEFINED__) */
#endif // WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Data.Xml.Xsl.XsltProcessor
 *
 * Introduced to Windows.Foundation.UniversalApiContract in version 1.0
 *
 *
 * RuntimeClass can be activated.
 *   Type can be activated via the Windows.Data.Xml.Xsl.IXsltProcessorFactory interface starting with version 1.0 of the Windows.Foundation.UniversalApiContract API contract
 *
 * Class implements the following interfaces:
 *    Windows.Data.Xml.Xsl.IXsltProcessor ** Default Interface **
 *    Windows.Data.Xml.Xsl.IXsltProcessor2
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_FOUNDATION_UNIVERSALAPICONTRACT_VERSION >= 0x10000

#ifndef RUNTIMECLASS_Windows_Data_Xml_Xsl_XsltProcessor_DEFINED
#define RUNTIMECLASS_Windows_Data_Xml_Xsl_XsltProcessor_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Xml_Xsl_XsltProcessor[] = L"Windows.Data.Xml.Xsl.XsltProcessor";
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
#endif // __windows2Edata2Exml2Exsl_p_h__

#endif // __windows2Edata2Exml2Exsl_h__
