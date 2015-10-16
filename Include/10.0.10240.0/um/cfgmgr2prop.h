//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//
//***************************************************************************
// cfgmgr2prop.h
//
// Lists the predefined node properties that are intrinsically supported by
// ConfigManager2.
//

#pragma once

#if defined(__cplusplus)
#define EXTERN_C  extern "C"
#else
#define EXTERN_C  extern
#endif

// {B3DC615C-FC9F-4d03-A9CE-550108EED51D}
EXTERN_C const __declspec(selectany) GUID CFGMGR_PROPERTY_ACL  = { 0xb3dc615c, 0xfc9f, 0x4d03, { 0xa9, 0xce, 0x55, 0x1, 0x8, 0xee, 0xd5, 0x1d } };

// {F3FD4372-C86B-46bd-BC76-B881066E409D}
EXTERN_C const __declspec(selectany) GUID CFGMGR_PROPERTY_DATATYPE = { 0xf3fd4372, 0xc86b, 0x46bd, { 0xbc, 0x76, 0xb8, 0x81, 0x6, 0x6e, 0x40, 0x9d } };

//{8F216A47-3C40-47b9-8836-E3970A95BDF0}
EXTERN_C const __declspec(selectany) GUID CFGMGR_PROPERTY_SEMANTICTYPE = { 0x8f216a47, 0x3c40, 0x47b9, { 0x88, 0x36, 0xe3, 0x97, 0xa, 0x95, 0xbd, 0xf0 } };

// {3D5A3C6B-6A72-4ee0-A54E-CEF8C6BFB1EC}
EXTERN_C const __declspec(selectany) GUID CFGMGR_PROPERTY_TSTAMP = { 0x3d5a3c6b, 0x6a72, 0x4ee0, { 0xa5, 0x4e, 0xce, 0xf8, 0xc6, 0xbf, 0xb1, 0xec } };

// {5C663178-DBC0-42e4-B933-946FF63F2361}
EXTERN_C const __declspec(selectany) GUID CFGMGR_PROPERTY_SIZE = { 0x5c663178, 0xdbc0, 0x42e4, { 0xb9, 0x33, 0x94, 0x6f, 0xf6, 0x3f, 0x23, 0x61 } };

// {B3D64537-9DE7-4CD0-8FE6-DBB6FBF118AF}
EXTERN_C const __declspec(selectany) GUID CFGMGR_PROPERTY_TITLE = { 0xb3d64537, 0x9de7, 0x4cd0, { 0x8f, 0xe6, 0xdb, 0xb6, 0xfb, 0xf1, 0x18, 0xaf } };

// {037CA430-EC07-453B-A4E4-23B37FACE658}
EXTERN_C const __declspec(selectany) GUID CFGMGR_PROPERTY_PROVIDERTYPE = { 0x037ca430, 0xec07, 0x453b, { 0xa4, 0xe4, 0x23, 0xb3, 0x7f, 0xac, 0xe6, 0x58 } };

/* EOF */
