/* Header file automatically generated from windows.gaming.input.preview.idl */
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
#ifndef __windows2Egaming2Einput2Epreview_h__
#define __windows2Egaming2Einput2Epreview_h__
#ifndef __windows2Egaming2Einput2Epreview_p_h__
#define __windows2Egaming2Einput2Epreview_p_h__


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
#include "Windows.Gaming.Input.h"
#include "Windows.Gaming.Input.Custom.h"

#if defined(__cplusplus) && !defined(CINTERFACE)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Preview {
                    interface IGameControllerProviderInfoStatics;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Preview */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics ABI::Windows::Gaming::Input::Preview::IGameControllerProviderInfoStatics

#endif // ____x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_FWD_DEFINED__


#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_FWD_DEFINED__
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Custom {
                    interface IGameControllerProvider;
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Custom */} /* ABI */
#define __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider ABI::Windows::Gaming::Input::Custom::IGameControllerProvider

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_FWD_DEFINED__

















/*
 *
 * Interface Windows.Gaming.Input.Preview.IGameControllerProviderInfoStatics
 *
 * Introduced to Windows.Gaming.Input.GamingInputPreviewContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Preview.GameControllerProviderInfo
 *
 *
 */
#if WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics[] = L"Windows.Gaming.Input.Preview.IGameControllerProviderInfoStatics";
namespace ABI {
    namespace Windows {
        namespace Gaming {
            namespace Input {
                namespace Preview {
                    /* [object, uuid("0BE1E6C5-D9BD-44EE-8362-488B2E464BFB"), exclusiveto, contract] */
                    MIDL_INTERFACE("0BE1E6C5-D9BD-44EE-8362-488B2E464BFB")
                    IGameControllerProviderInfoStatics : IInspectable
                    {
                        virtual HRESULT STDMETHODCALLTYPE GetParentProviderId(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::Custom::IGameControllerProvider * provider,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        virtual HRESULT STDMETHODCALLTYPE GetProviderId(
                            /* [in] */__RPC__in_opt ABI::Windows::Gaming::Input::Custom::IGameControllerProvider * provider,
                            /* [retval, out] */__RPC__deref_out_opt HSTRING * value
                            ) = 0;
                        
                    };

                    extern MIDL_CONST_ID IID & IID_IGameControllerProviderInfoStatics=_uuidof(IGameControllerProviderInfoStatics);
                    
                } /* Windows */
            } /* Gaming */
        } /* Input */
    } /* Preview */} /* ABI */

EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.Input.Preview.GameControllerProviderInfo
 *
 * Introduced to Windows.Gaming.Input.GamingInputPreviewContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.Preview.IGameControllerProviderInfoStatics interface starting with version 1.0 of the Windows.Gaming.Input.GamingInputPreviewContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Gaming_Input_Preview_GameControllerProviderInfo_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Preview_GameControllerProviderInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Preview_GameControllerProviderInfo[] = L"Windows.Gaming.Input.Preview.GameControllerProviderInfo";
#endif
#endif // WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION >= 0x10000





#else // !defined(__cplusplus)
/* Forward Declarations */
#ifndef ____x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics;

#endif // ____x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_FWD_DEFINED__

#ifndef ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_FWD_DEFINED__
#define ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_FWD_DEFINED__
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider;

#endif // ____x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider_FWD_DEFINED__

















/*
 *
 * Interface Windows.Gaming.Input.Preview.IGameControllerProviderInfoStatics
 *
 * Introduced to Windows.Gaming.Input.GamingInputPreviewContract in version 1.0
 *
 *
 * Interface is a part of the implementation of type Windows.Gaming.Input.Preview.GameControllerProviderInfo
 *
 *
 */
#if WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION >= 0x10000
#if !defined(____x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_INTERFACE_DEFINED__)
#define ____x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_INTERFACE_DEFINED__
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics[] = L"Windows.Gaming.Input.Preview.IGameControllerProviderInfoStatics";
/* [object, uuid("0BE1E6C5-D9BD-44EE-8362-488B2E464BFB"), exclusiveto, contract] */
typedef struct __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This,
    /* [in] */ __RPC__in REFIID riid,
    /* [annotation][iid_is][out] */
    _COM_Outptr_  void **ppvObject
    );

ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This
    );

ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This
    );

HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This,
    /* [out] */ __RPC__out ULONG *iidCount,
    /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );

HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This,
    /* [out] */ __RPC__deref_out_opt HSTRING *className
    );

HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This,
    /* [OUT ] */ __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetParentProviderId )(
        __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * provider,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetProviderId )(
        __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This,
        /* [in] */__RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * provider,
        /* [retval, out] */__RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
    
} __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStaticsVtbl;

interface __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStaticsVtbl *lpVtbl;
};

#ifdef COBJMACROS
#define __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_QueryInterface(This,riid,ppvObject) \
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )

#define __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_AddRef(This) \
        ( (This)->lpVtbl->AddRef(This) )

#define __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_Release(This) \
        ( (This)->lpVtbl->Release(This) )

#define __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_GetIids(This,iidCount,iids) \
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )

#define __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_GetRuntimeClassName(This,className) \
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )

#define __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_GetTrustLevel(This,trustLevel) \
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )

#define __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_GetParentProviderId(This,provider,value) \
    ( (This)->lpVtbl->GetParentProviderId(This,provider,value) )

#define __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_GetProviderId(This,provider,value) \
    ( (This)->lpVtbl->GetProviderId(This,provider,value) )


#endif /* COBJMACROS */


EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics;
#endif /* !defined(____x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics_INTERFACE_DEFINED__) */
#endif // WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION >= 0x10000


/*
 *
 * Class Windows.Gaming.Input.Preview.GameControllerProviderInfo
 *
 * Introduced to Windows.Gaming.Input.GamingInputPreviewContract in version 1.0
 *
 *
 * RuntimeClass contains static methods.
 *   Static Methods exist on the Windows.Gaming.Input.Preview.IGameControllerProviderInfoStatics interface starting with version 1.0 of the Windows.Gaming.Input.GamingInputPreviewContract API contract
 *
 * Class Threading Model:  Both Single and Multi Threaded Apartment
 *
 * Class Marshaling Behavior:  Agile - Class is agile
 *
 */
#if WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION >= 0x10000
#ifndef RUNTIMECLASS_Windows_Gaming_Input_Preview_GameControllerProviderInfo_DEFINED
#define RUNTIMECLASS_Windows_Gaming_Input_Preview_GameControllerProviderInfo_DEFINED
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Preview_GameControllerProviderInfo[] = L"Windows.Gaming.Input.Preview.GameControllerProviderInfo";
#endif
#endif // WINDOWS_GAMING_INPUT_GAMINGINPUTPREVIEWCONTRACT_VERSION >= 0x10000





#endif // defined(__cplusplus)
#pragma pop_macro("MIDL_CONST_ID")
// Restore the original value of the 'DEPRECATED' macro
#pragma pop_macro("DEPRECATED")

#ifdef __clang__
#pragma clang diagnostic pop // deprecated-declarations
#else
#pragma warning(pop)
#endif
#endif // __windows2Egaming2Einput2Epreview_p_h__

#endif // __windows2Egaming2Einput2Epreview_h__
