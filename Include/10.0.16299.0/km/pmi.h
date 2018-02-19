/*++

Copyright (c) 2009  Microsoft Corporation

Module Name:

    pmi.h

Abstract:

    This header defines the standard IOCTL interface to a power meter device.

Author:

Environment:

    NT Kernel Model Driver only.

--*/

//--------------------------------------------------------------------- Defines

//
// Power Meter Device Interface.
// {e849804e-c719-43d8-ac88-96b894c191e2 }
//

DEFINE_GUID(GUID_DEVICE_POWER_METER,
            0xe849804e, 
            0xc719, 0x43d8, 0xac, 0x88, 0x96, 0xb8, 0x94, 0xc1, 0x91, 0xe2);

#if !defined(_PMI_)
#define _PMI_

//
// IOCTL codes.
//

#define IOCTL_PMI_GET_CAPABILITIES        CTL_CODE(FILE_DEVICE_PMI, 0, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_PMI_GET_CONFIGURATION       CTL_CODE(FILE_DEVICE_PMI, 1, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_PMI_SET_CONFIGURATION       CTL_CODE(FILE_DEVICE_PMI, 2, METHOD_BUFFERED, FILE_WRITE_ACCESS)
#define IOCTL_PMI_GET_MEASUREMENT         CTL_CODE(FILE_DEVICE_PMI, 3, METHOD_BUFFERED, FILE_READ_ACCESS)
#define IOCTL_PMI_REGISTER_EVENT_NOTIFY   CTL_CODE(FILE_DEVICE_PMI, 4, METHOD_BUFFERED, FILE_READ_ACCESS | FILE_WRITE_ACCESS)

//
// Valid Flags for PMI_REPORTED_CAPABILITIES.Flags
//

#define PMI_CAPABILITIES_SUPPORT_MEASUREMENT    0x00000001
#define PMI_CAPABILITIES_SUPPORT_THRESHOLDS     0x00000002
#define PMI_CAPABILITIES_SUPPORT_BUDGETING      0x00000004
#define PMI_CAPABILITIES_SUPPORT_BUDGET_NOTIFY  0x00000008
#define PMI_CAPABILITIES_DISCHARGE_ONLY         0x00000100

//
// Number of thresholds that can be configured for a power meter.
//

#define PMI_NUM_THRESHOLDS                   2

//
// The maximum length for a name parameter.
//

#define PMI_NAME_MAX                        16

//
// The character that delimits each device path in a list.
//

#define PMI_DEVICE_PATH_DELIMITER           0x00

#define PMI_VERSION                         0x01

//----------------------------------------------------------------------- Enums

typedef enum {
    PmiReportedCapabilities,
    PmiMeteredHardware,
    PmiCapabilitiesMax
} PMI_CAPABILITIES_TYPE;

typedef enum {
    PmiMeasurementTypeInput,
    PmiMeasurementTypeOutput,
    PmiMeasurementTypeMax
} PMI_MEASUREMENT_TYPE;
 
typedef enum {
    PmiMeasurementUnitMilliWatt,
    PmiMeasurementUnitMax
} PMI_MEASUREMENT_UNIT;

typedef enum {
    PmiMeasurementConfiguration,
    PmiBudgetingConfiguration,
    PmiThresholdConfiguration,
    PmiConfigurationMax
} PMI_CONFIGURATION_TYPE;

typedef enum {
    PmiCapabilitiesChangedEvent,
    PmiThresholdEvent,
    PmiConfigurationChangedEvent,
    PmiBudgetEvent,
    PmiAveragingIntervalChangedEvent,
    PmiEventMax
} PMI_EVENT_TYPE;

//------------------------------------------------------------------ Structures

//
// PmiReportedCapabilties - The capabilities of the power meter.
// 

