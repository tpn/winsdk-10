/*===========================================================================

Copyright (c) Microsoft Corporation. All rights reserved.

File: shlobj_core.h

===========================================================================*/

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
#pragma once
#endif

#ifdef __cplusplus
extern "C" {            /* Assume C declarations for C++ */
#endif /* __cplusplus */

#include <pshpack1.h>   /* Assume byte packing throughout */

// Flags
// uFlags & SHCNF_TYPE is an ID which indicates what dwItem1 and dwItem2 mean
#define SHCNF_IDLIST      0x0000        // LPITEMIDLIST
#define SHCNF_PATHA       0x0001        // path name
#define SHCNF_PRINTERA    0x0002        // printer friendly name
#define SHCNF_DWORD       0x0003        // DWORD
#define SHCNF_PATHW       0x0005        // path name
#define SHCNF_PRINTERW    0x0006        // printer friendly name
#define SHCNF_TYPE        0x00FF
#define SHCNF_FLUSH       0x1000
#define SHCNF_FLUSHNOWAIT 0x3000        // includes SHCNF_FLUSH

#define SHCNF_NOTIFYRECURSIVE      0x10000 // Notify clients registered for any child


#ifdef UNICODE
#define SHCNF_PATH      SHCNF_PATHW
#define SHCNF_PRINTER   SHCNF_PRINTERW
#else
#define SHCNF_PATH      SHCNF_PATHA
#define SHCNF_PRINTER   SHCNF_PRINTERA
#endif


// Bindctx key, passed to IShellFolder::ParseDiplayName.  Provides dbfolder with extra
// data, besides the name, necessary for the parse. the object in the bind context implements
// IPropertyStore and provides a fixed set of properties
#define STR_PARSE_WITH_PROPERTIES           L"ParseWithProperties"

// Bindctx key, passed to IShellFolder::ParseDisplayName(). used to pass the original item that
// is being re-parsed. that item is stored as an IShellItem that supports IParentAndItem,
// and should be the un-aliased form of the item.
#define STR_PARSE_PARTIAL_IDLIST            L"ParseOriginalItem"


#include <poppack.h>

#ifdef __cplusplus
}
#endif  /* __cplusplus */
