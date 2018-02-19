/*++

Copyright (c) 2009  Microsoft Corporation

Module Name:

    nthalext.h

Abstract:

    Header file containing the HAL Extensions API. This file should be included
    by each HAL Extension.

Author:

    Andy Raffman (andyraf) 20-Sep-2010

--*/

//
// -------------------------------------------------------------------- Pragmas
//

#pragma once

//
// ------------------------------------------------------------------- Includes
//

#include <wdm.h>
#include <acpitabl.h>

//
// ---------------------------------------------------------------- Definitions
//

#define DMA_INITIALIZATION_VERSION 1
#define DMA_CHANNEL_INITIALIZATION_VERSION 1

#define INITIALIZE_DMA_HEADER(_Pointer)                                     \
    ((_Pointer)->Header.TableVersion = DMA_INITIALIZATION_VERSION),         \
    ((_Pointer)->Header.TableSize = sizeof(DMA_INITIALIZATION_BLOCK))

#define INITIALIZE_DMA_CHANNEL_HEADER(_Pointer)                             \
    ((_Pointer)->Header.TableVersion = DMA_CHANNEL_INITIALIZATION_VERSION), \
    ((_Pointer)->Header.TableSize = sizeof(DMA_CHANNEL_INITIALIZATION_BLOCK))

// begin_ntoshvp

#define TIMER_INITIALIZATION_VERSION 1

#define INITIALIZE_TIMER_HEADER(_Pointer)                                   \
    ((_Pointer)->Header.TableVersion = TIMER_INITIALIZATION_VERSION),       \
    ((_Pointer)->Header.TableSize = sizeof(TIMER_INITIALIZATION_BLOCK))

//
// This bit is set if the timer hardware is duplicated across each processor.
// That is, the actual timer hardware being interacted with depends on which
// processor the code is being executed on. Per-processor timers are expected
// to have the same attributes on all processors.
//

#define TIMER_PER_PROCESSOR 0x00000001

//
// This bit is set if the timer's counter is readable by the HAL. If this bit
// is set, then the QueryCounter function is mandatory. It is expected that
// once initialized, the counter will operate in increasing free-running mode
// from 0 to its maximum bit width. When it reaches its maximum bit width, it
// will roll over to 0 and continue counting. Actions performed on other timers
// should not affect this timer's counter. If arming or querying other
// registered timers affects this timer's counter, it should not have this
// bit set.
//

#define TIMER_COUNTER_READABLE 0x00000002

//
// Set if the counter can be written to. It's fine if the counter has to be
// stopped to write to it.
//

#define TIMER_COUNTER_WRITABLE 0x00000004

//
// Set if the timer has a configurable input clock divisor. If this bit is set,
// the SetDivisor function is mandatory.
//

#define TIMER_HAS_DIVISOR 0x00000008

//
// This bit is set if the timer is capable of generating a periodic interval by
// continually rearming the timer in one-shot mode. If the timer supports this
// mode, it must not introduce additional delay by the re-armings. Only
// deadline-based timers or timers that run off a match register are known to
// support this mode, as other forms of timers introduce delay in the process
// of re-setting the timer.
//

#define TIMER_PSEUDO_PERIODIC_CAPABLE 0x00000010

//
// This bit is set if the timer is capable of generating one-shot interrupts.
// A one-shot interrupt is an interrupt that will fire once after the specified
// number of ticks, but does not automatically rearm itself to fire
// periodically at that rate.
//

#define TIMER_ONE_SHOT_CAPABLE 0x00000020

//
// This bit is set if the timer is capable of generating periodic interrupts.
// A periodic interrupt is an interrupt that will come in at a regular
// interval after a certain number of ticks. The only difference between
// periodic and pseudo-periodic mode is the implied amount of work the timer
// has to do in the acknowledge interrupt routine. It is assumed that
// re-arming the timer for a new one-shot tick is more expensive in terms of
// hardware access than setting the timer in periodic mode. The HAL will also
// not attempt lossless rate changes on a timer armed in pseudo-periodic mode.
//

#define TIMER_PERIODIC_CAPABLE 0x00000040

//
// This bit is set if the timer cannot generate interrupts at an arbitrary tick
// count, but is only capable of generating interrupts when the timer rolls
// over from its maximum value to 0. The ACPI PM timer is an example of such a
// timer.
//

#define TIMER_ROLLOVER_INTERRUPTS_ONLY 0x00000080

//
// This bit is set if the timer is connected to one of the dual 8259 interrupt
// controllers on a PC/AT system. This bit should never be set on ARM.
//

#define TIMER_GENERATES_8259_INTERRUPTS 0x00000100

//
// This bit is set if the timer generates interrupts connected to a line of the
// interrupt controller. This line may be a normal device line or processor
// local line. If this bit is set, the GSI field is used to determine which
// line the timer's interrupt is connected to.
//

#define TIMER_GENERATES_LINE_BASED_INTERRUPTS 0x00000200

//
// This bit is set if the timer can generate MSI interrupts. If this bit is
// set, the SetMessageInterruptRouting function is mandatory.
//

#define TIMER_GENERATES_MSI_INTERRUPTS 0x00000400

//
// This bit is set if the timer's interrupt is generated internally by the
// interrupt controller. These timers have no interrupt line and generally
// vector to the set location automatically. Timers that generate internal
// interrupts are generally built directly into the interrupt controller. The
// Local APIC timer on the PC is an example of such a timer. At this time, no
// known ARM timers fit this category.
//

#define TIMER_GENERATES_INTERNAL_INTERRUPTS 0x00000800

//
// Used to determine if the timer is capable of generating any sort of
// interrupt.
//

#if defined(_AMD64_) || defined(_X86_)

#define TIMER_INTERRUPT_MASK (TIMER_GENERATES_8259_INTERRUPTS |       \
                              TIMER_GENERATES_LINE_BASED_INTERRUPTS | \
                              TIMER_GENERATES_MSI_INTERRUPTS |        \
                              TIMER_GENERATES_INTERNAL_INTERRUPTS)

#elif defined(_ARM_) || defined(_ARM64_)

#define TIMER_INTERRUPT_MASK (TIMER_GENERATES_LINE_BASED_INTERRUPTS | \
                              TIMER_GENERATES_INTERNAL_INTERRUPTS)

#endif

//
// This bit is set if the timer is capable of changing from one periodic rate
// to another without introducing arbitrary delay. Currently this feature is
// only known to exist on deadline-based timers. This bit is optional, but if
// it is set then the LosslessRateChange function is mandatory.
//
// N.B. Use of this flag is deprecated.
//

