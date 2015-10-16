;/*++
;
; Copyright (c) Microsoft Corporation.  All rights reserved.
;
; Module Name:
;
;   ntacpi.h
;
; Abstract:
;
;
;   This module contains definitions specific to the HAL's
;   ACPI function.

;
; Revision History:
;
;-

if 0        ; Begin C only code         */

#ifndef _ACPI_H_
#define _ACPI_H_

#pragma once

typedef enum _INTERRUPT_MODEL {
    InterruptModelInvalid,
    InterruptModelApic,
    InterruptModelGic,
    InterruptModelBcm,
    InterruptModelUnknown = 0x1000
} INTERRUPT_MODEL, *PINTERRUPT_MODEL;

#define SLEEP_STATE_FLUSH_CACHE         0x1
#define SLEEP_STATE_FIRMWARE_RESTART    0x2
#define SLEEP_STATE_SAVE_MOTHERBOARD    0x4
#define SLEEP_STATE_OFF                 0x8
#define SLEEP_STATE_RESTART_OTHER_PROCESSORS    0x10
#define SLEEP_STATE_LOW_MEMORY_TEST_OK  0x20

typedef struct {
    union {
        struct {
            ULONG       Pm1aVal:4;
            ULONG       Pm1bVal:4;
            ULONG       SleepState:4;
            ULONG       Flags:20;
        } bits;
        ULONG   AsULONG;
    } DUMMYUNIONNAME;
} SLEEP_STATE_CONTEXT, *PSLEEP_STATE_CONTEXT;


//
// ACPI Register definitions
//

//
// Register layout of P_BLK
//

//
// THT_EN (Throttle enable bit)
//

#define PBLK_THROTTLE_ENABLE_BIT   0x4
#define PBLK_THROTTLE_ENABLE       (0x1 << PBLK_THROTTLE_ENABLE_BIT)

//
// P_LVL2 & P_LVL3 (PBlk offset for C2 & C3 addresses)
//

#define PBLK_C2_OFFSET             0x4
#define PBLK_C3_OFFSET             0x5

//
// Register layout of PM1x_EVT register.
//

#define PM1_PWRBTN_STS_BIT      8
#define PM1_PWRBTN_STS          (1 << PM1_PWRBTN_STS_BIT)

#define PM1_SLPBTN_STS_BIT      9
#define PM1_SLPBTN_STS          (1 << PM1_SLPBTN_STS_BIT)

#define PM1_RTC_STS_BIT         10
#define PM1_RTC_STS             (1 << PM1_RTC_STS_BIT)

#define PM1_WAK_STS_BIT         15
#define PM1_WAK_STS             (1 << PM1_WAK_STS_BIT)

//
// Register layout of PM1x_CTL
//

#define SCI_EN              1
#define BM_RLD              2
#define CTL_IGNORE          0x200
#define SLP_TYP_SHIFT       10
#define SLP_EN              0x2000

//
// Register layout of PM1x_EVT
//

#define BM_STS              0x10

//
// Register layout of PM2_CNT
//

#define ARB_DIS             0x1


#define CTL_PRESERVE        (SCI_EN + BM_RLD + CTL_IGNORE)

#define PM_TMR_FREQ     3579545

//
// ACPI PM register enums.
//

typedef enum _ACPI_PM_REGISTER {
    PM1A_EVT_REGISTER = 0,
    PM1A_CTRL_REGISTER,
    PMTMR_REGISTER,
    PM1B_EVT_REGISTER,
    PM1B_CTRL_REGISTER,
    PM2_CTRL_REGISTER,
    PM_GP0_REGISTER,
    PM_GP1_REGISTER,
    PM_RESET_REGISTER,
    PM_REGISTER_END,
} ACPI_PM_REGISTER, *PACPI_PM_REGISTER;

//
// HAL's table
//

