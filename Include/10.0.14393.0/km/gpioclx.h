/*++

Copyright (c) Microsoft Corporation.  All rights reserved.

    THIS CODE AND INFORMATION IS PROVIDED "AS IS" WITHOUT WARRANTY OF ANY
    KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND/OR FITNESS FOR A PARTICULAR
    PURPOSE.

Module Name:

    gpioclx.h

Abstract:

    Header file that defines structures and prototypes required by GPIO client
    drivers.

Environment:

    Kernel mode

--*/

#ifndef __GPIOCLX_W__
#define __GPIOCLX_W__

#if (NTDDI_VERSION >= NTDDI_WIN8)

#ifdef __cplusplus
extern "C" {
#endif

//
// The version number for the GPIO interface supported by client driver.
//

#define GPIO_CLIENT_VERSION (0x3)

//
// Type for the GPIO controller's pin number.
//

typedef USHORT PIN_NUMBER, *PPIN_NUMBER;

typedef USHORT BANK_ID, *PBANK_ID;

#ifndef INVALID_PIN_NUMBER

#define INVALID_PIN_NUMBER ((PIN_NUMBER) -1)

#endif

#define MAXIMUM_PIN_NUMBER ((PIN_NUMBER) -1)

#define INVALID_BANK_ID ((USHORT) -1)

//
// The calling convention to be used when invoking GPIO client driver's
// callback.
//

#define GPIO_EXPORT __stdcall

//
// Disable warnings:
// 4201: nonstandard extension used: nameless struct/union
// 4214: Nonstandard extension used: bit field types other then int
//

#pragma warning(push)
#pragma warning(disable:4214)
#pragma warning(disable:4201)

//
// Flags describing GPIO controller attributes.
//

typedef union _CONTROLLER_ATTRIBUTE_FLAGS {
    struct {
        ULONG MemoryMappedController          : 1;
        ULONG ActiveInterruptsAutoClearOnRead : 1;
        ULONG FormatIoRequestsAsMasks         : 1;
        ULONG DeviceIdlePowerMgmtSupported    : 1;
        ULONG BankIdlePowerMgmtSupported      : 1;
        ULONG EmulateDebouncing               : 1;
        ULONG EmulateActiveBoth               : 1;
        ULONG IndependentIoHwSupported        : 1;
        ULONG Reserved                        : 24;
    };

    ULONG AsULONG;
} CONTROLLER_ATTRIBUTE_FLAGS, *PCONTROLLER_ATTRIBUTE_FLAGS;

//
// Description of the flags:
//
// MemoryMappedController - If this flag is set, then the GPIO controller is
//      memory-mapped (and thus can be directly manipulated at device-IRQL).
//      Otherwise, the GPIO controller is assumed to be behind some serial bus
//      and cannot be manipulated at DIRQL. In such case, all GPIO operations
//      will be dispatched to the client driver at PASSIVE_LEVEL IRQL only.
//
// StatusAutoClearOnRead - If this flag is set, then the GPIO class extension
//      will assume the active interrupts are automatically cleared on reading
//      them. Thus the GPIO class extension will not explicitly request the
//      client driver to clear the active interrupts during interrupt
//      processing.
//
// FormatIoRequestsAsMasks - If this flag is set, then the GPIO class extension
//      will format the IO requests as a read/write of a bitmask of pins to be
//      set and clear. If this flag is set, the bitmask APIs will be used when
//      invoking the client driver.
//
// DeviceIdlePowerMgmtSupported - This flag indicates that the device supports
//      Dx-based idle power management. If set then it implies that the device
//      can be put into Dx (D3) when there are no active connections to the
//      GPIO controller.
//
// BankIdlePowerMgmtSupported - This flag indicates whether this controller
//      supports F-state idle power management. If set, then it implies atleast
//      one bank on the controller supports F-state based power management.
//      N.B. This flag must always be FALSE if off-SoC GPIO controllers
//           (i.e. ServiceInterruptsAtPassiveOnly == TRUE).
//
// EmulateDebouncing - This flag indicates whether hardware or software
//      (emulated) debouncing will be used. If set, then it implies the
//      client driver will rely on the GPIO class extension to enumlate
//      debouncing.
//
// EmulateActiveBoth - This flag indicates whether hardware or software
//      (emulated) ActiveBoth support will be used. If set, then it implies the
//      client driver will use ActiveBoth emulated by the GPIO class
//      extension.
//
// IndependentIoHwSupported - This flag indicates that HW register used for
//      GPIO I/O is independent from that used for GPIO interrupt. If set, then
//      the GPIO class extension will forgo acquisition of any DIRQL interrupt
//      locks when servicing I/O requests.
//

//
// Define the GPIO client driver callback routines.
//

// ***************************************************************************
//
// Client Driver interfaces: General WDF interfaces.
//
// ***************************************************************************

// **************************************************************************
//
// Callback to prepare the GPIO controller for use.
//
// **************************************************************************

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_PREPARE_CONTROLLER) (
    _In_ WDFDEVICE Device,
    _In_ PVOID Context,
    _In_ WDFCMRESLIST ResourcesRaw,
    _In_ WDFCMRESLIST ResourcesTranslated
    );

typedef GPIO_CLIENT_PREPARE_CONTROLLER *PGPIO_CLIENT_PREPARE_CONTROLLER;

// **************************************************************************
//
// Callback to release the GPIO controller.
//
// **************************************************************************

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_RELEASE_CONTROLLER) (
    _In_ WDFDEVICE Device,
    _In_ PVOID Context
    );

typedef GPIO_CLIENT_RELEASE_CONTROLLER *PGPIO_CLIENT_RELEASE_CONTROLLER;

// **************************************************************************
//
// Callback and structure for basic GPIO controller information query.
//
// **************************************************************************

//
// The version of the attributes information supported by the client driver.
//

#define GPIO_CONTROLLER_BASIC_INFORMATION_VERSION (0x1)

//
// Defines the GPIO controller's basic information and attributes.
//

typedef struct _CLIENT_CONTROLLER_BASIC_INFORMATION {
    USHORT Version;
    USHORT Size;

    //
    // The total number of pins on the GPIO controller.
    //

    USHORT TotalPins;

    //
    // The number of pins per GPIO bank. Note the last GPIO bank is allowed to
    // have lesser than "PinsPerBank" number of pins.
    //
    // N.B. Each bank can only have 64 at the maximum.
    //

    UCHAR NumberOfPinsPerBank;

    //
    // The idle timeout if D3 is supported (i.e. DeviceIdlePowerMgmtSupported
    // flag is set in the Flags). Note the timeout is in milliseconds. Specify
    // "IdleTimeoutDefaultValue" or zero for default idle timeout (5 sec).
    //

    ULONG DeviceIdleTimeout;

    //
    // GPIO controller attribute flags. Refer to the structure definition
    // above for description of the various flags.
    //

    CONTROLLER_ATTRIBUTE_FLAGS Flags;

} CLIENT_CONTROLLER_BASIC_INFORMATION, *PCLIENT_CONTROLLER_BASIC_INFORMATION;