#define TIMER_LOSSLESS_RATE_CHANGE 0x00001000

//
// Set if the timer's counter frequency may change with performance states
// (Dynamic Voltage and Frequency Scaling).
//

#define TIMER_PERFORMANCE_STATE_VARIANT 0x00002000

//
// Set if the timer's counter frequency may change with processor core idle
// states.
//

#define TIMER_IDLE_STATE_VARIANT 0x00004000

//
// Set if the timer frequency may vary with deep processor idle states or
// performance states. This value is equivalent to specifying the Performance
// State Variant and Idle State Variant flags.
//

#define TIMER_VARIANT (TIMER_PERFORMANCE_STATE_VARIANT | \
                       TIMER_IDLE_STATE_VARIANT)

//
// Defines the mask of capabilities that can be updated post-registration.
//

#define TIMER_UPDATABLE_CAPABILITIES (TIMER_VARIANT)

//
// Set if the timer remains on through the deepest of idle transitions. Note
// that there *must* be at least one timer with this bit set in a platform.
//

#define TIMER_ALWAYS_ON 0x00008000

//
// Set for per-processor timers that require internal data to be mirrored for
// each processor.
//

#define TIMER_PER_PROCESSOR_INTERNAL_DATA 0x00010000

//
// Set for timers which can generate a reset.
//

#define TIMER_GENERATES_RESET 0x00020000

//
// Set if the timer generated a reset during the last boot.
//

#define TIMER_GENERATED_LAST_RESET 0x00040000

//
// Set for timers which can generate a pre-reset interrupt.
//

#define TIMER_GENERATES_PRE_RESET_LINE_BASED_INTERRUPTS 0x00080000

//
// Set to indicate hardware is in support of special auxiliary counter.
//

#define TIMER_AUXILIARY 0x00100000

//
// Set to indicate that a timer does not require calls to initialize after
// being stopped.
//

#define TIMER_SINGLE_INIT 0x00200000

//
// Set to indicate that a timer arms against its counter. Timers which set
// this flag _must_ provide a method to query their counter.
//

#define TIMER_REQUIRES_ABSOLUTE_ARMING 0x00400000

//
// Set to indicate that this timer is subject to ARM A73 rollover errata.
//

#define TIMER_HAS_ROLLOVER_ERRATA 0x00800000

//
// Set to indicate that the timer supports advanced querying.
// In the case of the TSC, this indicates that rdtscp is available.
//

#define TIMER_SUPPORTS_ADVANCED_QUERY 0x01000000

//
// Defines the total valid timer capability flags. Timer plugins must not set
// flags outside this mask, as they are reserved for future use.
//

#define TIMER_VALID_CAPABILITIES 0x01FFFFFF

// end_ntoshvp

//
// Flags used for DMA Port Widths.
//

#define DMA_UNLIMITED_PORT_WIDTH 1
#define DMA_8_BIT_PORT_WIDTH     2
#define DMA_16_BIT_PORT_WIDTH    4
#define DMA_32_BIT_PORT_WIDTH    8
#define DMA_64_BIT_PORT_WIDTH    16

//
// ------------------------------------------------- Data Structure Definitions
//

// begin_ntoshvp

typedef struct _SOC_INITIALIZATION_HEADER {
    ULONG TableVersion;
    ULONG TableSize;
} SOC_INITIALIZATION_HEADER, *PSOC_INITIALIZATION_HEADER;

/*++

SoC Initialization Header Description:

    Stores the header for the SoC initialization block that is passed from a
    SoC module to the HAL.

Fields:

    TableVersion - Stores the version of the table.

    TableSize - Stores the total size, including the header, of the table.

--*/

typedef enum _TIMER_MODE {
    TimerModeInvalid,
    TimerModePseudoPeriodic,
    TimerModePeriodic,
    TimerModeOneShot,
    MaxTimerModes
} TIMER_MODE, *PTIMER_MODE;

typedef enum _KNOWN_TIMER_TYPE {
    TimerInvalid,
    TimerAcpi,
    TimerCmosRtc,
    TimerHpet,
    Timer8254,
    TimerProcessor,
    TimerSfi,
    TimerApic,
    TimerHypervisor,
    TimerBrokenAcpi,
    TimerCycleCounter,
    TimerGit,
    TimerVPPT,
    TimerWDAT,
    TimerGitWatchdog,
    TimerART,
    TimerGitAux,
    TimerUnknown = 0x1000
} KNOWN_TIMER_TYPE, *PKNOWN_TIMER_TYPE;

//
// Routines that need to be implemented by each timer implementation.
//

typedef
_Function_class_(TIMER_INITIALIZE)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
TIMER_INITIALIZE (
    _In_ PVOID TimerData
    );

/*++

Routine Description:

    This routine is responsible for initializing the timer hardware. This is
    guaranteed to be the first timer routine called by the HAL. It must prepare
    the timer for use by beginning the timer's counter ticking if the counter
    is readable, setting the intial input clock divisor to 1 if applicable,
    and masking all interrupts. If the timer's stop routine is called, this
    routine will be called before the timer is queried or armed again. It will
    not be called between every rearming of the timer.

    This routine will not be called concurrently with any other calls to
    this HAL Timer extension. For per-processor timers, this routine will be
    called once on each processor. A failure on any processor blocks the timer's
    use on all processors.

Arguments:

    TimerData - Supplies a pointer to the timer's private context. The contents
        of this pointer were specified when the timer was initially registered,
        and may be modified inside this routine. The HAL does not interpret any
        data deferenced from this pointer.

Return Value:

    Returns an NT status code indicating success or failure. If a successful
    status code is returned then the HAL may subsequently call further routines
    in this HAL extension to query or arm the timer. If a failure code is
    returned, this HAL extension will not attempt to use this timer unless the
    Initialize routine is called again and succeeds.

--*/

typedef TIMER_INITIALIZE *PTIMER_INITIALIZE;

typedef
_Function_class_(TIMER_QUERY_COUNTER)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
ULONGLONG
TIMER_QUERY_COUNTER (
    _In_ PVOID TimerData
    );

