/*++

Copyright (c) 2004 Microsoft Corporation

Module Name:

    dispmprt.h

Abstract:

    This header contain the new Display Loader APIs.


--*/

#ifndef _DISPMPRT_H_
#define _DISPMPRT_H_

#pragma warning(push)
#pragma warning(disable:4115) // named type definition in parentheses
#pragma warning(disable:4201) // nameless struct/union
#pragma warning(disable:4214) // bit field types other than int

#ifndef _ACPIIOCT_H_
#include <acpiioct.h>
#endif

//
// Old includes which are only kept for now for compatibility
//

#ifndef _NTOSP_
#define _NTOSP_

//
// Structures used by the kernel drivers to describe which ports must be
// hooked out directly from the V86 emulator to the driver.
//

typedef enum _EMULATOR_PORT_ACCESS_TYPE {
    Uchar,
    Ushort,
    Ulong
} EMULATOR_PORT_ACCESS_TYPE, *PEMULATOR_PORT_ACCESS_TYPE;

typedef struct _EMULATOR_ACCESS_ENTRY {
    ULONG BasePort;
    ULONG NumConsecutivePorts;
    EMULATOR_PORT_ACCESS_TYPE AccessType;
    UCHAR AccessMode;
    UCHAR StringSupport;
    PVOID Routine;
} EMULATOR_ACCESS_ENTRY, *PEMULATOR_ACCESS_ENTRY;

#endif

//
// Graphics support routines.
//

typedef
VOID
(*PBANKED_SECTION_ROUTINE) (
    _In_ ULONG ReadBank,
    _In_ ULONG WriteBank,
    _In_ PVOID Context
    );

//
// Exclude some items from video.h
//

#define _NTOSDEF_

#include <ntddvdeo.h>
#include <video.h>

//
// Define types used in d3dukmdt.h, included via d3dkmdt.h that are not defined in this scope.
//

typedef unsigned int   UINT;
typedef unsigned long  DWORD;
typedef unsigned char  BYTE;

#include <windef.h>
#include <d3dkmddi.h>
#include <d3dkmdt.h>

#define DlDebugPrintEx(arg) DlDebugPrint arg

//
// ** New definitions *********************************************************
//

//
// Available only for Vista (LONGHORN) and later
//
#if (NTDDI_VERSION >= NTDDI_LONGHORN)

//
// Define ACPI event IDs
//

#define ACPI_NOTIFY_DOCK_EVENT              0x77
#define ACPI_NOTIFY_PANEL_SWITCH            0x80
#define ACPI_NOTIFY_DEVICE_HOTPLUG          0x81
#define ACPI_NOTIFY_CYCLE_DISPLAY_HOTKEY    0x82
#define ACPI_NOTIFY_NEXT_DISPLAY_HOTKEY     0x83
#define ACPI_NOTIFY_PREV_DISPLAY_HOTKEY     0x84
#define ACPI_NOTIFY_CYCLE_BRIGHTNESS_HOTKEY 0x85
#define ACPI_NOTIFY_INC_BRIGHTNESS_HOTKEY   0x86
#define ACPI_NOTIFY_DEC_BRIGHTNESS_HOTKEY   0x87
#define ACPI_NOTIFY_ZERO_BRIGHTNESS_HOTKEY  0x88
#define ACPI_NOTIFY_VIDEO_WAKEUP            0x90

//
// ACPI argument definitions
//

#define ACPI_ARG_ENABLE_SWITCH_EVENT         0x0
#define ACPI_ARG_ENABLE_AUTO_SWITCH          0x1
#define ACPI_ARG_DISABLE_SWITCH_EVENT        0x2
#define ACPI_ARG_ENABLE_AUTO_LCD_BRIGHTNESS  0x0
#define ACPI_ARG_DISABLE_AUTO_LCD_BRIGHTNESS 0x4

//
// ACPI methods for the adapter
//

#define ACPI_METHOD_DISPLAY_DOS (ULONG)('SOD_')
#define ACPI_METHOD_DISPLAY_DOD (ULONG)('DOD_')
#define ACPI_METHOD_DISPLAY_ROM (ULONG)('MOR_')
#define ACPI_METHOD_DISPLAY_GPD (ULONG)('DPG_')
#define ACPI_METHOD_DISPLAY_SPD (ULONG)('DPS_')
#define ACPI_METHOD_DISPLAY_VPO (ULONG)('OPV_')

#define ACPI_METHOD_HARDWARE_ID  (ULONG)('DIH_')
#define ACPI_METHOD_SUBSYSTEM_ID (ULONG)('BUS_')
#define ACPI_METHOD_REVISION_ID  (ULONG)('VRH_')

//
// ACPI methods for children
//

#define ACPI_METHOD_OUTPUT_ADR (ULONG)('RDA_')
#define ACPI_METHOD_OUTPUT_BCL (ULONG)('LCB_')
#define ACPI_METHOD_OUTPUT_BCM (ULONG)('MCB_')
#define ACPI_METHOD_OUTPUT_DDC (ULONG)('CDD_')
#define ACPI_METHOD_OUTPUT_DCS (ULONG)('SCD_')
#define ACPI_METHOD_OUTPUT_DGS (ULONG)('SGD_')
#define ACPI_METHOD_OUTPUT_DSS (ULONG)('SSD_')

//
// ACPI Flags
//

#define DXGK_ACPI_POLL_DISPLAY_CHILDREN   0x00000001
#define DXGK_ACPI_CHANGE_DISPLAY_MODE     0x00000002
#define DXGK_ACPI_CHANGE_DISPLAY_TOPOLOGY 0x00000004
#define DXGK_ACPI_CHAIN_NOT_HANDLED       0x00000008

//
// Exclude adapter access flags.
//

#define DXGK_EXCLUDE_EVICT_ALL          0x00000001
#define DXGK_EXCLUDE_CALL_SYNCHRONOUS   0x00000002
#define DXGK_EXCLUDE_BRIDGE_ACCESS      0x00000004

#define DXGK_EXCLUDE_EVICT_STANDBY        0x00000008
#define DXGK_EXCLUDE_EVICT_HIBERNATE      0x00000010
#define DXGK_EXCLUDE_EVICT_SHUTDOWN       0x00000020
#define DXGK_EXCLUDE_D3_STATE_TRANSITION  0x00000040

//
// Max of 50 characters per string.
//

#define DXGK_MAX_STRING_LEN 50
#define DXGK_MAX_REG_SZ_LEN DXGK_MAX_STRING_LEN + 1

//
// Supported device space types.
//

#define DXGK_WHICHSPACE_CONFIG       PCI_WHICHSPACE_CONFIG
#define DXGK_WHICHSPACE_ROM          PCI_WHICHSPACE_ROM
#define DXGK_WHICHSPACE_MCH          0x80000000
#define DXGK_WHICHSPACE_BRIDGE       0x80000001

//
// The below is to allow drivers to use the updated annotations if they wish,
// but not yet require all drivers to update their annotations.
//

#ifdef ENABLE_DXGK_SAL
#define _Function_class_DXGK_(param)    _Function_class_(param)
#define _IRQL_requires_DXGK_(param)     _IRQL_requires_(param)
#define _Field_size_bytes_DXGK_(param)  _Field_size_bytes_(param)
#else
#define _Function_class_DXGK_(param)
#define _IRQL_requires_DXGK_(param)
#define _Field_size_bytes_DXGK_(param)
#endif

//
// Linked display adapter support.
//

typedef struct _LINKED_DEVICE {
    ULONG ChainUid;
    ULONG NumberOfLinksInChain;
    BOOLEAN LeadLink;
} LINKED_DEVICE, *PLINKED_DEVICE;

//
// Type of ACPI notification event.
//

typedef enum _DXGK_EVENT_TYPE {
    DxgkUndefinedEvent,
    DxgkAcpiEvent,
    DxgkPowerStateEvent,
    DxgkDockingEvent,
    DxgkChainedAcpiEvent
} DXGK_EVENT_TYPE, *PDXGK_EVENT_TYPE;

typedef struct _DXGK_VIDEO_OUTPUT_CAPABILITIES {
    D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY InterfaceTechnology;
    D3DKMDT_MONITOR_ORIENTATION_AWARENESS MonitorOrientationAwareness;
    BOOLEAN SupportsSdtvModes;
} DXGK_VIDEO_OUTPUT_CAPABILITIES, *PDXGK_VIDEO_OUTPUT_CAPABILITIES;

typedef struct _DXGK_INTEGRATED_DISPLAY_CHILD {
    D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY InterfaceTechnology;
    USHORT                          DescriptorLength;
} DXGK_INTEGRATED_DISPLAY_CHILD, *PDXGK_INTEGRATED_DISPLAY_CHILD;

typedef struct _DXGK_CHILD_CAPABILITIES {

    union
    {
        //
        // If (CHILD_DESCRIPTOR::ChildDeviceType == TypeVideoOutput)
        //

        DXGK_VIDEO_OUTPUT_CAPABILITIES  VideoOutput;

        //
        // If (CHILD_DESCRIPTOR::ChildDeviceType == TypeOther)
        //

        struct
        {
            UINT MustBeZero;
        }
        Other;

        //
        // If (CHILD_DESCRIPTOR::ChildDeviceType == TypeIntegratedDisplay)
        //

        DXGK_INTEGRATED_DISPLAY_CHILD   IntegratedDisplayChild;
    } Type;

    DXGK_CHILD_DEVICE_HPD_AWARENESS HpdAwareness;
} DXGK_CHILD_CAPABILITIES, *PDXGK_CHILD_CAPABILITIES;

// We don't want to add anything in the Type union which would increase the 
// size beyond the original DXGK_VIDEO_OUTPUT_CAPABILITIES unexpectedly so assert it.
static_assert( FIELD_OFFSET( DXGK_CHILD_CAPABILITIES, HpdAwareness ) == 12, "Type field has changed size" );

typedef enum _DXGK_CHILD_DEVICE_TYPE {
   TypeUninitialized,
   TypeVideoOutput,
   TypeOther,
   TypeIntegratedDisplay
} DXGK_CHILD_DEVICE_TYPE, *PDXGK_CHILD_DEVICE_TYPE;

//
// Child descriptor structure returned to us from the miniport
//
// NOTE: If (ChildDeviceType==TypeVideoOutput) then (ChildUid == video present target ID)
//

typedef struct _DXGK_CHILD_DESCRIPTOR {
   DXGK_CHILD_DEVICE_TYPE ChildDeviceType;
   DXGK_CHILD_CAPABILITIES ChildCapabilities;
   ULONG AcpiUid;
   ULONG ChildUid;
} DXGK_CHILD_DESCRIPTOR, *PDXGK_CHILD_DESCRIPTOR;

typedef struct _DXGK_DEVICE_DESCRIPTOR {
   ULONG DescriptorOffset;
   ULONG DescriptorLength;
   _Field_size_bytes_DXGK_(DescriptorLength) PVOID DescriptorBuffer;
} DXGK_DEVICE_DESCRIPTOR, *PDXGK_DEVICE_DESCRIPTOR;

typedef struct _DXGK_GENERIC_DESCRIPTOR {
   WCHAR HardwareId[DXGK_MAX_REG_SZ_LEN];
   WCHAR InstanceId[DXGK_MAX_REG_SZ_LEN];
   WCHAR CompatibleId[DXGK_MAX_REG_SZ_LEN];
   WCHAR DeviceText[DXGK_MAX_REG_SZ_LEN];
} DXGK_GENERIC_DESCRIPTOR, *PDXGK_GENERIC_DESCRIPTOR;

//
// Types of status that the miniport can report back to us
//

typedef enum _DXGK_CHILD_STATUS_TYPE{
   StatusUninitialized,
   StatusConnection,
   StatusRotation,
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
   StatusMiracastConnection,
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)

} DXGK_CHILD_STATUS_TYPE, *PDXGK_CHILD_STATUS_TYPE;

//
// Child Status structure which can be queried directly or
// indicated up by the miniport
//

typedef struct _DXGK_CHILD_STATUS {
   DXGK_CHILD_STATUS_TYPE Type;
   ULONG ChildUid;
   union {
      struct {
         BOOLEAN Connected;
      } HotPlug;
      struct {
         UCHAR Angle;
      } Rotation;
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
      struct {
         BOOLEAN Connected;
         D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY MiracastMonitorType;
      } Miracast;
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
   };
} DXGK_CHILD_STATUS, *PDXGK_CHILD_STATUS;

//
// DxgkCbExcludeAdapterAccess callback.
//

typedef
_Function_class_DXGK_(DXGKDDI_PROTECTED_CALLBACK)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
VOID
(*DXGKDDI_PROTECTED_CALLBACK)(
    _In_ CONST PVOID MiniportDeviceContext,
    _In_ PVOID ProtectedCallbackContext,
    _In_ NTSTATUS ProtectionStatus
    );

//
// GUID_DEVINTERFACE_I2C {2564AA4F-DDDB-4495-B497-6AD4A84163D7}
//

DEFINE_GUID(GUID_DEVINTERFACE_I2C, 0x2564AA4F, 0xDDDB, 0x4495, 0xB4, 0x97, 0x6A, 0xD4, 0xA8, 0x41, 0x63, 0xD7);

//
// GUID_DEVINTERFACE_OPM {BF4672DE-6B4E-4BE4-A325-68A91EA49C09}
//

DEFINE_GUID(GUID_DEVINTERFACE_OPM, 0xBF4672DE, 0x6B4E, 0x4BE4, 0xA3, 0x25, 0x68, 0xA9, 0x1E, 0xA4, 0x9C, 0x09);

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
//
// GUID_DEVINTERFACE_OPM_2_JTP {E929EEA4-B9F1-407B-AAB9-AB08BB44FBF4}
//

DEFINE_GUID(GUID_DEVINTERFACE_OPM_2_JTP, 0xE929EEA4, 0xB9F1, 0x407B, 0xAA, 0xB9, 0xAB, 0x08, 0xBB, 0x44, 0xFB, 0xF4);

//
// GUID_DEVINTERFACE_OPM_2 {7F098726-2EBB-4FF3-A27F-1046B95DC517}
//

DEFINE_GUID(GUID_DEVINTERFACE_OPM_2, 0x7F098726, 0x2EBB, 0x4FF3, 0xA2, 0x7F, 0x10, 0x46, 0xB9, 0x5D, 0xC5, 0x17);

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_3)

//
// GUID_DEVINTERFACE_OPM_3 {693A2CB1-8C8D-4AB6-9555-4B85EF2C7C6B}
//

DEFINE_GUID(GUID_DEVINTERFACE_OPM_3, 0x693a2cb1, 0x8c8d, 0x4ab6, 0x95, 0x55, 0x4b, 0x85, 0xef, 0x2c, 0x7c, 0x6b);

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_3)

//
// GUID_DEVINTERFACE_BRIGHTNESS {FDE5BBA4-B3F9-46FB-BDAA-0728CE3100B4}
//

DEFINE_GUID(GUID_DEVINTERFACE_BRIGHTNESS, 0xFDE5BBA4, 0xB3F9, 0x46FB, 0xBD, 0xAA, 0x07, 0x28, 0xCE, 0x31, 0x00, 0xB4);

//
// GUID_DEVINTERFACE_BRIGHTNESS_2 {148A3C98-0ECD-465A-B634-B05F195F7739}
//

DEFINE_GUID(GUID_DEVINTERFACE_BRIGHTNESS_2, 0x148A3C98, 0x0ECD, 0x465A, 0xB6, 0x34, 0xB0, 0x5F, 0x19, 0x5F, 0x77, 0x39);

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)

//
// GUID_DEVINTERFACE_UMDF_DISPLAY {AF03F190-22AF-48CB-94BB-B78E76A25107}
//

DEFINE_GUID(GUID_DEVINTERFACE_MIRACAST_DISPLAY, 0xaf03f190, 0x22af, 0x48cb, 0x94, 0xbb, 0xb7, 0x8e, 0x76, 0xa2, 0x51, 0x7);

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)

//
// I2C Interface queried from the miniport.
//

#define DXGK_I2C_INTERFACE_VERSION_1 0x01

typedef
_Function_class_DXGK_(DXGKDDI_I2C_TRANSMIT_DATA_TO_DISPLAY)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_I2C_TRANSMIT_DATA_TO_DISPLAY)(
    _In_ PVOID MiniportDeviceContext,
    _In_ D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId,
    _In_ ULONG SevenBitI2CAddress,
    _In_ ULONG DataLength,
    _In_reads_bytes_(DataLength) CONST PVOID Data
    );

typedef
_Function_class_DXGK_(DXGKDDI_I2C_RECEIVE_DATA_FROM_DISPLAY)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_I2C_RECEIVE_DATA_FROM_DISPLAY)(
    _In_ PVOID MiniportDeviceContext,
    _In_ D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId,
    _In_ ULONG SevenBitI2CAddress,
    _In_ ULONG Flags,
    _In_ ULONG DataLength,
    _Out_writes_bytes_(DataLength) PVOID Data
    );