//
// Callback to query GPIO controller's attributes.
//

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_QUERY_CONTROLLER_BASIC_INFORMATION) (
    _In_ PVOID Context,
    _Out_ PCLIENT_CONTROLLER_BASIC_INFORMATION Information
);

typedef GPIO_CLIENT_QUERY_CONTROLLER_BASIC_INFORMATION
    *PGPIO_CLIENT_QUERY_CONTROLLER_BASIC_INFORMATION;

// **************************************************************************
//
// Callback to start the GPIO controller.
//
// **************************************************************************

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_START_CONTROLLER) (
    _In_ PVOID Context,
    _In_ BOOLEAN RestoreContext,
    _In_ WDF_POWER_DEVICE_STATE PreviousPowerState
    );

typedef GPIO_CLIENT_START_CONTROLLER *PGPIO_CLIENT_START_CONTROLLER;

// **************************************************************************
//
// Callback to stop the GPIO controller.
//
// **************************************************************************

typedef
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_STOP_CONTROLLER) (
    _In_ PVOID Context,
    _In_ BOOLEAN SaveContext,
    _In_ WDF_POWER_DEVICE_STATE TargetState
    );

typedef GPIO_CLIENT_STOP_CONTROLLER *PGPIO_CLIENT_STOP_CONTROLLER;

// **************************************************************************
//
// Callback and input/output structures for the generic query and set GPIO
// controller information.
//
// **************************************************************************

typedef enum _CLIENT_CONTROLLER_QUERY_SET_REQUEST_TYPE {
    QueryBankPowerInformation,
    QueryBankInterruptBindingInformation,
    QueryControllerFunctionBankMappingInformation,


    QuerySetRequestMaximumType
} CLIENT_CONTROLLER_QUERY_SET_REQUEST_TYPE,
    *PCLIENT_CONTROLLER_QUERY_SET_REQUEST_TYPE;

//
// Callback to query GPIO controller's attributes.
//

typedef struct _CLIENT_CONTROLLER_QUERY_SET_INFORMATION_INPUT {
    CLIENT_CONTROLLER_QUERY_SET_REQUEST_TYPE RequestType;
    USHORT Size;
    ULONG Flags;

    union {

        struct {
            BANK_ID BankId;
        } BankPowerInformation;

        struct {
            WDFCMRESLIST ResourcesTranslated;
            WDFCMRESLIST ResourcesRaw;
            USHORT TotalBanks;
        } BankInterruptBinding;

        struct {
            PVOID InputBuffer;
            SIZE_T InputBufferSize;
            SIZE_T OutputBufferSize;
            USHORT TotalBanks;
        } ControllerFunctionBankMapping;
    };

} CLIENT_CONTROLLER_QUERY_SET_INFORMATION_INPUT,
    *PCLIENT_CONTROLLER_QUERY_SET_INFORMATION_INPUT;

//
// The version of the bank information supported by the client driver.
//

#define GPIO_BANK_POWER_INFORMATION_OUTPUT_VERSION (0x1)

typedef struct _CLIENT_QUERY_BANK_POWER_INFORMATION_OUTPUT {

    //
    // Indicates whether a GPIO bank supports F-state based power
    // management. If it is supported, then F1StateSupported field
    // must be set to TRUE. Note F0 state is supported by all banks.
    //

    struct {
        USHORT F1StateSupported: 1;
        USHORT Reserved: 15;
    };

    //
    // Supplies the transition latency, residency requirement etc. for
    // the F1 state.
    //

    PO_FX_COMPONENT_IDLE_STATE F1IdleStateParameters;

} CLIENT_QUERY_BANK_POWER_INFORMATION_OUTPUT,
    *PCLIENT_QUERY_BANK_POWER_INFORMATION_OUTPUT;

#define GPIO_BANK_INTERRUPT_BINDING_INFORMATION_OUTPUT_VERSION (0x1)
#define GPIO_IOCTL_BANK_MAPPING_INFORMATION_OUTPUT_VERSION (0x1)

#define GPIO_BANK_INTERRUPT_BINDING_RESERVED_INDEX (0xFFFF)

typedef struct _CLIENT_CONTROLLER_QUERY_SET_INFORMATION_OUTPUT {
    USHORT Version;
    USHORT Size;

    union {
        CLIENT_QUERY_BANK_POWER_INFORMATION_OUTPUT BankPowerInformation;

        struct {
            ULONG ResourceMapping[ANYSIZE_ARRAY];
        } BankInterruptBinding;

        struct {
            BOOLEAN Mapping[ANYSIZE_ARRAY];
        } ControllerFunctionBankMapping;
    };

} CLIENT_CONTROLLER_QUERY_SET_INFORMATION_OUTPUT,
    *PCLIENT_CONTROLLER_QUERY_SET_INFORMATION_OUTPUT;

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_QUERY_SET_CONTROLLER_INFORMATION) (
    _In_ PVOID Context,
    _In_ PCLIENT_CONTROLLER_QUERY_SET_INFORMATION_INPUT InputBuffer,
    _Out_opt_ PCLIENT_CONTROLLER_QUERY_SET_INFORMATION_OUTPUT OutputBuffer
    );

typedef GPIO_CLIENT_QUERY_SET_CONTROLLER_INFORMATION
    *PGPIO_CLIENT_QUERY_SET_CONTROLLER_INFORMATION;

// ***************************************************************************
//
// Client Driver interfaces: Interrupt-related interfaces.
//
// ***************************************************************************

// **************************************************************************
//
// Callback and structure for interrupt enable interface.
//
// **************************************************************************

//
// ACPI specification defined values for pin pull configuration.
//

#define GPIO_PIN_PULL_CONFIGURATION_DEFAULT (0x0)
#define GPIO_PIN_PULL_CONFIGURATION_PULLUP (0x1)
#define GPIO_PIN_PULL_CONFIGURATION_PULLDOWN (0x2)
#define GPIO_PIN_PULL_CONFIGURATION_NONE (0x3)

//
// Define flag values for interrupt enable request.
//