typedef enum {
    HalAcpiTimerInterrupt,
    HalAcpiMachineStateInit,
    HalAcpiQueryFlags,
    HalPicStateIntact,
    HalRestorePicState,
    HalPciInterfaceReadConfig,
    HalPciInterfaceWriteConfig,
    HalGetIOApicVersion,
    HalSetMaxLegacyPciBusNumber,
    HalIsVectorValid,
    HalGetAcpiTable,
    HalAcpiGetRsdp,
    HalAcpiGetFacsMapping,
    HalAcpiGetAllTables,
    HalAcpiPmRegisterAvailable,
    HalAcpiPmRegisterRead,
    HalAcpiPmRegisterWrite,
    HalAcpiMaxFunction
} HAL_DISPATCH_FUNCTION;

typedef
VOID
(*pHalAcpiTimerInterrupt)(
    VOID
    );

typedef struct {
    ULONG   Count;
    ULONG   Pblk[1];
} PROCESSOR_INIT, *PPROCESSOR_INIT;

#define HAL_S1_SUPPORTED 0x08
#define HAL_S2_SUPPORTED 0x10
#define HAL_S3_SUPPORTED 0x20
#define HAL_S4_SUPPORTED 0x40
#define HAL_S5_SUPPORTED 0x80

typedef struct {
    BOOLEAN     Supported;
    UCHAR       Pm1aVal;
    UCHAR       Pm1bVal;
} HAL_SLEEP_VAL, *PHAL_SLEEP_VAL;

typedef
VOID
(*pHalAcpiMachineStateInit)(
    _In_reads_(5) PHAL_SLEEP_VAL  SleepValues,
    _Out_ PINTERRUPT_MODEL InterruptModel
    );

typedef
ULONG
(*pHalAcpiQueryFlags)(
    VOID
    );

typedef
BOOLEAN
(*pHalPicStateIntact)(
    VOID
    );

typedef
VOID
(*pHalRestorePicState)(
    VOID
    );

typedef
ULONG
(*pHalInterfaceWriteConfig)(
    _In_ PVOID Context,
    _In_ ULONG BusOffset,
    _In_ ULONG Slot,
    _In_reads_bytes_(Buffer) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );

typedef
ULONG
(*pHalInterfaceReadConfig)(
    _In_ PVOID Context,
    _In_ ULONG BusOffset,
    _In_ ULONG Slot,
    _Out_writes_bytes_(Buffer) PVOID Buffer,
    _In_ ULONG Offset,
    _In_ ULONG Length
    );

//
// Flags for interrupt vectors.
//
// Bit 0: Vector Mode
// Bits 1 & 3: Vector Polarity
//     If Bit 3 (ActiveBoth) is set and the controller emulates ActiveBoth
//     using level-triggered interrupts, Bit 1 will indicate the initial
//     triggering polarity.
// Bit 2: Vector Type
//

#define VECTOR_MODE         1
#define VECTOR_LEVEL        1
#define VECTOR_EDGE         0
#define VECTOR_POLARITY     2
#define VECTOR_POLARITY_EX  10
#define VECTOR_ACTIVE_LOW   2
#define VECTOR_ACTIVE_HIGH  0
#define VECTOR_ACTIVE_BOTH  8

//
// Vector Type:
//
// VECTOR_WIRED = standard edge-triggered or
//         level-sensitive interrupt vector
//
// VECTOR_MESSAGE = an MSI (Message Signalled Interrupt) vector
//

#define VECTOR_TYPE         4
#define VECTOR_WIRED        0
#define VECTOR_MESSAGE      4

#define IS_LEVEL_TRIGGERED(vectorFlags) \
    (vectorFlags & VECTOR_LEVEL)

#define IS_EDGE_TRIGGERED(vectorFlags) \
    !(vectorFlags & VECTOR_LEVEL)

#define IS_ACTIVE_LOW(vectorFlags) \
    (vectorFlags & VECTOR_ACTIVE_LOW)

#define IS_ACTIVE_HIGH(vectorFlags) \
    !(vectorFlags & VECTOR_ACTIVE_LOW)

#define IS_ACTIVE_BOTH(vectorFlags) \
    (vectorFlags & VECTOR_ACTIVE_BOTH)