/*++

Routine Description:

    This routine queries the timer hardware and retrieves the current counter
    value.

    Timers are assumed to always count *up*. If the actual timer hardware counts
    down, then this routine should subtract the current count from the maximum
    counter value so that values appear to count up. This routine may be called
    concurrently on multiple processors and must be reentrant. This routine is
    extremely performance sensitive, as it may be used to back the system
    performance counter.

Arguments:

    TimerData - Supplies a pointer to the timer's private context, whose
        initial content was supplied when the timer was registered.

Return Value:

    Returns the hardware's current count.

--*/

typedef TIMER_QUERY_COUNTER *PTIMER_QUERY_COUNTER;

typedef
_Function_class_(TIMER_ACKNOWLEDGE_INTERRUPT)
_IRQL_requires_same_
_IRQL_requires_max_(CLOCK_LEVEL)
VOID
TIMER_ACKNOWLEDGE_INTERRUPT (
    _In_ PVOID TimerData
    );

/*++

Routine Description:

    This routine performs any actions necessary to acknowledge and quiesce a
    timer interrupt. For per-processor timers, this routine may be called
    concurrently on multiple processors. This routine will be called on every
    timer interrupt at the hardware priority level of that interrupt, so this
    routine is extremely performance sensitive. For timers running in
    pseudo-periodic mode, this routine must rearm the timer for the same
    interval as it was armed with without introducing delay into the interrupt
    interval. Only deadline-based timers support pseudo-periodic mode.

Arguments:

    TimerData - Supplies a pointer to the timer's private context, whose
        initial content was supplied when the timer was registered.

Return Value:

    None.

--*/

typedef TIMER_ACKNOWLEDGE_INTERRUPT *PTIMER_ACKNOWLEDGE_INTERRUPT;

typedef
_Function_class_(TIMER_SET_DIVISOR)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
TIMER_SET_DIVISOR (
    _In_ PVOID TimerData,
    _In_ ULONG NewDivisor
    );

/*++

Routine Description:

    This routine set's the counter's input frequency divisor, controlling the
    speed at which the counter updates. The Timer Initialize routine sets this
    divisor to 1, so if this is the appropriate value then this routine will
    not get called during initialization. This routine will not get called
    concurrently with other timer routines, but may be called after the timer
    has already been armed to fire an interrupt. On per-processor timers,
    this routine may get called concurrently on different processors. The
    counter is expected to be ticking at the new divisor rate by the time this
    routine returns.

Arguments:

    TimerData - Supplies a pointer to the timer's private context, whose
        initial content was supplied when the timer was registered.

    NewDivisor - Supplies the new divisor rate to set. This value will be a
        power of two and will be less than or equal to the timer's specified
        maximum divisor.

Return Value:

    None.

--*/

typedef TIMER_SET_DIVISOR *PTIMER_SET_DIVISOR;

typedef
_Function_class_(TIMER_ARM_TIMER)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
TIMER_ARM_TIMER (
    _In_ PVOID TimerData,
    _In_ TIMER_MODE Mode,
    _In_ ULONGLONG TickCount
    );

/*++

Routine Description:

    This routine arms a timer to fire an interrupt after the given number of
    timer ticks. For timers that only interrupt on rollovers, this simply
    enables the interrupt, the tick count parameter is ignored. If the timer
    is currently armed for a different mode or tick count, this call is
    expected to replace that programming. This routine will not get called
    concurrently with other timer calls, except on per-processor timers, where
    it may get called concurrently on different processors.

Arguments:

    TimerData - Supplies a pointer to the timer's private context, whose
        initial content was supplied when the timer was registered.

    Mode - Supplies the mode to arm the timer in, which will be one of the
        modes the HAL extension advertised support for when registering the
        timer. The modes are as follows:

        OneShot - Arms the timer to fire the given number of ticks from now.
            Only one interrupt is expected to come in. The HAL does not make
            assumptions on whether or not the expiration of this interrupt
            causes the counter to stop. The Query Counter routine will not be
            called while a timer is armed to fire an interrupt.

        Periodic - Arms the timer to fire periodically with an interval of the
            given number of ticks. The first interrupt should happen
            approximately the given number of ticks from when the arm timer
            function was invoked.

        PseudoPeriodic - Arms the timer with the same functional behavior as
            periodic mode, with the knowledge that the timer will have to rearm
            itself during the acknowledge interrupt routine. This mode is
            expected to have slightly worse performance than pure periodic mode,
            but is expected to generate periodic interrupts at the exact rate
            specified.

    TickCount - Supplies the number of ticks from now that the timer should
        assert its interrupt in. For timers that are only capable of
        interrupting on rollovers from their maximum value to 0, this parameter
        is ignored.

Return Value:

    Returns and NTSTATUS code indicating success or failure. If the timer
    returns success, then the interrupt is expected to come in the specified
    number of ticks from when the function was called, with a tolerance of
    however long the function took to execute. If the routine fails, then no
    timer routines will be called again until the timer Initialize routine is
    called again and succeeds. In most cases, returning a failure code results
    in a system bugcheck.

--*/

typedef TIMER_ARM_TIMER *PTIMER_ARM_TIMER;

typedef
_Function_class_(TIMER_SET_MESSAGE_INTERRUPT_ROUTING)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
TIMER_SET_MESSAGE_INTERRUPT_ROUTING (
    _In_ PVOID TimerData,
    _In_ BOOLEAN Enable,
    _In_ PHYSICAL_ADDRESS MessageAddress,
    _In_ ULONG MessageData
    );

/*++

Routine Description:

    This routine enables or disables message signalled interrupts on the given
    timer and configures the address and data of the message to generate on
    interrupts. This function only needs to be implemented on timers that have
    indicated they are capable of generating message signalled interrupts.

Arguments:

    TimerData - Supplies a pointer to the timer's private context, whose
        initial content was supplied when the timer was registered.

    Enable - Supplies a flag indicating whether or not MSI delivery mode should
        be enabled (TRUE) or disabled (FALSE). For timers that can generate
        both line based and MSI-based interrupts, this parameter determines
        which type should be used.

    MessageAddress - Supplies the physical address to send the message to.
        This parameter should be ignored when MSIs are being disabled.

    MessageData - Supplies the value to write to the specified address. This
        parameter should be ignored when MSIs are being disabled.

Return Value:

    Returns an NT status code indicating success or failure. If a failure is
    returned, the timer is expected to be left with the interrupt configuration
    it had before this call occurred.

--*/

typedef TIMER_SET_MESSAGE_INTERRUPT_ROUTING *PTIMER_SET_MESSAGE_INTERRUPT_ROUTING;