typedef union _GPIO_ENABLE_INTERRUPT_FLAGS {

    ULONG AsULONG;      // Placeholder

} GPIO_ENABLE_INTERRUPT_FLAGS, *PGPIO_ENABLE_INTERRUPT_FLAGS;

//
// Define a structure to hold all the parameters to be passed to client
// driver's interrupt enable callback.
//

typedef struct _GPIO_ENABLE_INTERRUPT_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // The bank-relative pin number for the line that should be enabled.
    //

    PIN_NUMBER PinNumber;

    //
    // Flags controlling the interrupt enable request.
    //

    GPIO_ENABLE_INTERRUPT_FLAGS Flags;

    //
    // The trigger mode (edge or level) configuration for the interrupt.
    //

    KINTERRUPT_MODE InterruptMode;

    //
    // The interrupt polarity (ActiveLow/High/Both) configuration for the
    // interrupt.
    //

    KINTERRUPT_POLARITY Polarity;

    //
    // The pin pull-configuration supplied by the ACPI firmware for this
    // interrupt.
    //

    UCHAR PullConfiguration;

    //
    // The the debounce timeout to be applied. The field is in 100th of
    // milli-seconds (i.e., 5.84ms will be supplied as 584). Default value is
    // zero, which implies, no debounce.
    //

    USHORT DebounceTimeout;

    //
    // Pointer to an optional buffer containing the vendor data supplied in
    // the GPIO descriptor. This field will be NULL if no vendor data was
    // supplied. This buffer is read-only.
    //

    PVOID VendorData;

    //
    // Supplies the length of the vendor data buffer.
    //

    ULONG VendorDataLength;
} GPIO_ENABLE_INTERRUPT_PARAMETERS, *PGPIO_ENABLE_INTERRUPT_PARAMETERS;

//
// Callback to enable a GPIO pin for interrupt.
//

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_ENABLE_INTERRUPT) (
    _In_ PVOID Context,
    _In_ PGPIO_ENABLE_INTERRUPT_PARAMETERS EnableParameters
    );

typedef GPIO_CLIENT_ENABLE_INTERRUPT *PGPIO_CLIENT_ENABLE_INTERRUPT;

// **************************************************************************
//
// Callback and structure for interrupt disable interface.
//
// **************************************************************************

//
// Flag values for interrupt disable request.
//

typedef union _GPIO_DISABLE_INTERRUPT_FLAGS {

    struct {
        ULONG RetryDisableOnFailure: 1;
        ULONG Reserved: 31;
    };

    ULONG AsULONG;

} GPIO_DISABLE_INTERRUPT_FLAGS, *PGPIO_DISABLE_INTERRUPT_FLAGS;

//
// Define a structure to hold all the parameters to be passed to client
// driver's interrupt disable callback.
//

typedef struct _GPIO_DISABLE_INTERRUPT_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // The bank-relative pin number for the line that should be disabled.
    //

    PIN_NUMBER PinNumber;

    //
    // Flags controlling the interrupt disable request.
    //

    GPIO_DISABLE_INTERRUPT_FLAGS Flags;

} GPIO_DISABLE_INTERRUPT_PARAMETERS, *PGPIO_DISABLE_INTERRUPT_PARAMETERS;

//
// Callback to disable a GPIO pin for interrupt.
//

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_DISABLE_INTERRUPT) (
    _In_ PVOID Context,
    _In_ PGPIO_DISABLE_INTERRUPT_PARAMETERS DisableParameters
    );

typedef GPIO_CLIENT_DISABLE_INTERRUPT *PGPIO_CLIENT_DISABLE_INTERRUPT;

// **************************************************************************
//
// Client Driver Version 2 Interface:
// Callback and structure for query enabled interrupt interface.
//
// **************************************************************************

//
// Define a structure to hold all the parameters to be passed to client
// driver's query enabled interrupt callback.
//

typedef struct _GPIO_QUERY_ENABLED_INTERRUPTS_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // Supplies a bitmask that receives the enabled interrupt mask of the
    // specified bank. If a pin is enabled in hardware, then the corresponding
    // bit is set in the mask.
    //

    ULONG64 EnabledMask;
} GPIO_QUERY_ENABLED_INTERRUPTS_PARAMETERS,
    *PGPIO_QUERY_ENABLED_INTERRUPTS_PARAMETERS;

//
// Callback to read GPIO controller's interrupt enable register.
//

typedef
_Must_inspect_result_
_IRQL_requires_same_
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_QUERY_ENABLED_INTERRUPTS) (
    _In_ PVOID Context,
    _In_ PGPIO_QUERY_ENABLED_INTERRUPTS_PARAMETERS QueryEnabledParameters
    );

typedef GPIO_CLIENT_QUERY_ENABLED_INTERRUPTS
    *PGPIO_CLIENT_QUERY_ENABLED_INTERRUPTS;

// **************************************************************************
//
// Callback and structure for interrupt mask interface.
//
// **************************************************************************

//
// Define a structure to hold all the parameters to be passed to client
// driver's interrupt unmask callback.
//

typedef struct _GPIO_MASK_INTERRUPT_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // The bank-relative mask of pins to be masked.
    //

    ULONG64 PinMask;

    //
    // Supplies a bitmask that receives the set of pins that could not be
    // masked due to some failure.
    //

    ULONG64 FailedMask;
} GPIO_MASK_INTERRUPT_PARAMETERS, *PGPIO_MASK_INTERRUPT_PARAMETERS;

//
// Callback to mask a set of GPIO pins from interrupting.
//

typedef
_Must_inspect_result_
_IRQL_requires_same_
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_MASK_INTERRUPTS) (
    _In_ PVOID Context,
    _In_ PGPIO_MASK_INTERRUPT_PARAMETERS MaskParameters
    );

typedef GPIO_CLIENT_MASK_INTERRUPTS *PGPIO_CLIENT_MASK_INTERRUPTS;

// **************************************************************************
//
// Callback and structure for interrupt unmask interface.
//
// **************************************************************************

//
// Callback to unmask a previously masked GPIO pin.
//

typedef
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_UNMASK_INTERRUPT) (
    _In_ PVOID Context,
    _In_ PGPIO_ENABLE_INTERRUPT_PARAMETERS InterruptParameters
    );

typedef GPIO_CLIENT_UNMASK_INTERRUPT *PGPIO_CLIENT_UNMASK_INTERRUPT;

// **************************************************************************
//
// Callback and structure for query active interrupt interface.
//
// **************************************************************************