#define VECTOR_FLAGS_TO_INTERRUPT_POLARITY(Flags)            \
    (((Flags) & VECTOR_POLARITY_EX) ==                       \
     (VECTOR_ACTIVE_BOTH | VECTOR_ACTIVE_LOW)) ?             \
        InterruptActiveBothTriggerLow :                      \
    (((Flags) & VECTOR_POLARITY_EX) ==                       \
     (VECTOR_ACTIVE_BOTH | VECTOR_ACTIVE_HIGH)) ?            \
        InterruptActiveBothTriggerHigh :                     \
    (((Flags) & VECTOR_POLARITY_EX) == VECTOR_ACTIVE_LOW) ?  \
        InterruptActiveLow :                                 \
    (((Flags) & VECTOR_POLARITY_EX) == VECTOR_ACTIVE_HIGH) ? \
        InterruptActiveHigh :                                \
        InterruptPolarityUnknown

#define INTERRUPT_POLARITY_TO_VECTOR_FLAGS(Polarity) \
    ((Polarity) == InterruptActiveBothTriggerLow) ?  \
        (VECTOR_ACTIVE_BOTH | VECTOR_ACTIVE_LOW) :   \
    ((Polarity) == InterruptActiveBothTriggerHigh) ? \
        (VECTOR_ACTIVE_BOTH | VECTOR_ACTIVE_HIGH) :  \
    ((Polarity) == InterruptActiveLow) ?             \
        VECTOR_ACTIVE_LOW :                          \
        VECTOR_ACTIVE_HIGH

#define HAL_ACPI_FLAGS_NONE       0x0
#define HAL_ACPI_PCI_RESOURCES    0x01
#define HAL_ACPI_PRT_SUPPORT      0x02

typedef
ULONG
(*pHalGetIOApicVersion)(
    _In_ ULONG BaseVector
    );

typedef
VOID
(*pHalSetMaxLegacyPciBusNumber)(
    _In_ ULONG BusNumber
    );

typedef
BOOLEAN
(*pHalIsVectorValid)(
    _In_ ULONG Vector
    );

typedef
PVOID
(*pHalGetAcpiTable)(
    _In_ ULONG Signature,
    _In_opt_ PCSTR OemId,
    _In_opt_ PCSTR OemTableId
    );

typedef
PVOID
(*pHalAcpiGetRsdp)(
    VOID
    );

typedef
PVOID
(*pHalAcpiGetFacsMapping)(
    VOID
    );

typedef struct _ACPI_TABLE_POINTERS {
    ULONG TableCount;
    PVOID TablePointers[ANYSIZE_ARRAY];
} ACPI_TABLE_POINTERS, *PACPI_TABLE_POINTERS;

typedef
PVOID
(*pHalAcpiGetAllTables)(
    VOID
    );

typedef
NTSTATUS
(*pHalAcpiPmRegisterAvailable) (
    ACPI_PM_REGISTER Register
    );

typedef
NTSTATUS
(*pHalAcpiPmRegisterRead) (
    _In_ ACPI_PM_REGISTER Register,
    _In_ ULONG Offset,
    _Out_writes_bytes_(BufferSize) PVOID Output,
    _In_ ULONG BufferSize,
    _Out_opt_ PULONG BytesRead
    );

typedef
NTSTATUS
(*pHalAcpiPmRegisterWrite) (
    _In_ ACPI_PM_REGISTER Register,
    _In_ ULONG Offset,
    _In_reads_bytes_(BufferSize) PVOID Input,
    _In_ ULONG BufferSize,
    _Out_opt_ PULONG BytesWritten
    );

//
//  typedef struct _PM_DISPATCH_TABLE {
//      ULONG   Signature;
//      ULONG   Version;
//      PVOID   Function[1];
//  } PM_DISPATCH_TABLE, *PPM_DISPATCH_TABLE;
//

