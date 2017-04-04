/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    TrustedRT.h

Abstract:
    Provides communication channels to services running in the Windows Trusted
    Runtime environment.

Environment:

    User Mode
    Kernel Mode

--*/

#pragma once

#define WTR_DEVICE_NAME  L"\\Device\\WindowsTrustedRT"
#define WTR_DEVICE_USER_NAME L"\\\\.\\WindowsTrustedRT"
#define WTR_DEVICE_NAME_USER_LINK L"\\DosDevices\\WindowsTrustedRT"

/*
Routine description:

    This routine returns interface version and major/minor version of the
    service.

Parameters:

    Input - None.

    Output - Supplies a TR_SERVICE_INFORMATION struct.

*/

#define IOCTL_TR_SERVICE_QUERY      CTL_CODE(FILE_DEVICE_TRUST_ENV, 0, METHOD_BUFFERED, FILE_ANY_ACCESS)

/*
Routine description:

    This routine executes a secure service function.

Parameters:

    Input - Supplies a TR_SERVICE_REQUEST struct.

    Output - Supplies a TR_SERVICE_REQUEST_RESPONSE struct.

Notes:

    Function code, input buffer and output buffer for secure service function
    is to be specified in TR_SERVICE_REQUEST structure, not in FunctionCode,
    InputBuffer and OutputBuffer parameters of DeviceIoControl.

    The *lpBytesReturned returned from DeviceIoControl will always be equal to
    sizeof(TR_SERVICE_REQUEST_RESPONSE). To see how much bytes are written to
    the output buffer, see BytesWritten field of TR_SERVICE_REQUEST_RESPONSE.

*/

#define IOCTL_TR_EXECUTE_FUNCTION   CTL_CODE(FILE_DEVICE_TRUST_ENV, 1, METHOD_BUFFERED, FILE_WRITE_ACCESS)

/*
Routine description:

    This routine returns list of GUIDs of service that are provided by the
    miniport. This request should be sent to the master device, not to
    service devices.

Parameters:

    Input - None.

    Output - Supplies a pointer to receive arrays of GUIDs.

Return Value:

    STATUS_SUCCESS - Returned buffer contains all service GUIDs available.

    STATUS_BUFFER_TOO_SMALL - The output buffer was too small to contain all
                              available service GUIDs.

*/

#define IOCTL_TR_ENUMERATE_SERVICES CTL_CODE(FILE_DEVICE_TRUST_ENV, 2, METHOD_BUFFERED, FILE_ANY_ACCESS)

#define TRUSTED_RUNTIME_INTERFACE_VERSION_1 1
#define TRUSTED_RUNTIME_INTERFACE_VERSION TRUSTED_RUNTIME_INTERFACE_VERSION_1

typedef struct _TR_SERVICE_INFORMATION_V1 {
    ULONG InterfaceVersion;
    ULONG ServiceMajorVersion;
    ULONG ServiceMinorVersion;
} TR_SERVICE_INFORMATION_V1, *PTR_SERVICE_INFORMATION_V1;

typedef TR_SERVICE_INFORMATION_V1 TR_SERVICE_INFORMATION,
                                  *PTR_SERVICE_INFORMATION;

typedef struct _TR_SERVICE_REQUEST_V1 {
    ULONG InterfaceVersion;
    ULONG ServiceMajorVersion;
    ULONG ServiceMinorVersion;
    ULONG FunctionCode;
    _Field_size_bytes_(InputBufferSize) PVOID64 InputBuffer;
    ULONG64 InputBufferSize;
    _Field_size_bytes_(OutputBufferSize) PVOID64 OutputBuffer;
    ULONG64 OutputBufferSize;
} TR_SERVICE_REQUEST_V1, *PTR_SERVICE_REQUEST_V1;

typedef TR_SERVICE_REQUEST_V1 TR_SERVICE_REQUEST, *PTR_SERVICE_REQUEST;

typedef struct _TR_SERVICE_REQUEST_RESPONSE_V1 {
    ULONG InterfaceVersion;
    ULONG64 BytesWritten;
} TR_SERVICE_REQUEST_RESPONSE_V1, *PTR_SERVICE_REQUEST_RESPONSE_V1;

typedef TR_SERVICE_REQUEST_RESPONSE_V1 TR_SERVICE_REQUEST_RESPONSE,
                                       *PTR_SERVICE_REQUEST_RESPONSE;