//
// Define a structure to hold all the parameters to be passed to client
// driver's query active interrupt callback.
//

typedef struct _GPIO_QUERY_ACTIVE_INTERRUPTS_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // The bank-relative mask of pins currently enabled for interrupts on the
    // specified GPIO bank.
    //

    ULONG64 EnabledMask;

    //
    // Supplies a bitmask that receives the active interrupt mask. If a pin is
    // interrupting and set in EnabledMask, then the corresponding bit is set
    // in the bitmask.
    //

    ULONG64 ActiveMask;
} GPIO_QUERY_ACTIVE_INTERRUPTS_PARAMETERS,
    *PGPIO_QUERY_ACTIVE_INTERRUPTS_PARAMETERS;

//
// Callback to read GPIO controller's interrupt status register.
//

typedef
_Must_inspect_result_
_IRQL_requires_same_
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_QUERY_ACTIVE_INTERRUPTS) (
    _In_ PVOID Context,
    _In_ PGPIO_QUERY_ACTIVE_INTERRUPTS_PARAMETERS QueryActiveParameters
    );

typedef GPIO_CLIENT_QUERY_ACTIVE_INTERRUPTS
    *PGPIO_CLIENT_QUERY_ACTIVE_INTERRUPTS;

// **************************************************************************
//
// Callback and structure for clear active interrupt interface.
//
// **************************************************************************

//
// Define a structure to hold all the parameters to be passed to client
// driver's query active interrupt callback.
//

typedef struct _GPIO_CLEAR_ACTIVE_INTERRUPTS_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // The bank-relative mask of pins which should be marked as inactive. If a
    // pin should be cleared, then the corresponding bit is set in the mask.
    //

    ULONG64 ClearActiveMask;

    //
    // Supplies a bitmask that receives set of pins that could not be cleared.
    // If a pin failed, then a bit is set in the mask.
    //

    ULONG64 FailedClearMask;
} GPIO_CLEAR_ACTIVE_INTERRUPTS_PARAMETERS,
    *PGPIO_CLEAR_ACTIVE_INTERRUPTS_PARAMETERS;

//
// Callback to clear GPIO controller's interrupt status bits.
//

typedef
_Must_inspect_result_
_IRQL_requires_same_
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_CLEAR_ACTIVE_INTERRUPTS) (
    _In_ PVOID Context,
    _In_ PGPIO_CLEAR_ACTIVE_INTERRUPTS_PARAMETERS ClearParameters
    );

typedef GPIO_CLIENT_CLEAR_ACTIVE_INTERRUPTS
    *PGPIO_CLIENT_CLEAR_ACTIVE_INTERRUPTS;

// **************************************************************************
//
// Callback for pre-processing interrupt interface.
//
// **************************************************************************

typedef
_Must_inspect_result_
_IRQL_requires_same_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_PRE_PROCESS_CONTROLLER_INTERRUPT) (
    _In_ PVOID Context,
    _In_ BANK_ID BankId,
    _In_ ULONG64 EnabledMask
);

typedef GPIO_CLIENT_PRE_PROCESS_CONTROLLER_INTERRUPT
    *PGPIO_CLIENT_PRE_PROCESS_CONTROLLER_INTERRUPT;

// **************************************************************************
//
// Callback for reconfiguring an interrupt.
//
// **************************************************************************

//
// Define flag values for reconfigure interrupt pin request.
//

typedef union _GPIO_RECONFIGURE_INTERRUPT_FLAGS {

    ULONG AsULONG;      // Placeholder

} GPIO_RECONFIGURE_INTERRUPT_FLAGS, *PGPIO_RECONFIGURE_INTERRUPT_FLAGS;

//
// Define a structure to hold all the parameters to be passed to client
// driver's reconfigure interrupt callback.
//

typedef struct _GPIO_RECONFIGURE_INTERRUPTS_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // The bank-relative pin number for the line that should be enabled.
    //

    PIN_NUMBER PinNumber;

    //
    // The trigger mode (edge or level) configuration for the interrupt.
    //

    KINTERRUPT_MODE InterruptMode;

    //
    // The interrupt polarity (ActiveLow/High) configuration for the
    // interrupt.
    //

    KINTERRUPT_POLARITY Polarity;

    //
    // Flags controlling the interrupt enable request.
    //

    GPIO_RECONFIGURE_INTERRUPT_FLAGS Flags;

} GPIO_RECONFIGURE_INTERRUPTS_PARAMETERS,
    *PGPIO_RECONFIGURE_INTERRUPTS_PARAMETERS;

typedef
_Must_inspect_result_
_IRQL_requires_same_
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_RECONFIGURE_INTERRUPT) (
    _In_ PVOID Context,
    _In_ PGPIO_RECONFIGURE_INTERRUPTS_PARAMETERS ReconfigureParameters
    );

typedef GPIO_CLIENT_RECONFIGURE_INTERRUPT *PGPIO_CLIENT_RECONFIGURE_INTERRUPT;

// ***************************************************************************
//
// Client Driver interfaces: Function config pin-related interfaces.
//
// ***************************************************************************

// **************************************************************************
//
// Callback and structure for connect function config pins.
//
// **************************************************************************

//
// Define flag values for connect function config pins request.
//

typedef union _GPIO_CONNECT_FUNCTION_CONFIG_PINS_FLAGS {

    ULONG AsULONG;      // Placeholder

} GPIO_CONNECT_FUNCTION_CONFIG_PINS_FLAGS,
    *PGPIO_CONNECT_FUNCTION_CONFIG_PINS_FLAGS;

//
// Define a structure to hold all of the parameters passed to client driver
// callback for connecting function config pins.
//

typedef struct _GPIO_CONNECT_FUNCTION_CONFIG_PINS_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // An array of pins to be connected for function config. The pin numbers
    // are 0-based and relative to the GPIO bank.
    //

    _Field_size_(PinCount) PPIN_NUMBER PinNumberTable;

    //
    // The number of pins in the pin number table.
    //

    USHORT PinCount;

    //
    // The function number in which to configure the pins.
    //

    ULONG FunctionNumber;

    //
    // The pin pull configuration as specified in the ACPI FW descriptor.
    //

    UCHAR PullConfiguration;

    //
    // The vendor data and its length specified in the ACPI FW descriptor.
    //

    PVOID VendorData;
    ULONG VendorDataLength;

    //
    // Supplies the flags to be used for connect request.
    //

    GPIO_CONNECT_FUNCTION_CONFIG_PINS_FLAGS ConnectFlags;

} GPIO_CONNECT_FUNCTION_CONFIG_PINS_PARAMETERS,
    *PGPIO_CONNECT_FUNCTION_CONFIG_PINS_PARAMETERS;

