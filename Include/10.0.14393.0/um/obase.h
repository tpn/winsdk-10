

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0618 */
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


#ifndef __obase_h__
#define __obase_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

/* header files for imported files */
#include "wtypes.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __ObjectRpcBaseTypes_INTERFACE_DEFINED__
#define __ObjectRpcBaseTypes_INTERFACE_DEFINED__

/* interface ObjectRpcBaseTypes */
/* [unique][uuid] */ 

typedef MIDL_uhyper ID;

typedef ID MID;

typedef ID OXID;

typedef ID OID;

typedef ID SETID;

typedef GUID IPID;

typedef GUID CID;

typedef REFGUID REFIPID;

typedef DWORD APTID;

typedef DWORD PROCID;

typedef DWORD CTXTID;

#define	COM_MINOR_VERSION_1	( 1 )

#define	COM_MAJOR_VERSION	( 5 )

#define	COM_MINOR_VERSION	( 7 )

typedef struct tagCOMVERSION
    {
    unsigned short MajorVersion;
    unsigned short MinorVersion;
    } 	COMVERSION;

#define	ORPCF_NULL	( 0 )

#define	ORPCF_LOCAL	( 1 )

#define	ORPCF_RESERVED1	( 2 )

#define	ORPCF_RESERVED2	( 4 )

#define	ORPCF_RESERVED3	( 8 )

#define	ORPCF_RESERVED4	( 0x10 )

#define	ORPCF_RESERVED5	( 0x20 )

#define	ORPCF_RESERVED6	( 0x40 )

typedef struct tagORPC_EXTENT
    {
    GUID id;
    ULONG size;
    /* [size_is] */ byte data[ 1 ];
    } 	ORPC_EXTENT;

typedef struct tagORPC_EXTENT_ARRAY
    {
    ULONG size;
    ULONG reserved;
    /* [unique][size_is][size_is] */ ORPC_EXTENT **extent;
    } 	ORPC_EXTENT_ARRAY;

typedef struct tagORPCTHIS
    {
    COMVERSION version;
    ULONG flags;
    ULONG reserved1;
    CID cid;
    /* [unique] */ ORPC_EXTENT_ARRAY *extensions;
    } 	ORPCTHIS;

typedef struct tagORPCTHAT
    {
    ULONG flags;
    /* [unique] */ ORPC_EXTENT_ARRAY *extensions;
    } 	ORPCTHAT;

#define	NCADG_IP_UDP	( 0x8 )

#define	NCACN_IP_TCP	( 0x7 )

#define	NCADG_IPX	( 0xe )

#define	NCACN_SPX	( 0xc )

#define	NCACN_NB_NB	( 0x12 )

#define	NCACN_NB_IPX	( 0xd )

#define	NCACN_DNET_NSP	( 0x4 )

#define	NCALRPC	( 0x10 )

typedef struct tagSTRINGBINDING
    {
    unsigned short wTowerId;
    unsigned short aNetworkAddr;
    } 	STRINGBINDING;

#define	COM_C_AUTHZ_NONE	( 0xffff )

typedef struct tagSECURITYBINDING
    {
    unsigned short wAuthnSvc;
    unsigned short wAuthzSvc;
    unsigned short aPrincName;
    } 	SECURITYBINDING;

typedef struct tagDUALSTRINGARRAY
    {
    unsigned short wNumEntries;
    unsigned short wSecurityOffset;
    /* [size_is] */ unsigned short aStringArray[ 1 ];
    } 	DUALSTRINGARRAY;

#define	OBJREF_SIGNATURE	( 0x574f454d )

#define	OBJREF_STANDARD	( 0x1 )

#define	OBJREF_HANDLER	( 0x2 )

#define	OBJREF_CUSTOM	( 0x4 )

#define	OBJREF_EXTENDED	( 0x8 )

#define	SORF_OXRES1	( 0x1 )

#define	SORF_OXRES2	( 0x20 )

#define	SORF_OXRES3	( 0x40 )

#define	SORF_OXRES4	( 0x80 )

#define	SORF_OXRES5	( 0x100 )

#define	SORF_OXRES6	( 0x200 )

#define	SORF_OXRES7	( 0x400 )

#define	SORF_OXRES8	( 0x800 )

#define	SORF_NULL	( 0 )

#define	SORF_NOPING	( 0x1000 )

#define	SORF_RES9	( 0x80000000 )

#define	SORF_RES10	( 0x40000000 )

#define	SORF_RES11	( 0x20000000 )

typedef struct tagSTDOBJREF
    {
    ULONG flags;
    ULONG cPublicRefs;
    OXID oxid;
    OID oid;
    IPID ipid;
    } 	STDOBJREF;

typedef struct tagDATAELEMENT
    {
    GUID dataID;
    ULONG cbSize;
    ULONG cbRounded;
    /* [size_is] */ BYTE Data[ 1 ];
    } 	DATAELEMENT;

typedef struct tagOBJREFDATA
    {
    ULONG nElms;
    /* [unique][size_is][size_is] */ DATAELEMENT **ppElmArray;
    } 	OBJREFDATA;

typedef struct tagOBJREF
    {
    ULONG signature;
    ULONG flags;
    GUID iid;
    /* [switch_type][switch_is] */ union 
        {
        /* [case()] */ struct 
            {
            STDOBJREF std;
            DUALSTRINGARRAY saResAddr;
            } 	u_standard;
        /* [case()] */ struct 
            {
            STDOBJREF std;
            CLSID clsid;
            DUALSTRINGARRAY saResAddr;
            } 	u_handler;
        /* [case()] */ struct 
            {
            CLSID clsid;
            ULONG cbExtension;
            ULONG size;
            /* [ref][size_is] */ byte *pData;
            } 	u_custom;
        /* [case()] */ struct 
            {
            STDOBJREF std;
            /* [unique] */ OBJREFDATA *pORData;
            DUALSTRINGARRAY saResAddr;
            } 	u_extended;
        } 	u_objref;
    } 	OBJREF;

typedef struct tagMInterfacePointer
    {
    ULONG ulCntData;
    /* [size_is] */ BYTE abData[ 1 ];
    } 	MInterfacePointer;

typedef /* [unique] */  __RPC_unique_pointer MInterfacePointer *PMInterfacePointer;

typedef struct tagOXID_INFO
    {
    DWORD dwTid;
    DWORD dwPid;
    DWORD dwAuthnHint;
    COMVERSION version;
    IPID ipidRemUnknown;
    DWORD dwFlags;
    /* [unique] */ DUALSTRINGARRAY *psa;
    GUID guidProcessIdentifier;
    } 	OXID_INFO;



extern RPC_IF_HANDLE ObjectRpcBaseTypes_v0_0_c_ifspec;
extern RPC_IF_HANDLE ObjectRpcBaseTypes_v0_0_s_ifspec;
#endif /* __ObjectRpcBaseTypes_INTERFACE_DEFINED__ */

/* interface __MIDL_itf_obase_0000_0001 */
/* [local] */ 

typedef struct tagOpaqueData
    {
    GUID guid;
    ULONG dataLength;
    ULONG reserved1;
    ULONG reserved2;
    /* [size_is] */ BYTE *data;
    } 	OpaqueData;



extern RPC_IF_HANDLE __MIDL_itf_obase_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_obase_0000_0001_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