typedef struct _DXGK_I2C_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    DXGKDDI_I2C_TRANSMIT_DATA_TO_DISPLAY  DxgkDdiI2CTransmitDataToDisplay;
    DXGKDDI_I2C_RECEIVE_DATA_FROM_DISPLAY DxgkDdiI2CReceiveDataFromDisplay;
} DXGK_I2C_INTERFACE, *PDXGK_I2C_INTERFACE;

//
// OPM Interface from the miniport.
//

#define DXGK_OPM_INTERFACE_VERSION_1 0x01

typedef
_Function_class_DXGK_(DXGKDDI_OPM_GET_CERTIFICATE_SIZE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_GET_CERTIFICATE_SIZE)(
    _In_ PVOID MiniportDeviceContext,
    _In_ DXGKMDT_CERTIFICATE_TYPE CertificateType,
    _Out_ PULONG CertificateSize
    );

typedef
_Function_class_DXGK_(DXGKDDI_OPM_GET_CERTIFICATE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_GET_CERTIFICATE)(
    _In_ PVOID MiniportDeviceContext,
    _In_ DXGKMDT_CERTIFICATE_TYPE CertificateType,
    _In_ ULONG CertificateSize,
    _Out_writes_bytes_(CertificateSize) PVOID CertificateBuffer
    );

typedef
_Function_class_DXGK_(DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT)(
    _In_ PVOID MiniportDeviceContext,
    _In_ D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId,
    _In_ DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS NewVideoOutputSemantics,
    _Out_ PHANDLE NewProtectedOutputHandle
    );

typedef
_Function_class_DXGK_(DXGKDDI_OPM_GET_RANDOM_NUMBER)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_GET_RANDOM_NUMBER)(
    _In_ PVOID MiniportDeviceContext,
    _In_ HANDLE ProtectedOutputHandle,
    _Out_ PDXGKMDT_OPM_RANDOM_NUMBER RandomNumber
    );

typedef
_Function_class_DXGK_(DXGKDDI_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS)(
    _In_ PVOID MiniportDeviceContext,
    _In_ HANDLE ProtectedOutputHandle,
    _In_ CONST PDXGKMDT_OPM_ENCRYPTED_PARAMETERS EncryptedParameters
    );

typedef
_Function_class_DXGK_(DXGKDDI_OPM_GET_INFORMATION)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_GET_INFORMATION)(
    _In_ PVOID MiniportDeviceContext,
    _In_ HANDLE ProtectedOutputHandle,
    _In_ CONST PDXGKMDT_OPM_GET_INFO_PARAMETERS Parameters,
    _Out_ PDXGKMDT_OPM_REQUESTED_INFORMATION RequestedInformation
    );

typedef
_Function_class_DXGK_(DXGKDDI_OPM_GET_COPP_COMPATIBLE_INFORMATION)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_GET_COPP_COMPATIBLE_INFORMATION)(
    _In_ PVOID MiniportDeviceContext,
    _In_ HANDLE ProtectedOutputHandle,
    _In_ CONST PDXGKMDT_OPM_COPP_COMPATIBLE_GET_INFO_PARAMETERS Parameters,
    _Out_ PDXGKMDT_OPM_REQUESTED_INFORMATION RequestedInformation
    );

typedef
_Function_class_DXGK_(DXGKDDI_OPM_CONFIGURE_PROTECTED_OUTPUT)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_CONFIGURE_PROTECTED_OUTPUT)(
    _In_ PVOID MiniportDeviceContext,
    _In_ HANDLE ProtectedOutputHandle,
    _In_ CONST PDXGKMDT_OPM_CONFIGURE_PARAMETERS Parameters,
    _In_ ULONG AdditionalParametersSize,
    _In_ CONST PVOID AdditionalParameters
    );

typedef
_Function_class_DXGK_(DXGKDDI_OPM_DESTROY_PROTECTED_OUTPUT)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_DESTROY_PROTECTED_OUTPUT)(
    _In_ PVOID MiniportDeviceContext,
    _In_ HANDLE ProtectedOutputHandle
    );

typedef struct _DXGK_OPM_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    DXGKDDI_OPM_GET_CERTIFICATE_SIZE                 DxgkDdiOPMGetCertificateSize;
    DXGKDDI_OPM_GET_CERTIFICATE                      DxgkDdiOPMGetCertificate;
    DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT              DxgkDdiOPMCreateProtectedOutput;
    DXGKDDI_OPM_GET_RANDOM_NUMBER                    DxgkDdiOPMGetRandomNumber;
    DXGKDDI_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS DxgkDdiOPMSetSigningKeyAndSequenceNumbers;
    DXGKDDI_OPM_GET_INFORMATION                      DxgkDdiOPMGetInformation;
    DXGKDDI_OPM_GET_COPP_COMPATIBLE_INFORMATION      DxgkDdiOPMGetCOPPCompatibleInformation;
    DXGKDDI_OPM_CONFIGURE_PROTECTED_OUTPUT           DxgkDdiOPMConfigureProtectedOutput;
    DXGKDDI_OPM_DESTROY_PROTECTED_OUTPUT             DxgkDdiOPMDestroyProtectedOutput;
} DXGK_OPM_INTERFACE, *PDXGK_OPM_INTERFACE;


#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
//
// OPM Interface V2 from the miniport.
//

#define DXGK_OPM_INTERFACE_VERSION_2_JTP 0x02

typedef
_Function_class_DXGK_(DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT_NONLOCAL_DISPLAY_JTP)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT_NONLOCAL_DISPLAY_JTP)(
    _In_ PVOID MiniportDeviceContext,
    _In_ DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS NewVideoOutputSemantics,
    _In_ ULONG64 OPMEncoderContext,
    _In_ DXGKMDT_OPM_ACTUAL_OUTPUT_FORMAT* pActualOutputFormat,
    _In_ D3DDDI_VIDEO_PRESENT_TARGET_ID NonLocalOutputId,
    _Out_ PHANDLE NewProtectedOutputHandle
    );

typedef
_Function_class_DXGK_(DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT_VIRTUAL_MODE_JTP)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT_VIRTUAL_MODE_JTP)(
    _In_ PVOID MiniportDeviceContext,
    _In_ D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId,
    _In_ DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS NewVideoOutputSemantics,
    _In_ DXGKMDT_OPM_ACTUAL_OUTPUT_FORMAT* pActualOutputFormat,
    _Out_ PHANDLE NewProtectedOutputHandle
    );

typedef struct _DXGK_OPM_INTERFACE_2_JTP {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    // v1 Ddi's
    DXGKDDI_OPM_GET_CERTIFICATE_SIZE                        DxgkDdiOPMGetCertificateSize;
    DXGKDDI_OPM_GET_CERTIFICATE                             DxgkDdiOPMGetCertificate;
    DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT                     DxgkDdiOPMCreateProtectedOutput;
    DXGKDDI_OPM_GET_RANDOM_NUMBER                           DxgkDdiOPMGetRandomNumber;
    DXGKDDI_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS        DxgkDdiOPMSetSigningKeyAndSequenceNumbers;
    DXGKDDI_OPM_GET_INFORMATION                             DxgkDdiOPMGetInformation;
    DXGKDDI_OPM_GET_COPP_COMPATIBLE_INFORMATION             DxgkDdiOPMGetCOPPCompatibleInformation;
    DXGKDDI_OPM_CONFIGURE_PROTECTED_OUTPUT                  DxgkDdiOPMConfigureProtectedOutput;
    DXGKDDI_OPM_DESTROY_PROTECTED_OUTPUT                    DxgkDdiOPMDestroyProtectedOutput;

    // v2 Ddi's
    DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT_VIRTUAL_MODE_JTP     DxgkDdiOPMCreateProtectedOutputVirtualMode;
    DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT_NONLOCAL_DISPLAY_JTP DxgkDdiOPMCreateProtectedOutputNonLocalDisplay;
} DXGK_OPM_INTERFACE_2_JTP, *PDXGK_OPM_INTERFACE_2_JTP;

#define DXGK_OPM_INTERFACE_VERSION_2 0x03

typedef
_Function_class_DXGK_(DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT_NONLOCAL_DISPLAY)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT_NONLOCAL_DISPLAY)(
    _In_ PVOID MiniportDeviceContext,
    _In_ DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS NewVideoOutputSemantics,
    _In_ UINT64 OPMEncoderContext,
    _In_ DXGKMDT_OPM_ACTUAL_OUTPUT_FORMAT* pActualOutputFormat,
    _In_ UINT64 NonLocalOutputId,
    _In_ DXGKMDT_OPM_CONNECTOR_TYPE NonLocalConnectorType,
    _Out_ PHANDLE NewProtectedOutputHandle
    );

typedef struct _DXGK_OPM_INTERFACE_2 {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    // v1 Ddi's
    DXGKDDI_OPM_GET_CERTIFICATE_SIZE                        DxgkDdiOPMGetCertificateSize;
    DXGKDDI_OPM_GET_CERTIFICATE                             DxgkDdiOPMGetCertificate;
    DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT                     DxgkDdiOPMCreateProtectedOutput;
    DXGKDDI_OPM_GET_RANDOM_NUMBER                           DxgkDdiOPMGetRandomNumber;
    DXGKDDI_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS        DxgkDdiOPMSetSigningKeyAndSequenceNumbers;
    DXGKDDI_OPM_GET_INFORMATION                             DxgkDdiOPMGetInformation;
    DXGKDDI_OPM_GET_COPP_COMPATIBLE_INFORMATION             DxgkDdiOPMGetCOPPCompatibleInformation;
    DXGKDDI_OPM_CONFIGURE_PROTECTED_OUTPUT                  DxgkDdiOPMConfigureProtectedOutput;
    DXGKDDI_OPM_DESTROY_PROTECTED_OUTPUT                    DxgkDdiOPMDestroyProtectedOutput;

    // v2 Ddi
    DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT_NONLOCAL_DISPLAY    DxgkDdiOPMCreateProtectedOutputNonLocalDisplay;
} DXGK_OPM_INTERFACE_2, *PDXGK_OPM_INTERFACE_2;
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_3)
//
// OPM Interface V3 from the miniport.
//

#define DXGK_OPM_INTERFACE_VERSION_3 0x04

typedef
_Function_class_DXGK_(DXGKDDI_OPM_SET_SRM_LIST)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_SET_SRM_LIST)(
    _In_ PVOID MiniportDeviceContext,
    _In_ ULONG SrmListSize,
    _In_reads_bytes_(SrmListSize) PVOID SrmListBuffer
    );

typedef
_Function_class_DXGK_(DXGKDDI_OPM_GET_SRM_LIST_VERSION)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_OPM_GET_SRM_LIST_VERSION)(
    _In_ PVOID MiniportDeviceContext,
    _Inout_ PULONG SrmListVersionSize,
    _Out_writes_bytes_(*SrmListVersionSize) PVOID SrmListVersionBuffer
    );

typedef struct _DXGK_OPM_INTERFACE_3 {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    // v1 Ddi's
    DXGKDDI_OPM_GET_CERTIFICATE_SIZE                        DxgkDdiOPMGetCertificateSize;
    DXGKDDI_OPM_GET_CERTIFICATE                             DxgkDdiOPMGetCertificate;
    DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT                     DxgkDdiOPMCreateProtectedOutput;
    DXGKDDI_OPM_GET_RANDOM_NUMBER                           DxgkDdiOPMGetRandomNumber;
    DXGKDDI_OPM_SET_SIGNING_KEY_AND_SEQUENCE_NUMBERS        DxgkDdiOPMSetSigningKeyAndSequenceNumbers;
    DXGKDDI_OPM_GET_INFORMATION                             DxgkDdiOPMGetInformation;
    DXGKDDI_OPM_GET_COPP_COMPATIBLE_INFORMATION             DxgkDdiOPMGetCOPPCompatibleInformation;
    DXGKDDI_OPM_CONFIGURE_PROTECTED_OUTPUT                  DxgkDdiOPMConfigureProtectedOutput;
    DXGKDDI_OPM_DESTROY_PROTECTED_OUTPUT                    DxgkDdiOPMDestroyProtectedOutput;

    // v2 Ddi
    DXGKDDI_OPM_CREATE_PROTECTED_OUTPUT_NONLOCAL_DISPLAY    DxgkDdiOPMCreateProtectedOutputNonLocalDisplay;

    // v3 Ddi's
    DXGKDDI_OPM_SET_SRM_LIST                                DxgkDdiOPMSetSrmList;
    DXGKDDI_OPM_GET_SRM_LIST_VERSION                        DxgkDdiOPMGetSrmListVersion;
} DXGK_OPM_INTERFACE_3, *PDXGK_OPM_INTERFACE_3;
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_3)

#define DXGK_BRIGHTNESS_INTERFACE_VERSION_1 0x01

typedef
_Function_class_DXGK_(DXGK_BRIGHTNESS_GET_POSSIBLE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGK_BRIGHTNESS_GET_POSSIBLE)(
    _In_  PVOID  Context,
    _In_  ULONG  BufferSize,
    _Out_ PUCHAR LevelCount,
    _Out_writes_bytes_to_(BufferSize, *LevelCount) PUCHAR BrightnessLevels
    );

typedef
_Function_class_DXGK_(DXGK_BRIGHTNESS_SET)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGK_BRIGHTNESS_SET)(
    _In_  PVOID  Context,
    _In_  UCHAR  Brightness
    );

typedef
_Function_class_DXGK_(DXGK_BRIGHTNESS_GET)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGK_BRIGHTNESS_GET)(
    _In_  PVOID  Context,
    _Out_ PUCHAR Brightness
    );

typedef struct
{
    IN USHORT                           Size;
    IN USHORT                           Version;
    OUT PVOID                           Context;
    OUT PINTERFACE_REFERENCE            InterfaceReference;
    OUT PINTERFACE_DEREFERENCE          InterfaceDereference;
    OUT DXGK_BRIGHTNESS_GET_POSSIBLE    GetPossibleBrightness;
    OUT DXGK_BRIGHTNESS_SET             SetBrightness;
    OUT DXGK_BRIGHTNESS_GET             GetBrightness;
} DXGK_BRIGHTNESS_INTERFACE, *PDXGK_BRIGHTNESS_INTERFACE;


#define DXGK_BRIGHTNESS_INTERFACE_VERSION_2 0x02

typedef
_Function_class_DXGK_(DXGK_BRIGHTNESS_GET_CAPS)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGK_BRIGHTNESS_GET_CAPS)(
    _In_  PVOID                    Context,
    _Out_  DXGK_BRIGHTNESS_CAPS    *BrightnessCaps
    );

typedef
_Function_class_DXGK_(DXGK_BRIGHTNESS_SET_STATE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGK_BRIGHTNESS_SET_STATE)(
    _In_  PVOID                   Context,
    _In_  DXGK_BRIGHTNESS_STATE*  BrightnessState
    );

typedef
_Function_class_DXGK_(DXGK_BRIGHTNESS_SET_BACKLIGHT_OPTIMIZATION)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGK_BRIGHTNESS_SET_BACKLIGHT_OPTIMIZATION)(
    _In_  PVOID                               Context,
    _In_  DXGK_BACKLIGHT_OPTIMIZATION_LEVEL   OptimizationLevel
    );

typedef
_Function_class_DXGK_(DXGK_BRIGHTNESS_GET_BACKLIGHT_REDUCTION)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGK_BRIGHTNESS_GET_BACKLIGHT_REDUCTION)(
    _In_  PVOID                   Context,
    _Out_ DXGK_BACKLIGHT_INFO*    BacklightInfo
    );

typedef struct
{
    IN USHORT                                       Size;
    IN USHORT                                       Version;
    OUT PVOID                                       Context;
    OUT PINTERFACE_REFERENCE                        InterfaceReference;
    OUT PINTERFACE_DEREFERENCE                      InterfaceDereference;
    OUT DXGK_BRIGHTNESS_GET_POSSIBLE                GetPossibleBrightness;
    OUT DXGK_BRIGHTNESS_SET                         SetBrightness;
    OUT DXGK_BRIGHTNESS_GET                         GetBrightness;
    OUT DXGK_BRIGHTNESS_GET_CAPS                    GetBrightnessCaps;
    OUT DXGK_BRIGHTNESS_SET_STATE                   SetBrightnessState;
    OUT DXGK_BRIGHTNESS_SET_BACKLIGHT_OPTIMIZATION  SetBacklightOptimization;
    OUT DXGK_BRIGHTNESS_GET_BACKLIGHT_REDUCTION     GetBacklightReduction;
} DXGK_BRIGHTNESS_INTERFACE_2, *PDXGK_BRIGHTNESS_INTERFACE_2;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)