typedef
_Function_class_(TIMER_CHANGE_LOSSLESS_RATE)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
ULONG
TIMER_CHANGE_LOSSLESS_RATE (
    _In_ PVOID TimerData,
    _In_ ULONGLONG NewTickCount
    );

/*++

Routine Description:

    This routine changes the rate of a timer that is already operating in
    periodic mode. If this function is implemented, it must support changing
    the periodic interrupt rate without introducing any delay/skew during the
    programming of the new rate. Currently only deadline-based timers are known
    to support this capability. This function should not be implemented if not
    supported, and is mandatory for timers that advertise support for this
    capability.

Arguments:

    TimerData - Supplies a pointer to the timer's private context, whose
        initial content was supplied when the timer was registered.

    NewTickCount - Supplies the new periodic rate, in hardware counter
        ticks.

Return Value:

    Returns the number of interrupts that will occur at the old rate.
    Usually the equivalent of the "periodic interval" register is buffered in
    hardware, this is mechanism the HAL extension can use to indicate that the
    rate change is buffered and the 'depth' of that buffer.

--*/

typedef TIMER_CHANGE_LOSSLESS_RATE *PTIMER_CHANGE_LOSSLESS_RATE;

typedef
_Function_class_(TIMER_SET_INTERRUPT_VECTOR)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
TIMER_SET_INTERRUPT_VECTOR (
    _In_ PVOID TimerData,
    _In_ ULONG Vector
    );

/*++

Routine Description:

    This routine informs the timer of the vector it's going to be generating
    interrupts on. Most timers do not need to implement this function, it is
    only necessary for timers built in to interrupt controllers.

Arguments:

    TimerData - Supplies a pointer to the timer's private context, whose
        initial content was supplied when the timer was registered.

    Vector - Supplies the vector that the timer should configure itself to
        generate interrupts on.

Return Value:

    None.

--*/

typedef TIMER_SET_INTERRUPT_VECTOR *PTIMER_SET_INTERRUPT_VECTOR;

typedef
_Function_class_(TIMER_FIXED_STALL)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
ULONGLONG
TIMER_FIXED_STALL (
    _In_ PVOID TimerData,
    _In_ ULONGLONG MinimumStallIn100ns
    );

/*++

Routine Description:

    This routine accurately stalls execution for timers that cannot directly
    expose the timer's counter. This routine is used when the timer is capable
    of being an accurate stall source but its counter is unreadable or its
    stall durations cannot be arbitrary lengths of time. An example of this is
    the CMOS RTC on the PC, which can generate accurate stalls of 1Hz by
    polling the "Update In Progress" bit. This routine will always be called
    twice in immediate succession: once to allow the timer to potentially
    adjust to its fixed-stall cadence, and then once to actually perform the
    stall. The return value from the first call is always ignored. This routine
    is only used once during boot to measure the frequency of the processor if
    no other timers with known frequencies are available. All interrupts are
    disabled at this time. It is not used during normal stall execution calls,
    for that a readable counter is used.

Arguments:

    TimerData - Supplies a pointer to the timer's private context, whose
        initial content was supplied when the timer was registered.

    MinimumStallIn100ns - Supplies the minimum amount of time to stall for in
        100 nanosecond units (10^-7 seconds), or 0 to indicate this is the
        "warm-up" call to allow the timer to adjust to its potentially fixed
        stall cadence. When this parameter is 0, the return value of this
        routine is ignored.

Return Value:

    This routine should return 0 if 0 is passed into the minimum stall
    duration.

    Returns the number of 100ns units that the stall lasted. This number should
    be no less than the minimum stall parameter.

--*/

typedef TIMER_FIXED_STALL *PTIMER_FIXED_STALL;

typedef
_Function_class_(TIMER_STOP)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
TIMER_STOP (
    _In_ PVOID TimerData
    );

/*++

Routine Description:

    This routine stops a timer from ticking. After this function returns, the
    timer should not generate any more interrupts, and reads to its counter
    might return the same value every time.

Arguments:

    TimerData - Supplies a pointer to the timer's private context, whose
        initial content was supplied when the timer was registered.

Return Value:

    None, this function must succeed.

--*/

typedef TIMER_STOP *PTIMER_STOP;

typedef struct _TIMER_FUNCTION_TABLE {
    PTIMER_INITIALIZE Initialize;
    PTIMER_QUERY_COUNTER QueryCounter;
    PTIMER_ACKNOWLEDGE_INTERRUPT AcknowledgeInterrupt;
    PTIMER_ARM_TIMER ArmTimer;
    PTIMER_STOP Stop;
    PTIMER_SET_DIVISOR SetDivisor;
    PTIMER_SET_MESSAGE_INTERRUPT_ROUTING SetMessageInterruptRouting;
    PTIMER_CHANGE_LOSSLESS_RATE LosslessRateChange;
    PTIMER_SET_INTERRUPT_VECTOR SetInterruptVector;
    PTIMER_FIXED_STALL FixedStall;
} TIMER_FUNCTION_TABLE, *PTIMER_FUNCTION_TABLE;

/*++

Timer Function Table Description :

    Exposes a set of basic operations that can be performed on timer hardware.
    For a detailed explanation of each function, see the definition of each
    member's type.

Fields:

    Initialize - Stores a pointer to the initialization function, which performs
        any actions necessary to get the timer to an operable state.

    QueryCounter - Stores a pointer to the query count routine, which returns
        the current hardware counter value.

    AcknowledgeInterrupt - Stores a pointer to the acknowledge interrupt
        routine, which performs any actions necessary to quiesce an interrupt.

    ArmTimer - Stores a pointer to the timer arming routine, which programs the
        timer to fire an interrupt after the specified number of ticks (if
        supported).

    Stop - Stores a pointer to a function that stops the timer.

    SetDivisor - Stores a pointer to the set divisor routine, which reprograms
        the hardware counter's divisor rate.

    SetMessageInterruptRouting - Stores a pointer to the routine for
        configuring a timer to generate message based interrupts. This function
        only needs to be implemented for timers that have indicated they can
        generate MSIs.

    LosslessRateChange - Stores a pointer to the routine that allows the
        system to change the clock rate without introducing timer programming
        delay.

    SetInterruptVector - Stores a pointer to the routine that configures the
        timer to generate an interrupt at a certain vector.

    FixedStall - Stores a pointer to the routine that generates stalls of
        fixed increments of time.

--*/

