

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0613 */
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


#ifndef __cmcspwwanrpcprocs_h__
#define __cmcspwwanrpcprocs_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "wtypesbase.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_cmcspwwanrpcprocs_0000_0000 */
/* [local] */ 

/*
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
// Use of this source code is subject to the terms of the Microsoft
// premium shared source license agreement under which you licensed
// this source code. If you did not accept the terms of the license
// agreement, you are not authorized to use this source code.
// For the terms of the license, please see the license agreement
// signed by you and Microsoft.
// THE SOURCE CODE IS PROVIDED "AS IS", WITH NO WARRANTIES OR INDEMNITIES.
//
*/



extern RPC_IF_HANDLE __MIDL_itf_cmcspwwanrpcprocs_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cmcspwwanrpcprocs_0000_0000_v0_0_s_ifspec;

#ifndef __CmCspWwanRpc_INTERFACE_DEFINED__
#define __CmCspWwanRpc_INTERFACE_DEFINED__

/* interface CmCspWwanRpc */
/* [version][uuid] */ 

typedef /* [public][public][public][v1_enum] */ 
enum __MIDL_CmCspWwanRpc_0001
    {
        WWANPLUS_NOTIFICATION_TYPE_TRANSACTIONAL_EVENT	= 0,
        WWANPLUS_NOTIFICATION_TYPE_OPAQUE_EVENT	= 0x1,
        WWANPLUS_NOTIFICATION_TYPE_NON_OPAQUE_DS_EVENT	= 0x2,
        WWANPLUS_NOTIFICATION_TYPE_AUTH_UNSO_EVENT	= 0x4,
        WWANPLUS_NOTIFICATION_TYPE_OTHER_UNSOLICITED	= 0x80000000
    } 	WWANPLUS_NOTIFICATION_TYPE;

typedef DWORD WWANPLUS_NOTIFICATION_TYPE_MAP;

#define	WWANPLUS_NOTIFICATION_ALL_UNSOLICITED	( ( ( ( WWANPLUS_NOTIFICATION_TYPE_OPAQUE_EVENT | WWANPLUS_NOTIFICATION_TYPE_NON_OPAQUE_DS_EVENT )  | WWANPLUS_NOTIFICATION_TYPE_AUTH_UNSO_EVENT )  | WWANPLUS_NOTIFICATION_TYPE_OTHER_UNSOLICITED )  )

#define	WWANPLUS_NOTIFICATION_REGISTRATION_VERSION_1	( 1 )

typedef /* [public][public] */ struct __MIDL_CmCspWwanRpc_0002
    {
    DWORD version;
    DWORD cbSize;
    ULONG64 hNotificationsAvailableEvent;
    WWANPLUS_NOTIFICATION_TYPE_MAP typeMap;
    } 	WWANPLUS_NOTIFICATION_REGISTRATION;

#define	WWANPLUS_MINIPORT_INFO_VERSION_1	( 1 )

#define	WWANPLUS_MINIPORT_MODEM_NUM_BASE	( 1 )

#define	WWANPLUS_MINIPORT_EXECUTOR_NUM_BASE	( 0 )

typedef /* [public][public] */ struct __MIDL_CmCspWwanRpc_0003
    {
    DWORD version;
    DWORD cbSize;
    DWORD modemId;
    DWORD executorID;
    BOOL isExecutorIDValid;
    GUID guidMiniportDevice;
    DWORD useInfo;
    } 	WWANPLUS_MINIPORT_INFO;

#define	WWANPLUS_DS_QUERY_INFO_VERSION_1	( 1 )

typedef /* [public][public][public][public][public][public][public][public][public][public][public][public][public] */ struct __MIDL_CmCspWwanRpc_0004
    {
    DWORD version;
    DWORD cbSize;
    GUID guidMiniportDev;
    } 	WWANPLUS_DS_QUERY_INFO;

typedef /* [public][public][public][v1_enum] */ 
enum __MIDL_CmCspWwanRpc_0005
    {
        WWANPLUS_QUERY_PS_STATE	= 0,
        WWANPLUS_QUERY_REG_STATE	= ( WWANPLUS_QUERY_PS_STATE + 1 ) ,
        WWANPLUS_QUERY_CNTXT_STATE	= ( WWANPLUS_QUERY_REG_STATE + 1 ) ,
        WWANPLUS_QUERY_RADIO_STATE	= ( WWANPLUS_QUERY_CNTXT_STATE + 1 ) ,
        WWANPLUS_QUERY_READY_INFO	= ( WWANPLUS_QUERY_RADIO_STATE + 1 ) ,
        WWANPLUS_QUERY_DEVICE_CAPS	= ( WWANPLUS_QUERY_READY_INFO + 1 ) ,
        WWANPLUS_STATE_QUERY_MAX	= ( WWANPLUS_QUERY_DEVICE_CAPS + 1 ) 
    } 	WWANPLUS_STATE_QUERY_TYPE;

