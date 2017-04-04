/*++

Copyright (c) 2011  Microsoft Corporation

Module Name:

    GetDeviceUniqueId.h

    Abstract:

    This is the header file for the API to retrieve an identifier that can be 
    used to uniquely identify the device.

Author:

    Dylan D'Silva (ddsilva) 28-Aug-2011

--*/

#pragma once

#ifdef __cplusplus
extern "C" {
#endif


// Version 1 of the device identifier.
#define GETDEVICEUNIQUEID_V1                1

// Length (in bytes) of the version 1 identifier.
#define GETDEVICEUNIQUEID_V1_OUTPUT         32

// Minimum length (in bytes) of the application data.
#define GETDEVICEUNIQUEID_V1_MIN_APPDATA    8


/*++

Routine Description:

    Retrieve a unique identifier for the device. This identifier is tied to the 
    device hardware and does not change in the event of a reflash or cold boot. 
   
    This API can be used by applications that use the unique device ID to 
    communicate with servers and wish to prevent correlation of data from the 
    same device across these multiple servers to protect privacy. 

Parameters:

    pbApplicationData - Input buffer containing the salt data provided by the 
    application. This data must be at least GETDEVICEUNIQUEID_V1_MIN_APPDATA
    bytes long.

    cbApplicationData - Length in bytes of the application data provided. This
    length must be at least GETDEVICEUNIQUEID_V1_MIN_APPDATA.

    dwDeviceIdVersion - Version of the device ID to be returned. Currently the 
    only version supported is GETDEVICEUNIQUEID_V1.

    pbDeviceIdOutput - Output buffer that receives the device ID. If the size 
    of this buffer is less than the size of the device ID, the API will return 
    HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER). If this buffer is NULL 
    *pcbDeviceIdOutput will contain the length required for this buffer. If 
    this buffer is not NULL the device ID will be truncated to the size of the 
    buffer.

    pcbDeviceIdOutput - Pointer to a DWORD which on input is the length (in 
    bytes) of the pbDeviceIdOutput buffer and on output is the number of bytes
    written to this buffer.

Return Values:

    E_INVALIDARG if the parameters are incorrect.
    HRESULT_FROM_WIN32(ERROR_INSUFFICIENT_BUFFER) if the size of the buffer is
    less than the size of the device ID.
    HRESULT indicating the result of the operation.

 --*/

HRESULT
WINAPI
GetDeviceUniqueID(
    _In_reads_(cbApplicationData) const BYTE *pbApplicationData, 
    DWORD cbApplicationData, 
    DWORD dwDeviceIdVersion,
    _Out_writes_to_opt_(*pcbDeviceIdOutput, *pcbDeviceIdOutput) BYTE *pbDeviceIdOutput, 
    _Inout_ DWORD *pcbDeviceIdOutput);

#ifdef __cplusplus
}
#endif