//
// Miracast Display Interface queried from the miniport.
//

#define DXGK_MIRACAST_DISPLAY_INTERFACE_VERSION_1 0x01

//
// Basic caps for the Miracast display devices.
//

typedef struct _DXGK_MIRACAST_CAPS
{
    //
    // Size of private driver data provided at encode chunk complete
    // interrupt.
    //

    ULONG   MaxChunkPrivateDriverDataSize;

    union
    {
        struct
        {
            UINT HdcpSupport :  1;
            UINT Reserved    : 31;
        };
        UINT Value;
    }Flags;
} DXGK_MIRACAST_CAPS, *PDXGK_MIRACAST_CAPS;

typedef
_Function_class_DXGK_(DXGKDDI_MIRACAST_QUERY_CAPS)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_MIRACAST_QUERY_CAPS)(
    _In_ PVOID DriverContext,
    _In_ ULONG  MiracastCapsSize,
    _Out_ DXGK_MIRACAST_CAPS* MiracastCaps
    );

typedef
_Function_class_DXGK_(DXGKCB_MIRACAST_SEND_MESSAGE_CALLBACK)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
VOID
(*DXGKCB_MIRACAST_SEND_MESSAGE_CALLBACK)(
    _In_ PVOID CallbackContext,
    _In_ PIO_STATUS_BLOCK pIoStatusBlock
    );

typedef
_Function_class_DXGK_(DXGKCB_MIRACAST_SEND_MESSAGE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKCB_MIRACAST_SEND_MESSAGE)(
    _In_ HANDLE MiracastHandle,
    _In_ ULONG InputBufferSize,
    _In_reads_bytes_(InputBufferSize) VOID* pInputBuffer,
    _In_ ULONG OutputBufferSize,
    _Out_writes_bytes_(OutputBufferSize) VOID* pOutputBuffer,
    _In_opt_ DXGKCB_MIRACAST_SEND_MESSAGE_CALLBACK pCallback,
    _In_opt_ PVOID pCallbackContext
    );

typedef
_Function_class_DXGK_(DXGKCB_MIRACAST_REPORT_CHUNK_INFO)
_IRQL_requires_DXGK_(DISPATCH_LEVEL)
NTSTATUS
(*DXGKCB_MIRACAST_REPORT_CHUNK_INFO)(
    _In_ HANDLE MiracastHandle,
    _In_ DXGK_MIRACAST_CHUNK_INFO* pChunkInfo,
    _In_ PVOID pPrivateDriverData,
    _In_ UINT PrivateDataDriverSize
    );

typedef struct _DXGK_MIRACAST_DISPLAY_CALLBACKS
{
    HANDLE MiracastHandle;
    DXGKCB_MIRACAST_SEND_MESSAGE DxgkCbMiracastSendMessage;
    DXGKCB_MIRACAST_REPORT_CHUNK_INFO DxgkCbReportChunkInfo;
} DXGK_MIRACAST_DISPLAY_CALLBACKS, *PDXGK_MIRACAST_DISPLAY_CALLBACKS;

typedef
_Function_class_DXGK_(DXGKDDI_MIRACAST_CREATE_CONTEXT)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_MIRACAST_CREATE_CONTEXT)(
    _In_ PVOID DriverContext,
    _In_ DXGK_MIRACAST_DISPLAY_CALLBACKS* MiracastCallbacks,
    _Out_ PVOID* MiracastContext,
    _Out_ ULONG* TargetId
    );

typedef
_Function_class_DXGK_(DXGKDDI_MIRACAST_DESTROY_CONTEXT)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
VOID
(*DXGKDDI_MIRACAST_DESTROY_CONTEXT)(
    _In_ PVOID DriverContext,
    _In_ PVOID MiracastContext
    );

typedef
_Function_class_DXGK_(DXGKDDI_MIRACAST_HANDLE_IO_CONTROL)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(*DXGKDDI_MIRACAST_HANDLE_IO_CONTROL)(
    _In_ PVOID DriverContext,
    _In_ PVOID MiracastContext,
    _In_ ULONG InputBufferSize,
    _In_reads_bytes_(InputBufferSize) VOID* pInputBuffer,
    _In_ ULONG OutputBufferSize,
    _Out_writes_bytes_(OutputBufferSize) VOID* pOutputBuffer,
    _Out_ ULONG* BytesReturned
    );

typedef struct _DXGK_MIRACAST_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    DXGKDDI_MIRACAST_QUERY_CAPS DxgkDdiMiracastQueryCaps;
    DXGKDDI_MIRACAST_CREATE_CONTEXT DxgkDdiMiracastCreateContext;
    DXGKDDI_MIRACAST_HANDLE_IO_CONTROL DxgkDdiMiracastIoControl;
    DXGKDDI_MIRACAST_DESTROY_CONTEXT DxgkDdiMiracastDestroyContext;
} DXGK_MIRACAST_DISPLAY_INTERFACE, *PDXGK_MIRACAST_DISPLAY_INTERFACE;

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)

//
// Services exported by DxgkCbQueryServices()
//

typedef enum
{
    DxgkServicesAgp,
    DxgkServicesDebugReport,
    DxgkServicesTimedOperation,
    DxgkServicesSPB,
    DxgkServicesBDD,
    DxgkServicesFirmwareTable,
    DxgkServicesIDD,
} DXGK_SERVICES;

//
// AGP Services
//

#define DXGK_AGP_INTERFACE_VERSION_1 0x01

#define DXGK_AGPCOMMAND_AGP1X       0x00001
#define DXGK_AGPCOMMAND_AGP2X       0x00002
#define DXGK_AGPCOMMAND_AGP4X       0x00004
#define DXGK_AGPCOMMAND_AGP8X       0x00008
#define DXGK_AGPCOMMAND_DISABLE_SBA 0x10000
#define DXGK_AGPCOMMAND_DISABLE_FW  0x20000

typedef
_Function_class_DXGK_(DXGKCB_AGP_ALLOCATE_POOL)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_AGP_ALLOCATE_POOL)(
    IN HANDLE Context,
    IN ULONG AllocationSize,
    IN MEMORY_CACHING_TYPE CacheType,
    OUT PPHYSICAL_ADDRESS PhysicalAddress,
    OUT PVOID *VirtualAddress
    );

typedef
_Function_class_DXGK_(DXGKCB_AGP_FREE_POOL)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_AGP_FREE_POOL)(
    IN HANDLE Context,
    IN PVOID VirtualAddress
    );

typedef
_Function_class_DXGK_(DXGKCB_AGP_SET_COMMAND)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_AGP_SET_COMMAND)(
    _In_ HANDLE Context,
    _In_ ULONG Command
    );

typedef struct _DXGK_AGP_INTERFACE {
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    DXGKCB_AGP_ALLOCATE_POOL AgpAllocatePool;
    DXGKCB_AGP_FREE_POOL AgpFreePool;
    DXGKCB_AGP_SET_COMMAND AgpSetCommand;
} DXGK_AGP_INTERFACE, *PDXGK_AGP_INTERFACE;

//
// Debug Report API
//

DECLARE_HANDLE(DXGK_DEBUG_REPORT_HANDLE);
#define DXGK_DEBUG_REPORT_INTERFACE_VERSION_1 0x01
#define DXGK_DEBUG_REPORT_MAX_SIZE 0xF800

typedef struct _DXGK_DEBUG_REPORT_INTERFACE
{
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    _IRQL_requires_DXGK_(PASSIVE_LEVEL)
    DXGK_DEBUG_REPORT_HANDLE
    (*DbgReportCreate)(
        _In_ HANDLE DeviceHandle,
        _In_ ULONG ulCode,
        _In_ ULONG_PTR ulpArg1,
        _In_ ULONG_PTR ulpArg2,
        _In_ ULONG_PTR ulpArg3,
        _In_ ULONG_PTR ulpArg4
        );

    _IRQL_requires_DXGK_(PASSIVE_LEVEL)
    _Success_(return != 0)
    BOOLEAN
    (*DbgReportSecondaryData)(
        _Inout_ DXGK_DEBUG_REPORT_HANDLE hReport,
        _In_reads_bytes_(ulDataSize) PVOID pvData,
        _In_ ULONG ulDataSize
        );

    _IRQL_requires_DXGK_(PASSIVE_LEVEL)
    VOID
    (*DbgReportComplete)(
        _Inout_ DXGK_DEBUG_REPORT_HANDLE hReport
        );
} DXGK_DEBUG_REPORT_INTERFACE, *PDXGK_DEBUG_REPORT_INTERFACE;

//
// Timed Operation API
//

#define DXGK_TIMED_OPERATION_INTERFACE_VERSION_1    0x01
#define DXGK_TIMED_OPERATION_TIMEOUT_MAX_SECONDS    5

typedef struct _DXGK_TIMED_OPERATION
{
    USHORT Size;
    ULONG_PTR OwnerTag;
    BOOLEAN OsHandled;
    BOOLEAN TimeoutTriggered;
    LARGE_INTEGER Timeout;
    LARGE_INTEGER StartTick;
} DXGK_TIMED_OPERATION, *PDXGK_TIMED_OPERATION;

typedef struct _DXGK_TIMED_OPERATION_INTERFACE
{
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    _IRQL_requires_DXGK_(PASSIVE_LEVEL)
    NTSTATUS
    (*TimedOperationStart)(
        _Out_ DXGK_TIMED_OPERATION* Op,
        _In_ const LARGE_INTEGER* Timeout,
        _In_ BOOLEAN OsHandled
        );

    _IRQL_requires_DXGK_(PASSIVE_LEVEL)
    NTSTATUS
    (*TimedOperationDelay)(
        _Inout_ DXGK_TIMED_OPERATION* Op,
        _In_ KPROCESSOR_MODE  WaitMode,
        _In_ BOOLEAN  Alertable,
        _In_opt_ const LARGE_INTEGER* Interval
        );

    _IRQL_requires_DXGK_(PASSIVE_LEVEL)
    NTSTATUS
    (*TimedOperationWaitForSingleObject)(
        _Inout_ DXGK_TIMED_OPERATION* Op,
        _In_ PVOID Object,
        _In_ KWAIT_REASON WaitReason,
        _In_ KPROCESSOR_MODE WaitMode,
        _In_ BOOLEAN Alertable,
        _In_opt_ const LARGE_INTEGER* Timeout
        );
} DXGK_TIMED_OPERATION_INTERFACE, *PDXGK_TIMED_OPERATION_INTERFACE;

//
// Serial Peripheral Bus services
//

#define DXGK_SPB_INTERFACE_VERSION_1    0x01

typedef struct _DXGK_SPB_INTERFACE
{
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    _IRQL_requires_DXGK_(PASSIVE_LEVEL)
    NTSTATUS
    (*OpenSpbResource)(
        _In_ HANDLE DeviceHandle,
        _In_ LARGE_INTEGER SpbReourceId,
        _In_opt_ UNICODE_STRING* SpbResourceSubName,
        _In_ ACCESS_MASK DesiredAccess,
        _In_ ULONG ShareAccess,
        _In_ ULONG OpenOptions,
        _Outptr_ VOID** SpbResource
        );

    _IRQL_requires_DXGK_(PASSIVE_LEVEL)
    NTSTATUS
    (*CloseSpbResource)(
        _In_ HANDLE DeviceHandle,
        _In_ VOID* SpbResource
        );

    _IRQL_requires_DXGK_(PASSIVE_LEVEL)
    NTSTATUS
    (*ReadSpbResource)(
        _In_ HANDLE DeviceHandle,
        _In_ VOID* SpbResource,
        _In_ ULONG Length,
        _Out_writes_bytes_(Length) VOID* Buffer,
        _In_opt_ LARGE_INTEGER* ByteOffset,
        _In_opt_ HANDLE EventHandle,
        _Out_ IO_STATUS_BLOCK* IoStatusBlock
        );

    _IRQL_requires_DXGK_(PASSIVE_LEVEL)
    NTSTATUS
    (*WriteSpbResource)(
        _In_ HANDLE DeviceHandle,
        _In_ VOID* SpbResource,
        _In_ ULONG Length,
        _In_reads_bytes_(Length) VOID* Buffer,
        _In_opt_ LARGE_INTEGER* ByteOffset,
        _In_opt_ HANDLE EventHandle,
        _Out_ IO_STATUS_BLOCK* IoStatusBlock
        );

    _IRQL_requires_DXGK_(PASSIVE_LEVEL)
    NTSTATUS
    (*SpbResourceIoControl)(
        _In_ HANDLE DeviceHandle,
        _In_ VOID* SpbResource,
        _In_ ULONG IoControlCode,
        _In_ ULONG InBufferSize,
        _In_reads_bytes_(InBufferSize) VOID* InputBuffer,
        _In_ ULONG OutBufferSize,
        _Out_writes_bytes_(OutBufferSize) VOID* OutputBuffer,
        _In_opt_ HANDLE EventHandle,
        _Out_ IO_STATUS_BLOCK* IoStatusBlock
        );
} DXGK_SPB_INTERFACE, *PDXGK_SPB_INTERFACE;

//
// System firmware table service
//

#define DXGK_FIRMWARE_TABLE_INTERFACE_VERSION_1    0x01

typedef struct _DXGK_FIRMWARE_TABLE_INTERFACE
{
    USHORT Size;
    USHORT Version;
    PVOID Context;
    PINTERFACE_REFERENCE InterfaceReference;
    PINTERFACE_DEREFERENCE InterfaceDereference;

    _IRQL_requires_DXGK_(PASSIVE_LEVEL)
    _Success_(return >= 0 || return == STATUS_BUFFER_TOO_SMALL)
    NTSTATUS
    (*EnumSystemFirmwareTables)(
        _In_ VOID* Context,
        _In_ ULONG ProviderSignature,
        _In_ ULONG BufferSize,
        _Pre_opt_bytecap_(BufferSize)
         _When_(return == STATUS_BUFFER_TOO_SMALL, _Post_equal_to_(_Old_(Buffer)))
         _When_(return != STATUS_BUFFER_TOO_SMALL, _Post_valid_)
        VOID* Buffer,
        _Out_ ULONG* RequiredSize
        );

    _IRQL_requires_DXGK_(PASSIVE_LEVEL)
    _Success_(return >= 0 || return == STATUS_BUFFER_TOO_SMALL)
    _When_(Buffer == NULL, _At_(BufferSize, _In_range_(==, 0)))
    NTSTATUS
    (*ReadSystemFirmwareTable)(
        _In_ VOID* Context,
        _In_ ULONG ProviderSignature,
        _In_ ULONG TableId,
        _In_ ULONG BufferSize,
        _Pre_opt_bytecap_(BufferSize)
         _When_(return == STATUS_BUFFER_TOO_SMALL, _Post_equal_to_(_Old_(Buffer)))
         _When_(return != STATUS_BUFFER_TOO_SMALL, _Post_valid_)
         VOID* Buffer,
        _Out_ ULONG* RequiredSize
        );

} DXGK_FIRMWARE_TABLE_INTERFACE, *PDXGK_FIRMWARE_TABLE_INTERFACE;


typedef enum {
    DockStateUnsupported = 0,
    DockStateUnDocked    = 1,
    DockStateDocked      = 2,
    DockStateUnknown     = 3,
} DOCKING_STATE;

//
// Device Information Structure to provide OS provided data
// structures to the miniport
//

typedef struct _DXGK_DEVICE_INFO {
    PVOID MiniportDeviceContext;
    PDEVICE_OBJECT PhysicalDeviceObject;
    UNICODE_STRING DeviceRegistryPath;
    PCM_RESOURCE_LIST TranslatedResourceList;
    LARGE_INTEGER SystemMemorySize;
    PHYSICAL_ADDRESS HighestPhysicalAddress;
    PHYSICAL_ADDRESS AgpApertureBase;
    SIZE_T AgpApertureSize;
    DOCKING_STATE DockingState;
} DXGK_DEVICE_INFO, *PDXGK_DEVICE_INFO;

//
// DxgKrnl interface
//

#define DXGK_ACPI_PASS_ARGS_TO_CHILDREN 'araP'
#define DXGK_ACPI_USE_ACPI_UID          ' diU'
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
#define DXGK_ACPI_USE_EVAL_EX           'xEvE'
#endif // DXGKDDI_INTERFACE_VERSION


typedef
_Function_class_DXGK_(DXGKCB_EVAL_ACPI_METHOD)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_EVAL_ACPI_METHOD)(
    _In_ HANDLE DeviceHandle,
    _In_ ULONG DeviceUid,
    _In_reads_bytes_(AcpiInputSize) PACPI_EVAL_INPUT_BUFFER_COMPLEX AcpiInputBuffer,
    _In_range_(>=, sizeof(ACPI_EVAL_INPUT_BUFFER_COMPLEX)) ULONG AcpiInputSize,
    _Out_writes_bytes_(AcpiOutputSize) PACPI_EVAL_OUTPUT_BUFFER AcpiOutputBuffer,
    _In_range_(>=, sizeof(ACPI_EVAL_OUTPUT_BUFFER)) ULONG AcpiOutputSize
    );