typedef struct {
    ULONG   Signature;
    ULONG   Version;
    pHalAcpiTimerInterrupt          HalpAcpiTimerInterrupt;
    pHalAcpiMachineStateInit        HalpAcpiMachineStateInit;
    pHalAcpiQueryFlags              HalpAcpiQueryFlags;
    pHalPicStateIntact              HalxPicStateIntact;
    pHalRestorePicState             HalxRestorePicState;
    pHalInterfaceReadConfig         HalpPciInterfaceReadConfig;
    pHalInterfaceWriteConfig        HalpPciInterfaceWriteConfig;
    pHalGetIOApicVersion            HalpGetIOApicVersion;
    pHalSetMaxLegacyPciBusNumber    HalpSetMaxLegacyPciBusNumber;
    pHalIsVectorValid               HalpIsVectorValid;
    pHalGetAcpiTable                HalpGetAcpiTable;
    pHalAcpiGetRsdp                 HalpAcpiGetRsdp;
    pHalAcpiGetFacsMapping          HalpAcpiGetFacsMapping;
    pHalAcpiGetAllTables            HalpAcpiGetAllTables;
    pHalAcpiPmRegisterAvailable     HalpAcpiPmRegisterAvailable;
    pHalAcpiPmRegisterRead          HalpAcpiPmRegisterRead;
    pHalAcpiPmRegisterWrite         HalpAcpiPmRegisterWrite;
} HAL_ACPI_DISPATCH_TABLE, *PHAL_ACPI_DISPATCH_TABLE;

#define HAL_ACPI_DISPATCH_SIGNATURE   'HAL '
#define HAL_ACPI_DISPATCH_VERSION     4

#define HalAcpiTimerInterrupt       ((pHalAcpiTimerInterrupt)PmHalDispatchTable->Function[HalAcpiTimerInterrupt])
#define HalAcpiMachineStateInit     ((pHalAcpiMachineStateInit)PmHalDispatchTable->Function[HalAcpiMachineStateInit])
#define HalPicStateIntact           ((pHalPicStateIntact)PmHalDispatchTable->Function[HalPicStateIntact])
#define HalRestorePicState          ((pHalRestorePicState)PmHalDispatchTable->Function[HalRestorePicState])
#define HalPciInterfaceReadConfig   ((pHalInterfaceReadConfig)PmHalDispatchTable->Function[HalPciInterfaceReadConfig])
#define HalPciInterfaceWriteConfig  ((pHalInterfaceWriteConfig)PmHalDispatchTable->Function[HalPciInterfaceWriteConfig])
#define HalGetIOApicVersion         ((pHalGetIOApicVersion)PmHalDispatchTable->Function[HalGetIOApicVersion])
#define HalSetMaxLegacyPciBusNumber ((pHalSetMaxLegacyPciBusNumber)PmHalDispatchTable->Function[HalSetMaxLegacyPciBusNumber])
#define HalIsVectorValid            ((pHalIsVectorValid)PmHalDispatchTable->Function[HalIsVectorValid])
#define HalGetAcpiTable             ((pHalGetAcpiTable)PmHalDispatchTable->Function[HalGetAcpiTable])
#define HalAcpiGetRsdp              ((pHalAcpiGetRsdp)PmHalDispatchTable->Function[HalAcpiGetRsdp])
#define HalAcpiGetFacsMapping       ((pHalAcpiGetFacsMapping)PmHalDispatchTable->Function[HalAcpiGetFacsMapping])
#define HalAcpiGetAllTables         ((pHalAcpiGetAllTables)PmHalDispatchTable->Function[HalAcpiGetAllTables])
#define HalAcpiPmRegisterAvailable  ((pHalAcpiPmRegisterAvailable)PmHalDispatchTable->Function[HalAcpiPmRegisterAvailable])
#define HalAcpiPmRegisterRead       ((pHalAcpiPmRegisterRead)PmHalDispatchTable->Function[HalAcpiPmRegisterRead])
#define HalAcpiPmRegisterWrite      ((pHalAcpiPmRegisterWrite)PmHalDispatchTable->Function[HalAcpiPmRegisterWrite])

