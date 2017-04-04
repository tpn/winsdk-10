//
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

#ifndef __oem_rilapitypes_h__
#define __oem_rilapitypes_h__

// define an offset so we don't collide with
// other OEM uses of the RIL_DevSpecific API
typedef enum RILDEVSSPECIFICCLASSES {
    RIL_DSCLASS_OEM_GBA = 0xFFFF0000
} RILDEVSSPECIFICCLASSES;

typedef enum RIL_DEVSPECIFIC_CMD
{
    RIL_DEVSPECIFIC_CMD_OEM_GBA_UNKNOWN             = ( 0x00000000 | RIL_DSCLASS_OEM_GBA ),
    RIL_DEVSPECIFIC_CMD_OEM_GBA_GET_GBA_CAPABLE     = ( 0x00000001 | RIL_DSCLASS_OEM_GBA ),
    RIL_DEVSPECIFIC_CMD_OEM_GBA_GET_GBA_TOKEN       = ( 0x00000002 | RIL_DSCLASS_OEM_GBA ),
    RIL_DEVSPECIFIC_CMD_OEM_GBA_GET_GBA_TOKEN_FORCE = ( 0x00000003 | RIL_DSCLASS_OEM_GBA ),
    RIL_DEVSPECIFIC_CMD_OEM_MAX                     = RIL_DEVSPECIFIC_CMD_OEM_GBA_GET_GBA_TOKEN_FORCE
} RIL_DEVSPECIFIC_CMD;

typedef enum RILGETTOKENPARAMMASK {
    RIL_PARAM_GETTOKEN_TIMEOUT = 0x00000001,
    RIL_PARAM_GETTOKEN_HEADER = 0x00000002,
    RIL_PARAM_GETTOKEN_PROTOCOL_ID = 0x00000004,
    RIL_PARAM_GETTOKEN_ALL = 0x00000007
} RILDEVSPECIFICPARAMMASK;

// value returned asynchronously for GET_GBA_CAPABLE
typedef enum RILGBACAPABLE {
    RIL_GBA_UNKNOWN       = 0x00000000,
    RIL_GBA_NOT_SUPPORTED = 0x00000001,
    RIL_GBA_ME_SUPPORTED  = 0x00000002,
    RIL_GBA_U_SUPPORTED   = 0x00000003
} RILGBACAPABLE;

#pragma warning(push)

#pragma warning(disable : 4200) // Disable "C4200: nonstandard extension used : zero-sized array in struct/union"

// we need RILDEVSPECIFICREQUEST to match WMRILDEVSPECIFIC in WMRIL
typedef struct RILDEVSPECIFICREQUEST
{
    DWORD dwCmdId;    //!< This is the RIL_DEVSPECIFIC_XXX ID
    DWORD dwSize;     //!< This is the size of the dev specific byte array below	
    BYTE  params[];   //!< This is the additional dev specific params passed in
} RILDEVSPECIFICREQUEST, *LPRILDEVSPECIFICREQUEST;

// Ua protocol Id defined to be 5 octets - 3GPP 33.220, Annex H
static const int GBA_PROTOCOL_ID_SIZE = 5;

// struct passed in params[] for RIL_DEVSPECIFIC_CMD_OEM_GBA_GET_GBA_TOKEN
typedef struct RILDEVSPECIFICGETTOKEN {
    DWORD cbSize;
    DWORD dwParams; // combination of RILDEVSPECIFICPARAMMASK values indicating which fields are valid
    DWORD dwTimeout; // timeout value in seconds after which the bootstrapping will be canceled and the RILDevspecific command will return an error
    BYTE  bProtocolId[GBA_PROTOCOL_ID_SIZE]; // Ua protocol Id - please see  3GPP 33.220, Annex H for details
    DWORD cbHeaderSize;
    BYTE bHeader[]; // ASCII representation of received HTTP header
} RILDEVSPECIFICGETTOKEN, *LPRILDEVSPECIFICGETTOKEN;

typedef struct RILGBATOKEN {
    DWORD cbSize;
    DWORD cbBTIDSize;
    DWORD dwBTIDOffset;          // offset from the end of the struct
    DWORD cbNAFKeyLifetimeSize;   // size in bytes of the string representation of the lifetime
    DWORD dwNAFKeyLifetimeOffset;
    DWORD cbNAFKeySize;
    DWORD dwNAFKeyOffset;
	BYTE bData[]; // ASCII representation of BTID, key and key lifetime
} RILGBATOKEN, *LPRILGBATOKEN;

#pragma warning(pop)

#endif // __oem_rilapitypes_h__