#define	WWANPLUS_STATE_QUERY_INFO_VERSION_1	( 1 )

typedef /* [public][public] */ struct __MIDL_CmCspWwanRpc_0006
    {
    DWORD version;
    DWORD cbSize;
    GUID guidMiniportDev;
    WWANPLUS_STATE_QUERY_TYPE queryType;
    } 	WWANPLUS_STATE_QUERY_INFO;

#define	WWANPLUS_OPAQUE_COMMAND_INFO_VERSION_1	( 1 )

typedef /* [public][public] */ struct __MIDL_CmCspWwanRpc_0007
    {
    DWORD version;
    DWORD cbSize;
    GUID guidMiniportDev;
    GUID guidDeviceService;
    DWORD dwCommandId;
    BOOL bSetOrQuery;
    } 	WWANPLUS_OPAQUE_COMMAND_INFO;

#define	WWANPLUS_MOBILEIPNAI_QUERY_INFO_VERSION_1	( 1 )

typedef WWANPLUS_DS_QUERY_INFO WWANPLUS_MOBILEIPNAI_QUERY_INFO;

#define	WWANPLUS_AUTH_ALGO_CAPS_NONE	( 0 )

#define	WWANPLUS_AUTH_ALGO_CAPS_SIM	( 0x1 )

#define	WWANPLUS_AUTH_ALGO_CAPS_AKA	( 0x2 )

#define	WWANPLUS_AUTH_ALGO_CAPS_AKAPRIME	( 0x4 )

#define	WWANPLUS_SIM_ALGO_CAPS_QUERY_INFO_VERSION_1	( 1 )

typedef WWANPLUS_DS_QUERY_INFO WWANPLUS_SIM_ALGO_CAPS_QUERY_INFO;

#define	WWANPLUS_AUTH_RAND_LEN	( 16 )

#define	WWANPLUS_AUTH_AUTN_LEN	( 16 )

#define	WWANPLUS_AUTH_SRES_LEN	( 4 )

#define	WWANPLUS_AUTH_KC_LEN	( 8 )

#define	WWANPLUS_AUTH_RES_MAX_LEN	( 16 )

#define	WWANPLUS_AUTH_IK_LEN	( 16 )

#define	WWANPLUS_AUTH_CK_LEN	( 16 )

#define	WWANPLUS_AUTH_AUTS_LEN	( 14 )

#define	WWANPLUS_AUTH_NETWORK_NAME_MAX_LEN	( 256 )

typedef /* [public][public] */ struct __MIDL_CmCspWwanRpc_0008
    {
    BYTE Rand1[ 16 ];
    BYTE Rand2[ 16 ];
    BYTE Rand3[ 16 ];
    ULONG n;
    } 	WWANPLUS_AUTH_SIM_CHALLENGE;

typedef /* [public] */ struct __MIDL_CmCspWwanRpc_0009
    {
    BYTE Sres1[ 4 ];
    BYTE Kc1[ 8 ];
    BYTE Sres2[ 4 ];
    BYTE Kc2[ 8 ];
    BYTE Sres3[ 4 ];
    BYTE Kc3[ 8 ];
    ULONG n;
    } 	WWANPLUS_AUTH_SIM_RESPONSE;

typedef /* [public][public] */ struct __MIDL_CmCspWwanRpc_0010
    {
    BYTE Rand[ 16 ];
    BYTE Autn[ 16 ];
    } 	WWANPLUS_AUTH_AKA_CHALLENGE;

typedef /* [public] */ struct __MIDL_CmCspWwanRpc_0011
    {
    BYTE Res[ 16 ];
    ULONG ResLength;
    BYTE IK[ 16 ];
    BYTE CK[ 16 ];
    BYTE Auts[ 14 ];
    } 	WWANPLUS_AUTH_AKA_RESPONSE;

