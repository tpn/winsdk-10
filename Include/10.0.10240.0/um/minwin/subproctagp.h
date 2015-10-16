/*++

Copyright (c) 2004 Microsoft Corporation.  All rights reserved.

Module Name:

    subproctagp.h

Abstract:

    APIs for subprocess tagging support.

Author:

    Chittur Subbaraman (chitturs)   June 22, 2004  

Environment:

    User Mode - Win32

Revision History:

    June 22, 2004     chitturs        [Created]

--*/

#ifndef _SUBPROCTAGP_INCLUDED
#define _SUBPROCTAGP_INCLUDED

#ifdef __cplusplus
extern "C" {
#endif

//
// Private API and structures for querying tag information
//
typedef enum _TAG_TYPE
{
    eTagTypeService = 1,
    eTagTypeMax
} TAG_TYPE, *PTAG_TYPE;

typedef enum _TAG_INFO_LEVEL
{
    eTagInfoLevelNameFromTag = 1,
    eTagInfoLevelNamesReferencingModule = 2,
    eTagInfoLevelNameTagMapping = 3,
    eTagInfoLevelMax
} TAG_INFO_LEVEL, *PTAG_INFO_LEVEL;

typedef struct _TAG_INFO_NAME_FROM_TAG_IN_PARAMS
{
    DWORD           dwPid;          // Hosting process PID
    DWORD           dwTag;          // Tag
} TAG_INFO_NAME_FROM_TAG_IN_PARAMS, *PTAG_INFO_NAME_FROM_TAG_IN_PARAMS;

typedef struct _TAG_INFO_NAME_FROM_TAG_OUT_PARAMS
{
    DWORD           eTagType;       // Tag type
    LPWSTR          pszName;        // App name. Must be NULL on
                                    // input.  Buffer allocated by 
                                    // API, caller must free using
                                    // LocalFree on API return with
                                    // ERROR_SUCCESS.
} TAG_INFO_NAME_FROM_TAG_OUT_PARAMS, *PTAG_INFO_NAME_FROM_TAG_OUT_PARAMS;

typedef struct _TAG_INFO_NAME_FROM_TAG
{
    TAG_INFO_NAME_FROM_TAG_IN_PARAMS    InParams;   // Input parameters
    TAG_INFO_NAME_FROM_TAG_OUT_PARAMS   OutParams;  // Output parameters 
} TAG_INFO_NAME_FROM_TAG, *PTAG_INFO_NAME_FROM_TAG;

typedef struct _TAG_INFO_NAMES_REFERENCING_MODULE_IN_PARAMS
{
    DWORD           dwPid;          // Hosting process PID - Process
                                    // that hosts the module that 
                                    // is supplied next.
    LPWSTR          pszModule;      // Fully qualified DLL name
} TAG_INFO_NAMES_REFERENCING_MODULE_IN_PARAMS, 
  *PTAG_INFO_NAMES_REFERENCING_MODULE_IN_PARAMS;

typedef struct _TAG_INFO_NAMES_REFERENCING_MODULE_OUT_PARAMS
{
    DWORD           eTagType;       // Tag type
    LPWSTR          pmszNames;      // Multi-sz list of service
                                    // names referencing the
                                    // module:  Must be NULL on
                                    // input.  Buffer allocated by 
                                    // API, caller must free using
                                    // LocalFree on API return with
                                    // ERROR_SUCCESS.
} TAG_INFO_NAMES_REFERENCING_MODULE_OUT_PARAMS, *PTAG_INFO_NAMES_REFERENCING_MODULE_OUT_PARAMS;

typedef struct _TAG_INFO_NAMES_REFERENCING_MODULE
{
    TAG_INFO_NAMES_REFERENCING_MODULE_IN_PARAMS    InParams;    // Input parameters
    TAG_INFO_NAMES_REFERENCING_MODULE_OUT_PARAMS   OutParams;   // Output parameters 
} TAG_INFO_NAMES_REFERENCING_MODULE, *PTAG_INFO_NAMES_REFERENCING_MODULE;

typedef struct _TAG_INFO_NAME_TAG_MAPPING_IN_PARAMS
{
    DWORD           dwPid;          // Hosting process PID, if 0 entire mapping is returned
} TAG_INFO_NAME_TAG_MAPPING_IN_PARAMS, *PTAG_INFO_NAME_TAG_MAPPING_IN_PARAMS;

typedef struct _TAG_INFO_NAME_TAG_MAPPING_ELEMENT
{
    DWORD           eTagType;       // Tag type
    DWORD           dwTag;          // Tag
    LPWSTR          pszName;        // App name. 
    LPWSTR          pszGroupName;   // For eTagType == eTagTypeService, this denotes the 
                                    // load order group name of the service.
} TAG_INFO_NAME_TAG_MAPPING_ELEMENT, *PTAG_INFO_NAME_TAG_MAPPING_ELEMENT;

typedef struct _TAG_INFO_NAME_TAG_MAPPING_OUT_PARAMS
{
#ifdef MIDL_PASS
    [range (0, 4*1024)]
#endif
    DWORD                               cElements;      // Number of elements
#ifdef MIDL_PASS
    [size_is(cElements)]
#endif
    PTAG_INFO_NAME_TAG_MAPPING_ELEMENT  pNameTagMappingElements; // Points to an array of mapping elements
} TAG_INFO_NAME_TAG_MAPPING_OUT_PARAMS, *PTAG_INFO_NAME_TAG_MAPPING_OUT_PARAMS;

typedef struct _TAG_INFO_NAME_TAG_MAPPING
{
    TAG_INFO_NAME_TAG_MAPPING_IN_PARAMS    InParams;    // Input parameters
    PTAG_INFO_NAME_TAG_MAPPING_OUT_PARAMS  pOutParams;  // Output parameters, caller must free using LocalFree 
} TAG_INFO_NAME_TAG_MAPPING, *PTAG_INFO_NAME_TAG_MAPPING;

_Must_inspect_result_
DWORD
WINAPI
I_QueryTagInformation (
    _In_opt_    LPCWSTR             pszMachineName,
    _In_        TAG_INFO_LEVEL      eInfoLevel,
    _Inout_     PVOID               pTagInfo
    );

_Must_inspect_result_
DWORD
I_ScQueryServiceTagInfo (
    _In_opt_    LPCWSTR             pszMachineName,
    _In_        TAG_INFO_LEVEL      eInfoLevel,
    _Inout_     PVOID               pTagInfo
    );

#ifdef __cplusplus
}   // extern "C"
#endif

#endif  // _SUBPROCTAGP_INCLUDED