typedef struct _TIMER_INTERRUPT {
    LONG LegacyIrq;
    LONG Gsi;
    KINTERRUPT_POLARITY Polarity;
    KINTERRUPT_MODE Mode;
} TIMER_INTERRUPT, *PTIMER_INTERRUPT;

/*++

Timer Interrupt Block Description:

    Stores the information required to describe a timer's interrupt.

Fields:

    LegacyIrq - Stores the IRQ pin the timer's interrupt comes in on if it
        generates interrupts on a legacy 8259 interrupt controller.

    Gsi - Stores the global system interrupt number of the interrupt this timer
        generates, if it generates line-based interrupts.

    Polarity - Stores the polarity of the interrupt this timer generates, if it
        generates interrupts.

    Mode - Stores whether or not this timer generates edge or levelctriggered
        interrupts, if it generates interrupts at all.

--*/

typedef struct _TIMER_INITIALIZATION_BLOCK {
    SOC_INITIALIZATION_HEADER Header;
    TIMER_FUNCTION_TABLE FunctionTable;
    PVOID InternalData;
    ULONG InternalDataSize;
    ULONG CounterBitWidth;
    ULONGLONG CounterFrequency;
    ULONG MaxDivisor;
    ULONG Capabilities;
    TIMER_INTERRUPT Interrupt;
    KNOWN_TIMER_TYPE KnownType;
    ULONG Identifier;
} TIMER_INITIALIZATION_BLOCK, *PTIMER_INITIALIZATION_BLOCK;

/*++

Timer Initialization Block Description:

    Stores the information required of the timer module by the HAL for the HAL
    to register a new timer source.

Fields:

    Header - Stores the structure size and version number. Do not fill in these
        members directly. Use the INITIALIZE_TIMER_HEADER macro to ensure these
        values are set correctly. Pass a pointer to the
        TIMER_INITIALIZATION_BLOCK as the only argument to the macro. The HAL
        will fail the registration call if it does not recognize this header.

    FunctionTable - Stores pointers to all implemented timer functions. The HAL
        will call these functions to interact with the timer extension during
        the initialization, use, and shutdown phases. Not all functions are
        mandatory, the mandatory functions are governed by which capabilities
        are set.

    InternalData - Stores a pointer to the initial value of the timer's
        internal data. This pointer is not referenced after the call to
        register the timer returns, as it is assumed to be a pointer to a local
        variable. A copy of this data is made and passed to the extension on
        each function call.

    InternalDataSize - Stores the number of bytes in the internal data
        structure. The contents of the Internal Data are never read or
        interpreted by the HAL. This allocation size is expected to be only a
        few bytes, allocating too much space may cause the system not to boot
        due to the limited ability to allocate memory before the memory manager
        is online.

    CounterBitWidth - Stores the number of bits in the timer's internal counter.
        Even if the timer's counter is not directly accessible to the HAL or
        the extension, this parameter must be filled in, as it is used in
        calculations for arming the timer and configuring its divisor.

    CounterFrequency - Stores the frequency of the counter, in Hertz. Even if
        the timer's counter is not directly accessible to the HAL or the
        extension, this parameter must be filled in, as it is used in
        calculations for arming the timer and configuring its divisor. If the
        timer is variant, this must be set to its fastest speed. This parameter
        may be set to 0 to indicate that the HAL extension does not have
        enough information to determine the counter's frequency. The HAL will
        then use another registered timer whose frequency parameter is filled
        in or the processor cycle counter itself to measure the frequency of
        this timer. This measured frequency is never reported back to the HAL
        extension, as the HAL arms the timer in terms of "ticks", not seconds.

    MaxDivisor - Stores the highest counter divisor supported by the hardware.
        Some timers implement a divisor on the input clock that drives the
        counter. Setting the divisor to 2 for instance causes the counter to
        count at half its normal frequency. If the timer can be configured at
        runtime for an arbitrary power of 2 divisor between 1 and N, then the
        MaxDivisor field can be set to N. The HAL may attempt to change the
        divisor after the timer has been initialized to any power of 2 between
        1 and MaxDivisor. If the timer does not implement a power of 2 divisor,
        set this field to 1. The HAL assumes that the initial divisor
        configured in the timer at initialization is 1.

    Capabilities - Stores the capabilities of the current timer, such as the
        ability to generate interrupts, the ability to have its counter read or
        written, etc.

    Interrupt - Stores information about the interrupt this timer generates,
        if applicable.

    KnownType - Stores an identifier that marks this as a known timer type to
        the HAL. The HAL may choose to make certain decisions differently if it
        is familiar with this type of timer.

    Identifier - Stores a 32-bit integer used to uniquely identify this timer.
        Set this to the same value as the UID for the Resource Descriptor.

--*/

// end_ntoshvp

typedef enum _DMA_INTERRUPT_TYPE {
    InterruptTypeCompletion,
    InterruptTypeError,
    InterruptTypeCancelled
} DMA_INTERRUPT_TYPE, *PDMA_INTERRUPT_TYPE;

typedef struct _DMA_REQUEST_LINE_BINDING_DESCRIPTION {
    ULONG RequestLine;
    ULONG ChannelNumber;
} DMA_REQUEST_LINE_BINDING_DESCRIPTION, *PDMA_REQUEST_LINE_BINDING_DESCRIPTION;

typedef struct _DMA_SCATTER_GATHER_ELEMENT {
    PHYSICAL_ADDRESS Address;
    ULONG Length;
    ULONG_PTR Reserved;
} DMA_SCATTER_GATHER_ELEMENT, *PDMA_SCATTER_GATHER_ELEMENT;

#pragma warning(push)
#pragma warning(disable:4200)

typedef struct _DMA_SCATTER_GATHER_LIST {
    ULONG NumberOfElements;
    ULONG_PTR Reserved;
    SCATTER_GATHER_ELEMENT Elements[];
} DMA_SCATTER_GATHER_LIST, *PDMA_SCATTER_GATHER_LIST;

#pragma warning(pop)

//
// Prototypes for routines used by DMA extension modules.
//

typedef
_Function_class_(DMA_INITIALIZE_CONTROLLER)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
DMA_INITIALIZE_CONTROLLER (
    _In_ PVOID ControllerContext
    );

/*++

Routine Description:

    This routine provides an opportunity for DMA controllers to initialize.

Arguments:

    ControllerContext - Supplies a pointer to the controller's internel data.

Return Value:

    None.

--*/

typedef DMA_INITIALIZE_CONTROLLER *PDMA_INITIALIZE_CONTROLLER;