typedef /* [public][public] */ struct __MIDL_CmCspWwanRpc_0012
    {
    BYTE Rand[ 16 ];
    BYTE Autn[ 16 ];
    BYTE NetworkName[ 256 ];
    ULONG NetworkNameLength;
    } 	WWANPLUS_AUTH_AKAP_CHALLENGE;

typedef /* [public] */ struct __MIDL_CmCspWwanRpc_0013
    {
    BYTE Res[ 16 ];
    ULONG ResLength;
    BYTE IKP[ 16 ];
    BYTE CKP[ 16 ];
    BYTE Auts[ 14 ];
    } 	WWANPLUS_AUTH_AKAP_RESPONSE;

#define	WWANPLUS_AUTH_INFO_VERSION_1	( 1 )

typedef WWANPLUS_DS_QUERY_INFO WWANPLUS_AUTH_INFO;

#define	WWANPLUS_IPV6_EHRPD_CTRL_INFO_VERSION_1	( 1 )

typedef WWANPLUS_DS_QUERY_INFO WWANPLUS_IPV6_EHRPD_CTRL_INFO;

#define	WWANPLUS_NOTIFICATION_INFO_VERSION_1	( 1 )

typedef /* [public][public] */ struct __MIDL_CmCspWwanRpc_0014
    {
    DWORD version;
    DWORD cbSize;
    WWANPLUS_NOTIFICATION_TYPE type;
    DWORD hClient;
    ULONG64 RequestID;
    GUID guidMiniportDev;
    DWORD identifier;
    DWORD cbNotifPlSize;
    } 	WWANPLUS_NOTIFICATION_INFO;

typedef /* [public][public][public][public][public][public][public][public][public][public][public][public][public][public][public][public][public] */ 
enum __MIDL_CmCspWwanRpc_0015
    {
        WWANPLUS_RESULT_NO_ERROR	= 0,
        WWANPLUS_RESULT_ERROR_NO_DETAIL	= ( WWANPLUS_RESULT_NO_ERROR + 1 ) ,
        WWANPLUS_RESULT_INVALID_CLIENT	= ( WWANPLUS_RESULT_ERROR_NO_DETAIL + 1 ) ,
        WWANPLUS_RESULT_INVALID_PARAM	= ( WWANPLUS_RESULT_INVALID_CLIENT + 1 ) ,
        WWANPLUS_RESULT_INVALID_VERSION	= ( WWANPLUS_RESULT_INVALID_PARAM + 1 ) ,
        WWANPLUS_RESULT_INVALID_MINIPORT	= ( WWANPLUS_RESULT_INVALID_VERSION + 1 ) ,
        WWANPLUS_RESULT_INSUFFICIENT_BUFFER	= ( WWANPLUS_RESULT_INVALID_MINIPORT + 1 ) ,
        WWANPLUS_RESULT_NOTIFICATION_UNAVAILABLE	= ( WWANPLUS_RESULT_INSUFFICIENT_BUFFER + 1 ) ,
        WWANPLUS_RESULT_OS_MEM_ALLOC_ERR	= ( WWANPLUS_RESULT_NOTIFICATION_UNAVAILABLE + 1 ) ,
        WWANPLUS_RESULT_NDIS_ERR	= ( WWANPLUS_RESULT_OS_MEM_ALLOC_ERR + 1 ) ,
        WWANPLUS_RESULT_NOT_IMPL	= ( WWANPLUS_RESULT_NDIS_ERR + 1 ) ,
        WWANPLUS_RESULT_INVALID_DS	= ( WWANPLUS_RESULT_NOT_IMPL + 1 ) ,
        WWANPLUS_RESULT_INVALID_PARAMETER	= ( WWANPLUS_RESULT_INVALID_DS + 1 ) ,
        WWANPLUS_RESULT_CONNECTION_DOES_NOT_EXIST	= ( WWANPLUS_RESULT_INVALID_PARAMETER + 1 ) ,
        WWANPLUS_RESULT_OUT_OF_MEMORY	= ( WWANPLUS_RESULT_CONNECTION_DOES_NOT_EXIST + 1 ) ,
        WWANPLUS_RESULT_LAST	= ( WWANPLUS_RESULT_OUT_OF_MEMORY + 1 ) 
    } 	WWANPLUS_RESULT_CODE;