//
// Callback to connect GPIO controller's lines for function config.
//

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_CONNECT_FUNCTION_CONFIG_PINS) (
    _In_ PVOID Context,
    _In_ PGPIO_CONNECT_FUNCTION_CONFIG_PINS_PARAMETERS ConnectParameters
    );

typedef GPIO_CLIENT_CONNECT_FUNCTION_CONFIG_PINS
    *PGPIO_CLIENT_CONNECT_FUNCTION_CONFIG_PINS;

// **************************************************************************
//
// Callback and structure for disconnect function config pins interface.
//
// **************************************************************************

//
// Define flag values for connect function config pins request.
//

typedef union _GPIO_DISCONNECT_FUNCTION_CONFIG_PINS_FLAGS {

    ULONG AsULONG;         // Placeholder

} GPIO_DISCONNECT_FUNCTION_CONFIG_PINS_FLAGS,
    *PGPIO_DISCONNECT_FUNCTION_CONFIG_PINS_FLAGS;

typedef struct _GPIO_DISCONNECT_FUNCTION_CONFIG_PINS_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // An array of pins to be disconnected. The pin numbers are 0-based and
    // relative to the GPIO bank.
    //

    _Field_size_(PinCount) PPIN_NUMBER PinNumberTable;

    //
    // The number of pins in the pin number table.
    //

    ULONG PinCount;

    //
    // Supplies the flags to be used for disconnect request.
    //

    GPIO_DISCONNECT_FUNCTION_CONFIG_PINS_FLAGS DisconnectFlags;

} GPIO_DISCONNECT_FUNCTION_CONFIG_PINS_PARAMETERS,
    *PGPIO_DISCONNECT_FUNCTION_CONFIG_PINS_PARAMETERS;

//
// Callback to disconnect GPIO controller's lines.
//

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_DISCONNECT_FUNCTION_CONFIG_PINS) (
    _In_ PVOID Context,
    _In_ PGPIO_DISCONNECT_FUNCTION_CONFIG_PINS_PARAMETERS DisconnectParameters
);

typedef GPIO_CLIENT_DISCONNECT_FUNCTION_CONFIG_PINS
    *PGPIO_CLIENT_DISCONNECT_FUNCTION_CONFIG_PINS;

// ***************************************************************************
//
// Client Driver interfaces: IO-related interfaces.
//
// ***************************************************************************

// **************************************************************************
//
// Callback and structure for connect IO pins interface.
//
// **************************************************************************

typedef enum _GPIO_CONNECT_IO_PINS_MODE {
    ConnectModeInvalid,
    ConnectModeInput,
    ConnectModeOutput,
    ConnectModeMaximum = ConnectModeOutput
} GPIO_CONNECT_IO_PINS_MODE, *PGPIO_CONNECT_IO_PINS_MODE;

//
// Define flag values for connect IO pins request.
//

typedef union _GPIO_CONNECT_IO_PINS_FLAGS {

    ULONG AsULONG;      // Placeholder

} GPIO_CONNECT_IO_PINS_FLAGS, *PGPIO_CONNECT_IO_PINS_FLAGS;

//
// Define a structure to hold all the parameters to be passed to client
// driver's interrupt enable callback.
//

typedef struct _GPIO_CONNECT_IO_PINS_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // An array of pins to be connected for IO. The pin numbers are 0-based and
    // relative to the GPIO bank.
    //

    _Field_size_(PinCount) PPIN_NUMBER PinNumberTable;

    //
    // The number of pins in the pin number table.
    //

    USHORT PinCount;

    //
    // The mode in which the pins should be configured (viz. input or output).
    //

    GPIO_CONNECT_IO_PINS_MODE ConnectMode;

    //
    // The pin pull-up/pull-down, debounce and drive strength (output only)
    // configuration specified in the ACPI FW descriptor.
    //

    UCHAR PullConfiguration;
    USHORT DebounceTimeout;
    USHORT DriveStrength;

    //
    // The vendor data and its length specified in the ACPI FW descriptor.
    //

    PVOID VendorData;
    ULONG VendorDataLength;

    //
    // Supplies the flags to be used for connect request.
    //

    GPIO_CONNECT_IO_PINS_FLAGS ConnectFlags;
} GPIO_CONNECT_IO_PINS_PARAMETERS, *PGPIO_CONNECT_IO_PINS_PARAMETERS;

//
// Callback to connect GPIO controller's lines for input/output.
//

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_CONNECT_IO_PINS) (
    _In_ PVOID Context,
    _In_ PGPIO_CONNECT_IO_PINS_PARAMETERS ConnectParameters
    );

typedef GPIO_CLIENT_CONNECT_IO_PINS *PGPIO_CLIENT_CONNECT_IO_PINS;

// **************************************************************************
//
// Callback and structure for disconnect IO pins interface.
//
// **************************************************************************

//
// Define flag values for connect IO pins request.
//

typedef union _GPIO_DISCONNECT_IO_PINS_FLAGS {

    struct {
        ULONG PreserveConfiguration: 1;
        ULONG Reserved: 31;
    };

    ULONG AsULONG;

} GPIO_DISCONNECT_IO_PINS_FLAGS, *PGPIO_DISCONNECT_IO_PINS_FLAGS;

typedef struct _GPIO_DISCONNECT_IO_PINS_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // An array of pins to be disconnected. The pin numbers are 0-based and
    // relative to the GPIO bank.
    //

    _Field_size_(PinCount) PPIN_NUMBER PinNumberTable;

    //
    // The number of pins in the pin number table.
    //

    ULONG PinCount;

    //
    // The mode in which the pins were configured when originally connected.
    //

    GPIO_CONNECT_IO_PINS_MODE DisconnectMode;

    //
    // Supplies the flags to be used for disconnect request.
    //

    GPIO_DISCONNECT_IO_PINS_FLAGS DisconnectFlags;
} GPIO_DISCONNECT_IO_PINS_PARAMETERS, *PGPIO_DISCONNECT_IO_PINS_PARAMETERS;

//
// Callback to disconnect GPIO controller's lines.
//

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_DISCONNECT_IO_PINS) (
    _In_ PVOID Context,
    _In_ PGPIO_DISCONNECT_IO_PINS_PARAMETERS DisconnectParameters
);

typedef GPIO_CLIENT_DISCONNECT_IO_PINS *PGPIO_CLIENT_DISCONNECT_IO_PINS;