typedef
_Function_class_(DMA_VALIDATE_REQUEST_LINE_BINDING)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN
DMA_VALIDATE_REQUEST_LINE_BINDING (
    _In_ PVOID ControllerContext,
    _In_ PDMA_REQUEST_LINE_BINDING_DESCRIPTION BindingDescription
    );

/*++

Routine Description:

    This routine queries a DMA controller extension to test the validity of a
    request line binding.

Arguments:

    ControllerContext - Supplies a pointer to the controller's internal data.

    DeviceDescription - Supplies a pointer to the request information.

Return Value:

    TRUE if the request line binding is valid and supported by the controller.

    FALSE if the binding is invalid.

Environment:

    PASSIVE_LEVEL.

--*/

typedef DMA_VALIDATE_REQUEST_LINE_BINDING *PDMA_VALIDATE_REQUEST_LINE_BINDING;

typedef
_Function_class_(DMA_QUERY_MAX_FRAGMENTS)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
ULONG
DMA_QUERY_MAX_FRAGMENTS (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber,
    _In_ ULONG MaxFragmentsRequested
    );

/*++

Routine Description:

    This routine queries the DMA extension to determine the number of
    scatter gather fragments that the next transfer can support.

Arguments:

    ControllerContext - Supplies a pointer to the controller's internal data.

    ChannelNumber - Supplies the number of the channel to program.

    MaxFragmentsRequested - Supplies a hint to the maximum fragments useful to
        this transfer.

Return Value:

    Number of fragments the next transfer on this channel can support.

--*/

typedef DMA_QUERY_MAX_FRAGMENTS *PDMA_QUERY_MAX_FRAGMENTS;

typedef
_Function_class_(DMA_PROGRAM_CHANNEL)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
DMA_PROGRAM_CHANNEL (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber,
    _In_ ULONG RequestLine,
    _In_ PDMA_SCATTER_GATHER_LIST MemoryAddress,
    _In_ PHYSICAL_ADDRESS DeviceAddress,
    _In_ BOOLEAN WriteToDevice,
    _In_ BOOLEAN LoopTransfer
    );

/*++

Routine Description:

    This routine programs a DMA controller channel for a specific transfer.

Arguments:

    ControllerContext - Supplies a pointer to the controller's internal data.

    ChannelNumber - Supplies the number of the channel to program.

    RequestLine - Supplies the request line number to program.  This request
        line number is system-unique (as provided to the HAL during
        registration) and must be translated by the extension.

    MemoryAddress - Supplies the address to be programmed into the memory
        side of the channel configuration.

    DeviceAddress - Supplies the address to be programmed into the device
        side of the channel configuration.

    WriteToDevice - Supplies the direction of the transfer.

    LoopTransfer - Supplies whether AutoInitialize has been set in the
        adapter making this request.

Return Value:

    None.

--*/

typedef DMA_PROGRAM_CHANNEL *PDMA_PROGRAM_CHANNEL;

typedef
_Function_class_(DMA_CONFIGURE_CHANNEL)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
NTSTATUS
DMA_CONFIGURE_CHANNEL (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber,
    _In_ ULONG FunctionNumber,
    _In_ PVOID Context
    );

/*++

Routine Description:

    This routine configures the channel for a DMA extension specific operation.

Arguments:

    ControllerContext - Supplies a pointer to the controller's internal data.

    ChannelNumber - Supplies the channel to configure.

    FunctionNumber - Supplies the ID of the operation to perform.

    Context - Supplies parameters for this operation.

Return Value:

    NTSTATUS code.

--*/

typedef DMA_CONFIGURE_CHANNEL *PDMA_CONFIGURE_CHANNEL;

typedef
_Function_class_(DMA_FLUSH_CHANNEL)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
DMA_FLUSH_CHANNEL (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber
    );

/*++

Routine Description:

    This routine resets the state of a channel and returns the
    channel to a state ready for the next ProgramChannel call.

Arguments:

    ControllerContext - Supplies a pointer to the controller's internal data.

    ChannelNumber - Supplies the channel to flush.

Return Value:

    None.

--*/

typedef DMA_FLUSH_CHANNEL *PDMA_FLUSH_CHANNEL;

typedef
_Function_class_(DMA_HANDLE_INTERRUPT)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN
DMA_HANDLE_INTERRUPT (
    _In_ PVOID ControllerContext,
    _Out_ PULONG ChannelNumber,
    _Out_ PDMA_INTERRUPT_TYPE InterruptType
    );

/*++

Routine Description:

    This routine probes a controller for interrupts, clears any interrupts
    found, fills in channel and interrupt type information.  This routine
    will be called repeatedly until FALSE is returned.

Arguments:

    ControllerContext - Supplies a pointer to the controller's internal data.

    ChannelNumber - Supplies a placeholder for the extension to fill in which
        channel is interrupting.

    InterruptType - Supplies a placeholder for the extension to fill in the
        interrupt type.

Return Value:

    TRUE if an interrupt was found on this controller.

    FALSE otherwise.

--*/

typedef DMA_HANDLE_INTERRUPT *PDMA_HANDLE_INTERRUPT;

typedef
_Function_class_(DMA_READ_DMA_COUNTER)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
ULONG
DMA_READ_DMA_COUNTER (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber
    );

/*++

Routine Description:

    This routine determines how many bytes remain to be transferred on the
    given channel.  If the current transfer is set to loop, this routine
    will return the number of bytes remaining in the current iteration.

Arguments:

    ControllerContext - Supplies a pointer to the controller's internal data.

    ChannelNumber - Supplies the channel number.

Return Value:

    Returns the number of bytes remaining to be transferred on the given
    channel.

--*/

typedef DMA_READ_DMA_COUNTER *PDMA_READ_DMA_COUNTER;

typedef
_Function_class_(DMA_REPORT_COMMON_BUFFER)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
VOID
DMA_REPORT_COMMON_BUFFER (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber,
    _In_ PVOID VirtualAddress,
    _In_ PHYSICAL_ADDRESS LogicalAddress
    );

/*++

Routine Description:

    This routine allows the HAL to report to the extension information about
    a common buffer alloated on behalf of a channel.  This allocation is the
    result of a requirement listed in the channel initialization block.
    The buffer is non-cached.

Arguments:

    ControllerContext - Supplies a pointer to the controller's internal data.

    ChannelNumber - Supplies the channel number.

    VirtualAddress - Supplies the virtual address of the common buffer.

    LogicalAddress - Supplies the DMA controller visible address of the common
        buffer.

Return Value:

    None.

--*/