HRESULT CmWwanPlusRegisterClient( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ __RPC__in WWANPLUS_NOTIFICATION_REGISTRATION *pRegistration,
    /* [out] */ __RPC__out DWORD *phClient,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusDeregisterClient( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusQueryMiniports( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [in] */ DWORD cbMiniportInfo,
    /* [size_is][out][in] */ __RPC__inout_ecount_full(cbMiniportInfo) WWANPLUS_MINIPORT_INFO *pMiniportInfo,
    /* [out] */ __RPC__out DWORD *pNumMiniports,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusQueryDeviceServices( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [in] */ __RPC__in WWANPLUS_DS_QUERY_INFO *pDSQueryInfo,
    /* [in] */ ULONG64 requestID,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusOpaqueCommand( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [in] */ __RPC__in WWANPLUS_OPAQUE_COMMAND_INFO *pOpaqueCmdInfo,
    /* [in] */ DWORD cbOpaqueCmPl,
    /* [size_is][in] */ __RPC__in_ecount_full(cbOpaqueCmPl) BYTE *pOpaqueCmdPl,
    /* [in] */ ULONG64 requestID,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusMobileIpNaiQuery( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [in] */ __RPC__in WWANPLUS_MOBILEIPNAI_QUERY_INFO *pMobileIpNaiQueryInfo,
    /* [in] */ ULONG64 requestID,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusSimAlgoCapsQuery( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [in] */ __RPC__in WWANPLUS_SIM_ALGO_CAPS_QUERY_INFO *pSimAlgoCapsQueryInfo,
    /* [in] */ ULONG64 requestID,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusAuthSim( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [in] */ __RPC__in WWANPLUS_AUTH_INFO *pAuthInfo,
    /* [in] */ __RPC__in WWANPLUS_AUTH_SIM_CHALLENGE *pAuthSimChallenge,
    /* [in] */ ULONG64 requestID,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusAuthAKA( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [in] */ __RPC__in WWANPLUS_AUTH_INFO *pAuthInfo,
    /* [in] */ __RPC__in WWANPLUS_AUTH_AKA_CHALLENGE *pAuthAKAChallenge,
    /* [in] */ ULONG64 requestID,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusAuthAKAP( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [in] */ __RPC__in WWANPLUS_AUTH_INFO *pAuthInfo,
    /* [in] */ __RPC__in WWANPLUS_AUTH_AKAP_CHALLENGE *pAuthAKAPChallenge,
    /* [in] */ ULONG64 requestID,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusIPv6eHRPDControlSet( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [in] */ __RPC__in WWANPLUS_IPV6_EHRPD_CTRL_INFO *pEhrpdCtrlInfo,
    /* [in] */ BOOL fEnable,
    /* [in] */ DWORD cbAPNLen,
    /* [size_is][in] */ __RPC__in_ecount_full(cbAPNLen) WCHAR *pzwAPN,
    /* [in] */ ULONG64 requestID,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusIPv6eHRPDControlQuery( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [in] */ __RPC__in WWANPLUS_IPV6_EHRPD_CTRL_INFO *pEhrpdCtrlInfo,
    /* [in] */ ULONG64 requestID,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusGetNotification( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [out][in] */ __RPC__inout WWANPLUS_NOTIFICATION_INFO *pNotifInfo,
    /* [in] */ DWORD cbNotifPl,
    /* [size_is][out][in] */ __RPC__inout_ecount_full(cbNotifPl) BYTE *pNotifPl,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusGetNotification2( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [in] */ DWORD cbNotifInfoByte,
    /* [size_is][out][in] */ __RPC__inout_ecount_full(cbNotifInfoByte) BYTE *pNotifInfoByte,
    /* [in] */ DWORD cbNotifPl,
    /* [size_is][out][in] */ __RPC__inout_ecount_full(cbNotifPl) BYTE *pNotifPl,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusStateQuery( 
    /* [in] */ handle_t IDL_handle,
    /* [in] */ DWORD hClient,
    /* [in] */ __RPC__in WWANPLUS_STATE_QUERY_INFO *pStateQueryInfo,
    /* [in] */ ULONG64 requestID,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);

HRESULT CmWwanPlusConnectionCostChanged( 
    /* [in] */ handle_t IDL_handle,
    /* [string][in] */ __RPC__in_string const WCHAR *pszConnection,
    /* [out] */ __RPC__out WWANPLUS_RESULT_CODE *pResult);



extern RPC_IF_HANDLE CmCspWwanRpc_v1_0_c_ifspec;
extern RPC_IF_HANDLE CmCspWwanRpc_v1_0_s_ifspec;
#endif /* __CmCspWwanRpc_INTERFACE_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