// **************************************************************************
//
// Callbacks and structures for read interfaces.
//
// **************************************************************************

typedef union _GPIO_READ_PINS_FLAGS {
    struct {
        ULONG WriteConfiguredPins: 1;
        ULONG Reserved0: 31;
    };

    ULONG AsULONG;

} GPIO_READ_PINS_FLAGS, *PGPIO_READ_PINS_FLAGS;

//
// Callback to read to a set of GPIO pins.
//

typedef struct _GPIO_READ_PINS_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // An array of pins to be disconnected. The pin numbers are 0-based and
    // relative to the GPIO bank.
    //

    _Field_size_(PinCount) PPIN_NUMBER PinNumberTable;

    //
    // The number of pins in the pin number table.
    //

    ULONG PinCount;

    //
    // Supplies the buffer to be filled in with data (READ) or data to write.
    //

    PVOID Buffer;

    //
    // Flags controlling the read operation.
    //

    GPIO_READ_PINS_FLAGS Flags;

    //
    // Reserved for internal use.
    //

    PVOID Reserved;
} GPIO_READ_PINS_PARAMETERS, *PGPIO_READ_PINS_PARAMETERS;

typedef
_Must_inspect_result_
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_READ_PINS) (
    _In_ PVOID Context,
    _In_ PGPIO_READ_PINS_PARAMETERS ReadParameters
    );

typedef GPIO_CLIENT_READ_PINS *PGPIO_CLIENT_READ_PINS;

typedef struct _GPIO_READ_PINS_MASK_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // Supplies a bitmask buffer to be filled in with read values.
    //

    PULONG64 PinValues;

    //
    // Flags controlling the read operation.
    //

    GPIO_READ_PINS_FLAGS Flags;

    //
    // Reserved for internal use.
    //

    PVOID Reserved;
} GPIO_READ_PINS_MASK_PARAMETERS, *PGPIO_READ_PINS_MASK_PARAMETERS;

typedef
_Must_inspect_result_
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_READ_PINS_MASK) (
    _In_ PVOID Context,
    _In_  PGPIO_READ_PINS_MASK_PARAMETERS ReadParameters
    );

typedef GPIO_CLIENT_READ_PINS_MASK *PGPIO_CLIENT_READ_PINS_MASK;

// **************************************************************************
//
// Callbacks and structures for write interfaces.
//
// **************************************************************************

typedef union _GPIO_WRITE_PINS_FLAGS {

    ULONG AsULONG;      // Placeholder

} GPIO_WRITE_PINS_FLAGS, *PGPIO_WRITE_PINS_FLAGS;

typedef struct _GPIO_WRITE_PINS_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // An array of pins to be disconnected. The pin numbers are 0-based and
    // relative to the GPIO bank.
    //

    _Field_size_(PinCount) PPIN_NUMBER PinNumberTable;

    //
    // The number of pins in the pin number table.
    //

    ULONG PinCount;

    //
    // A buffer supplying the data to be written.
    //

    PVOID Buffer;

    //
    // Flags controlling the write operation.
    //

    GPIO_WRITE_PINS_FLAGS Flags;

    //
    // Reserved for internal use.
    //

    PVOID Reserved;
} GPIO_WRITE_PINS_PARAMETERS, *PGPIO_WRITE_PINS_PARAMETERS;

//
// Callback to write to a set of GPIO pins.
//

typedef
_Must_inspect_result_
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_WRITE_PINS) (
    _In_ PVOID Context,
    _In_ PGPIO_WRITE_PINS_PARAMETERS WriteParameters
    );

typedef GPIO_CLIENT_WRITE_PINS *PGPIO_CLIENT_WRITE_PINS;

typedef struct _GPIO_WRITE_PINS_MASK_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // A bitmask that supplies the pins that need to be set to HIGH.
    //

    ULONG64 SetMask;

    //
    // A bitmask that supplies the pins that need to be set to LOW.
    //

    ULONG64 ClearMask;

    //
    // Flags controlling the write operation.
    //

    GPIO_WRITE_PINS_FLAGS Flags;

    //
    // Reserved for internal use.
    //

    PVOID Reserved;
} GPIO_WRITE_PINS_MASK_PARAMETERS, *PGPIO_WRITE_PINS_MASK_PARAMETERS;

typedef
_Must_inspect_result_
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_WRITE_PINS_MASK) (
    _In_ PVOID Context,
    _In_  PGPIO_WRITE_PINS_MASK_PARAMETERS WriteParameters
    );

typedef GPIO_CLIENT_WRITE_PINS_MASK *PGPIO_CLIENT_WRITE_PINS_MASK;

// ***************************************************************************
//
// Client Driver interfaces: Power management related interfaces.
//
// ***************************************************************************

typedef union _GPIO_SAVE_RESTORE_BANK_HARDWARE_CONTEXT_FLAGS {
    struct {
        ULONG CriticalTransition: 1;
        ULONG Reserved0: 31;
    };

    ULONG AsULONG;

} GPIO_SAVE_RESTORE_BANK_HARDWARE_CONTEXT_FLAGS,
    *PGPIO_SAVE_RESTORE_BANK_HARDWARE_CONTEXT_FLAGS;

typedef struct _GPIO_SAVE_RESTORE_BANK_HARDWARE_CONTEXT_PARAMETERS {

    //
    // The ID for the GPIO bank.
    //

    BANK_ID BankId;

    //
    // The target F-state.
    //

    ULONG State;

    //
    // Flags controlling the save/restore operation.
    //

    GPIO_SAVE_RESTORE_BANK_HARDWARE_CONTEXT_FLAGS Flags;

} GPIO_SAVE_RESTORE_BANK_HARDWARE_CONTEXT_PARAMETERS,
    *PGPIO_SAVE_RESTORE_BANK_HARDWARE_CONTEXT_PARAMETERS;

typedef
VOID
(GPIO_EXPORT GPIO_CLIENT_SAVE_BANK_HARDWARE_CONTEXT) (
    _In_ PVOID Context,
    _In_ PGPIO_SAVE_RESTORE_BANK_HARDWARE_CONTEXT_PARAMETERS Parameters
    );

typedef GPIO_CLIENT_SAVE_BANK_HARDWARE_CONTEXT
    *PGPIO_CLIENT_SAVE_BANK_HARDWARE_CONTEXT;

typedef
VOID
(GPIO_EXPORT GPIO_CLIENT_RESTORE_BANK_HARDWARE_CONTEXT) (
    _In_ PVOID Context,
    _In_ PGPIO_SAVE_RESTORE_BANK_HARDWARE_CONTEXT_PARAMETERS Parameters
    );

