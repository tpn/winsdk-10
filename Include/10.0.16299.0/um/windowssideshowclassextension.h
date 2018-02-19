

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __windowssideshowclassextension_h__
#define __windowssideshowclassextension_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __ISideShowDriver_FWD_DEFINED__
#define __ISideShowDriver_FWD_DEFINED__
typedef interface ISideShowDriver ISideShowDriver;

#endif 	/* __ISideShowDriver_FWD_DEFINED__ */


#ifndef __ISideShowClassExtension_FWD_DEFINED__
#define __ISideShowClassExtension_FWD_DEFINED__
typedef interface ISideShowClassExtension ISideShowClassExtension;

#endif 	/* __ISideShowClassExtension_FWD_DEFINED__ */


#ifndef __ISideShowClassExtension2_FWD_DEFINED__
#define __ISideShowClassExtension2_FWD_DEFINED__
typedef interface ISideShowClassExtension2 ISideShowClassExtension2;

#endif 	/* __ISideShowClassExtension2_FWD_DEFINED__ */


#ifndef __SideShowClassExtension_FWD_DEFINED__
#define __SideShowClassExtension_FWD_DEFINED__

#ifdef __cplusplus
typedef class SideShowClassExtension SideShowClassExtension;
#else
typedef struct SideShowClassExtension SideShowClassExtension;
#endif /* __cplusplus */

#endif 	/* __SideShowClassExtension_FWD_DEFINED__ */


/* header files for imported files */
#include "propidl.h"
#include "wudfddi.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_windowssideshowclassextension_0000_0000 */
/* [local] */ 

#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if (_WIN32_WINNT >= 0x0600) // Windows Vista and later
typedef struct _SIDESHOW_TIME_ZONE_INFORMATION
    {
    LONG Bias;
    WCHAR StandardName[ 32 ];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[ 32 ];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
    } 	SIDESHOW_TIME_ZONE_INFORMATION;

typedef 
enum tagUSER_STATE
    {
        AVAILABLE	= 0,
        UNAVAILABLE	= 1
    } 	USER_STATE;

typedef GUID APPLICATION_ID;

typedef GUID ENDPOINT_ID;

typedef LPWSTR DEVICE_ID;

typedef REFGUID REFAPPLICATION_ID;

typedef REFGUID REFENDPOINT_ID;

typedef ENDPOINT_ID *PENDPOINT_ID;

typedef APPLICATION_ID *PAPPLICATION_ID;

typedef DEVICE_ID *PDEVICE_ID;

typedef unsigned long CONTENT_ID;

typedef CONTENT_ID *PCONTENT_ID;

typedef unsigned long NOTIFICATION_ID;

typedef NOTIFICATION_ID *PNOTIFICATION_ID;



extern RPC_IF_HANDLE __MIDL_itf_windowssideshowclassextension_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowclassextension_0000_0000_v0_0_s_ifspec;

#ifndef __ISideShowDriver_INTERFACE_DEFINED__
#define __ISideShowDriver_INTERFACE_DEFINED__