typedef struct _PMI_REPORTED_CAPABILITIES {
    ULONG Flags;
    PMI_MEASUREMENT_UNIT MeasurementUnit;
    PMI_MEASUREMENT_TYPE MeasurementType;
    ULONG Accuracy;                 // in thousandth of a percent (0% - 100.000%)
    ULONG SamplingPeriod;           // in milliseconds
    ULONG MinimumAverageInterval;   // in milliseconds
    ULONG MaximumAverageInterval;   // in milliseconds
    ULONG Hysteresis;               // in milliwatts
    BOOLEAN Writeable;
    ULONG MinBudget;
    ULONG MaxBudget;
    WCHAR ModelNumber[PMI_NAME_MAX];
    WCHAR SerialNumber[PMI_NAME_MAX];
    WCHAR OEMInformation[PMI_NAME_MAX];
} PMI_REPORTED_CAPABILITIES, *PPMI_REPORTED_CAPABILITIES;

//
// PmiMeteredHardwareInformation - The target hardware being metered.
//

typedef struct _PMI_METERED_HARDWARE_INFORMATION {
    ULONG MeteredHardwareCount;

    //
    // A NULL delimited list of names of the devices being metered by this
    // power meter. The end of the list is denoted by a double NULL.
    //
    // This can be used by component power meters, and is in the format of 
    // \\Device\xyz. For the system power meter, NULL is returned.
    //

    WCHAR MeteredHardware[ANYSIZE_ARRAY];
} PMI_METERED_HARDWARE_INFORMATION, *PPMI_METERED_HARDWARE_INFORMATION;


//
// The combined structure for all possible capabilities for a power meter.
//
 
typedef struct _PMI_CAPABILITIES {
    ULONG Version;
    ULONG Size;
    PMI_CAPABILITIES_TYPE CapabilityType;
    union {
        PMI_REPORTED_CAPABILITIES ReportedCapabilities;
        PMI_METERED_HARDWARE_INFORMATION MeteredHardwareInformation;
    } Capabilities;
} PMI_CAPABILITIES, *PPMI_CAPABILITIES;

//
// PmiMeasurementConfiguration - The current measurement configuration of this 
// power meter.
//

typedef struct _PMI_MEASUREMENT_CONFIGURATION {
    ULONG AveragingInterval;
} PMI_MEASUREMENT_CONFIGURATION, *PPMI_MEASUREMENT_CONFIGURATION;
 
//
// PmiBudgetingConfiguration - The current budget configuration of this power 
// meter.
//

typedef struct _PMI_BUDGETING_CONFIGURATION {
    ULONG ConfiguredBudget;
} PMI_BUDGETING_CONFIGURATION, *PPMI_BUDGETING_CONFIGURATION;

//
// PmiThresholdConfiguration - The current threshold configuration of this power
// meter.
//

typedef struct _PMI_THRESHOLD_CONFIGURATION {
    ULONG LowerThreshold;
    ULONG UpperThreshold;
} PMI_THRESHOLD_CONFIGURATION, *PPMI_THRESHOLD_CONFIGURATION;

//
// The combined structure of possible dynamic configuration for a power meter. 
//
 
typedef struct _PMI_CONFIGURATION {
    ULONG Version;
    USHORT Size;
    PMI_CONFIGURATION_TYPE ConfigurationType;
    union {
        PMI_MEASUREMENT_CONFIGURATION MeasurementConfiguration;
        PMI_BUDGETING_CONFIGURATION BudgetingConfiguration;
        PMI_THRESHOLD_CONFIGURATION ThresholdConfiguration;
    } Configuration;
} PMI_CONFIGURATION, *PPMI_CONFIGURATION;

typedef struct _PMI_MEASUREMENT_DATA {
    ULONG Version;
    ULONG CurrentPower; // in milliwatts
} PMI_MEASUREMENT_DATA, *PPMI_MEASUREMENT_DATA;


typedef struct _PMI_EVENT {
    ULONG Version;
    PMI_EVENT_TYPE EventType;
} PMI_EVENT, *PPMI_EVENT;

#endif // !defined(_PMI_)