typedef DMA_REPORT_COMMON_BUFFER *PDMA_REPORT_COMMON_BUFFER;

typedef
_Function_class_(DMA_CANCEL_TRANSFER)
_IRQL_requires_same_
_IRQL_requires_max_(HIGH_LEVEL)
BOOLEAN
DMA_CANCEL_TRANSFER (
    _In_ PVOID ControllerContext,
    _In_ ULONG ChannelNumber
    );

/*++

Routine Description:

    This routine must disable the selected channel.  The channel must not be
    capable of interrupting for this transfer after being cleared in this way.

Arguments:

    ControllerContext - Supplies a pointer to the controller's internal data.

    ChannelNumber - Supplies the channel number.

Return Value:

    FALSE if the channel is already idle or if the channel is already asserting
    an interrupt.  TRUE is the channel is active and no interrupt is asserted.

--*/

typedef DMA_CANCEL_TRANSFER *PDMA_CANCEL_TRANSFER;

//
// Define the DMA Extension interface table.
//

typedef struct _DMA_FUNCTION_TABLE {
    PDMA_INITIALIZE_CONTROLLER InitializeController;
    PDMA_VALIDATE_REQUEST_LINE_BINDING ValidateRequestLineBinding;
    PDMA_QUERY_MAX_FRAGMENTS QueryMaxFragments;
    PDMA_PROGRAM_CHANNEL ProgramChannel;
    PDMA_CONFIGURE_CHANNEL ConfigureChannel;
    PDMA_FLUSH_CHANNEL FlushChannel;
    PDMA_HANDLE_INTERRUPT HandleInterrupt;
    PDMA_READ_DMA_COUNTER ReadDmaCounter;
    PDMA_REPORT_COMMON_BUFFER ReportCommonBuffer;
    PDMA_CANCEL_TRANSFER CancelTransfer;
} DMA_FUNCTION_TABLE, *PDMA_FUNCTION_TABLE;

/*++

DMA Function Table Description :

    Exposes a set of basic operations that can be performed by a DMA
    controller.

Fields:

    InitializeController - Perform any one-time initialization needed
        by the DMA controller.

    ValidateRequestLineBinding - Validate the request to bind a request
        line.

    ProgramChannel - Program a DMA channel and ready it for transfer.

    ConfigureChannel - Provides mechanism for DMA controller custom features.

    FlushChannel - Flushes the specified channel and returns the channel to a
        state ready to be programmed.

    HandleInterrupt - Probe DMA controller for interrupt.  Acknowledge the
        interrupt and return which channel interrupted.

    ReadDmaCounter - Determine how many bytes remain in a transfer on the given
        channel.  If the current transfer is set to loop, then this routine
        will return the number of bytes remaining in the current iteration.

    ReportCommonBuffer - This routine is optional iff all channels report a
        zero length common buffer requirement.  This routine is called by
        the HAL to report the virtual and logical addresses of a common buffer
        usable by the DMA controller channel.

--*/

typedef struct _DMA_INITIALIZATION_BLOCK {
    SOC_INITIALIZATION_HEADER Header;
    ULONG ControllerId;
    ULONG ChannelCount;
    BOOLEAN CacheCoherent;
    ULONG DmaAddressWidth;
    ULONG SupportedPortWidths;
    ULONG MinimumTransferUnit;
    ULONG MinimumRequestLine;
    ULONG MaximumRequestLine;
    BOOLEAN GeneratesInterrupt;
    LONG Gsi;
    KINTERRUPT_POLARITY InterruptPolarity;
    KINTERRUPT_MODE InterruptMode;
    PVOID InternalData;
    ULONG InternalDataSize;
    PDMA_FUNCTION_TABLE Operations;
} DMA_INITIALIZATION_BLOCK, *PDMA_INITIALIZATION_BLOCK;

/*++

DMA Controller Initialization Block Description:

    Stores the information required of the DMA controller module by the
    HAL for the HAL to register a new DMA controller unit.

Fields:

    ControllerId - System-wide unique ID identifying controller.

    ChannelCount - Number of channels supported by teh controller.

    CacheCoherent - Describes whether this controller is cache coherent.

    DmaAddressWidth - Describes the width of this controller's address bus.
        This determiens the maximum address accessible by this controller.

    SupportedPortWidths - Describes which wrapping modes are supported by this
        controller.  This is a bitfield.

    MaximumRequestLine - System-unique maximum request line supported by
        this controller.

    MinimumRequestLine - System-unique minimum request line supported by this
        controller.

    GeneratesInterrupt - Describes whether this controller generates an
        interrupt to signal DMA completion.

    Gsi - Stores the global system interrupt number of the interrupt this DMA
        controller generates, if it generates line-based interrupts.

    InterruptPolarity - Stores the polarity of the interrupt this DMA
        controller generates, if it generates interrupts.

    InterruptMode - Stores whether or not this DMA controller generates edge
        or level triggered interrupts, if it generates interrupts at all.

    InternalData - Stores a pointer to the individual DMA controller's
        internal data. This pointer is passed to the DMA controller
        module at each of its function table calls.

    InternalDataSize - Stores the size, in bytes, of the DMA module's
        internal data strucuture.

--*/

typedef struct _DMA_CHANNEL_INITIALIZATION_BLOCK {
    SOC_INITIALIZATION_HEADER Header;
    ULONG ControllerId;
    BOOLEAN GeneratesInterrupt;
    LONG Gsi;
    KINTERRUPT_POLARITY InterruptPolarity;
    KINTERRUPT_MODE InterruptMode;
    ULONG CommonBufferLength;
    ULONG ChannelNumber;
} DMA_CHANNEL_INITIALIZATION_BLOCK, *PDMA_CHANNEL_INITIALIZATION_BLOCK;

/*++

DMA Channel Initialization Block Description:

    Stores the information required of the DMA channel module by the
    HAL for the HAL to register a new DMA channel.

Fields:

    ControllerId - System-wide unique ID identifying controller which
        implements channel..

    GeneratesInterrupt - Describes whether this channel generates an
        interrupt to signal DMA completion.

    Gsi - Stores the global system interrupt number of the interrupt this DMA
        channel generates, if it generates line-based interrupts.

    InterruptPolarity - Stores the polarity of the interrupt this DMA channel
        generates, if it generates interrupts.

    InterruptMode - Stores whether or not this DMA channel generates edge or
        level triggered interrupts, if it generates interrupts at all.

    ChannelNumber - The number of the channel being described.  Channel numbers
        must be zero-based and not contain holes.

    CommonBufferLength - Allows the extension to specify that this channel
        requires a buffer accessible both by the extension and it's hardware.
        If this value is non-zero, the HAL will report virtual and logical
        addresses for this buffer to the extension with the ReportCommonBuffer
        routine.  If this value is non-zero, ReportCommonBuffer must be
        implemented.

--*/