/* interface ISideShowDriver */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISideShowDriver;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2082260d-0e28-4c57-b5c2-67fa091daa91")
    ISideShowDriver : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE OnGetDeviceName( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszName) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetDeviceManufacturer( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszManufacturer) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetDeviceFirmwareVersion( 
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszVersion) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSetTime( 
            /* [in] */ const FILETIME FileTime) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSetTimeZone( 
            /* [in] */ __RPC__in const SIDESHOW_TIME_ZONE_INFORMATION *pTimeZoneInformation) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSetCurrentUser( 
            /* [in] */ __RPC__in const SID *pUserSid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetCurrentUser( 
            /* [out] */ __RPC__deref_out_opt SID **ppUserSid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSetUserState( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ const USER_STATE state) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSetShortDateFormat( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [string][in] */ __RPC__in_string LPCWSTR pwszDateFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSetLongDateFormat( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [string][in] */ __RPC__in_string LPCWSTR pwszDateFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSetShortTimeFormat( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [string][in] */ __RPC__in_string LPCWSTR pwszTimeFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSetLongTimeFormat( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [string][in] */ __RPC__in_string LPCWSTR pwszTimeFormat) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSetLanguage( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in LPCWSTR pwszLanguage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetDeviceEndpoints( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcEndpoints) ENDPOINT_ID **rgEndpoints,
            /* [out] */ __RPC__out DWORD *pcEndpoints) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetDeviceCapabilities( 
            /* [in] */ __RPC__in const PROPERTYKEY *pKey,
            /* [out] */ __RPC__out PROPVARIANT *pvValue) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetPreEnabledApplications( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcApplications) APPLICATION_ID **ppApplicationIds,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcApplications) ENDPOINT_ID **ppEndpointIds,
            /* [out] */ __RPC__out DWORD *pcApplications) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSetApplicationOrder( 
            /* [size_is][in] */ __RPC__in_ecount_full(cApplicationIds) const APPLICATION_ID *pApplicationIds,
            /* [in] */ const DWORD cApplicationIds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnGetApplicationOrder( 
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcApplicationIds) APPLICATION_ID **ppApplicationIds,
            /* [out] */ __RPC__out DWORD *pcApplicationIds) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAddApplication( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId,
            /* [in] */ __RPC__in REFENDPOINT_ID EndPointId,
            /* [string][in] */ __RPC__in_string LPCWSTR pcwszName,
            /* [in] */ const DWORD dwCachePolicy,
            /* [in] */ const DWORD dwOnlineOnly,
            /* [size_is][in] */ __RPC__in_ecount_full(cbLargeIcon) const unsigned char *pbLargeIcon,
            /* [in] */ const DWORD cbLargeIcon,
            /* [size_is][in] */ __RPC__in_ecount_full(cbMediumIcon) const unsigned char *pbMediumIcon,
            /* [in] */ const DWORD cbMediumIcon,
            /* [size_is][in] */ __RPC__in_ecount_full(cbSmallIcon) const unsigned char *pbSmallIcon,
            /* [in] */ const DWORD cbSmallIcon) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnRemoveApplication( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnRemoveAllApplications( 
            /* [in] */ __RPC__in const SID *pUserSid) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAddContent( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId,
            /* [in] */ __RPC__in REFENDPOINT_ID EndpointId,
            /* [in] */ const CONTENT_ID ContentId,
            /* [size_is][in] */ __RPC__in_ecount_full(cbData) const unsigned char *pData,
            /* [in] */ const DWORD cbData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnRemoveContent( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId,
            /* [in] */ __RPC__in REFENDPOINT_ID EndpointId,
            /* [in] */ const CONTENT_ID ContentId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnRemoveAllContent( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId,
            /* [in] */ __RPC__in REFENDPOINT_ID EndpointId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnAddNotification( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId,
            /* [in] */ const NOTIFICATION_ID NotificationId,
            /* [in] */ const FILETIME ftExpiration,
            /* [string][in] */ __RPC__in_string LPCWSTR pcwszTitle,
            /* [string][in] */ __RPC__in_string LPCWSTR pcwszMessage,
            /* [size_is][in] */ __RPC__in_ecount_full(cbImage) const unsigned char *pbImage,
            /* [in] */ const DWORD cbImage) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnRemoveNotification( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId,
            /* [in] */ const NOTIFICATION_ID NotificationId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnRemoveAllNotifications( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnSetNotificationsEnabled( 
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ const BOOL fIsEnabled) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnProcessWpdMessage( 
            /* [in] */ __RPC__in_opt IUnknown *pPortableDeviceValuesParams,
            /* [in] */ __RPC__in_opt IUnknown *pPortableDeviceValuesResults) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISideShowDriverVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ISideShowDriver * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ISideShowDriver * This);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetDeviceName )( 
            __RPC__in ISideShowDriver * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszName);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetDeviceManufacturer )( 
            __RPC__in ISideShowDriver * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszManufacturer);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetDeviceFirmwareVersion )( 
            __RPC__in ISideShowDriver * This,
            /* [string][out] */ __RPC__deref_out_opt_string LPWSTR *ppwszVersion);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetTime )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ const FILETIME FileTime);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetTimeZone )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SIDESHOW_TIME_ZONE_INFORMATION *pTimeZoneInformation);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetCurrentUser )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetCurrentUser )( 
            __RPC__in ISideShowDriver * This,
            /* [out] */ __RPC__deref_out_opt SID **ppUserSid);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetUserState )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ const USER_STATE state);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetShortDateFormat )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [string][in] */ __RPC__in_string LPCWSTR pwszDateFormat);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetLongDateFormat )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [string][in] */ __RPC__in_string LPCWSTR pwszDateFormat);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetShortTimeFormat )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [string][in] */ __RPC__in_string LPCWSTR pwszTimeFormat);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetLongTimeFormat )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [string][in] */ __RPC__in_string LPCWSTR pwszTimeFormat);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetLanguage )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in LPCWSTR pwszLanguage);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetDeviceEndpoints )( 
            __RPC__in ISideShowDriver * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcEndpoints) ENDPOINT_ID **rgEndpoints,
            /* [out] */ __RPC__out DWORD *pcEndpoints);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetDeviceCapabilities )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const PROPERTYKEY *pKey,
            /* [out] */ __RPC__out PROPVARIANT *pvValue);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetPreEnabledApplications )( 
            __RPC__in ISideShowDriver * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcApplications) APPLICATION_ID **ppApplicationIds,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcApplications) ENDPOINT_ID **ppEndpointIds,
            /* [out] */ __RPC__out DWORD *pcApplications);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetApplicationOrder )( 
            __RPC__in ISideShowDriver * This,
            /* [size_is][in] */ __RPC__in_ecount_full(cApplicationIds) const APPLICATION_ID *pApplicationIds,
            /* [in] */ const DWORD cApplicationIds);
        
        HRESULT ( STDMETHODCALLTYPE *OnGetApplicationOrder )( 
            __RPC__in ISideShowDriver * This,
            /* [size_is][size_is][out] */ __RPC__deref_out_ecount_full_opt(*pcApplicationIds) APPLICATION_ID **ppApplicationIds,
            /* [out] */ __RPC__out DWORD *pcApplicationIds);
        
        HRESULT ( STDMETHODCALLTYPE *OnAddApplication )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId,
            /* [in] */ __RPC__in REFENDPOINT_ID EndPointId,
            /* [string][in] */ __RPC__in_string LPCWSTR pcwszName,
            /* [in] */ const DWORD dwCachePolicy,
            /* [in] */ const DWORD dwOnlineOnly,
            /* [size_is][in] */ __RPC__in_ecount_full(cbLargeIcon) const unsigned char *pbLargeIcon,
            /* [in] */ const DWORD cbLargeIcon,
            /* [size_is][in] */ __RPC__in_ecount_full(cbMediumIcon) const unsigned char *pbMediumIcon,
            /* [in] */ const DWORD cbMediumIcon,
            /* [size_is][in] */ __RPC__in_ecount_full(cbSmallIcon) const unsigned char *pbSmallIcon,
            /* [in] */ const DWORD cbSmallIcon);
        
        HRESULT ( STDMETHODCALLTYPE *OnRemoveApplication )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId);
        
        HRESULT ( STDMETHODCALLTYPE *OnRemoveAllApplications )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid);
        
        HRESULT ( STDMETHODCALLTYPE *OnAddContent )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId,
            /* [in] */ __RPC__in REFENDPOINT_ID EndpointId,
            /* [in] */ const CONTENT_ID ContentId,
            /* [size_is][in] */ __RPC__in_ecount_full(cbData) const unsigned char *pData,
            /* [in] */ const DWORD cbData);
        
        HRESULT ( STDMETHODCALLTYPE *OnRemoveContent )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId,
            /* [in] */ __RPC__in REFENDPOINT_ID EndpointId,
            /* [in] */ const CONTENT_ID ContentId);
        
        HRESULT ( STDMETHODCALLTYPE *OnRemoveAllContent )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId,
            /* [in] */ __RPC__in REFENDPOINT_ID EndpointId);
        
        HRESULT ( STDMETHODCALLTYPE *OnAddNotification )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId,
            /* [in] */ const NOTIFICATION_ID NotificationId,
            /* [in] */ const FILETIME ftExpiration,
            /* [string][in] */ __RPC__in_string LPCWSTR pcwszTitle,
            /* [string][in] */ __RPC__in_string LPCWSTR pcwszMessage,
            /* [size_is][in] */ __RPC__in_ecount_full(cbImage) const unsigned char *pbImage,
            /* [in] */ const DWORD cbImage);
        
        HRESULT ( STDMETHODCALLTYPE *OnRemoveNotification )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId,
            /* [in] */ const NOTIFICATION_ID NotificationId);
        
        HRESULT ( STDMETHODCALLTYPE *OnRemoveAllNotifications )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ __RPC__in REFAPPLICATION_ID ApplicationId);
        
        HRESULT ( STDMETHODCALLTYPE *OnSetNotificationsEnabled )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in const SID *pUserSid,
            /* [in] */ const BOOL fIsEnabled);
        
        HRESULT ( STDMETHODCALLTYPE *OnProcessWpdMessage )( 
            __RPC__in ISideShowDriver * This,
            /* [in] */ __RPC__in_opt IUnknown *pPortableDeviceValuesParams,
            /* [in] */ __RPC__in_opt IUnknown *pPortableDeviceValuesResults);
        
        END_INTERFACE
    } ISideShowDriverVtbl;

    interface ISideShowDriver
    {
        CONST_VTBL struct ISideShowDriverVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISideShowDriver_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISideShowDriver_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISideShowDriver_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISideShowDriver_OnGetDeviceName(This,ppwszName)	\
    ( (This)->lpVtbl -> OnGetDeviceName(This,ppwszName) ) 

#define ISideShowDriver_OnGetDeviceManufacturer(This,ppwszManufacturer)	\
    ( (This)->lpVtbl -> OnGetDeviceManufacturer(This,ppwszManufacturer) ) 

#define ISideShowDriver_OnGetDeviceFirmwareVersion(This,ppwszVersion)	\
    ( (This)->lpVtbl -> OnGetDeviceFirmwareVersion(This,ppwszVersion) ) 

#define ISideShowDriver_OnSetTime(This,FileTime)	\
    ( (This)->lpVtbl -> OnSetTime(This,FileTime) ) 

#define ISideShowDriver_OnSetTimeZone(This,pTimeZoneInformation)	\
    ( (This)->lpVtbl -> OnSetTimeZone(This,pTimeZoneInformation) ) 

#define ISideShowDriver_OnSetCurrentUser(This,pUserSid)	\
    ( (This)->lpVtbl -> OnSetCurrentUser(This,pUserSid) ) 

#define ISideShowDriver_OnGetCurrentUser(This,ppUserSid)	\
    ( (This)->lpVtbl -> OnGetCurrentUser(This,ppUserSid) ) 

#define ISideShowDriver_OnSetUserState(This,pUserSid,state)	\
    ( (This)->lpVtbl -> OnSetUserState(This,pUserSid,state) ) 

#define ISideShowDriver_OnSetShortDateFormat(This,pUserSid,pwszDateFormat)	\
    ( (This)->lpVtbl -> OnSetShortDateFormat(This,pUserSid,pwszDateFormat) ) 

#define ISideShowDriver_OnSetLongDateFormat(This,pUserSid,pwszDateFormat)	\
    ( (This)->lpVtbl -> OnSetLongDateFormat(This,pUserSid,pwszDateFormat) ) 

#define ISideShowDriver_OnSetShortTimeFormat(This,pUserSid,pwszTimeFormat)	\
    ( (This)->lpVtbl -> OnSetShortTimeFormat(This,pUserSid,pwszTimeFormat) ) 

#define ISideShowDriver_OnSetLongTimeFormat(This,pUserSid,pwszTimeFormat)	\
    ( (This)->lpVtbl -> OnSetLongTimeFormat(This,pUserSid,pwszTimeFormat) ) 

#define ISideShowDriver_OnSetLanguage(This,pUserSid,pwszLanguage)	\
    ( (This)->lpVtbl -> OnSetLanguage(This,pUserSid,pwszLanguage) ) 

#define ISideShowDriver_OnGetDeviceEndpoints(This,rgEndpoints,pcEndpoints)	\
    ( (This)->lpVtbl -> OnGetDeviceEndpoints(This,rgEndpoints,pcEndpoints) ) 

#define ISideShowDriver_OnGetDeviceCapabilities(This,pKey,pvValue)	\
    ( (This)->lpVtbl -> OnGetDeviceCapabilities(This,pKey,pvValue) ) 

#define ISideShowDriver_OnGetPreEnabledApplications(This,ppApplicationIds,ppEndpointIds,pcApplications)	\
    ( (This)->lpVtbl -> OnGetPreEnabledApplications(This,ppApplicationIds,ppEndpointIds,pcApplications) ) 

#define ISideShowDriver_OnSetApplicationOrder(This,pApplicationIds,cApplicationIds)	\
    ( (This)->lpVtbl -> OnSetApplicationOrder(This,pApplicationIds,cApplicationIds) ) 

#define ISideShowDriver_OnGetApplicationOrder(This,ppApplicationIds,pcApplicationIds)	\
    ( (This)->lpVtbl -> OnGetApplicationOrder(This,ppApplicationIds,pcApplicationIds) ) 

#define ISideShowDriver_OnAddApplication(This,pUserSid,ApplicationId,EndPointId,pcwszName,dwCachePolicy,dwOnlineOnly,pbLargeIcon,cbLargeIcon,pbMediumIcon,cbMediumIcon,pbSmallIcon,cbSmallIcon)	\
    ( (This)->lpVtbl -> OnAddApplication(This,pUserSid,ApplicationId,EndPointId,pcwszName,dwCachePolicy,dwOnlineOnly,pbLargeIcon,cbLargeIcon,pbMediumIcon,cbMediumIcon,pbSmallIcon,cbSmallIcon) ) 

#define ISideShowDriver_OnRemoveApplication(This,pUserSid,ApplicationId)	\
    ( (This)->lpVtbl -> OnRemoveApplication(This,pUserSid,ApplicationId) ) 

#define ISideShowDriver_OnRemoveAllApplications(This,pUserSid)	\
    ( (This)->lpVtbl -> OnRemoveAllApplications(This,pUserSid) ) 

#define ISideShowDriver_OnAddContent(This,pUserSid,ApplicationId,EndpointId,ContentId,pData,cbData)	\
    ( (This)->lpVtbl -> OnAddContent(This,pUserSid,ApplicationId,EndpointId,ContentId,pData,cbData) ) 

#define ISideShowDriver_OnRemoveContent(This,pUserSid,ApplicationId,EndpointId,ContentId)	\
    ( (This)->lpVtbl -> OnRemoveContent(This,pUserSid,ApplicationId,EndpointId,ContentId) ) 

#define ISideShowDriver_OnRemoveAllContent(This,pUserSid,ApplicationId,EndpointId)	\
    ( (This)->lpVtbl -> OnRemoveAllContent(This,pUserSid,ApplicationId,EndpointId) ) 

#define ISideShowDriver_OnAddNotification(This,pUserSid,ApplicationId,NotificationId,ftExpiration,pcwszTitle,pcwszMessage,pbImage,cbImage)	\
    ( (This)->lpVtbl -> OnAddNotification(This,pUserSid,ApplicationId,NotificationId,ftExpiration,pcwszTitle,pcwszMessage,pbImage,cbImage) ) 

#define ISideShowDriver_OnRemoveNotification(This,pUserSid,ApplicationId,NotificationId)	\
    ( (This)->lpVtbl -> OnRemoveNotification(This,pUserSid,ApplicationId,NotificationId) ) 

#define ISideShowDriver_OnRemoveAllNotifications(This,pUserSid,ApplicationId)	\
    ( (This)->lpVtbl -> OnRemoveAllNotifications(This,pUserSid,ApplicationId) ) 

#define ISideShowDriver_OnSetNotificationsEnabled(This,pUserSid,fIsEnabled)	\
    ( (This)->lpVtbl -> OnSetNotificationsEnabled(This,pUserSid,fIsEnabled) ) 

#define ISideShowDriver_OnProcessWpdMessage(This,pPortableDeviceValuesParams,pPortableDeviceValuesResults)	\
    ( (This)->lpVtbl -> OnProcessWpdMessage(This,pPortableDeviceValuesParams,pPortableDeviceValuesResults) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISideShowDriver_INTERFACE_DEFINED__ */


#ifndef __ISideShowClassExtension_INTERFACE_DEFINED__
#define __ISideShowClassExtension_INTERFACE_DEFINED__

/* interface ISideShowClassExtension */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISideShowClassExtension;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("27E78451-41C1-47fd-A50D-4D3E97D35B30")
    ISideShowClassExtension : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Initialize( 
            /* [in] */ __RPC__in_opt IUnknown *pWdfDeviceUnknown,
            /* [in] */ __RPC__in_opt IUnknown *pSideShowDriverUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Uninitialize( 
            /* [in] */ __RPC__in_opt IUnknown *pWdfDeviceUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE OnProcessIoControl( 
            /* [in] */ __RPC__in_opt IWDFIoQueue *pWdfQueue,
            /* [in] */ __RPC__in_opt IWDFIoRequest *pWdfRequest,
            /* [in] */ ULONG ControlCode,
            /* [in] */ SIZE_T InputBufferSizeInBytes,
            /* [in] */ SIZE_T OutputBufferSizeInBytes,
            /* [out] */ __RPC__out DWORD *pcbWritten) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISideShowClassExtensionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ISideShowClassExtension * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ISideShowClassExtension * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ISideShowClassExtension * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ISideShowClassExtension * This,
            /* [in] */ __RPC__in_opt IUnknown *pWdfDeviceUnknown,
            /* [in] */ __RPC__in_opt IUnknown *pSideShowDriverUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )( 
            __RPC__in ISideShowClassExtension * This,
            /* [in] */ __RPC__in_opt IUnknown *pWdfDeviceUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *OnProcessIoControl )( 
            __RPC__in ISideShowClassExtension * This,
            /* [in] */ __RPC__in_opt IWDFIoQueue *pWdfQueue,
            /* [in] */ __RPC__in_opt IWDFIoRequest *pWdfRequest,
            /* [in] */ ULONG ControlCode,
            /* [in] */ SIZE_T InputBufferSizeInBytes,
            /* [in] */ SIZE_T OutputBufferSizeInBytes,
            /* [out] */ __RPC__out DWORD *pcbWritten);
        
        END_INTERFACE
    } ISideShowClassExtensionVtbl;

    interface ISideShowClassExtension
    {
        CONST_VTBL struct ISideShowClassExtensionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISideShowClassExtension_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISideShowClassExtension_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISideShowClassExtension_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISideShowClassExtension_Initialize(This,pWdfDeviceUnknown,pSideShowDriverUnknown)	\
    ( (This)->lpVtbl -> Initialize(This,pWdfDeviceUnknown,pSideShowDriverUnknown) ) 

#define ISideShowClassExtension_Uninitialize(This,pWdfDeviceUnknown)	\
    ( (This)->lpVtbl -> Uninitialize(This,pWdfDeviceUnknown) ) 

#define ISideShowClassExtension_OnProcessIoControl(This,pWdfQueue,pWdfRequest,ControlCode,InputBufferSizeInBytes,OutputBufferSizeInBytes,pcbWritten)	\
    ( (This)->lpVtbl -> OnProcessIoControl(This,pWdfQueue,pWdfRequest,ControlCode,InputBufferSizeInBytes,OutputBufferSizeInBytes,pcbWritten) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISideShowClassExtension_INTERFACE_DEFINED__ */


#ifndef __ISideShowClassExtension2_INTERFACE_DEFINED__
#define __ISideShowClassExtension2_INTERFACE_DEFINED__

/* interface ISideShowClassExtension2 */
/* [unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_ISideShowClassExtension2;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1A6C8124-03E3-4A9A-AFD3-CEDD39E426B5")
    ISideShowClassExtension2 : public ISideShowClassExtension
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE InitializeAsync( 
            /* [in] */ __RPC__in_opt IUnknown *pWdfDeviceUnknown,
            /* [in] */ __RPC__in_opt IUnknown *pSideShowDriverUnknown) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE PostEvent( 
            /* [in] */ __RPC__in REFGUID in_EventGuid,
            /* [full][in] */ __RPC__in_opt SID *const in_pSid,
            /* [full][in] */ __RPC__in_opt BYTE *const in_pbEventData,
            /* [in] */ const DWORD in_cbEventData) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE CleanupFile( 
            /* [in] */ __RPC__in_opt IWDFFile *pWdfFile) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct ISideShowClassExtension2Vtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in ISideShowClassExtension2 * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in ISideShowClassExtension2 * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in ISideShowClassExtension2 * This);
        
        HRESULT ( STDMETHODCALLTYPE *Initialize )( 
            __RPC__in ISideShowClassExtension2 * This,
            /* [in] */ __RPC__in_opt IUnknown *pWdfDeviceUnknown,
            /* [in] */ __RPC__in_opt IUnknown *pSideShowDriverUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )( 
            __RPC__in ISideShowClassExtension2 * This,
            /* [in] */ __RPC__in_opt IUnknown *pWdfDeviceUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *OnProcessIoControl )( 
            __RPC__in ISideShowClassExtension2 * This,
            /* [in] */ __RPC__in_opt IWDFIoQueue *pWdfQueue,
            /* [in] */ __RPC__in_opt IWDFIoRequest *pWdfRequest,
            /* [in] */ ULONG ControlCode,
            /* [in] */ SIZE_T InputBufferSizeInBytes,
            /* [in] */ SIZE_T OutputBufferSizeInBytes,
            /* [out] */ __RPC__out DWORD *pcbWritten);
        
        HRESULT ( STDMETHODCALLTYPE *InitializeAsync )( 
            __RPC__in ISideShowClassExtension2 * This,
            /* [in] */ __RPC__in_opt IUnknown *pWdfDeviceUnknown,
            /* [in] */ __RPC__in_opt IUnknown *pSideShowDriverUnknown);
        
        HRESULT ( STDMETHODCALLTYPE *PostEvent )( 
            __RPC__in ISideShowClassExtension2 * This,
            /* [in] */ __RPC__in REFGUID in_EventGuid,
            /* [full][in] */ __RPC__in_opt SID *const in_pSid,
            /* [full][in] */ __RPC__in_opt BYTE *const in_pbEventData,
            /* [in] */ const DWORD in_cbEventData);
        
        HRESULT ( STDMETHODCALLTYPE *CleanupFile )( 
            __RPC__in ISideShowClassExtension2 * This,
            /* [in] */ __RPC__in_opt IWDFFile *pWdfFile);
        
        END_INTERFACE
    } ISideShowClassExtension2Vtbl;

    interface ISideShowClassExtension2
    {
        CONST_VTBL struct ISideShowClassExtension2Vtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISideShowClassExtension2_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISideShowClassExtension2_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISideShowClassExtension2_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define ISideShowClassExtension2_Initialize(This,pWdfDeviceUnknown,pSideShowDriverUnknown)	\
    ( (This)->lpVtbl -> Initialize(This,pWdfDeviceUnknown,pSideShowDriverUnknown) ) 

#define ISideShowClassExtension2_Uninitialize(This,pWdfDeviceUnknown)	\
    ( (This)->lpVtbl -> Uninitialize(This,pWdfDeviceUnknown) ) 

#define ISideShowClassExtension2_OnProcessIoControl(This,pWdfQueue,pWdfRequest,ControlCode,InputBufferSizeInBytes,OutputBufferSizeInBytes,pcbWritten)	\
    ( (This)->lpVtbl -> OnProcessIoControl(This,pWdfQueue,pWdfRequest,ControlCode,InputBufferSizeInBytes,OutputBufferSizeInBytes,pcbWritten) ) 


#define ISideShowClassExtension2_InitializeAsync(This,pWdfDeviceUnknown,pSideShowDriverUnknown)	\
    ( (This)->lpVtbl -> InitializeAsync(This,pWdfDeviceUnknown,pSideShowDriverUnknown) ) 

#define ISideShowClassExtension2_PostEvent(This,in_EventGuid,in_pSid,in_pbEventData,in_cbEventData)	\
    ( (This)->lpVtbl -> PostEvent(This,in_EventGuid,in_pSid,in_pbEventData,in_cbEventData) ) 

#define ISideShowClassExtension2_CleanupFile(This,pWdfFile)	\
    ( (This)->lpVtbl -> CleanupFile(This,pWdfFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISideShowClassExtension2_INTERFACE_DEFINED__ */



#ifndef __WindowsSideShowDriverLibrary_LIBRARY_DEFINED__
#define __WindowsSideShowDriverLibrary_LIBRARY_DEFINED__

/* library WindowsSideShowDriverLibrary */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_WindowsSideShowDriverLibrary;

EXTERN_C const CLSID CLSID_SideShowClassExtension;

#ifdef __cplusplus

class DECLSPEC_UUID("76EFD608-E0CE-4887-98E2-F931363C4BC5")
SideShowClassExtension;
#endif
#endif /* __WindowsSideShowDriverLibrary_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_windowssideshowclassextension_0000_0004 */
/* [local] */ 

#endif // (_WIN32_WINNT >= 0x0600)
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_windowssideshowclassextension_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowclassextension_0000_0004_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

unsigned long             __RPC_USER  BSTR_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

unsigned long             __RPC_USER  BSTR_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * ); 
unsigned char * __RPC_USER  BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * ); 
void                      __RPC_USER  BSTR_UserFree64(     __RPC__in unsigned long *, __RPC__in BSTR * ); 

unsigned long             __RPC_USER  LPSAFEARRAY_UserSize64(     __RPC__in unsigned long *, unsigned long            , __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserMarshal64(  __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * ); 
unsigned char * __RPC_USER  LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * ); 
void                      __RPC_USER  LPSAFEARRAY_UserFree64(     __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * ); 

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