#define HalAcpiPmRegisterIsAvailable(Enum) \
                                    NT_SUCCESS(HalAcpiPmRegisterAvailable(Enum))

#define HalAcpiPmRegisterReadUSHORT(Enum, Offset, Buffer) \
               HalAcpiPmRegisterRead(Enum, Offset, Buffer, sizeof(USHORT), NULL)

#define HalAcpiPmRegisterWriteUSHORT(Enum, Offset, Buffer) \
              HalAcpiPmRegisterWrite(Enum, Offset, Buffer, sizeof(USHORT), NULL)

#define HalAcpiPmRegisterReadUCHAR(Enum, Offset, Buffer) \
                HalAcpiPmRegisterRead(Enum, Offset, Buffer, sizeof(UCHAR), NULL)

#define HalAcpiPmRegisterWriteUCHAR(Enum, Offset, Buffer) \
               HalAcpiPmRegisterWrite(Enum, Offset, Buffer, sizeof(UCHAR), NULL)



extern PPM_DISPATCH_TABLE PmAcpiDispatchTable;
extern PPM_DISPATCH_TABLE PmHalDispatchTable;

//
// ACPI driver's table
//
typedef enum {
    AcpiEnableDisableGPEvents,
    AcpiInitEnableAcpi,
    AcpiGpeEnableWakeEvents,
    AcpiMarkHiberPhase,
    AcpiMaxFunction
} ACPI_DISPATCH_FUNCTION;

typedef
VOID
(*pAcpiEnableDisableGPEvents) (
    _In_ BOOLEAN Enable
    );

typedef
VOID
(*pAcpiInitEnableAcpi) (
    _In_ BOOLEAN ReEnable
    );

typedef
VOID
(*pAcpiGpeEnableWakeEvents)(
    VOID
    );

typedef
VOID
(*pAcpiMarkHiberPhase)(
    VOID
    );

typedef struct {
    ULONG   Signature;
    ULONG   Version;
    pAcpiEnableDisableGPEvents    AcpipEnableDisableGPEvents;
    pAcpiInitEnableAcpi           AcpipInitEnableAcpi;
    pAcpiGpeEnableWakeEvents      AcpipGpeEnableWakeEvents;
    pAcpiMarkHiberPhase           AcpipMarkHiberPhase;
} ACPI_HAL_DISPATCH_TABLE, *PACPI_HAL_DISPATCH_TABLE;

#define ACPI_HAL_DISPATCH_SIGNATURE   'ACPI'
#define ACPI_HAL_DISPATCH_VERSION     2

#define AcpiEnableDisableGPEvents       (*(pAcpiEnableDisableGPEvents)(ULONG_PTR)PmAcpiDispatchTable->Function[AcpiEnableDisableGPEvents])
#define AcpiInitEnableAcpi              (*(pAcpiInitEnableAcpi)(ULONG_PTR)PmAcpiDispatchTable->Function[AcpiInitEnableAcpi])
#define AcpiGpeEnableWakeEvents         (*(pAcpiGpeEnableWakeEvents)(ULONG_PTR)PmAcpiDispatchTable->Function[AcpiGpeEnableWakeEvents])
#define AcpiMarkHiberPhase              (*(pAcpiMarkHiberPhase)(ULONG_PTR)PmAcpiDispatchTable->Function[AcpiMarkHiberPhase])

// from detect\i386\acpibios.h
typedef struct {
    PHYSICAL_ADDRESS    Base;
    LARGE_INTEGER       Length;
    ULONG               Type;
    ULONG               ExtendedAttributes;
} ACPI_E820_ENTRY, *PACPI_E820_ENTRY;

typedef struct _ACPI_BIOS_MULTI_NODE {
    PHYSICAL_ADDRESS    RsdtAddress;    // 64-bit physical address of RSDT
    ULONGLONG           Count;
    ACPI_E820_ENTRY     E820Entry[1];
} ACPI_BIOS_MULTI_NODE;

typedef ACPI_BIOS_MULTI_NODE UNALIGNED *PACPI_BIOS_MULTI_NODE;