typedef
_Function_class_DXGK_(DXGKCB_GET_DEVICE_INFORMATION)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_GET_DEVICE_INFORMATION)(
    _In_ HANDLE DeviceHandle,
    _Out_ PDXGK_DEVICE_INFO DeviceInfo
    );

typedef
_Function_class_DXGK_(DXGKCB_INDICATE_CHILD_STATUS)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_INDICATE_CHILD_STATUS)(
    _In_ HANDLE DeviceHandle,
    _In_ PDXGK_CHILD_STATUS ChildStatus
    );

typedef
_Function_class_DXGK_(DXGKCB_MAP_MEMORY)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_MAP_MEMORY)(
    _In_ HANDLE DeviceHandle,
    _In_ PHYSICAL_ADDRESS TranslatedAddress,
    _In_ ULONG Length,
    _In_ BOOLEAN InIoSpace,
    _In_ BOOLEAN MapToUserMode,
    _In_ MEMORY_CACHING_TYPE CacheType,
    _Outptr_ PVOID *VirtualAddress
    );

typedef
_Function_class_DXGK_(DXGKCB_QUERY_SERVICES)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_QUERY_SERVICES)(
    _In_ HANDLE DeviceHandle,
    _In_ DXGK_SERVICES ServicesType,
    _Inout_ PINTERFACE Interface
    );

typedef
_Function_class_DXGK_(DXGKCB_QUEUE_DPC)
_Success_(return != 0)
BOOLEAN
(APIENTRY *DXGKCB_QUEUE_DPC)(
    _In_ HANDLE DeviceHandle
    );

typedef
_Function_class_DXGK_(DXGKCB_READ_DEVICE_SPACE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_READ_DEVICE_SPACE)(
    _In_ HANDLE DeviceHandle,
    _In_ ULONG DataType,
    _Out_writes_bytes_to_(Length, *BytesRead) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length,
    _Out_ PULONG BytesRead
    );

typedef
_Function_class_DXGK_(DXGKCB_SYNCHRONIZE_EXECUTION)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_SYNCHRONIZE_EXECUTION)(
    _In_ HANDLE DeviceHandle,
    _In_ PKSYNCHRONIZE_ROUTINE SynchronizeRoutine,
    _In_ PVOID Context,
    _In_ ULONG MessageNumber,
    _Out_ PBOOLEAN ReturnValue
    );

typedef
_Function_class_DXGK_(DXGKCB_UNMAP_MEMORY)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_UNMAP_MEMORY)(
    _In_ HANDLE DeviceHandle,
    _In_ PVOID VirtualAddress
    );

typedef
_Function_class_DXGK_(DXGKCB_WRITE_DEVICE_SPACE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_WRITE_DEVICE_SPACE)(
    _In_ HANDLE DeviceHandle,
    _In_ ULONG DataType,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length,
    _Out_ _Out_range_(<=, Length) PULONG BytesWritten
    );

typedef
_Function_class_DXGK_(DXGKCB_IS_DEVICE_PRESENT)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_IS_DEVICE_PRESENT)(
    _In_ HANDLE DeviceHandle,
    _In_ PPCI_DEVICE_PRESENCE_PARAMETERS DevicePresenceParameters,
    _Out_ PBOOLEAN DevicePresent
    );

typedef
_Function_class_DXGK_(DXGKCB_LOG_ETW_EVENT)
_When_(EventBufferSize > 256, _IRQL_requires_DXGK_(PASSIVE_LEVEL))
VOID
(APIENTRY *DXGKCB_LOG_ETW_EVENT)(
    _In_ CONST LPCGUID EventGuid,
    _In_ UCHAR Type,
    _In_ USHORT EventBufferSize,
    _In_reads_bytes_(EventBufferSize) PVOID EventBuffer
    );

typedef
_Function_class_DXGK_(DXGKCB_EXCLUDE_ADAPTER_ACCESS)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_EXCLUDE_ADAPTER_ACCESS)(
    _In_ HANDLE DeviceHandle,
    _In_ ULONG Attributes,
    _In_ DXGKDDI_PROTECTED_CALLBACK DxgkProtectedCallback,
    _In_ PVOID ProtectedCallbackContext
    );

typedef struct _DXGK_START_INFO {
    ULONG                          RequiredDmaQueueEntry;
    GUID                           AdapterGuid;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)

    LUID                           AdapterLuid;

#endif // DXGKDDI_INTERFACE_VERSION

} DXGK_START_INFO, *PDXGK_START_INFO;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)

typedef
_Function_class_DXGK_(DXGKCB_ACQUIRE_POST_DISPLAY_OWNERSHIP)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_ACQUIRE_POST_DISPLAY_OWNERSHIP)(
    _In_ HANDLE DeviceHandle,
    _Out_ PDXGK_DISPLAY_INFORMATION DisplayInfo
);

#endif // DXGKDDI_INTERFACE_VERSION

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_2)

typedef enum _DXGK_FRAMEBUFFER_STATE {
    FrameBufferStateUnknown = 0,
    FrameBufferStateInitializedByFirmware = 1,
    FrameBufferStateInitializedByDriver = 2,
} DXGK_FRAMEBUFFER_STATE;

typedef struct _DXGK_DISPLAY_OWNERSHIP_FLAGS {
    union {
        struct {
            DXGK_FRAMEBUFFER_STATE FrameBufferState : 4;
        };
        UINT Value;
    };
} DXGK_DISPLAY_OWNERSHIP_FLAGS, *PDXGK_DISPLAY_OWNERSHIP_FLAGS;

typedef
_Function_class_DXGK_(DXGKCB_ACQUIRE_POST_DISPLAY_OWNERSHIP2)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_ACQUIRE_POST_DISPLAY_OWNERSHIP2)(
    _In_ HANDLE DeviceHandle,
    _Out_ PDXGK_DISPLAY_INFORMATION DisplayInfo,
    _Out_ PDXGK_DISPLAY_OWNERSHIP_FLAGS Flags
);

#endif // DXGKDDI_INTERFACE_VERSION

typedef struct _DXGKRNL_INTERFACE {
    ULONG                                   Size;
    ULONG                                   Version;
    HANDLE                                  DeviceHandle;

    DXGKCB_EVAL_ACPI_METHOD                 DxgkCbEvalAcpiMethod;
    DXGKCB_GET_DEVICE_INFORMATION           DxgkCbGetDeviceInformation;
    DXGKCB_INDICATE_CHILD_STATUS            DxgkCbIndicateChildStatus;
    DXGKCB_MAP_MEMORY                       DxgkCbMapMemory;
    DXGKCB_QUEUE_DPC                        DxgkCbQueueDpc;
    DXGKCB_QUERY_SERVICES                   DxgkCbQueryServices;
    DXGKCB_READ_DEVICE_SPACE                DxgkCbReadDeviceSpace;
    DXGKCB_SYNCHRONIZE_EXECUTION            DxgkCbSynchronizeExecution;
    DXGKCB_UNMAP_MEMORY                     DxgkCbUnmapMemory;
    DXGKCB_WRITE_DEVICE_SPACE               DxgkCbWriteDeviceSpace;
    DXGKCB_IS_DEVICE_PRESENT                DxgkCbIsDevicePresent;

    DXGKCB_GETHANDLEDATA                    DxgkCbGetHandleData;
    DXGKCB_GETHANDLEPARENT                  DxgkCbGetHandleParent;
    DXGKCB_ENUMHANDLECHILDREN               DxgkCbEnumHandleChildren;
    DXGKCB_NOTIFY_INTERRUPT                 DxgkCbNotifyInterrupt;
    DXGKCB_NOTIFY_DPC                       DxgkCbNotifyDpc;
    DXGKCB_QUERYVIDPNINTERFACE              DxgkCbQueryVidPnInterface;
    DXGKCB_QUERYMONITORINTERFACE            DxgkCbQueryMonitorInterface;
    DXGKCB_GETCAPTUREADDRESS                DxgkCbGetCaptureAddress;

    DXGKCB_LOG_ETW_EVENT                    DxgkCbLogEtwEvent;

    DXGKCB_EXCLUDE_ADAPTER_ACCESS           DxgkCbExcludeAdapterAccess;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)

    DXGKCB_CREATECONTEXTALLOCATION          DxgkCbCreateContextAllocation;
    DXGKCB_DESTROYCONTEXTALLOCATION         DxgkCbDestroyContextAllocation;
    DXGKCB_SETPOWERCOMPONENTACTIVE          DxgkCbSetPowerComponentActive;
    DXGKCB_SETPOWERCOMPONENTIDLE            DxgkCbSetPowerComponentIdle;
    DXGKCB_ACQUIRE_POST_DISPLAY_OWNERSHIP   DxgkCbAcquirePostDisplayOwnership;
    DXGKCB_POWERRUNTIMECONTROLREQUEST       DxgkCbPowerRuntimeControlRequest;
    DXGKCB_SETPOWERCOMPONENTLATENCY         DxgkCbSetPowerComponentLatency;
    DXGKCB_SETPOWERCOMPONENTRESIDENCY       DxgkCbSetPowerComponentResidency;
    DXGKCB_COMPLETEFSTATETRANSITION         DxgkCbCompleteFStateTransition;

#endif // DXGKDDI_INTERFACE_VERSION

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)

    DXGKCB_COMPLETEPSTATETRANSITION         DxgkCbCompletePStateTransition;

#endif // DXGKDDI_INTERFACE_VERSION_WDDM1_3

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

    DXGKCB_MAPCONTEXTALLOCATION             DxgkCbMapContextAllocation;
    DXGKCB_UPDATECONTEXTALLOCATION          DxgkCbUpdateContextAllocation;
    DXGKCB_RESERVEGPUVIRTUALADDRESSRANGE    DxgkCbReserveGpuVirtualAddressRange;
    DXGKCB_ACQUIREHANDLEDATA                DxgkCbAcquireHandleData;
    DXGKCB_RELEASEHANDLEDATA                DxgkCbReleaseHandleData;
    DXGKCB_HARDWARECONTENTPROTECTIONTEARDOWN DxgkCbHardwareContentProtectionTeardown;
 
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)

    DXGKCB_MULTIPLANEOVERLAYDISABLED        DxgkCbMultiPlaneOverlayDisabled;
    DXGKCB_DXGKCB_MITIGATEDRANGEUPDATE      DxgkCbMitigatedRangeUpdate;

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_2)

    DXGKCB_INVALIDATEHWCONTEXT              DxgkCbInvalidateHwContext;
    DXGKCB_INDICATE_CONNECTOR_CHANGE        DxgkCbIndicateConnectorChange;
    DXGKCB_UNBLOCKUEFIFRAMEBUFFERRANGES     DxgkCbUnblockUEFIFrameBufferRanges;
    DXGKCB_ACQUIRE_POST_DISPLAY_OWNERSHIP2  DxgkCbAcquirePostDisplayOwnership2;

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_2)

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_3)

    DXGKCB_SETPROTECTEDSESSIONSTATUS        DxgkCbSetProtectedSessionStatus;

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_3)

} DXGKRNL_INTERFACE, *PDXGKRNL_INTERFACE;

//
// Kernel Mode Driver Interface
//

//
//  Define parameter types for SAL-annotated DDI parameters.  These are used by
//  the DDI function name typedefs.  They are not needed in a driver's DDI function
//  definitions, and should not be used in driver code.
//
//  Naming convention: Concatenate all SAL annotations, an underscore, other modifiers
//                     such as CONST, and the type of the parameter, and use uppercase
//                     only.
//
typedef _In_    CONST PDEVICE_OBJECT     IN_CONST_PDEVICE_OBJECT;
typedef _Inout_ PLINKED_DEVICE           INOUT_PLINKED_DEVICE;
typedef _Inout_ PDXGK_CHILD_DESCRIPTOR   INOUT_PDXGK_CHILD_DESCRIPTOR;
typedef _In_    PDXGK_CHILD_STATUS       IN_PDXGK_CHILD_STATUS;
typedef _Inout_ PDXGK_CHILD_STATUS       INOUT_PDXGK_CHILD_STATUS;
typedef _Inout_ PDXGK_DEVICE_DESCRIPTOR  INOUT_PDXGK_DEVICE_DESCRIPTOR;
typedef _In_    DXGK_EVENT_TYPE          IN_DXGK_EVENT_TYPE;
typedef _In_    PDXGK_START_INFO         IN_PDXGK_START_INFO;
typedef _In_    PDXGKRNL_INTERFACE       IN_PDXGKRNL_INTERFACE;
typedef _In_    PQUERY_INTERFACE         IN_PQUERY_INTERFACE;
typedef _In_    PVIDEO_REQUEST_PACKET    IN_PVIDEO_REQUEST_PACKET;

//
//     Function name typedefs
//

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_ADD_DEVICE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_ADD_DEVICE(
    IN_CONST_PDEVICE_OBJECT     PhysicalDeviceObject,
    OUT_PPVOID                  MiniportDeviceContext
    );

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_START_DEVICE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_START_DEVICE(
    IN_CONST_PVOID          MiniportDeviceContext,
    IN_PDXGK_START_INFO     DxgkStartInfo,
    IN_PDXGKRNL_INTERFACE   DxgkInterface,
    OUT_PULONG              NumberOfVideoPresentSources,
    OUT_PULONG              NumberOfChildren
    );

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_STOP_DEVICE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_STOP_DEVICE(
    IN_CONST_PVOID  MiniportDeviceContext
    );

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_REMOVE_DEVICE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_REMOVE_DEVICE(
    IN_CONST_PVOID  MiniportDeviceContext
    );

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_DISPATCH_IO_REQUEST)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_DISPATCH_IO_REQUEST(
    IN_CONST_PVOID              MiniportDeviceContext,
    IN_ULONG                    VidPnSourceId,
    IN_PVIDEO_REQUEST_PACKET    VideoRequestPacket
    );

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_QUERY_CHILD_RELATIONS)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_QUERY_CHILD_RELATIONS(
    _In_ CONST PVOID                                                  MiniportDeviceContext,
    _Inout_updates_bytes_(ChildRelationsSize) PDXGK_CHILD_DESCRIPTOR  ChildRelations,
    _In_ ULONG                                                        ChildRelationsSize
    );

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_QUERY_CHILD_STATUS)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_QUERY_CHILD_STATUS(
    IN_CONST_PVOID              MiniportDeviceContext,
    INOUT_PDXGK_CHILD_STATUS    ChildStatus,
    IN_BOOLEAN                  NonDestructiveOnly
    );

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_INTERRUPT_ROUTINE)
_IRQL_requires_DXGK_(HIGH_LEVEL) // HIGH_LEVEL is best approximation of DIRQL
BOOLEAN
DXGKDDI_INTERRUPT_ROUTINE(
    IN_CONST_PVOID  MiniportDeviceContext,
    IN_ULONG        MessageNumber
    );

typedef
_Function_class_DXGK_(DXGKDDI_DPC_ROUTINE)
_IRQL_requires_DXGK_(DISPATCH_LEVEL)
VOID
DXGKDDI_DPC_ROUTINE(
    IN_CONST_PVOID  MiniportDeviceContext
    );

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_QUERY_DEVICE_DESCRIPTOR)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_QUERY_DEVICE_DESCRIPTOR(
    IN_CONST_PVOID                  MiniportDeviceContext,
    IN_ULONG                        ChildUid,
    INOUT_PDXGK_DEVICE_DESCRIPTOR   DeviceDescriptor
    );

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_SET_POWER_STATE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_SET_POWER_STATE(
    IN_CONST_PVOID          MiniportDeviceContext,
    IN_ULONG                DeviceUid,
    IN_DEVICE_POWER_STATE   DevicePowerState,
    IN_POWER_ACTION         ActionType
    );

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_NOTIFY_ACPI_EVENT)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_NOTIFY_ACPI_EVENT(
    IN_CONST_PVOID      MiniportDeviceContext,
    IN_DXGK_EVENT_TYPE  EventType,
    IN_ULONG            Event,
    IN_PVOID            Argument,
    OUT_PULONG          AcpiFlags
    );

typedef
_Function_class_DXGK_(DXGKDDI_RESET_DEVICE)
VOID
DXGKDDI_RESET_DEVICE(
    IN_CONST_PVOID  MiniportDeviceContext
    );

typedef
_Function_class_DXGK_(DXGKDDI_UNLOAD)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
VOID
DXGKDDI_UNLOAD(
    VOID
    );

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_QUERY_INTERFACE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_QUERY_INTERFACE(
    IN_CONST_PVOID          MiniportDeviceContext,
    IN_PQUERY_INTERFACE     QueryInterface
    );

