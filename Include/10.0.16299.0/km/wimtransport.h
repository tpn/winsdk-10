//
// Copyright (c) Microsoft Corporation
//

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _EFI_WIM_TRANSPORT_PROTOCOL EFI_WIM_TRANSPORT_PROTOCOL;

typedef EFI_STATUS
(EFIAPI * EFI_GET_WIM_BUFFER_SIZE) (
    IN EFI_WIM_TRANSPORT_PROTOCOL *This,
    OUT UINT32 *Size
    );
    
typedef EFI_STATUS
(EFIAPI * EFI_READ_WIM_DATA) (
    IN EFI_WIM_TRANSPORT_PROTOCOL *This,
    OUT VOID *DataBuffer,
    IN UINTN DataSize
    );

typedef EFI_STATUS
(EFIAPI * EFI_REPORT_WIM_STATUS) (
    IN EFI_WIM_TRANSPORT_PROTOCOL *This,
    IN EFI_STATUS WimStatus,
    IN UINT16 *DescriptionString
    );

struct _EFI_WIM_TRANSPORT_PROTOCOL
{
    UINT32 Revision;
    EFI_GET_WIM_BUFFER_SIZE EfiGetWimBufferSize;
    EFI_READ_WIM_DATA EfiReadWimData;
    EFI_REPORT_WIM_STATUS EfiReportWimStatus;
};

// {75cf4c87-0339-47a3-b45d-4c4684657d63}
#define EFI_WIM_TRANSPORT_PROTOCOL_GUID \
{0x75cf4c87,0x0339,0x47a3,{0xb4,0x5d,0x4c,0x46,0x84,0x65,0x7d,0x63}}

#ifdef __cplusplus
}
#endif