//
// -------------------------------------------------------- Function Prototypes
//

//
// Functions exported from the HAL Extension to the HAL
//

NTSTATUS
AddResourceGroup (
    _In_ ULONG Handle,
    _In_ PCSRT_RESOURCE_GROUP_HEADER ResourceGroup
    );

/*++

Routine Description:

    This routine identifies and registers all of the Resource Descriptors
    in the specified Resource Group.

Arguments:

    Handle - Supplies the HAL Extension handle which must be passed to other
        HAL Extension APIs.

    ResourceGroup - Supplies a pointer to the Resource Group which the
        HAL Extension has been installed on.

Return Value:

    NTSTATUS code.

--*/

//
// Functions exported from the HAL to the HAL Extension
//

NTSTATUS
RegisterResourceDescriptor (
    _In_ ULONG Handle,
    _In_ PCSRT_RESOURCE_GROUP_HEADER ResourceGroup,
    _In_ PCSRT_RESOURCE_DESCRIPTOR_HEADER ResourceDescriptor,
    _In_opt_ PVOID ResourceDescriptorInfo
    );

/*++

Routine Description:

    This routine registers a Resource Descriptor, forwarding the request to
    the appropriate registration routine based on the Resource Descriptor type.

Arguments:

     Handle - Supplies the HAL Extension handle passed into the extension via
        AddResourceGroup.

    ResourceGroup - Supplies a pointer to the Resource Group passed into the
        extension via AddResourceGroup.

    ResourceDescriptor - Supplies a pointer to the Resource Descriptor
        to be registered.

    ResourceDescriptorInfo - Supplies a pointer to a resource-specific data
        structure.

Return Value:

    NTSTATUS code.

--*/

PCSRT_RESOURCE_DESCRIPTOR_HEADER
GetNextResourceDescriptor (
    _In_ ULONG Handle,
    _In_ PCSRT_RESOURCE_GROUP_HEADER ResourceGroup,
    _In_opt_ PCSRT_RESOURCE_DESCRIPTOR_HEADER ResourceDescriptor,
    _In_ USHORT ResourceType,
    _In_ USHORT ResourceSubtype,
    _In_ ULONG ResourceID
    );

/*++

Routine Description:

    This routine returns the next Resource Descriptor within a Resource Group,
    filtered by ResourceType and ResourceId.

Arguments:

    Handle - Supplies the HAL Extension handle passed into the extension via
       AddResourceGroup.

    ResourceGroup - Supplies a pointer to the Resource Group being enumerated.

    ResourceDescriptor - Supplies a pointer to the Resource Descriptor returned
        by the previous invocation of this API. This parameter should be set
        to NULL to start the iteration at the first Resource Descriptor.

    ResourceType - Supplies a filter specifying the Resource Type being
        requested. The value CSRT_RD_TYPE_ANY will match any Resource Type.

    ResourceSubtype - Supplies a filter specifying the Resource Subtype being
        requested. The value CSRT_RD_SUBTYPE_ANY will match any Resource Subtype.

    ResourceId - Supplies a filter specifying the Resource Id being
        requested. The value CSRT_RD_UID_ANY will match any Resource Id.

Return Value:

    A pointer to a Resource Descriptor, or NULL if no additional descriptors are
    available.

--*/

PVOID
GetAcpiTable (
    _In_ ULONG Handle,
    _In_ ULONG Signature,
    _In_opt_ PCSTR OemId,
    _In_opt_ PCSTR OemTableId
    );

/*++

Routine Description:

    This routine returns the requested ACPI table.

Arguments:

    Handle - Supplies the HAL Extension handle passed into the extension via
       AddResourceGroup.

    Signature - The signature of the table required by the caller.

    OemId - The optional OemId of the table required by the caller.

    OemTableId - The optional OemTableId of the table required by the caller.

Return Value:

    A pointer to the table requested by the caller, or NULL if the table doesn't
    exist.  The caller must under no circumstances attempt to free or unmap the
    memory referred to by the result of this function, as it is cached by the
    HAL.

--*/


PVOID
HalMapIoSpace (
    _In_ PHYSICAL_ADDRESS PhysicalAddress,
    _In_ SIZE_T NumberOfBytes,
    _In_ MEMORY_CACHING_TYPE CacheType
    );

/*++

Routine Description:

    This routine maps physical memory into the area of virtual memory
    reserved for the HAL.  It does this by directly inserting the PTE
    into the Page Table which the OS Loader has provided.

Arguments:

    PhysicalAddress - Supplies the physical address of the start of the
        area of physical memory to be mapped.

    NumberOfBytes - Supplies the number of bytes that should be mapped.

    CacheType - Supplies the caching attributes of the mapping.

Return Value:

    PVOID - Virtual address at which the requested block of physical memory
            was mapped

    NULL - The requested block of physical memory could not be mapped.

--*/

VOID
HalUnmapIoSpace (
    _In_ PVOID VirtualAddress,
    _In_ SIZE_T NumberOfBytes
    );

/*++

Routine Description:

    This routine unmaps a virtual address.

Arguments:

    VirtualAddress  - Supplies a valid virtual address to be unmapped.

    NumberOfBytes - Supplies the number of bytes to unmap.

Return Value:

    None.

--*/

NTSTATUS
HalRegisterPermanentAddressUsage (
    _In_ PHYSICAL_ADDRESS PhysicalAddress,
    _In_ ULONG SizeInBytes
    );

/*++

Routine Description:

    This routine permanently stakes out a piece of physical memory for use by
    the SoC module. This routine does not map that memory anywhere, it just
    claims it. This registration cannot be undone.

Arguments:

    PhysicalAddress - Supplies the physical address to register.

    SizeInBytes - Supplies the size of the physical allocation, in byte.

Return Value:

    STATUS_SUCCESS on success.

    STATUS_NO_MEMORY if the allocation could not be reserved.

    STATUS_TOO_LATE if the call is made after the HAL initialization phase is
    complete.

--*/