typedef
_Function_class_DXGK_(DXGKDDI_CONTROL_ETW_LOGGING)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
VOID
DXGKDDI_CONTROL_ETW_LOGGING(
    IN_BOOLEAN  Enable,
    IN_ULONG    Flags,
    IN_UCHAR    Level
    );

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_LINK_DEVICE)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_LINK_DEVICE(
    IN_CONST_PDEVICE_OBJECT   PhysicalDeviceObject,
    IN_CONST_PVOID            MiniportDeviceContext,
    INOUT_PLINKED_DEVICE      LinkedDevice
    );

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_2)

typedef struct _DXGK_PRE_START_INFO {
    union {
        struct {
            UINT    ReservedIn;
        };
        UINT Input;
    };
    union {
        struct {
            UINT    SupportPreserveBootDisplay  : 1;
            UINT    IsUEFIFrameBufferCpuAccessibleDuringStartup : 1;
            UINT    ReservedOut                 :30;
        };
        UINT Output;
    };
} DXGK_PRE_START_INFO, *PDXGK_PRE_START_INFO;
typedef _Inout_    PDXGK_PRE_START_INFO    IN_OUT_PDXGK_PRE_START_INFO;

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_EXCHANGEPRESTARTINFO)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_EXCHANGEPRESTARTINFO(
    IN_CONST_HANDLE             hAdapter,
    IN_OUT_PDXGK_PRE_START_INFO pPreStartInfo
    );

typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETTARGETADJUSTEDCOLORIMETRY)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETTARGETADJUSTEDCOLORIMETRY(
    IN_CONST_HANDLE                                 hAdapter,
    IN  D3DDDI_VIDEO_PRESENT_TARGET_ID              TargetId,
    IN  DXGK_COLORIMETRY                            AdjustedColorimetry
    );

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_2)

//
//     Function pointer typedefs
//

typedef DXGKDDI_ADD_DEVICE                      *PDXGKDDI_ADD_DEVICE;
typedef DXGKDDI_START_DEVICE                    *PDXGKDDI_START_DEVICE;
typedef DXGKDDI_STOP_DEVICE                     *PDXGKDDI_STOP_DEVICE;
typedef DXGKDDI_REMOVE_DEVICE                   *PDXGKDDI_REMOVE_DEVICE;
typedef DXGKDDI_DISPATCH_IO_REQUEST             *PDXGKDDI_DISPATCH_IO_REQUEST;
typedef DXGKDDI_QUERY_CHILD_RELATIONS           *PDXGKDDI_QUERY_CHILD_RELATIONS;
typedef DXGKDDI_QUERY_CHILD_STATUS              *PDXGKDDI_QUERY_CHILD_STATUS;
typedef DXGKDDI_INTERRUPT_ROUTINE               *PDXGKDDI_INTERRUPT_ROUTINE;
typedef DXGKDDI_DPC_ROUTINE                     *PDXGKDDI_DPC_ROUTINE;
typedef DXGKDDI_QUERY_DEVICE_DESCRIPTOR         *PDXGKDDI_QUERY_DEVICE_DESCRIPTOR;
typedef DXGKDDI_SET_POWER_STATE                 *PDXGKDDI_SET_POWER_STATE;
typedef DXGKDDI_NOTIFY_ACPI_EVENT               *PDXGKDDI_NOTIFY_ACPI_EVENT;
typedef DXGKDDI_RESET_DEVICE                    *PDXGKDDI_RESET_DEVICE;
typedef DXGKDDI_UNLOAD                          *PDXGKDDI_UNLOAD;
typedef DXGKDDI_QUERY_INTERFACE                 *PDXGKDDI_QUERY_INTERFACE;
typedef DXGKDDI_CONTROL_ETW_LOGGING             *PDXGKDDI_CONTROL_ETW_LOGGING;
typedef DXGKDDI_LINK_DEVICE                     *PDXGKDDI_LINK_DEVICE;
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_2)
typedef DXGKDDI_EXCHANGEPRESTARTINFO            *PDXGKDDI_EXCHANGEPRESTARTINFO;
typedef DXGKDDI_SETTARGETADJUSTEDCOLORIMETRY    *PDXGKDDI_SETTARGETADJUSTEDCOLORIMETRY;
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_2)


#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)

//
//     Function name typedefs
//

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_STOP_DEVICE_AND_RELEASE_POST_DISPLAY_OWNERSHIP)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_STOP_DEVICE_AND_RELEASE_POST_DISPLAY_OWNERSHIP(
    _In_ PVOID MiniportDeviceContext,
    _In_ D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId,
    _Out_ PDXGK_DISPLAY_INFORMATION DisplayInfo
);

typedef struct _DXGKARG_SYSTEM_DISPLAY_ENABLE_FLAGS
{
    union
    {
        struct
        {
            UINT  Reserved    : 32;  // 0xFFFFFFFF
        };
        UINT Value;
    };
} DXGKARG_SYSTEM_DISPLAY_ENABLE_FLAGS, *PDXGKARG_SYSTEM_DISPLAY_ENABLE_FLAGS;

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_SYSTEM_DISPLAY_ENABLE)
NTSTATUS
DXGKDDI_SYSTEM_DISPLAY_ENABLE(
    _In_ PVOID MiniportDeviceContext,
    _In_ D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId,
    _In_ PDXGKARG_SYSTEM_DISPLAY_ENABLE_FLAGS Flags,
    _Out_ UINT* Width,
    _Out_ UINT* Height,
    _Out_ D3DDDIFORMAT* ColorFormat
);

typedef
_Function_class_DXGK_(DXGKDDI_SYSTEM_DISPLAY_WRITE)
VOID
DXGKDDI_SYSTEM_DISPLAY_WRITE(
    _In_ PVOID MiniportDeviceContext,
    _In_reads_bytes_(SourceHeight * SourceStride) PVOID Source,
    _In_ UINT SourceWidth,
    _In_ UINT SourceHeight,
    _In_ UINT SourceStride,
    _In_ UINT PositionX,
    _In_ UINT PositionY
);

//
// ELD and Container ID structures
//

typedef struct _DXGK_CHILD_CONTAINER_ID
{
    GUID ContainerId;
    struct
    {
        ULONG64 PortId;
        USHORT ManufacturerName;
        USHORT ProductCode;
    } EldInfo;
} DXGK_CHILD_CONTAINER_ID, *PDXGK_CHILD_CONTAINER_ID;

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_GET_CHILD_CONTAINER_ID)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_GET_CHILD_CONTAINER_ID(
    _In_ PVOID MiniportDeviceContext,
    _In_ ULONG ChildUid,
    _Inout_ PDXGK_CHILD_CONTAINER_ID ContainerId
    );

//
// Surprise removal support function
//

typedef enum _DXGK_SURPRISE_REMOVAL_TYPE
{
    DxgkRemovalHibernation  = 0,
    DxgkRemovalPnPNotify    = 1,
} DXGK_SURPRISE_REMOVAL_TYPE;

typedef
    _Check_return_
_Function_class_DXGK_(DXGKDDI_NOTIFY_SURPRISE_REMOVAL)
_IRQL_requires_DXGK_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_NOTIFY_SURPRISE_REMOVAL(
    _In_ PVOID MiniportDeviceContext,
    _In_ DXGK_SURPRISE_REMOVAL_TYPE RemovalType
    );

//
//     Function pointer typedefs
//

typedef DXGKDDI_STOP_DEVICE_AND_RELEASE_POST_DISPLAY_OWNERSHIP  *PDXGKDDI_STOP_DEVICE_AND_RELEASE_POST_DISPLAY_OWNERSHIP;
typedef DXGKDDI_SYSTEM_DISPLAY_ENABLE           *PDXGKDDI_SYSTEM_DISPLAY_ENABLE;
typedef DXGKDDI_SYSTEM_DISPLAY_WRITE            *PDXGKDDI_SYSTEM_DISPLAY_WRITE;
typedef DXGKDDI_GET_CHILD_CONTAINER_ID          *PDXGKDDI_GET_CHILD_CONTAINER_ID;
typedef DXGKDDI_NOTIFY_SURPRISE_REMOVAL         *PDXGKDDI_NOTIFY_SURPRISE_REMOVAL;

#endif // DXGKDDI_INTERFACE_VERSION

//
// Driver initialization data structure
//

typedef struct _DRIVER_INITIALIZATION_DATA {
    ULONG                                   Version;
    PDXGKDDI_ADD_DEVICE                     DxgkDdiAddDevice;
    PDXGKDDI_START_DEVICE                   DxgkDdiStartDevice;
    PDXGKDDI_STOP_DEVICE                    DxgkDdiStopDevice;
    PDXGKDDI_REMOVE_DEVICE                  DxgkDdiRemoveDevice;
    PDXGKDDI_DISPATCH_IO_REQUEST            DxgkDdiDispatchIoRequest;
    PDXGKDDI_INTERRUPT_ROUTINE              DxgkDdiInterruptRoutine;
    PDXGKDDI_DPC_ROUTINE                    DxgkDdiDpcRoutine;
    PDXGKDDI_QUERY_CHILD_RELATIONS          DxgkDdiQueryChildRelations;
    PDXGKDDI_QUERY_CHILD_STATUS             DxgkDdiQueryChildStatus;
    PDXGKDDI_QUERY_DEVICE_DESCRIPTOR        DxgkDdiQueryDeviceDescriptor;
    PDXGKDDI_SET_POWER_STATE                DxgkDdiSetPowerState;
    PDXGKDDI_NOTIFY_ACPI_EVENT              DxgkDdiNotifyAcpiEvent;
    PDXGKDDI_RESET_DEVICE                   DxgkDdiResetDevice;
    PDXGKDDI_UNLOAD                         DxgkDdiUnload;
    PDXGKDDI_QUERY_INTERFACE                DxgkDdiQueryInterface;
    PDXGKDDI_CONTROL_ETW_LOGGING            DxgkDdiControlEtwLogging;

    PDXGKDDI_QUERYADAPTERINFO               DxgkDdiQueryAdapterInfo;
    PDXGKDDI_CREATEDEVICE                   DxgkDdiCreateDevice;
    PDXGKDDI_CREATEALLOCATION               DxgkDdiCreateAllocation;
    PDXGKDDI_DESTROYALLOCATION              DxgkDdiDestroyAllocation;
    PDXGKDDI_DESCRIBEALLOCATION             DxgkDdiDescribeAllocation;
    PDXGKDDI_GETSTANDARDALLOCATIONDRIVERDATA DxgkDdiGetStandardAllocationDriverData;
    PDXGKDDI_ACQUIRESWIZZLINGRANGE          DxgkDdiAcquireSwizzlingRange;
    PDXGKDDI_RELEASESWIZZLINGRANGE          DxgkDdiReleaseSwizzlingRange;
    PDXGKDDI_PATCH                          DxgkDdiPatch;
    PDXGKDDI_SUBMITCOMMAND                  DxgkDdiSubmitCommand;
    PDXGKDDI_PREEMPTCOMMAND                 DxgkDdiPreemptCommand;
    PDXGKDDI_BUILDPAGINGBUFFER              DxgkDdiBuildPagingBuffer;
    PDXGKDDI_SETPALETTE                     DxgkDdiSetPalette;
    PDXGKDDI_SETPOINTERPOSITION             DxgkDdiSetPointerPosition;
    PDXGKDDI_SETPOINTERSHAPE                DxgkDdiSetPointerShape;
    PDXGKDDI_RESETFROMTIMEOUT               DxgkDdiResetFromTimeout;
    PDXGKDDI_RESTARTFROMTIMEOUT             DxgkDdiRestartFromTimeout;
    PDXGKDDI_ESCAPE                         DxgkDdiEscape;
    PDXGKDDI_COLLECTDBGINFO                 DxgkDdiCollectDbgInfo;
    PDXGKDDI_QUERYCURRENTFENCE              DxgkDdiQueryCurrentFence;
    PDXGKDDI_ISSUPPORTEDVIDPN               DxgkDdiIsSupportedVidPn;
    PDXGKDDI_RECOMMENDFUNCTIONALVIDPN       DxgkDdiRecommendFunctionalVidPn;
    PDXGKDDI_ENUMVIDPNCOFUNCMODALITY        DxgkDdiEnumVidPnCofuncModality;
    PDXGKDDI_SETVIDPNSOURCEADDRESS          DxgkDdiSetVidPnSourceAddress;
    PDXGKDDI_SETVIDPNSOURCEVISIBILITY       DxgkDdiSetVidPnSourceVisibility;
    PDXGKDDI_COMMITVIDPN                    DxgkDdiCommitVidPn;
    PDXGKDDI_UPDATEACTIVEVIDPNPRESENTPATH   DxgkDdiUpdateActiveVidPnPresentPath;
    PDXGKDDI_RECOMMENDMONITORMODES          DxgkDdiRecommendMonitorModes;
    PDXGKDDI_RECOMMENDVIDPNTOPOLOGY         DxgkDdiRecommendVidPnTopology;
    PDXGKDDI_GETSCANLINE                    DxgkDdiGetScanLine;
    PDXGKDDI_STOPCAPTURE                    DxgkDdiStopCapture;
    PDXGKDDI_CONTROLINTERRUPT               DxgkDdiControlInterrupt;
    PDXGKDDI_CREATEOVERLAY                  DxgkDdiCreateOverlay;

    //
    // Device functions
    //

    PDXGKDDI_DESTROYDEVICE                  DxgkDdiDestroyDevice;
    PDXGKDDI_OPENALLOCATIONINFO             DxgkDdiOpenAllocation;
    PDXGKDDI_CLOSEALLOCATION                DxgkDdiCloseAllocation;
    PDXGKDDI_RENDER                         DxgkDdiRender;
    PDXGKDDI_PRESENT                        DxgkDdiPresent;

    //
    // Overlay functions
    //

    PDXGKDDI_UPDATEOVERLAY                  DxgkDdiUpdateOverlay;
    PDXGKDDI_FLIPOVERLAY                    DxgkDdiFlipOverlay;
    PDXGKDDI_DESTROYOVERLAY                 DxgkDdiDestroyOverlay;

    //
    // Context supports.
    //

    PDXGKDDI_CREATECONTEXT                  DxgkDdiCreateContext;
    PDXGKDDI_DESTROYCONTEXT                 DxgkDdiDestroyContext;

    //
    // Linked Display Adapter support.
    //

    PDXGKDDI_LINK_DEVICE                    DxgkDdiLinkDevice;
    PDXGKDDI_SETDISPLAYPRIVATEDRIVERFORMAT  DxgkDdiSetDisplayPrivateDriverFormat;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN7)
    //
    // Extended for WDDM 2.0
    //
    PVOID                                   DxgkDdiDescribePageTable;
    PVOID                                   DxgkDdiUpdatePageTable;
    PVOID                                   DxgkDdiUpdatePageDirectory;
    PVOID                                   DxgkDdiMovePageDirectory;

    PVOID                                   DxgkDdiSubmitRender;
    PVOID                                   DxgkDdiCreateAllocation2;

    //
    // GDI acceleration. Extended for WDDM 1.0
    //
    PDXGKDDI_RENDER                         DxgkDdiRenderKm;

    //
    // New DMM DDIs for CCD support
    //
    VOID*                                   Reserved;
    PDXGKDDI_QUERYVIDPNHWCAPABILITY         DxgkDdiQueryVidPnHWCapability;

#endif // DXGKDDI_INTERFACE_VERSION

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)
    PDXGKDDISETPOWERCOMPONENTFSTATE         DxgkDdiSetPowerComponentFState;

    //
    // New DDIs for TDR support.
    //
    PDXGKDDI_QUERYDEPENDENTENGINEGROUP      DxgkDdiQueryDependentEngineGroup;
    PDXGKDDI_QUERYENGINESTATUS              DxgkDdiQueryEngineStatus;
    PDXGKDDI_RESETENGINE                    DxgkDdiResetEngine;

    //
    // New DDIs for PnP stop/start support.
    //
    PDXGKDDI_STOP_DEVICE_AND_RELEASE_POST_DISPLAY_OWNERSHIP DxgkDdiStopDeviceAndReleasePostDisplayOwnership;

    //
    // New DDIs for system display support.
    //
    PDXGKDDI_SYSTEM_DISPLAY_ENABLE          DxgkDdiSystemDisplayEnable;
    PDXGKDDI_SYSTEM_DISPLAY_WRITE           DxgkDdiSystemDisplayWrite;

    PDXGKDDI_CANCELCOMMAND                  DxgkDdiCancelCommand;

    //
    // New DDI for the monitor container ID support.
    //
    PDXGKDDI_GET_CHILD_CONTAINER_ID         DxgkDdiGetChildContainerId;

    PDXGKDDIPOWERRUNTIMECONTROLREQUEST      DxgkDdiPowerRuntimeControlRequest;

    //
    // New DDI for multi plane overlay support.
    //
    PDXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay;

    //
    // New DDI for the surprise removal support.
    //
    PDXGKDDI_NOTIFY_SURPRISE_REMOVAL        DxgkDdiNotifySurpriseRemoval;