typedef GPIO_CLIENT_RESTORE_BANK_HARDWARE_CONTEXT
    *PGPIO_CLIENT_RESTORE_BANK_HARDWARE_CONTEXT;

// ***************************************************************************
//
// Client Driver interfaces: Miscellaneous.
//
// ***************************************************************************

typedef struct _GPIO_CLIENT_CONTROLLER_SPECIFIC_FUNCTION_PARAMETERS {

    //
    // Pointer to the input buffer and its length if supplied by the caller.
    //

    PVOID InputBuffer;
    SIZE_T InputBufferLength;

    //
    // Pointer to the output buffer and its length if supplied by the caller.
    //

    PVOID OutputBuffer;
    SIZE_T OutputBufferLength;

    //
    // The return number of bytes written to be supplied to the caller.
    //

    ULONG BytesWritten;

} GPIO_CLIENT_CONTROLLER_SPECIFIC_FUNCTION_PARAMETERS,
    *PGPIO_CLIENT_CONTROLLER_SPECIFIC_FUNCTION_PARAMETERS;

typedef
_Must_inspect_result_
NTSTATUS
(GPIO_EXPORT GPIO_CLIENT_CONTROLLER_SPECIFIC_FUNCTION) (
    _In_ PVOID Context,
    _Inout_ PGPIO_CLIENT_CONTROLLER_SPECIFIC_FUNCTION_PARAMETERS Parameters
    );

typedef GPIO_CLIENT_CONTROLLER_SPECIFIC_FUNCTION
    *PGPIO_CLIENT_CONTROLLER_SPECIFIC_FUNCTION;

// ***************************************************************************
//
// GPIO client driver registration packet.
//
// ***************************************************************************

#define GPIO_CLIENT_REGISTRATION_FLAGS_NONE (0x0)


typedef struct _GPIO_CLIENT_REGISTRATION_PACKET {
    USHORT Version;
    USHORT Size;
    ULONG Flags;
    ULONG ControllerContextSize;
    ULONG64 Reserved;

    //
    // Client Driver interfaces: General WDF interfaces.
    //

    PGPIO_CLIENT_PREPARE_CONTROLLER CLIENT_PrepareController;
    PGPIO_CLIENT_RELEASE_CONTROLLER CLIENT_ReleaseController;
    PGPIO_CLIENT_START_CONTROLLER CLIENT_StartController;
    PGPIO_CLIENT_STOP_CONTROLLER CLIENT_StopController;

    //
    // Client Driver interfaces: Controller information interface.
    //

    PGPIO_CLIENT_QUERY_CONTROLLER_BASIC_INFORMATION CLIENT_QueryControllerBasicInformation;
    PGPIO_CLIENT_QUERY_SET_CONTROLLER_INFORMATION CLIENT_QuerySetControllerInformation;

    //
    // Client Driver interfaces: Interrupt-related interfaces.
    //

    PGPIO_CLIENT_ENABLE_INTERRUPT CLIENT_EnableInterrupt;
    PGPIO_CLIENT_DISABLE_INTERRUPT CLIENT_DisableInterrupt;

    PGPIO_CLIENT_UNMASK_INTERRUPT CLIENT_UnmaskInterrupt;
    PGPIO_CLIENT_MASK_INTERRUPTS CLIENT_MaskInterrupts;

    PGPIO_CLIENT_QUERY_ACTIVE_INTERRUPTS CLIENT_QueryActiveInterrupts;
    PGPIO_CLIENT_CLEAR_ACTIVE_INTERRUPTS CLIENT_ClearActiveInterrupts;

    //
    // Client Driver interfaces: IO-related interfaces.
    //

    PGPIO_CLIENT_CONNECT_IO_PINS CLIENT_ConnectIoPins;
    PGPIO_CLIENT_DISCONNECT_IO_PINS CLIENT_DisconnectIoPins;

    union {
        PGPIO_CLIENT_READ_PINS CLIENT_ReadGpioPins;
        PGPIO_CLIENT_READ_PINS_MASK CLIENT_ReadGpioPinsUsingMask;
    };

    union {
        PGPIO_CLIENT_WRITE_PINS CLIENT_WriteGpioPins;
        PGPIO_CLIENT_WRITE_PINS_MASK CLIENT_WriteGpioPinsUsingMask;
    };

    //
    // Client Driver interfaces: Bank power management.
    //

    PGPIO_CLIENT_SAVE_BANK_HARDWARE_CONTEXT CLIENT_SaveBankHardwareContext;
    PGPIO_CLIENT_RESTORE_BANK_HARDWARE_CONTEXT CLIENT_RestoreBankHardwareContext;

    //
    // Client Driver interfaces: Miscellaneous.
    //

    PGPIO_CLIENT_PRE_PROCESS_CONTROLLER_INTERRUPT CLIENT_PreProcessControllerInterrupt;
    PGPIO_CLIENT_CONTROLLER_SPECIFIC_FUNCTION CLIENT_ControllerSpecificFunction;

    //
    // Client Driver interfaces: Reconfigure interrupt.
    //

    PGPIO_CLIENT_RECONFIGURE_INTERRUPT CLIENT_ReconfigureInterrupt;

    // **************************************************************************
    //
    // Client Driver Version 2 interfaces
    //
    // **************************************************************************

    //
    // Client Driver Version 2 interfaces: Interrupt-related interfaces.
    //

    PGPIO_CLIENT_QUERY_ENABLED_INTERRUPTS CLIENT_QueryEnabledInterrupts;

    // **************************************************************************
    //
    // Client Driver Version 3 interfaces
    //
    // **************************************************************************

    //
    // Client Driver Version 3 interfaces: Function config related interfaces.
    //

    PGPIO_CLIENT_CONNECT_FUNCTION_CONFIG_PINS CLIENT_ConnectFunctionConfigPins;
    PGPIO_CLIENT_DISCONNECT_FUNCTION_CONFIG_PINS CLIENT_DisconnectFunctionConfigPins;


} GPIO_CLIENT_REGISTRATION_PACKET, *PGPIO_CLIENT_REGISTRATION_PACKET;



#pragma warning(pop)

// ***************************************************************************
//
// GPIO class extension exports for client drivers.
//
// ***************************************************************************

//
// GPIO class extension export to register a GPIO client driver.
//

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLX_REGISTER_CLIENT) (
    _In_ WDFDRIVER Driver,
    _Inout_ PGPIO_CLIENT_REGISTRATION_PACKET RegistrationPacket,
    _In_ PUNICODE_STRING RegistryPath
    );

