/*++

Copyright (c) 2012  Microsoft Corporation

Module Name:

    SecurityRuntime.h

    Abstract:

    This is the header file for the APIs to query the security system at runtime.

Author:

    Dylan D'Silva (ddsilva) 5-Apr-2012

--*/

#ifndef __SECURITY_RUNTIME_H__
#define __SECURITY_RUNTIME_H__

#pragma once

#ifndef WINAPI
#define WINAPI __stdcall
#endif

typedef _Return_type_success_(return >= 0) LONG NTSTATUS;

#ifndef NT_SUCCESS
#define NT_SUCCESS(Status) (((NTSTATUS)(Status)) >= 0)
#endif


//
//     Object Names for use with QueryTransientObjectSecurityDescriptor
//     OBJPATH_INTEROP_RPC_INTERFACE  - The Object name for an RPC Interface secured by ID_CAP_INTEROPSERVICES
//     OBJPATH_INTEROP_RPC_SERVER     - The Object name for an RPC Server secured by ID_CAP_INTEROPSERVICES
//
#define OBJPATH_INTEROP_RPC_INTERFACE L"InteropRPC\\Interface"
#define OBJPATH_INTEROP_RPC_SERVER L"InteropRPC\\Server"


//
// Enum representing the type of transient object.
//

typedef enum
{
    TransientObject_Type_Mutex = 0,
    TransientObject_Type_Event,
    TransientObject_Type_Semaphore,
    TransientObject_Type_WaitableTimer,
    TransientObject_Type_JobObject,
    TransientObject_Type_FileMapping,
    TransientObject_Type_NamedPipe,
    TransientObject_Type_MailSlot,
    TransientObject_Type_AlpcPort,
    TransientObject_Type_Rpc,
    TransientObject_Type_Wnf,
    TransientObject_Type_Template,
    TransientObject_Type_Private,
}  TransientObject_Type;


/*++

Routine Description:

    Query the security descriptor of a transient object.

Parameters:

    ObjectType - TransientObject_Type representing the type of transient 
    object.

    pszObjectName - String representing the name of the object. This is the 
    name that is passed to the API to create the object.

    ppSecurityDescriptor - Output pointer to a pointer which points to the 
    self-relative security descriptor for the object. This value must be freed
    by calling FreeTransientObjectSecurityDescriptor().

Return Values:

    NTSTATUS indicating the result of the operation.

Notes:
    This API can be called from kernel mode from Passive IRQL.

 --*/

EXTERN_C
NTSTATUS
WINAPI
QueryTransientObjectSecurityDescriptor(
    TransientObject_Type ObjectType,
    _In_z_ LPCWSTR pszObjectPath,
    _Outptr_ PSECURITY_DESCRIPTOR *ppSecurityDescriptor
    );


/*++

Routine Description:

    Free the security descriptor returned for a transient object.

Parameters:

    pSecurityDescriptor - Pointer to the self-relative security descriptor 
    returned from QueryTransientObjectSecurityDescriptor().

Return Values:

    None.

Notes:
    This API can be called from kernel mode from Passive IRQL.

 --*/

EXTERN_C
void
WINAPI
FreeTransientObjectSecurityDescriptor(
    _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor
    );


//
// Chamber Profile APIs.
//

/*++

Routine Description:

   Retrieve Chamber profile private registry key.
   This function can only be called after AccountProvSvc is finished and stopped.

Parameters:

    ChamberID - Chamber ID. If ChamberID is NULL, the Chamber ID will be derived 
    from the caller's thread token (if under impersonation) or from the caller's 
    process token (if not under impersonation), if possible.

    DesiredAccess - The desired access mask 
    (http://msdn.microsoft.com/en-us/library/ms724878(v=vs.85).aspx). It should be 
    noted that KEY_ALL_ACCESS is not allowed - the caller should not be able to 
    change the security setting. 

    phKey - On successful return *phKey contains the handle to the opened registry 
    key. The caller is responsible for calling RegCloseKey to close this handle.

Return Values:

     Standard HRESULT code
     HRESULT_FROM_WIN32(ERROR_NOT_FOUND) - Registry key cannot be found

 --*/

EXTERN_C
HRESULT
WINAPI
GetChamberRegistryLocation(_In_opt_z_  LPCWSTR ChamberID,
                                       REGSAM  DesiredAccess,
                           _Out_       HKEY*   phKey);



/*++

Routine Description:

    Retrieve Chamber profile private folder path.
    This function can only be called after AccountProvSvc is finished and stopped.

Parameters:

    ChamberID - Chamber ID. If ChamberID is NULL, the Chamber ID will be derived 
    from the caller's thread token (if under impersonation) or from the caller's 
    process token (if not under impersonation), if possible.

    DataPath - Input buffer to receive the private data folder path. If this parameter
    is NULL, and this function returns HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER),
    *DataPathChars will return the required buffer size in characters for DataPath.

    DataPathChars - On input, *DataPathChars represents the buffer size of DataPath in 
    characters. If DataPath is NULL, input *DataPathChars is not used. On output, 
    *DataPathChars represents the number of characters written to DataPath (including 
    the terminating NULL). If DataPath is NULL on input, and this fuction returns 
    HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER), then *DataPathChars represents the 
    required buffer size of Path in Characters.

    CodePath - Input buffer to receive the private code folder path. If this parameter 
    is NULL, and this function returns HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER),
    *CodePathChars will return the required buffer size in characters for CodePath.

    CodePathChars - On input, *CodePathChars represents the buffer size of CodePath in 
    characters. If CodePath is NULL, input *CodePathChars is not used. On output, 
    *CodePathChars represents the number of characters written to Codeath (including 
    the terminating NULL). If CodePath is NULL on input, and this fuction returns 
    HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER), then *CodePathChars represents 
    the required buffer size of Path in Characters.


Return Values:

     Standard HRESULT code
     HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER) - Buffer is not big enough
     HRESULT_FROM_WIN32(ERROR_NOT_FOUND) - Code/data folders cannot be found

 --*/

EXTERN_C
HRESULT
WINAPI
GetChamberFolderPath(_In_opt_z_                         LPCWSTR     ChamberID,
                     _In_reads_opt_(*DataPathChars)     LPWSTR      DataPath,
                     _Inout_                            DWORD*      DataPathChars,
                     _In_reads_opt_(*CodePathChars)     LPWSTR      CodePath,
                     _Inout_                            DWORD*      CodePathChars
                     );

#endif // __SECURITY_RUNTIME_H__