#endif // DXGKDDI_INTERFACE_VERSION

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM1_3)
    //
    // New DDI for querying node metadata
    //
    PDXGKDDI_GETNODEMETADATA                DxgkDdiGetNodeMetadata;

    //
    // New DDI for power management enhancements
    //
    PDXGKDDISETPOWERPSTATE                  DxgkDdiSetPowerPState;
    PDXGKDDI_CONTROLINTERRUPT2              DxgkDdiControlInterrupt2;

    //
    // New DDI for multiplane overlay support
    //
    PDXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT  DxgkDdiCheckMultiPlaneOverlaySupport;

    //
    // New DDI for GPU clock calibration
    //
    PDXGKDDI_CALIBRATEGPUCLOCK              DxgkDdiCalibrateGpuClock;

    //
    // New DDI for history buffer formatting
    //
    PDXGKDDI_FORMATHISTORYBUFFER            DxgkDdiFormatHistoryBuffer;

#endif

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

    PDXGKDDI_RENDERGDI                      DxgkDdiRenderGdi; 
    PDXGKDDI_SUBMITCOMMANDVIRTUAL           DxgkDdiSubmitCommandVirtual; 
    PDXGKDDI_SETROOTPAGETABLE               DxgkDdiSetRootPageTable; 
    PDXGKDDI_GETROOTPAGETABLESIZE           DxgkDdiGetRootPageTableSize; 
    PDXGKDDI_MAPCPUHOSTAPERTURE             DxgkDdiMapCpuHostAperture; 
    PDXGKDDI_UNMAPCPUHOSTAPERTURE           DxgkDdiUnmapCpuHostAperture; 
    PDXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT2 DxgkDdiCheckMultiPlaneOverlaySupport2;
    PDXGKDDI_CREATEPROCESS                  DxgkDdiCreateProcess;
    PDXGKDDI_DESTROYPROCESS                 DxgkDdiDestroyProcess;
    PDXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2    DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay2;
    void*                                   Reserved1;
    void*                                   Reserved2;
    PDXGKDDI_POWERRUNTIMESETDEVICEHANDLE    DxgkDdiPowerRuntimeSetDeviceHandle;
    PDXGKDDI_SETSTABLEPOWERSTATE            DxgkDdiSetStablePowerState;
    PDXGKDDI_SETVIDEOPROTECTEDREGION        DxgkDdiSetVideoProtectedRegion;

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)

    PDXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT3 DxgkDdiCheckMultiPlaneOverlaySupport3;
    PDXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3    DxgkDdiSetVidPnSourceAddressWithMultiPlaneOverlay3;
    PDXGKDDI_POSTMULTIPLANEOVERLAYPRESENT   DxgkDdiPostMultiPlaneOverlayPresent;
    PDXGKDDI_VALIDATEUPDATEALLOCATIONPROPERTY       DxgkDdiValidateUpdateAllocationProperty;

    PDXGKDDI_CONTROLMODEBEHAVIOR            DxgkDdiControlModeBehavior;
    PDXGKDDI_UPDATEMONITORLINKINFO          DxgkDdiUpdateMonitorLinkInfo;
#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_2)

    //
    // Hardware context scheduling support.
    //

    PDXGKDDI_CREATEHWCONTEXT                DxgkDdiCreateHwContext;
    PDXGKDDI_DESTROYHWCONTEXT               DxgkDdiDestroyHwContext;

    PDXGKDDI_CREATEHWQUEUE                  DxgkDdiCreateHwQueue;
    PDXGKDDI_DESTROYHWQUEUE                 DxgkDdiDestroyHwQueue;

    PDXGKDDI_SUBMITCOMMANDTOHWQUEUE         DxgkDdiSubmitCommandToHwQueue;
    PDXGKDDI_SWITCHTOHWCONTEXTLIST          DxgkDdiSwitchToHwContextList;

    PDXGKDDI_RESETHWENGINE                  DxgkDdiResetHwEngine;

    PDXGKDDI_CREATEPERIODICFRAMENOTIFICATION    DxgkDdiCreatePeriodicFrameNotification;
    PDXGKDDI_DESTROYPERIODICFRAMENOTIFICATION   DxgkDdiDestroyPeriodicFrameNotification;

    PDXGKDDI_SETTIMINGSFROMVIDPN            DxgkDdiSetTimingsFromVidPn;

    PDXGKDDI_SETTARGETGAMMA                 DxgkDdiSetTargetGamma;
    PDXGKDDI_SETTARGETCONTENTTYPE           DxgkDdiSetTargetContentType;
    PDXGKDDI_SETTARGETANALOGCOPYPROTECTION  DxgkDdiSetTargetAnalogCopyProtection;
    PDXGKDDI_SETTARGETADJUSTEDCOLORIMETRY   DxgkDdiSetTargetAdjustedColorimetry;

    PDXGKDDI_DISPLAYDETECTCONTROL           DxgkDdiDisplayDetectControl;
    PDXGKDDI_QUERYCONNECTIONCHANGE          DxgkDdiQueryConnectionChange;

    PDXGKDDI_EXCHANGEPRESTARTINFO           DxgkDdiExchangePreStartInfo;

    PDXGKDDI_GETMULTIPLANEOVERLAYCAPS       DxgkDdiGetMultiPlaneOverlayCaps;
    PDXGKDDI_GETPOSTCOMPOSITIONCAPS         DxgkDdiGetPostCompositionCaps;

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_2)

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_3)

    PDXGKDDI_UPDATEHWCONTEXTSTATE           DxgkDdiUpdateHwContextState;

    PDXGKDDI_CREATEPROTECTEDSESSION         DxgkDdiCreateProtectedSession;
    PDXGKDDI_DESTROYPROTECTEDSESSION        DxgkDdiDestroyProtectedSession;

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_3)

} DRIVER_INITIALIZATION_DATA, *PDRIVER_INITIALIZATION_DATA;

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)

typedef struct _KMDDOD_INITIALIZATION_DATA {
    ULONG                                   Version;
    PDXGKDDI_ADD_DEVICE                     DxgkDdiAddDevice;
    PDXGKDDI_START_DEVICE                   DxgkDdiStartDevice;
    PDXGKDDI_STOP_DEVICE                    DxgkDdiStopDevice;
    PDXGKDDI_REMOVE_DEVICE                  DxgkDdiRemoveDevice;
    PDXGKDDI_DISPATCH_IO_REQUEST            DxgkDdiDispatchIoRequest;
    PDXGKDDI_INTERRUPT_ROUTINE              DxgkDdiInterruptRoutine;
    PDXGKDDI_DPC_ROUTINE                    DxgkDdiDpcRoutine;
    PDXGKDDI_QUERY_CHILD_RELATIONS          DxgkDdiQueryChildRelations;
    PDXGKDDI_QUERY_CHILD_STATUS             DxgkDdiQueryChildStatus;
    PDXGKDDI_QUERY_DEVICE_DESCRIPTOR        DxgkDdiQueryDeviceDescriptor;
    PDXGKDDI_SET_POWER_STATE                DxgkDdiSetPowerState;
    PDXGKDDI_NOTIFY_ACPI_EVENT              DxgkDdiNotifyAcpiEvent;
    PDXGKDDI_RESET_DEVICE                   DxgkDdiResetDevice;
    PDXGKDDI_UNLOAD                         DxgkDdiUnload;
    PDXGKDDI_QUERY_INTERFACE                DxgkDdiQueryInterface;
    PDXGKDDI_CONTROL_ETW_LOGGING            DxgkDdiControlEtwLogging;
    PDXGKDDI_QUERYADAPTERINFO               DxgkDdiQueryAdapterInfo;
    PDXGKDDI_SETPALETTE                     DxgkDdiSetPalette;
    PDXGKDDI_SETPOINTERPOSITION             DxgkDdiSetPointerPosition;
    PDXGKDDI_SETPOINTERSHAPE                DxgkDdiSetPointerShape;
    PDXGKDDI_ESCAPE                         DxgkDdiEscape;
    PDXGKDDI_COLLECTDBGINFO                 DxgkDdiCollectDbgInfo;
    PDXGKDDI_ISSUPPORTEDVIDPN               DxgkDdiIsSupportedVidPn;
    PDXGKDDI_RECOMMENDFUNCTIONALVIDPN       DxgkDdiRecommendFunctionalVidPn;
    PDXGKDDI_ENUMVIDPNCOFUNCMODALITY        DxgkDdiEnumVidPnCofuncModality;
    PDXGKDDI_SETVIDPNSOURCEVISIBILITY       DxgkDdiSetVidPnSourceVisibility;
    PDXGKDDI_COMMITVIDPN                    DxgkDdiCommitVidPn;
    PDXGKDDI_UPDATEACTIVEVIDPNPRESENTPATH   DxgkDdiUpdateActiveVidPnPresentPath;
    PDXGKDDI_RECOMMENDMONITORMODES          DxgkDdiRecommendMonitorModes;
    PDXGKDDI_GETSCANLINE                    DxgkDdiGetScanLine;
    PDXGKDDI_QUERYVIDPNHWCAPABILITY         DxgkDdiQueryVidPnHWCapability;

    //
    // New DDI for the PresentDisplayOnly function.
    //
    PDXGKDDI_PRESENTDISPLAYONLY             DxgkDdiPresentDisplayOnly;

    //
    // New DDIs for PnP stop/start support.
    //
    PDXGKDDI_STOP_DEVICE_AND_RELEASE_POST_DISPLAY_OWNERSHIP DxgkDdiStopDeviceAndReleasePostDisplayOwnership;

    //
    // New DDIs for system display support.
    //
    PDXGKDDI_SYSTEM_DISPLAY_ENABLE          DxgkDdiSystemDisplayEnable;
    PDXGKDDI_SYSTEM_DISPLAY_WRITE           DxgkDdiSystemDisplayWrite;

    //
    // New DDI for the monitor container ID support.
    //
    PDXGKDDI_GET_CHILD_CONTAINER_ID         DxgkDdiGetChildContainerId;

    //
    // New DDI for HW VSync.
    //
    PDXGKDDI_CONTROLINTERRUPT               DxgkDdiControlInterrupt;

    PDXGKDDISETPOWERCOMPONENTFSTATE         DxgkDdiSetPowerComponentFState;
    PDXGKDDIPOWERRUNTIMECONTROLREQUEST      DxgkDdiPowerRuntimeControlRequest;

    //
    // New DDI for the surprise removal support.
    //
    PDXGKDDI_NOTIFY_SURPRISE_REMOVAL        DxgkDdiNotifySurpriseRemoval;

    //
    // Display only drivers support P-State management.
    //
#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)
    PDXGKDDI_POWERRUNTIMESETDEVICEHANDLE    DxgkDdiPowerRuntimeSetDeviceHandle;
#endif

} KMDDOD_INITIALIZATION_DATA, *PKMDDOD_INITIALIZATION_DATA;

#endif // DXGKDDI_INTERFACE_VERSION


//
// *** Displib definitions ****************************************************
//

typedef enum _DEBUG_LEVEL {
    DlDebugError,
    DlDebugWarning,
    DlDebugTrace,
    DlDebugInfo
} DEBUG_LEVEL;

//
// Functions exported by DispLib
//

NTSTATUS
DxgkInitialize(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PUNICODE_STRING RegistryPath,
    _In_ PDRIVER_INITIALIZATION_DATA DriverInitializationData
    );

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WIN8)

NTSTATUS
DxgkInitializeDisplayOnlyDriver(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PUNICODE_STRING RegistryPath,
    _In_ PKMDDOD_INITIALIZATION_DATA KmdDodInitializationData
    );

#endif // DXGKDDI_INTERFACE_VERSION

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_0)

NTSTATUS
DxgkUnInitialize(
    _In_ PDRIVER_OBJECT DriverObject
    );

#endif // DXGKDDI_INTERFACE_VERSION

PVOID
DlAllocateCommonBuffer(
    IN PVOID DeviceHandle,
    IN PVP_DMA_ADAPTER DlpDmaAdapter,
    IN ULONG DesiredLength,
    OUT PPHYSICAL_ADDRESS LogicalAddress,
    IN BOOLEAN CacheEnabled,
    OUT PVOID Reserved
    );

PVOID
DlAllocatePool(
    IN PVOID DeviceHandle,
    IN VP_POOL_TYPE PoolType,
    IN SIZE_T NumberOfBytes,
    IN ULONG Tag
    );

VOID
DlClearEvent(
    _In_ PVOID DeviceHandle,
    _In_ PEVENT pEvent
    );

VP_STATUS
DlCreateEvent(
    IN PVOID DeviceHandle,
    IN ULONG EventFlag,
    PVOID Unused,
    OUT PEVENT *ppEvent
    );

VOID
DlDebugPrint(
    _In_ DEBUG_LEVEL DebugPrintLevel,
    _In_ PSTR DebugMessage,
    ...
    );

VP_STATUS
DlDeleteEvent(
    IN PVOID DeviceHandle,
    IN PEVENT pEvent
    );

VP_STATUS
DlEnumerateChildren(
    _In_ PVOID DeviceHandle,
    _In_ PVOID Reserved
    );

VOID
DlFreeDeviceBase(
    IN PVOID DeviceHandle,
    IN PVOID MappedAddress
    );

VOID
DlFreePool(
    IN PVOID DeviceHandle,
    IN PVOID Ptr
    );

NTSTATUS
DlGetAccessRanges(
    PVOID DeviceHandle,
    ULONG NumRequestedResources,
    PIO_RESOURCE_DESCRIPTOR RequestedResources OPTIONAL,
    ULONG NumAccessRanges,
    PVIDEO_ACCESS_RANGE AccessRanges,
    PVOID VendorId,
    PVOID DeviceId,
    PULONG Slot
    );

PVOID
DlGetAssociatedDeviceExtension(
    _In_ PVOID DeviceObject
    );

PVOID
DlGetDeviceBase(
    _In_ PVOID DeviceHandle,
    _In_ PHYSICAL_ADDRESS IoAddress,
    _In_ ULONG NumberOfUchars,
    _In_ UCHAR InIoSpace
    );

PVP_DMA_ADAPTER
DlGetDmaAdapter(
    _In_ PVOID DeviceHandle,
    _In_ PVP_DEVICE_DESCRIPTION DlpDeviceDescription
    );

VP_STATUS
DlGetRegistryParameters(
    _In_ PVOID DeviceHandle,
    _In_ PWSTR ParameterName,
    _In_ UCHAR IsParameterFileName,
    _In_ PMINIPORT_GET_REGISTRY_ROUTINE CallbackRoutine,
    _In_ PVOID Context
    );


PVOID
DlGetRomImage(
    _In_ PVOID DeviceHandle,
    PVOID Unused1,
    ULONG Unused2,
    _In_ ULONG Length
    );

VP_STATUS
DlGetVersion(
    _In_ PVOID DeviceHandle,
    _Out_ PVPOSVERSIONINFO pDlpOsVersionInfo
    );

PVOID
DlLockBuffer(
    _In_ PVOID DeviceHandle,
    _In_reads_bytes_(Length) PVOID BaseAddress,
    _In_ ULONG Length,
    _In_ VP_LOCK_OPERATION Operation
    );

VOID
DlLogError(
    _In_ PVOID DeviceHandle,
    _In_opt_ PVIDEO_REQUEST_PACKET Vrp,
    _In_ VP_STATUS ErrorCode,
    _In_ ULONG UniqueId
    );

VP_STATUS
DlMapMemory(
    IN PVOID DeviceHandle,
    IN PHYSICAL_ADDRESS TranslatedAddress,
    IN OUT PULONG Length,
    IN PULONG InIoSpace,
    IN OUT PVOID *VirtualAddress
    );

LONGLONG
DlQueryPerformanceCounter(
    _In_ PVOID pDeviceHandle,
    _Out_opt_ PLONGLONG pllPerformanceFrequency
    );

VOID
DlReleaseCommonBuffer(
    IN PVOID DeviceHandle,
    IN PVP_DMA_ADAPTER DlpDmaAdapter,
    IN ULONG Length,
    IN PHYSICAL_ADDRESS LogicalAddress,
    IN PVOID VirtualAddress,
    IN BOOLEAN CacheEnabled
    );

BOOLEAN
DlScanRom(
    _In_ PVOID DeviceHandle,
    _In_reads_bytes_(RomLength) PUCHAR RomBase,
    _In_ ULONG RomLength,
    _In_z_ PUCHAR String
    );

LONG
DlSetEvent(
    _In_ PVOID DeviceHandle,
    _In_ PEVENT pEvent
    );