typedef GPIO_CLX_REGISTER_CLIENT *PGPIO_CLX_REGISTER_CLIENT;

//
// GPIO class extension export to unregister a GPIO client driver.
//

typedef
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLX_UNREGISTER_CLIENT) (
    _In_ WDFDRIVER Driver
    );

typedef GPIO_CLX_UNREGISTER_CLIENT *PGPIO_CLX_UNREGISTER_CLIENT;

//
// GPIO class extension export to process AddDevice prior to creating device
// object.
//

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE) (
    _In_ WDFDRIVER Driver,
    _Inout_ PWDFDEVICE_INIT DeviceInit,
    _Out_ PWDF_OBJECT_ATTRIBUTES FdoAttributes
    );

typedef GPIO_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE
    *PGPIO_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE;

//
// GPIO class extension export to process AddDevice post device object create.
//

typedef
_Must_inspect_result_
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(GPIO_EXPORT GPIO_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE) (
    _In_ WDFDRIVER Driver,
    _In_ WDFDEVICE Device
    );

typedef GPIO_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE
    *PGPIO_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE;

//
// GPIO class extension export to acquire the interrupt lock.
//

typedef
VOID
(GPIO_EXPORT GPIO_CLX_ACQUIRE_INTERRUPT_LOCK) (
    _In_ PVOID Context,
    _In_ BANK_ID BankId
    );

typedef GPIO_CLX_ACQUIRE_INTERRUPT_LOCK *PGPIO_CLX_ACQUIRE_INTERRUPT_LOCK;

//
// GPIO class extension export to release the interrupt lock.
//

typedef
_IRQL_requires_min_(DISPATCH_LEVEL + 1)
VOID
(GPIO_EXPORT GPIO_CLX_RELEASE_INTERRUPT_LOCK) (
    _In_ PVOID Context,
    _In_ BANK_ID BankId
    );

typedef GPIO_CLX_RELEASE_INTERRUPT_LOCK *PGPIO_CLX_RELEASE_INTERRUPT_LOCK;

//
// Define the position for each of the GPIO exports in the export table.
//

typedef enum _GPIO_CLX_EXPORT_INDEX {
    RegisterClientIndex = 0x0,
    UnregisterClientIndex,
    AddDevicePreDeviceCreateIndex,
    AddDevicePostDeviceCreateIndex,
    AcquireInterruptLockIndex,
    ReleaseInterruptLockIndex,
    GpioExportLastExportIndex
} GPIO_CLX_EXPORT_INDEX, *PGPIO_CLX_EXPORT_INDEX;

//
// Define the total number of routines exported by the class extension to the
// client driver.
//

#define GPIO_CLX_TOTAL_EXPORTS  (GpioExportLastExportIndex)

typedef VOID (*PGPIO_CLX_EXPORTED_INTERFACES)(VOID);

//
// Declaration for the GPIO class extension's export table.
//

extern PGPIO_CLX_EXPORTED_INTERFACES
    GpioClxExportedInterfaces[GPIO_CLX_TOTAL_EXPORTS];

NTSTATUS
FORCEINLINE
GPIO_CLX_RegisterClient (
    _In_ WDFDRIVER Driver,
    _Inout_ PGPIO_CLIENT_REGISTRATION_PACKET RegistrationPacket,
    _In_ PUNICODE_STRING RegistryPath
    )

{

    PGPIO_CLX_REGISTER_CLIENT RegisterClient;

    RegisterClient = (PGPIO_CLX_REGISTER_CLIENT)
                       GpioClxExportedInterfaces[RegisterClientIndex];

    return RegisterClient(Driver, RegistrationPacket, RegistryPath);
}

NTSTATUS
FORCEINLINE
GPIO_CLX_UnregisterClient (
    _In_ WDFDRIVER Driver
    )
{

    PGPIO_CLX_UNREGISTER_CLIENT UnregisterClient;

    UnregisterClient = (PGPIO_CLX_UNREGISTER_CLIENT)
                         GpioClxExportedInterfaces[UnregisterClientIndex];

    return UnregisterClient(Driver);
}

NTSTATUS
FORCEINLINE
GPIO_CLX_ProcessAddDevicePreDeviceCreate (
    _In_ WDFDRIVER Driver,
    _Inout_  PWDFDEVICE_INIT DeviceInit,
    _Out_ PWDF_OBJECT_ATTRIBUTES FdoAttributes
    )

{

    PGPIO_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE PreDeviceCreate;

    PreDeviceCreate = (PGPIO_CLX_PROCESS_ADD_DEVICE_PRE_DEVICE_CREATE)
                      GpioClxExportedInterfaces[AddDevicePreDeviceCreateIndex];

    return PreDeviceCreate(Driver, DeviceInit, FdoAttributes);
}

NTSTATUS
FORCEINLINE
GPIO_CLX_ProcessAddDevicePostDeviceCreate (
    _In_ WDFDRIVER Driver,
    _In_ WDFDEVICE Device
    )

{

    PGPIO_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE PostDeviceCreate;

    PostDeviceCreate = (PGPIO_CLX_PROCESS_ADD_DEVICE_POST_DEVICE_CREATE)
                       GpioClxExportedInterfaces[AddDevicePostDeviceCreateIndex];

    return PostDeviceCreate(Driver, Device);
}

VOID
FORCEINLINE
GPIO_CLX_AcquireInterruptLock (
    _In_ PVOID Context,
    _In_ BANK_ID BankId
    )

{

    PGPIO_CLX_ACQUIRE_INTERRUPT_LOCK AcquireInterruptLock;

    AcquireInterruptLock = (PGPIO_CLX_ACQUIRE_INTERRUPT_LOCK)
                           GpioClxExportedInterfaces[AcquireInterruptLockIndex];

    AcquireInterruptLock(Context, BankId);
    return;
}

VOID
FORCEINLINE
GPIO_CLX_ReleaseInterruptLock (
    _In_ PVOID Context,
    _In_ BANK_ID BankId
    )

{

    PGPIO_CLX_RELEASE_INTERRUPT_LOCK ReleaseInterruptLock;

    ReleaseInterruptLock = (PGPIO_CLX_RELEASE_INTERRUPT_LOCK)
                           GpioClxExportedInterfaces[ReleaseInterruptLockIndex];

    ReleaseInterruptLock(Context, BankId);
    return;
}

#ifdef __cplusplus
}
#endif

#endif // (NTDDI_VERSION >= NTDDI_WIN8)

#endif // __GPIOCLX_W__