typedef enum {
    AcpiAddressRangeMemory = 1,
    AcpiAddressRangeReserved,
    AcpiAddressRangeACPI,
    AcpiAddressRangeNVS,
    AcpiAddressRangeMaximum,
} ACPI_BIOS_E820_TYPE, *PACPI_BIOS_E820_TYPE;

//
// The RSDT address supplied within the ACPI configuration node if it is not
// present.
//

#define RSDT_ADDRESS_NOT_PRESENT ((ULONG64)-1)

#endif //_ACPI_H_

/*
endif
;
;  Begin assembly part of the definitions
;


;
; Register layout of PM1x_EVT register
;

WAK_STS             equ     8000h

;
; Register layout of PM1x_Enable
;

TMR_EN              equ     0001h
GBL_EN              equ     0020h
PWRBTN_EN           equ     0100h
SLPBTN_EN           equ     0200h
RTC_EN              equ     0400h

;
; Register layout of PM1x_CTL
;

SCI_EN              equ     1
BM_RLD              equ     2
CTL_IGNORE          equ     200h
SLP_TYP_SHIFT       equ     10
SLP_EN              equ     2000h

CTL_PRESERVE        equ     (SCI_EN + BM_RLD + CTL_IGNORE)

;
; PM Register enum to be accessed by sleepstate.asm.
; (Can be removed as soon as we get rid sleepstate.asm)
;

PM1A_EVT_REGISTER  equ      0
PM1A_CTRL_REGISTER equ      1
PM1B_EVT_REGISTER  equ      3
PM1B_CTRL_REGISTER equ      4

;
; ACPI registers, as laid out in HalpFixedAcpiDescTable
;

PM1a_EVT        EQU _HalpFixedAcpiDescTable + 56
PM1b_EVT        EQU _HalpFixedAcpiDescTable + 60
PM1_EVT_LEN     EQU _HalpFixedAcpiDescTable + 88

PM1a_CNT        EQU _HalpFixedAcpiDescTable + 64
PM1b_CNT        EQU _HalpFixedAcpiDescTable + 68

PM2_CNT_BLK     EQU _HalpFixedAcpiDescTable + 72

PM_TMR_BLK      EQU _HalpFixedAcpiDescTable + 76
PM_TMR_FREQ     EQU 3579545

GPE0_BLK        EQU _HalpFixedAcpiDescTable + 80
GPE1_BLK        EQU _HalpFixedAcpiDescTable + 84

GPE0_BLK_LEN    EQU _HalpFixedAcpiDescTable + 92
GPE1_BLK_LEN    EQU _HalpFixedAcpiDescTable + 93

FLUSH_SIZE      EQU _HalpFixedAcpiDescTable + 100
FLUSH_STRIDE    EQU _HalpFixedAcpiDescTable + 102

DUTY_OFFSET     EQU _HalpFixedAcpiDescTable + 104

RTC_DAY_ALRM    EQU _HalpFixedAcpiDescTable + 106
RTC_MON_ALRM    EQU _HalpFixedAcpiDescTable + 107
RTC_CENTURY     EQU _HalpFixedAcpiDescTable + 108
FADT_FLAGS      EQU _HalpFixedAcpiDescTable + 112

;
; FADT flag values
;
WBINVD_SUPPORTED    EQU 1
WBINVD_FLUSH        EQU 2

;
GeneralWakeupEnable EQU 0
RtcWakeupEnable     EQU 1

;
; Constants used in the Context parameter to HaliAcpiSleep
;  (must match C code above)
;
SLEEP_STATE_FLUSH_CACHE         EQU 1
SLEEP_STATE_FIRMWARE_RESTART    EQU 2
SLEEP_STATE_SAVE_MOTHERBOARD    EQU 4
SLEEP_STATE_OFF                 EQU 8
SLEEP_STATE_RESTART_OTHER_PROCESSORS    EQU 10h
SLEEP_STATE_LOW_MEMORY_TEST_OK  EQU 20h


CONTEXT_FLAG_SHIFT              EQU 12


;*/