VP_STATUS
DlSetRegistryParameters(
    _In_ PVOID DeviceHandle,
    _In_ PWSTR ValueName,
    _In_reads_bytes_(ValueLength) PVOID ValueData,
    _In_ ULONG ValueLength
    );

VP_STATUS
DlSetTrappedEmulatorPorts(
    _In_ PVOID DeviceHandle,
    _In_ ULONG NumAccessRanges,
    _In_reads_(NumAccessRanges) PVIDEO_ACCESS_RANGE AccessRange
    );

VOID
DlStopTimer(
    PVOID DeviceHandle
    );

VOID
DlUnlockBuffer(
    IN PVOID DeviceHandle,
    IN PVOID Mdl
    );

VP_STATUS
DlVerifyAccessRanges(
    PVOID DeviceHandle,
    ULONG NumAccessRanges,
    PVIDEO_ACCESS_RANGE AccessRanges
    );

VP_STATUS
DlWaitForSingleObject(
    _In_ PVOID DeviceHandle,
    _In_ PVOID pEvent,
    _In_ PLARGE_INTEGER Timeout
    );

VP_STATUS
DlDisableInterrupt(
    _In_ PVOID DeviceHandle
    );

VP_STATUS
DlEnableInterrupt(
    _In_ PVOID DeviceHandle
    );

NTSTATUS
DlEvalAcpiMethod(
    _In_ HANDLE DeviceHandle,
    _In_ ULONG DeviceUid,
    _In_reads_bytes_(AcpiInputSize) PACPI_EVAL_INPUT_BUFFER_COMPLEX AcpiInputBuffer,
    _In_range_(>=, sizeof(ACPI_EVAL_INPUT_BUFFER_COMPLEX)) ULONG AcpiInputSize,
    _Out_writes_bytes_(AcpiOutputSize) PACPI_EVAL_OUTPUT_BUFFER AcpiOutputBuffer,
    _In_range_(>=, sizeof(ACPI_EVAL_OUTPUT_BUFFER)) ULONG AcpiOutputSize
    );

NTSTATUS
DlGetDeviceInformation(
    _In_ PVOID DeviceHandle,
    _Out_ PDXGK_DEVICE_INFO DeviceInfo
    );

NTSTATUS
DlIndicateChildStatus(
    _In_ PVOID DeviceHandle,
    _In_ PDXGK_CHILD_STATUS ChildStatus
    );

NTSTATUS
DlMapMemoryEx(
    IN PVOID DeviceHandle,
    IN PHYSICAL_ADDRESS TranslatedAddress,
    IN OUT PULONG Length,
    IN PULONG InIoSpace,
    IN HANDLE ProcessHandle,
    IN OUT PVOID *VirtualAddress,
    IN BOOLEAN MapToUserMode
    );

NTSTATUS
DlQueryServices(
    _In_ PVOID DeviceHandle,
    _In_ VIDEO_PORT_SERVICES ServicesType,
    _Inout_ PINTERFACE Interface
    );

BOOLEAN
DlQueueDpc(
    _In_ PVOID DeviceHandle
    );

ULONG
DlReadDeviceSpace(
    _In_ PVOID DeviceHandle,
    _In_ ULONG DataType,
    _In_ ULONG SlotNumber,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );

ULONG
DlSetBusData(
    _In_ PVOID DeviceHandle,
    _In_ ULONG BusDataType,
    _In_ ULONG SlotNumber,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );

BOOLEAN
DlSynchronizeExecution(
    PVOID DeviceHandle,
    VIDEO_SYNCHRONIZE_PRIORITY Priority,
    PMINIPORT_SYNCHRONIZE_ROUTINE SynchronizeRoutine,
    PVOID Context,
    ULONG MessageNumber
    );

NTSTATUS
DlUnmapMemory(
    PVOID DeviceHandle,
    PVOID VirtualAddress,
    HANDLE ProcessHandle
    );

#endif // (NTDDI_VERSION >= NTDDI_LONGHORN)

#if (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)

///////////////////////////////////////////////////////////////////////////////
//
// GPU virtualization interfaces.
//
// The interfaces are placed to dispmprt.w because they reference low level
// definitions, such as PCM_PARTIAL_RESOURCE_DESCRIPTOR and PINTERFACE_REFERENCE.
//
///////////////////////////////////////////////////////////////////////////////

//////////////// GUID_DXGKDDI_GPU_PARTITION_INTERFACE /////////////////////////

// {462BC153-40EB-484A-8168-9972E3CD5AEF}
DEFINE_GUID(GUID_DXGKDDI_GPU_PARTITION_INTERFACE, 0x462bc153, 0x40eb, 0x484a, 0x81, 0x68, 0x99, 0x72, 0xe3, 0xcd, 0x5a, 0xef);

// must be the same as flexiov.h #define FIOV_FLAG_ACS_CAPABLE 0x080
#define DXGK_VIRTUALIZED_ACS_CAPABLE 0x80 
// must be the same as flexiov.h #define FIOV_FLAG_UNIQUE_RID_PER_VF 0x100
#define DXGK_VIRTUALIZED_UNIQUE_RID 0x100 
// must be the same as flexiov.h #define FIOV_FLAG_PARAVIRTUALIZED 0x400
// This implies the host device is shared and virtualization is accomplished by software
#define DXGK_VIRTUALIZED_PARAVIRTUALIZED 0x400
// must be the same as flexiov.h #define FIOV_FLAG_HOST_VIRTUAL_DEVICE 0x800
// This implies the host device is a fully virtual device and no hardware is present
#define DXGK_VIRTUALIZED_HOST_VIRTUAL_DEVICE 0x800 


typedef struct _DXGKARG_GETGPUPARTITIONINFO
{
    _Inout_ ULONG  NumGpuPartitionOptions;
    _Out_writes_(NumGpuPartitionOptions) USHORT* pGpuPartitionOptions;
    _Out_ USHORT  CurrentGpuPartitionCount;
} DXGKARG_GETGPUPARTITIONINFO, *PDXGKARG_GETGPUPARTITIONINFO;

typedef
_Function_class_(DXGKDDI_GETGPUPARTITIONINFO)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_GETGPUPARTITIONINFO(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_GETGPUPARTITIONINFO* pArgs
    );

typedef DXGKDDI_GETGPUPARTITIONINFO *PDXGKDDI_GETGPUPARTITIONINFO;

typedef enum _DXGK_VGPU_CAPABILITY_TYPE
{
    DXGK_VGPU_CAPABILITY_MEMORY = 0,
    DXGK_VGPU_CAPABILITY_ENCODE = 1,
    DXGK_VGPU_CAPABILITY_DECODE = 2,
    DXGK_VGPU_CAPABILITY_COMPUTE = 3,
    DXGK_VGPU_CAPABILITY_MAX,
} DXGK_VGPU_CAPABILITY_TYPE;

typedef struct _DXGK_VGPU_PROFILE_CAPABILITY
{
    UINT64 TotalValue;
    UINT64 AvailableValue;
    UINT64 MinPartitionValue;
    UINT64 MaxPartitionValue;
    UINT64 OptimalPartitionValue;
} DXGK_VGPU_PROFILE_CAPABILITY, *PDXGK_VGPU_PROFILE_CAPABILITY;

typedef struct _DXGKARG_GETVIRTUALGPUPROFILE
{
    ULONG  PartitionCount;
    ULONG  VirtualizationFlags;
    DXGK_VGPU_PROFILE_CAPABILITY ProfileCapability[DXGK_VGPU_CAPABILITY_MAX];
} DXGKARG_GETVIRTUALGPUPROFILE, *PDXGKARG_GETVIRTUALGPUPROFILE;

typedef
_Function_class_(DXGKDDI_GETVIRTUALGPUPROFILE)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_GETVIRTUALGPUPROFILE(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_GETVIRTUALGPUPROFILE* pArgs
    );

typedef DXGKDDI_GETVIRTUALGPUPROFILE *PDXGKDDI_GETVIRTUALGPUPROFILE;

typedef struct _DXGK_GPUENGINE
{
    DXGK_ENGINE_TYPE EngineType;
    WCHAR   Name[DXGK_MAX_METADATA_NAME_LENGTH];
    ULONG   NumPartitionUnits;
} DXGK_GPUENGINE, *PDXGK_GPUENGINE;

typedef struct _DXGKARG_GETGPUENGINES
{
    _In_ ULONG NumEngines;
    _Out_writes_(NumEngines)DXGK_GPUENGINE EngineInfo[1];
} DXGKARG_GETGPUENGINES, *PDXGKARG_GETGPUENGINES;

typedef
_Function_class_(DXGKDDI_GETGPUENGINES)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_GETGPUENGINES(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_GETGPUENGINES* pArgs
    );

typedef DXGKDDI_GETGPUENGINES *PDXGKDDI_GETGPUENGINES;

typedef struct _DXGKARG_SETGPUPARTITIONCOUNT
{
    _In_ ULONG PartitionCount;
} DXGKARG_SETGPUPARTITIONCOUNT, *PDXGKARG_SETGPUPARTITIONCOUNT;

typedef
_Function_class_(DXGKDDI_SETGPUPARTITIONCOUNT)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_SETGPUPARTITIONCOUNT(
    _In_ HANDLE  Context,
    _In_ DXGKARG_SETGPUPARTITIONCOUNT* pArgs
    );

typedef DXGKDDI_SETGPUPARTITIONCOUNT *PDXGKDDI_SETGPUPARTITIONCOUNT;

typedef struct _DXGK_VIRTUALGPUCAPABILITY
{
    UINT64 MinValue;
    UINT64 MaxValue;
    UINT64 OptimalValue;
} DXGK_VIRTUALGPUCAPABILITY, *PDXGK_VIRTUALGPUCAPABILITY;

typedef struct _DXGK_VIRTUALGPUPROFILE
{
    DXGK_VIRTUALGPUCAPABILITY Capability[DXGK_VGPU_CAPABILITY_MAX];
} DXGK_VIRTUALGPUPROFILE, *PDXGK_VIRTUALGPUPROFILE;

typedef struct _DXGK_VIRTUALGPUENGINEINFO
{
    ULONG MinPartitionUnits;
    ULONG MaxPartitionUnits;
    ULONG EngineId;
} DXGK_VIRTUALGPUENGINEINFO, *PDXGK_VIRTUALGPUENGINEINFO;

typedef struct _DXGK_VIRTUALGPUSEGMENTINFO
{
    ULONG  DriverSegmentId;
    UINT64 Size;
    UINT   Alignment;
    UINT64 MinSegmentOffset;
    UINT64 MaxSegmentOffset;
    UINT   PrivateDriverData;
} DXGK_VIRTUALGPUSEGMENTINFO, *PDXGK_VIRTUALGPUSEGMENTINFO;

#define DXGK_MAX_VIRTUAL_GPU_ALLOCATIONS 32

typedef struct _DXGKARG_CREATEVIRTUALGPU
{
    _In_  ULONG   PartitionId;
    _In_  DXGK_VIRTUALGPUPROFILE Profile;
    _Out_ CLSID  UserModeVirtualDeviceProvider;
    _Out_ LUID   VirtualGpuLuid;
    _Out_ ULONG  NumMemorySegments;
    _Out_ DXGK_VIRTUALGPUSEGMENTINFO SegmentInfo[DXGK_MAX_VIRTUAL_GPU_ALLOCATIONS];
    _Out_ ULONG  NumEngines;
    _Out_ DXGK_VIRTUALGPUENGINEINFO EngineInfo[DXGK_MAX_ASYMETRICAL_PROCESSING_NODES];
} DXGKARG_CREATEVIRTUALGPU, *PDXGKARG_CREATEVIRTUALGPU;

typedef
_Function_class_(DXGKDDI_CREATEVIRTUALGPU)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_CREATEVIRTUALGPU(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_CREATEVIRTUALGPU* pArgs
    );

typedef DXGKDDI_CREATEVIRTUALGPU *PDXGKDDI_CREATEVIRTUALGPU;

typedef struct _DXGK_VGPU_CAPABILITY
{
    UINT64 MinValue;
    UINT64 MaxValue;
    UINT64 CurrentValue;
} DXGK_VGPU_CAPABILITY, *PDXGK_VGPU_CAPABILITY;

typedef struct _DXGKARG_GETVIRTUALGPUINFO
{
    _In_  ULONG  PartitionId;
    _Out_ DXGK_VGPU_CAPABILITY Capability[DXGK_VGPU_CAPABILITY_MAX];
} DXGKARG_GETVIRTUALGPUINFO, *PDXGKARG_GETVIRTUALGPUINFO;

typedef
_Function_class_(DXGKDDI_GETVIRTUALGPUINFO)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_GETVIRTUALGPUINFO(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_GETVIRTUALGPUINFO* pArgs
    );

typedef DXGKDDI_GETVIRTUALGPUINFO *PDXGKDDI_GETVIRTUALGPUINFO;

typedef struct _DXGKARG_SETVIRTUALGPUVMBUS
{
    _In_  ULONG VirtualGpuIndex;
    _In_  HANDLE VmBusHandle;
} DXGKARG_SETVIRTUALGPUVMBUS, *PDXGKARG_SETVIRTUALGPUVMBUS;

typedef
_Function_class_(DXGKDDI_SETVIRTUALGPUVMBUS)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_SETVIRTUALGPUVMBUS(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_SETVIRTUALGPUVMBUS* pArgs
    );

typedef DXGKDDI_SETVIRTUALGPUVMBUS *PDXGKDDI_SETVIRTUALGPUVMBUS;

typedef struct _DXGK_GPU_PHYSICAL_ADDRESS
{
    ULONG  MemorySegmentId;
    UINT64 MemorySegmentOffset;
} DXGK_GPU_PHYSICAL_ADDRESS, *PDXGK_GPU_PHYSICAL_ADDRESS;

typedef struct _DXGK_VIRTUALGPUMEMORYRESOURCE
{
    _In_ HANDLE DriverAllocationHandle;
    _In_ DXGK_GPU_PHYSICAL_ADDRESS AllocationAddress;
    _In_ UINT64 AllocationSize;
} DXGK_VIRTUALGPUMEMORYRESOURCE, *PDXGK_VIRTUALGPUMEMORYRESOURCE;

typedef struct _DXGKARG_SETVIRTUALGPURESOURCES
{
    _In_  ULONG   PartitionId;
    _In_  ULONG   NumMemoryAllocations;
    _In_reads_(NumMemoryAllocations)
        DXGK_VIRTUALGPUMEMORYRESOURCE MemoryInfo[1];
} DXGKARG_SETVIRTUALGPURESOURCES, *PDXGKARG_SETVIRTUALGPURESOURCES;

typedef
_Function_class_(DXGKDDI_SETVIRTUALGPURESOURCES)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_SETVIRTUALGPURESOURCES(
    _In_ HANDLE  Context,
    _In_ DXGKARG_SETVIRTUALGPURESOURCES* pArgs
    );

typedef DXGKDDI_SETVIRTUALGPURESOURCES *PDXGKDDI_SETVIRTUALGPURESOURCES;

typedef struct _DXGKARG_DESTROYVIRTUALGPU
{
    _In_ ULONG PartitionId;
} DXGKARG_DESTROYVIRTUALGPU, *PDXGKARG_DESTROYVIRTUALGPU;

typedef
_Function_class_(DXGKDDI_DESTROYVIRTUALGPU)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_DESTROYVIRTUALGPU(
    _In_ HANDLE  Context,
    _In_ DXGKARG_DESTROYVIRTUALGPU* pArgs
    );

typedef DXGKDDI_DESTROYVIRTUALGPU *PDXGKDDI_DESTROYVIRTUALGPU;

typedef struct _DXGKARG_SUSPENDVIRTUALGPU
{
    _In_ ULONG PartitionId;
} DXGKARG_SUSPENDVIRTUALGPU, *PDXGKARG_SUSPENDVIRTUALGPU;

typedef
_Function_class_(DXGKDDI_SUSPENDVIRTUALGPU)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_SUSPENDVIRTUALGPU(
    _In_ HANDLE  Context,
    _In_ DXGKARG_SUSPENDVIRTUALGPU *pArgs
    );

typedef DXGKDDI_SUSPENDVIRTUALGPU *PDXGKDDI_SUSPENDVIRTUALGPU;

typedef struct _DXGKARG_RESUMEVIRTUALGPU
{
    _In_ ULONG PartitionId;
} DXGKARG_RESUMEVIRTUALGPU, *PDXGKARG_RESUMEVIRTUALGPU;

typedef
_Function_class_(DXGKDDI_RESUMEVIRTUALGPU)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_RESUMEVIRTUALGPU(
    _In_ HANDLE  Context,
    _In_ DXGKARG_RESUMEVIRTUALGPU*pArgs
    );

typedef DXGKDDI_RESUMEVIRTUALGPU *PDXGKDDI_RESUMEVIRTUALGPU;

typedef struct _DXGK_VIRTUALGPUDRIVERESCAPE
{
    _In_ ULONG PartitionId;
    _In_ ULONG InputBufferSize;
    _In_ ULONG OutputBufferSize;
    _In_reads_bytes_(InputBufferSize) PVOID pInputBuffer;
    _Out_writes_bytes_(OutputBufferSize) PVOID pOutputBuffer;
} DXGK_VIRTUALGPUDRIVERESCAPE, *PDXGK_VIRTUALGPUDRIVERESCAPE;

typedef
_Function_class_(DXGKDDI_VIRTUALGPUDRIVERESCAPE)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_VIRTUALGPUDRIVERESCAPE(
    _In_ HANDLE  Context,
    _Inout_ PDXGK_VIRTUALGPUDRIVERESCAPE pArgs
    );

typedef DXGKDDI_VIRTUALGPUDRIVERESCAPE *PDXGKDDI_VIRTUALGPUDRIVERESCAPE;

typedef struct _DXGKDDI_GPU_PARTITION_INTERFACE
{
    IN USHORT                            Size;
    IN USHORT                            Version;
    OUT PVOID                            Context;
    OUT PINTERFACE_REFERENCE             InterfaceReference;
    OUT PINTERFACE_DEREFERENCE           InterfaceDereference;
    OUT PDXGKDDI_GETGPUPARTITIONINFO     DxgkDdiGetGpuPartitionInfo;
    OUT PDXGKDDI_SETGPUPARTITIONCOUNT    DxgkDdiSetGpuPartitionCount;
    OUT PDXGKDDI_GETGPUENGINES           DxgkDdiGetGpuEngines;
    OUT PDXGKDDI_GETVIRTUALGPUPROFILE    DxgkDdiGetVirtualGpuProfile;
    OUT PDXGKDDI_CREATEVIRTUALGPU        DxgkDdiCreateVirtualGpu;
    OUT PDXGKDDI_GETVIRTUALGPUINFO       DxgkDdiGetVirtualGpuInfo;
    OUT PDXGKDDI_SETVIRTUALGPURESOURCES  DxgkDdiSetVirtualGpuResources;
    OUT PDXGKDDI_DESTROYVIRTUALGPU       DxgkDdiDestroyVirtualGpu;
    OUT PDXGKDDI_SUSPENDVIRTUALGPU       DxgkDdiSuspendVirtualGpu;
    OUT PDXGKDDI_RESUMEVIRTUALGPU        DxgkDdiResumeVirtualGpu;
    OUT PDXGKDDI_VIRTUALGPUDRIVERESCAPE  DxgkDdiVirtualGpuDriverEscape;
    OUT PDXGKDDI_SETVIRTUALGPUVMBUS      DxgkDdiSetVirtualGpuVmBus;
} DXGKDDI_GPU_PARTITION_INTERFACE, *PDXGKDDI_GPU_PARTITION_INTERFACE;

#define DXGKDDI_GPU_PARTITION_INTERFACE_VERSION 1

//////////////// DXGKDDI_SRIOV_INTERFACE /////////////////////////////////////

// {D7172248-F296-4C50-A6F5-D25D8073063A}
DEFINE_GUID(GUID_DXGKDDI_SRIOV_INTERFACE, 0xd7172248, 0xf296, 0x4c50, 0xa6, 0xf5, 0xd2, 0x5d, 0x80, 0x73, 0x6, 0x3a);


typedef struct _DXGKARG_READVIRTUALFUNCTIONCONFIG
{
    _Out_writes_bytes_(Length)   PVOID  Data;
    _In_                  ULONG  VirtualFunctionIndex;
    _In_                  ULONG  Offset;
    _In_                  ULONG  Length;
} DXGKARG_READVIRTUALFUNCTIONCONFIG, *PDXGKARG_READVIRTUALFUNCTIONCONFIG;

typedef
_Function_class_(DXGKDDI_READVIRTUALFUNCTIONCONFIG)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_READVIRTUALFUNCTIONCONFIG(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_READVIRTUALFUNCTIONCONFIG * pArgs
    );

typedef DXGKDDI_READVIRTUALFUNCTIONCONFIG *PDXGKDDI_READVIRTUALFUNCTIONCONFIG;

typedef struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIG
{
    _In_reads_bytes_(Length)   PVOID  Data;
    _In_                  ULONG  VirtualFunctionIndex;
    _In_                  ULONG  Offset;
    _In_                  ULONG  Length;
} DXGKARG_WRITEVIRTUALFUNCTIONCONFIG, *PDXGKARG_WRITEVIRTUALFUNCTIONCONFIG;

typedef
_Function_class_(DXGKDDI_WRITEVIRTUALFUNCTIONCONFIG)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_WRITEVIRTUALFUNCTIONCONFIG(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_WRITEVIRTUALFUNCTIONCONFIG * pArgs
    );

typedef DXGKDDI_WRITEVIRTUALFUNCTIONCONFIG *PDXGKDDI_WRITEVIRTUALFUNCTIONCONFIG;

typedef struct _DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK
{
    _Out_writes_bytes_(Length)   PVOID  Data;
    _In_                  ULONG  VirtualFunctionIndex;
    _In_                  ULONG  BlockId;
    _In_                  ULONG  Length;
} DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK, *PDXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK;

typedef
_Function_class_DXGK_(DXGKDDI_READVIRTUALFUNCTIONCONFIGBLOCK)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_READVIRTUALFUNCTIONCONFIGBLOCK(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_READVIRTUALFUNCTIONCONFIGBLOCK * pArgs
    );

typedef DXGKDDI_READVIRTUALFUNCTIONCONFIGBLOCK *PDXGKDDI_READVIRTUALFUNCTIONCONFIGBLOCK;

typedef struct _DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK
{
    _In_reads_bytes_(Length)   PVOID  Data;
    _In_                  ULONG  VirtualFunctionIndex;
    _In_                  ULONG  BlockId;
    _In_                  ULONG  Length;
} DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK, *PDXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK;

typedef
_Function_class_(DXGKDDI_WRITEVIRTUALFUNCTIONCONFIGBLOCK)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_WRITEVIRTUALFUNCTIONCONFIGBLOCK(
    _In_ HANDLE  Context,
    _In_ DXGKARG_WRITEVIRTUALFUNCTIONCONFIGBLOCK * pArgs
    );

typedef DXGKDDI_WRITEVIRTUALFUNCTIONCONFIGBLOCK *PDXGKDDI_WRITEVIRTUALFUNCTIONCONFIGBLOCK;

#define DXGK_MAX_NUM_PCI_BARS 6

typedef struct _DXGKARG_QUERYPROBEDBARS
{
    _In_ ULONG VirtualFunctionIndex;
    _Out_writes_(DXGK_MAX_NUM_PCI_BARS) PULONG BaseRegisterValues;
} DXGKARG_QUERYPROBEDBARS, *PDXGKARG_QUERYPROBEDBARS;

typedef
_Function_class_(DXGKDDI_QUERYPROBEDBARS)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
DXGKDDI_QUERYPROBEDBARS(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_QUERYPROBEDBARS * pArgs
    );

typedef DXGKDDI_QUERYPROBEDBARS *PDXGKDDI_QUERYPROBEDBARS;

typedef struct _DXGKARG_QUERYVIRTUALFUNCTIONLUID
{
    _In_  ULONG VirtualFunctionIndex;
    _Out_ PLUID pLuid;
} DXGKARG_QUERYVIRTUALFUNCTIONLUID, *PDXGKARG_QUERYVIRTUALFUNCTIONLUID;

typedef
_Function_class_(DXGKDDI_QUERYVIRTUALFUNCTIONLUID)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
DXGKDDI_QUERYVIRTUALFUNCTIONLUID(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_QUERYVIRTUALFUNCTIONLUID* pArgs
    );

typedef DXGKDDI_QUERYVIRTUALFUNCTIONLUID *PDXGKDDI_QUERYVIRTUALFUNCTIONLUID;
    
typedef struct _DXGKARG_GETVENDORANDDEVICE
{
    _In_  ULONG          VirtualFunctionIndex;
    _Out_ USHORT         VendorId;
    _Out_ USHORT         DeviceId;
} DXGKARG_GETVENDORANDDEVICE, *PDXGKARG_GETVENDORANDDEVICE;

typedef
_Function_class_(DXGKDDI_GETVENDORANDDEVICE)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
DXGKDDI_GETVENDORANDDEVICE(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_GETVENDORANDDEVICE* pArgs
    );

typedef DXGKDDI_GETVENDORANDDEVICE *PDXGKDDI_GETVENDORANDDEVICE;

typedef struct _DXGKARG_GETDEVICELOCATION
{
    _In_        ULONG VirtualFunctionIndex;
    _Out_       ULONG SegmentNumber;
    _Out_       ULONG BusNumber;
    _Out_       ULONG FunctionNumber;
} DXGKARG_GETDEVICELOCATION, *PDXGKARG_GETDEVICELOCATION;

typedef
_Function_class_(DXGKDDI_GETDEVICELOCATION)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
DXGKDDI_GETDEVICELOCATION(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_GETDEVICELOCATION * pArgs
    );

typedef DXGKDDI_GETDEVICELOCATION *PDXGKDDI_GETDEVICELOCATION;

typedef struct _DXGKARG_RESETVIRTUALFUNCTION
{
    _In_ ULONG VirtualFunctionIndex;
} DXGKARG_RESETVIRTUALFUNCTION, *PDXGKARG_RESETVIRTUALFUNCTION;

typedef
_Function_class_(DXGKDDI_RESETVIRTUALFUNCTION)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_RESETVIRTUALFUNCTION(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_RESETVIRTUALFUNCTION * pArgs
    );

typedef DXGKDDI_RESETVIRTUALFUNCTION *PDXGKDDI_RESETVIRTUALFUNCTION;

typedef struct _DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE
{
    _In_ ULONG              VirtualFunctionIndex;
    _In_ DEVICE_POWER_STATE PowerState;
    _In_ BOOLEAN            Wake;
} DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE, *PDXGKARG_SETVIRTUALFUNCTIONPOWERSTATE;

typedef
_Function_class_(DXGKDDI_SETVIRTUALFUNCTIONPOWERSTATE)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_SETVIRTUALFUNCTIONPOWERSTATE(
    _In_ HANDLE  Context,
    _In_ DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE * pArgs
    );

typedef DXGKDDI_SETVIRTUALFUNCTIONPOWERSTATE *PDXGKDDI_SETVIRTUALFUNCTIONPOWERSTATE;

typedef struct _DXGKARG_GETRESOURCEFORBAR
{
    _In_        ULONG             VirtualFunctionIndex;
    _In_        ULONG             BarIndex;
    _Out_       PCM_PARTIAL_RESOURCE_DESCRIPTOR pResource;
} DXGKARG_GETRESOURCEFORBAR, *PDXGKARG_GETRESOURCEFORBAR;

typedef
_Function_class_(DXGKDDI_GETRESOURCEFORBAR)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_GETRESOURCEFORBAR(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_GETRESOURCEFORBAR * pArgs
    );

typedef DXGKDDI_GETRESOURCEFORBAR *PDXGKDDI_GETRESOURCEFORBAR;

typedef struct _DXGKDDI_SRIOV_INTERFACE
{
    IN USHORT                            Size;
    IN USHORT                            Version;
    OUT PVOID                            Context;
    OUT PINTERFACE_REFERENCE             InterfaceReference;
    OUT PINTERFACE_DEREFERENCE           InterfaceDereference;

    OUT PDXGKDDI_READVIRTUALFUNCTIONCONFIG        DxgkDdiReadVirtualFunctionConfig;
    OUT PDXGKDDI_WRITEVIRTUALFUNCTIONCONFIG       DxgkDdiWriteVirtualFunctionConfig;
    OUT PDXGKDDI_READVIRTUALFUNCTIONCONFIGBLOCK   DxgkDdiReadVirtualFunctionConfigBlock;
    OUT PDXGKDDI_WRITEVIRTUALFUNCTIONCONFIGBLOCK  DxgkDdiWriteVirtualFunctionConfigBlock;
    OUT PDXGKDDI_QUERYPROBEDBARS                  DxgkDdiQueryProbedBars;
    OUT PDXGKDDI_GETVENDORANDDEVICE               DxgkDdiGetVendorAndDevice;
    OUT PDXGKDDI_GETDEVICELOCATION                DxgkDdiGetDeviceLocation;
    OUT PDXGKDDI_RESETVIRTUALFUNCTION             DxgkDdiResetVirtualFunction;
    OUT PDXGKDDI_SETVIRTUALFUNCTIONPOWERSTATE     DxgkDdiSetVirtualFunctionPowerState;
    OUT PDXGKDDI_GETRESOURCEFORBAR                DxgkDdiGetResourceForBar;
    OUT PDXGKDDI_QUERYVIRTUALFUNCTIONLUID         DxgkDdiQueryVirtualFunctionLuid;
} DXGKDDI_SRIOV_INTERFACE, *PDXGKDDI_SRIOV_INTERFACE;

#define DXGKDDI_SRIOV_INTERFACE_VERSION 1

//////////////// DXGKDDI_MITIGABLE_DEVICE_INTERFACE ///////////////////////////////////

// {1387F270-121A-4A4A-B25E-3B1589976C61}
DEFINE_GUID(GUID_DXGKDDI_MITIGABLE_DEVICE_INTERFACE, 0x1387f270, 0x121a, 0x4a4a, 0xb2, 0x5e, 0x3b, 0x15, 0x89, 0x97, 0x6c, 0x61);

typedef struct _DXGKARG_QUERYMITIGATEDRANGECOUNT
{
    _In_  ULONG VirtualFunctionIndex;
    _Out_ ULONG RangeCount[DXGK_MAX_NUM_PCI_BARS];
} DXGKARG_QUERYMITIGATEDRANGECOUNT, *PDXGKARG_QUERYMITIGATEDRANGECOUNT;

typedef
_Function_class_(DXGKDDI_QUERYMITIGATEDRANGECOUNT)
_IRQL_requires_(PASSIVE_LEVEL)
VOID
DXGKDDI_QUERYMITIGATEDRANGECOUNT(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_QUERYMITIGATEDRANGECOUNT* pArgs
    );

typedef DXGKDDI_QUERYMITIGATEDRANGECOUNT *PDXGKDDI_QUERYMITIGATEDRANGECOUNT;

typedef struct _DXGK_MITIGATEDRANGEINFO
{
    _Out_ ULONG64 BasePageNumber;
    _Out_ ULONG   PageCount;
    _Out_ BOOLEAN InterceptReads;
    _Out_ BOOLEAN InterceptWrites;
} DXGK_MITIGATEDRANGEINFO, *PDXGK_MITIGATEDRANGEINFO;

typedef struct _DXGKARG_QUERYMITIGATEDRANGES
{
    _In_  ULONG   VirtualFunctionIndex;
    _In_  ULONG   BarIndex;
    _In_  ULONG   NumRanges;
    _Out_writes_(NumRanges) PDXGK_MITIGATEDRANGEINFO pMitigatedRange;
} DXGKARG_QUERYMITIGATEDRANGES, *PDXGKARG_QUERYMITIGATEDRANGES;

typedef
_Function_class_(DXGKDDI_QUERYMITIGATEDRANGES)
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
DXGKDDI_QUERYMITIGATEDRANGES(
    _In_ HANDLE  Context,
    _Inout_ DXGKARG_QUERYMITIGATEDRANGES* pArgs
    );

typedef DXGKDDI_QUERYMITIGATEDRANGES *PDXGKDDI_QUERYMITIGATEDRANGES;

typedef struct _DXGKDDI_MITIGABLE_DEVICE_INTERFACE
{
    IN USHORT                            Size;
    IN USHORT                            Version;
    OUT PVOID                            Context;
    OUT PINTERFACE_REFERENCE             InterfaceReference;
    OUT PINTERFACE_DEREFERENCE           InterfaceDereference;

    OUT PDXGKDDI_QUERYMITIGATEDRANGECOUNT DxgkDdiQueryMitigatedRangeCount;
    OUT PDXGKDDI_QUERYMITIGATEDRANGES     DxgkDdiQueryMitigatedRanges;
} DXGKDDI_MITIGABLE_DEVICE_INTERFACE, *PDXGKDDI_MITIGABLE_DEVICE_INTERFACE;

#define DXGKDDI_MITIGABLE_DEVICE_INTERFACE_VERSION 1

#endif // (DXGKDDI_INTERFACE_VERSION >= DXGKDDI_INTERFACE_VERSION_WDDM2_1)

///////////////////////////////// END OF GPU VIRTUALIZATION INTERFACES ////////////////////////

#pragma warning(pop)

#endif // _DISPMPRT_H_
