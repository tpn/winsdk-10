/*++

Copyright (C) Microsoft Corporation.  All rights reserved.

Module Name:

PointOfServiceDriverInterface.h

Abstract:

Defines the data structures used in communication between device service/driver and runtime.
Also includes the set of supported IOCTLs.

Environment:

User and Kernel Mode.

--*/

#ifndef POINT_OF_SERVICE_DRIVER_INTERFACE_H
#define POINT_OF_SERVICE_DRIVER_INTERFACE_H

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#include <pshpack8.h>

#if(NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#define POINT_OF_SERVICE_COMMON_IOCTL_BASE    0x000
#define POINT_OF_SERVICE_VENDOR_IOCTL_BASE    0x800

//----------------------------------------------------------------------------------------------
// Driver Versioning information
//----------------------------------------------------------------------------------------------

// Current:
//    1.8 = LineDisplay basic capabilities and text-only support added
//    1.7 = BarcodeScannerVideoDeviceId added for camera barcode scanner support
//    1.6 = IOCTL_POINT_OF_SERVICE_PRINTER_WAIT_FOR_JOB_COMPLETE added for pos printer job
//    1.5 = IOCTL_POINT_OF_SERVICE_CONNECT_REMOTE_DEVICE added for remote pos
//          peripheral support.
//    1.4 = CashDrawer support added
//    1.3 = PointOfService Printer support added
//    1.2 = Barcode Scanner Software trigger support added
//    (unification)
//    0.1, 1.1 = Initial Version (Barcode Scanner, MSR) respectively

#define MAKE_POS_VERSION(major, minor)  (((major) << 16) | (minor))
#define POS_DRIVER_MAJOR_VERSION        1
#define POS_DRIVER_MINOR_VERSION        8
#define POS_DRIVER_VERSION              MAKE_POS_VERSION(POS_DRIVER_MAJOR_VERSION, POS_DRIVER_MINOR_VERSION)

// v1.2 -- First version with software trigger support
#define POS_VERSION_1_2                 MAKE_POS_VERSION(1, 2)
#define POS_VERSION_1_3                 MAKE_POS_VERSION(1, 3)
#define POS_VERSION_1_4                 MAKE_POS_VERSION(1, 4)
#define POS_VERSION_1_5                 MAKE_POS_VERSION(1, 5)
#define POS_VERSION_1_6                 MAKE_POS_VERSION(1, 6)
#define POS_VERSION_1_7                 MAKE_POS_VERSION(1, 7)
#define POS_VERSION_1_8                 MAKE_POS_VERSION(1, 8)

//----------------------------------------------------------------------------------------------
//                                  Event Data
//----------------------------------------------------------------------------------------------

// Do not recycle values because that breaks backwards compatibility.
// The next available value is _Max.  Keep _Max up to date.

typedef enum _PosEventType
{
    InvalidEvent = 0,
    _MinEventType = 1,

    //------------------------------------
    // Common event types
    //------------------------------------

    // ReleaseDeviceRequested : PosEventDataHeader
    ReleaseDeviceRequested = 1,

    // StatusUpdated : PosStatusUpdatedEventData
    StatusUpdated = 2,

    //------------------------------------
    // BarcodeScanner event types
    //------------------------------------

    // BarcodeScannerTriggerPressed : PosEventDataHeader
    BarcodeScannerTriggerPressed = 3,

    // BarcodeScannerTriggerReleased : PosEventDataHeader
    BarcodeScannerTriggerReleased = 4,

    // BarcodeScannerDataReceived : PosBarcodeScannerDataReceivedEventData
    BarcodeScannerDataReceived = 5,

    // BarcodeScannerErrorOccurred : PosBarcodeScannerErrorOccurredEventData
    BarcodeScannerErrorOccurred = 6,

    // BarcodeScannerImagePreviewReceived : PosBarcodeScannerImagePreviewEventData
    BarcodeScannerImagePreviewReceived = 7,

    //------------------------------------
    // MagneticStripeReader event types
    //------------------------------------

    // MagneticStripeReaderDataReceived : ???
    MagneticStripeReaderDataReceived = 8,

    // MagneticStripeReaderErrorOccurred : PosMagneticStripeReaderErrorOccurredEventData
    MagneticStripeReaderErrorOccurred = 9,


    //------------------------------------
    // PointOfServicePrinter event types
    //------------------------------------

    PointOfServicePrinterErrorOccurred = 10,

    //------------------------------------
    // CashDrawer event types
    //------------------------------------

    // AlarmTimeoutExpired : PosEventDataHeader
    AlarmTimeoutExpired = 11,

    // DrawerClosed : PosEventDataHeader
    DrawerClosed = 12,

    // DrawerOpened : PosEventDataHeader
    DrawerOpened = 13,

    _Max = 14,
} PosEventType;

//------------------------------------
// Common Event Data formats
//------------------------------------

// Header
typedef struct _PosEventDataHeader
{
    // Event enumeration value
    PosEventType EventType;

    // Size of buffer required to read entire event (including header)
    UINT32 DataLength;
} PosEventDataHeader;

// PosStatusUpdatedEventData
// Status should be of a device-specific enum type
// Extended status should be OEM/driver specific and really only useful to the vendor for diagnostics.
typedef struct _PosStatusUpdatedEventData
{
    PosEventDataHeader Header;
    UINT32 Status;
    UINT32 ExtendedStatus;
} PosStatusUpdatedEventData;

//-------------------------------------------
// Common Device Statistics Structure Formats
//-------------------------------------------

#define STATISTICS_STRING_SIZE          128
#define STATISTICS_STRING_BYTE_LENGTH   (STATISTICS_STRING_SIZE * sizeof(wchar_t))


// Generic profile string value type
//   Actual unicode data follows header.
typedef struct _PosStringType
{
    UINT32 DataLengthInBytes;
} PosStringType;

// All bitmap commands should start with this structure

typedef struct _PosPrinterCommonBitmapArgs
{
    // The print station associated with the bitmap

    UINT32 Station;

    // PointOfServicePrinterBitmapWidthType (captured in 32-bit unsigned)

    UINT32 Width;

    // If Width == Custom, the custom width.

    UINT32 CustomWidth;

    // PosPrinterAlignment

    UINT32 Alignment;

    // If alignment == Custom, then the custom alignment distance from left
    // edge.

    UINT32 AlignmentCustomDistance;

    // Total size of raw bitmap data

    UINT32 BitmapDataLength;

    // Bitmap properties captured from the IBitmapFrame
    UINT32 PixelFormat;
    UINT32 AlphaMode;
    UINT32 PixelWidth;
    UINT32 PixelHeight;
    UINT32 OrientedWidth;
    UINT32 OrientedHeight;
} PosPrinterCommonBitmapArgs;

// The print bitmap command is just an alias for the common bitmap
// parameters type

typedef struct _PosPrinterPrintMemoryBitmapArgs
{
    PosPrinterCommonBitmapArgs CommonParameters;
} PosPrinterPrintMemoryBitmapArgs;

// The set bitmap command adds an id number to associate with the bitmap

typedef struct _PosPrinterSetBitmapArgs
{
    PosPrinterCommonBitmapArgs CommonParameters;
    UINT32 BitmapNumber;
} PosPrinterSetBitmapArgs;

// The bitmap fill parameter

typedef struct _PosBitmapFillType
{
    UINT64 BitmapHandle;
    UINT32 DataSize;
    BOOLEAN IsLast;
} PosBitmapFillType;


//A string of length positionListDatalength should trail this struct containing
//the data to be sent to the specified station
typedef struct _PosPrinterDrawRuledLineArgs
{
    UINT32 Station;
    UINT32 LineDirection;
    UINT32 LineWidth;
    UINT32 LineStyle;
    UINT32 LineColor;
}PosPrinterDrawRuledLineArgs;


//A string of length datalength should trail this struct containing
//the data to be sent to the specified station
typedef struct _PosPrinterPrintBarcodeArgs
{
    UINT32 Station;
    UINT32 Symbology;
    UINT32 Height;
    UINT32 Width;
    UINT32 Alignment;
    UINT32 AlignmentCustomDistance;
    UINT32 TextPosition;
}PosPrinterPrintBarcodeArgs;

typedef struct _PosProfileType
{
    UINT32 BufferSize;
    UINT32 ProfileCount;
} PosProfileType;

// PosStatistiscHeader
// The structure is the header for incoming statistic
//      TotalStatisticsEntry : Total Statistic entries
//      DataLength           : Datalength of byte stream
//                             (sizeof(PosStatisticsHeader) + (TotalStatisticsEntry * sizeof(PosValueStatisticsEntry))

typedef struct _PosStatisticsHeader
{
    UINT32 EntryCount;
    PosDeviceInformation DeviceInformation;
    UINT32 DataLength;
}PosStatisticsHeader;

// PosValueStatisticEntry
// The structure holds the statistic entry value
//      EntryName           : Statistic name,  e.g., GoodScanCount, BadScanCount, etc.
//      StatisticValue      : Current statistic value

typedef struct _PosValueStatisticsEntry
{
    _Field_z_ wchar_t EntryName[STATISTICS_STRING_SIZE];
    volatile LONG  Value;
}PosValueStatisticsEntry;

//------------------------------------
// BarcodeScanner Event Data formats
//------------------------------------

// BarcodeScannerDataReceived
// Scan data should fill the ReadFile buffer in this order:
//    PosBarcodeScannerDataReceivedEventData structure (length = sizeof(PosBarcodeScannerDataReceivedEventData))
//    Scan Data (length = ScanDataLength)
//    Label Data (length = ScanDataLabelLength)
typedef struct _PosBarcodeScannerDataReceivedEventData
{
    PosEventDataHeader Header;
    UINT32 DataType;
    UINT32 ScanDataLength;
    UINT32 ScanDataLabelLength;
} PosBarcodeScannerDataReceivedEventData;

// Error occurred data should fill the ReadFile buffer in this order:
//    PosBarcodeScannerErrorOccurredData structure (length = sizeof(PosBarcodeScannerErrorOccurredData))
//    Error Message (length = MessageLength)
//    Scan Data (length = ScanDataLength)
//    Scan Data Label (length = ScanDataLabelLength)

typedef struct _PosBarcodeScannerErrorOccurredEventData
{
    PosEventDataHeader Header;
    LONG IsRetriable;
    DriverUnifiedPosErrorSeverity Severity;
    UINT32 VendorErrorCode;
    DriverUnifiedPosErrorReason Reason;
    UINT32 ExtendedReason;
    UINT32 MessageLength;
    PosBarcodeScannerDataReceivedEventData PartialData;
} PosBarcodeScannerErrorOccurredEventData;

// PosDeviceInformation
// The structure holds the device information value required by UPOS
//      All entries are as define in UPOS standard.
typedef struct _PosBarcodeScanDataTypeData
{
    UINT32 dataLengthInBytes;
    UINT32 scanDataTypes_0;
} PosBarcodeScanDataTypeData;


// Image preview data should fill the ReadFile buffer in this order:
//    PosBarcodeScannerImagePreviewData structure (length = sizeof(PosBarcodeScannerImagePreviewData))
//    Preview image data (length = DataLength)
// Since there's no additional data, just typedef the header.
typedef struct _PosEventDataHeader PosBarcodeScannerImagePreviewEventData;

//------------------------------------
// Printer data formats
//------------------------------------

typedef struct _PosPrinterErrorEventData
{
    PosEventDataHeader Header;

    DriverUnifiedPosErrorSeverity Severity;
    DriverUnifiedPosErrorReason Reason;
    UINT32 ExtendedReason;
    UINT32 MessageLength;
    _Field_size_(MessageLength) WCHAR Message[ANYSIZE_ARRAY];

} PosPrinterErrorEventData;

typedef struct _PrinterTransactionPrintData
{
    UINT32 Station;
    UINT32 TransactionMode;
} PrinterTransactionPrintData;

typedef struct _PrinterPrintNormalData
{
    UINT32 Station;
    PosStringType PrintString;
} PrinterPrintNormalData;

typedef struct _PrinterPrintSavedBitmapData
{
    UINT32 BitmapNumber;
    UINT32 Station;
} PrinterPrintSavedBitmapData;

typedef struct _PrinterRotatePrintData
{
    UINT32 Station;
    UINT32 Rotation;
    LONG IncludeBitmaps;
} PrinterRotatePrintData;

typedef struct PrinterValidateDataArgs
{
    UINT32 Station;
    PosStringType String;
} PrinterValidateDataArgs;

//------------------------------------
// CashDrawer Event Data formats
//------------------------------------

#pragma pack(push, 1)
typedef struct _CashDrawerAlarmTimeoutExpiredEventData
{
    PosEventDataHeader Header;
    BOOLEAN UseSoftwareAlarm;
} CashDrawerAlarmTimeoutExpiredEventData;
#pragma pack(pop)

typedef struct _ConnectRemotePosDeviceParameters
{
    BOOLEAN DisassociateOnFinalClose;
} ConnectRemotePosDeviceParameters;

//------------------------------------
// LineDisplay data types (formats)
//------------------------------------

typedef struct _LineDisplayCreateWindowData
{
    UINT32 viewportRow;
    UINT32 viewportColumn;
    UINT32 viewportHeight;
    UINT32 viewportWidth;
    UINT32 windowHeight;
    UINT32 windowWidth;
} LineDisplayCreateWindowData;

typedef struct _LineDisplayWindowDisplayTextData
{
    LineDisplayTextDisplayAttribute textAttribute;
    PosStringType textToDisplay;
} LineDisplayWindowDisplayTextData;

typedef struct _LineDisplayWindowDisplayTextAtData
{
    LineDisplayTextDisplayAttribute textAttribute;
    UINT32 row;
    UINT32 column;
    PosStringType textToDisplay;
} LineDisplayWindowDisplayTextAtData;

typedef struct _LineDisplayWindowScrollTextData
{
    LineDisplayTextScrollDirection direction;
    UINT32 units;
} LineDisplayWindowScrollTextData;

typedef struct _LineDisplayWindowDisplayBitmapData
{
    PosStringType fileName;
    UINT32 width;
    UINT32 alignmentX;
    UINT32 alignmentY;
} LineDisplayWindowDisplayBitmapData;

typedef struct _LineDisplaySetBitmapData
{
    UINT32 bitmapNumber;
    PosStringType fileName;
    UINT32 width;
    UINT32 alignmentX;
    UINT32 alignmentY;
} LineDisplaySetBitmapData;

typedef struct _LineDisplaySetDescriptorData
{
    UINT32 descriptor;
    UINT32 attribute;
} LineDisplaySetDescriptorData;

typedef struct _LineDisplayGlyphDefinitionData
{
    UINT32 glyphCode;
    UINT32 dataLength;
} LineDisplayGlyphDefinitionData;

typedef struct _LineDisplayCharacterData
{
    UINT32 character;
} LineDisplayCharacterData;

//----------------------------------------------------------------------------------------------
//                                  Device Controls
//----------------------------------------------------------------------------------------------

// Do not recycle values because that breaks backwards compatibility.
// The next available value is _MaxDeviceControlType.  Keep _MaxDeviceControlType up to date.

typedef enum _PosDeviceControlType
{
    _MinDeviceControlType = 0,
    Invalid = 0,

    //------------------------------------
    // Common controls
    //------------------------------------

    // GetProperty
    //    Input:  PosPropertyId
    //    Output: Variable Type Value (Refer to PosPropertyId below)
    GetProperty = 1,

    // SetProperty
    //    Input:  PosPropertyId + Variable Type Value (Refer to PosPropertyId below)
    //    Output: None
    SetProperty = 2,

    // ClaimDevice
    //    Input:  None
    //    Output: BOOL (success = TRUE)
    ClaimDevice = 3,

    // ReleaseDevice
    //    Input:  None
    //    Output: None
    ReleaseDevice = 4,

    // RetainDevice
    //    Input:  None
    //    Output: None
    RetainDevice = 5,

    // RetrieveStatistics
    //    Input:  None
    //    Output: PosStatisticsHeader
    RetrieveStatistics = 6,

    // ResetStatistics
    //    Input:  PosStringType (could be multiple PosStringType strings)
    //    Output: None
    ResetStatistics = 7,

    // UpdateStatistics
    //    Input:  PosStatisticsHeader
    //            PosValueStatisticsEntry (statistics data buffer per API spec)
    //    Output: None
    UpdateStatistics = 8,

    // CheckHealth
    //    Input:  DriverUnifiedPosHealthCheckLevel
    //    Output: PosStringType
    CheckHealth = 9,

    // GetDeviceBasics
    //  Input:  UINT32
    //    Output: PosDeviceBasicsType
    GetDeviceBasics = 10,

    //------------------------------------
    // Scanner controls
    //------------------------------------
    BarcodeScannerInjectEvent = 11,

    //------------------------------------
    // MSR controls
    //------------------------------------

    // MsrRetrieveDeviceAuthentication
    //    Input:  length, BYTE[length]
    //    Output: BYTE[length]
    MsrRetrieveDeviceAuthentication = 12,

    // MsrAuthenticateDevice
    //    Input:  length, BYTE[length]
    //    Output: BYTE[length]
    MsrAuthenticateDevice = 13,

    // MsrDeAuthenticateDevice
    //    Input:  length, BYTE[length]
    //    Output: BYTE[length]
    MsrDeAuthenticateDevice = 14,

    // MsrUpdateKey
    //    Input:  string, string
    //    Output: None
    MsrUpdateKey = 15,

    // Added in POS Driver Version 1.2

    // Start Barcode Scanner
    StartBarcodeScannerSoftwareTrigger = 16,

    // Stop Barcode Scanner
    StopBarcodeScannerSoftwareTrigger = 17,


    //------------------------------------
    // PointOfSalePrinter controls
    //------------------------------------

    //PrinterClearOutput
    //  Input: None
    //  Output: None
    PrinterClearOutput = 18,

    //PrinterSlipWaitForPaperInserted
    //  Input: UINT32 timeout
    //  Output: None
    PrinterSlipWaitForPaperInserted = 19,

    //PrinterSlipWaitForPaperRemoved
    //  Input: UINT32 timeout
    //  Output: None
    PrinterSlipWaitForPaperRemoved = 20,

    //PrinterChangePrintSide
    //  Input: UINT32 (PointOfServicePrinterPrintSide)
    //  Output: None
    PrinterChangePrintSide = 21,

    //PrinterCutPaper
    //  Input: UINT32
    //  Output: None
    PrinterCutPaper = 22,

    //PosPrinterDrawRuledLine
    //  Input: PosPrinterDrawRuledLineArgs
    //  Output: None
    PrinterDrawRuledLine = 23,

    //PrinterSlipOpenJaws
    //  Input: None
    //  Output: None
    PrinterSlipOpenJaws = 24,

    //PrinterSlipCloseJaws
    //  Input: None
    //  Output: None
    PrinterSlipCloseJaws = 25,

    //PrinterMarkFeed
    //  Input: UINT32 (PointOfServicePrinterMarkFeedType)
    //  Output: None
    PrinterMarkFeed = 26,

    //PrinterPageModePrint
    //  Input: UINT32 (PointOfServicePrinterPageModePrintType)
    //  Output: None
    PrinterPageModePrint = 27,

    //PrinterPrintBarcode
    //  Input: PosPrinterPrintBarcodeArgs
    //  Output: None
    PrinterPrintBarcode = 28,

    //PrinterPrintImmediate
    //  Input: UINT32 (PointOfServicePrinterStation) + PosStringType
    //  Output: None
    //PrinterPrintImmediate = 29,

    //PrinterPrintMemoryBitmapStart
    //  Input: PosPrinterPrintMemoryBitmapArgs
    //  Output:    UINT64(Handle)
    PrinterPrintMemoryBitmapStart = 30,

    //PrinterPrintMemoryBitmapFill
    //  Input: PosBitmapFillType, Byte[]
    //  Output:    None
    PrinterPrintMemoryBitmapFill = 31,

    //PrinterPrintNormal
    //  Input: UINT32 (PointOfServicePrinterStation) + PosStringType
    //  Output: None
    PrinterPrintNormal = 32,

    //PrinterRotatePrint
    //  Input: UINT32 (PointOfServicePrinterStation) + UINT32 (PointOfServicePrinterRotation) + BOOL
    //  Output: None
    PrinterRotatePrint = 33,

    //PrinterSetBitmapStart
    //  Input: PosPrinterSetBitmapArgs
    //  Output: HANDLE
    PrinterSetBitmapStart = 34,

    //PrinterSetBitmapFill
    //  Input: PosBitmapFillType, Byte[]
    //  Output: None
    PrinterSetBitmapFill = 35,

    //PrinterSetLogo
    //  Input: UINT32(PointOfServicePrinterLogoLocation) + PosStringType
    //  Output: None
    //PrinterSetLogo = 36,

    //PrinterTransactionPrint
    //  Input: UINT32(PointOfServicePrinterStation) + UINT32 (PointOfServicePrinterTransactionMode) aka PrinterTransactionPrintData
    //  Output: None
    PrinterTransactionPrint = 37,

    //PrinterValidateData
    //  Input: UINT32(PointOfServicePrinterStation) + PosStringType aka PrinterValidateDataArgs
    //  Output: None
    PrinterValidateData = 38,

    //PrinterPrintSavedBitmap
    //  Original Input: UINT32 (assumes the station is the receipt station)
    //  Input (as of v1.8): PrinterPrintSavedBitmapData 
    //  Output: None
    PrinterPrintSavedBitmap = 39,

    //------------------------------------
    // CashDrawer controls
    //------------------------------------

    //CashDrawerOpenDrawer
    //  Input: None
    //  Output: None
    CashDrawerOpenDrawer = 40,

    //CashDrawerCreateDrawerCloseAlarm
    //  Input: CashDrawerCreateDrawerCloseAlarmArgs
    //  Output: BOOL
    CashDrawerCreateDrawerCloseAlarm = 41,

    //CashDrawerCancelWait
    //  Input: None
    //  Output: None
    CashDrawerCancelWait = 42,

    //------------------------------------
    // Additional Common controls introduced in v1.5
    //------------------------------------

    // ConnectRemotePosDevice
    // Input: ConnectRemotePosDeviceParameters
    // Output: None
    ConnectRemotePosDevice = 43,

    PrinterWaitForJobComplete = 44,

    //------------------------------------
    // LineDisplay controls
    //------------------------------------

    //LineDisplayCreateWindow
    //  Input:  LineDisplayCreateWindowData
    //  Output: None
    LineDisplayCreateWindow = 50,

    //LineDisplayDestroyWindow
    //  Input:  UINT32 (windowId)
    //  Output: None
    LineDisplayDestroyWindow = 51,

    //LineDisplayRefreshWindow
    //  Input:  UINT32 (window id)
    //  Output: None
    LineDisplayRefreshWindow = 52,

    //LineDisplayWindowDisplayText
    //  Input:  LineDisplayWindowDisplayTextData
    //  Output: None
    LineDisplayWindowDisplayText = 53,

    //LineDisplayWindowDisplayTextAt
    //  Input:  LineDisplayWindowDisplayTextAtData
    //  Output: None
    LineDisplayWindowDisplayTextAt = 54,

    //LineDisplayWindowScrollText
    //  Input:  LineDisplayWindowScrollTextData
    //  Output: None
    LineDisplayWindowScrollText = 55,

    //LineDisplayWindowClearText
    //  Input:  None
    //  Output: None
    LineDisplayWindowClearText = 56,

    //LineDisplayWindowDisplayBitmap
    //  Input:  LineDisplayWindowDisplayBitmapData
    //  Output: None
    LineDisplayWindowDisplayBitmap = 57,

    //LineDisplayWindowSetBitmap
    //  Input:  LineDisplaySetBitmapData
    //  Output: None
    LineDisplaySetBitmap = 58,

    //LineDisplaySetDescriptor
    //  Input:  LineDisplaySetDescriptorData
    //  Output: None
    LineDisplaySetDescriptor = 59,

    //LineDisplayWindowClearDescriptors
    //  Input:  None
    //  Output: None
    LineDisplayClearDescriptors = 60,

    //LineDisplayDefineGlyph
    //  Input:  LineDisplayGlyphDefinitionData
    //  Output: None
    LineDisplayDefineGlyph = 61,

    //LineDisplayReadCharacterAtCursor
    //  Input:  None
    //  Output: UINT32 (cursorData)
    LineDisplayReadCharacterAtCursor = 62,

    //------------------------------------
    // Scanner controls
    //------------------------------------

    //   Input: BarcodeScannerSymbology
    //   Output: BarcodeSymbologyAttributesData
    BarcodeScannerGetSymbologyAttributes = 80,

    //   Input: BarcodeSymbologyAttributesData
    //   Output: None
    BarcodeScannerSetSymbologyAttributes = 81,

    // Update the following value when new device controls show up.
    _MaxDeviceControlType = 82

} PosDeviceControlType;

typedef struct _PosDeviceBasicsType
{
    UINT32 Version;                    // (Major << 16) | (Minor)
    PosDeviceType DeviceType;        // Barcode Scanner, MSR, etc
    UINT32 RecommendedBufferSize;    // Recommended by the driver
} PosDeviceBasicsType;

//------------------------------------
// CashDrawer Control Data formats
//------------------------------------

typedef struct _CashDrawerCreateDrawerCloseAlarmArgs
{
    UINT32 BeepTimeout;
    UINT32 BeepFrequency;
    UINT32 BeepDuration;
    UINT32 BeepDelay;
}CashDrawerCreateDrawerCloseAlarmArgs;

//----------------------------------------------------------------------------------------------
//                                  Device Properties
//----------------------------------------------------------------------------------------------

// GetProperty I/O:
//   Input args:    just the PosPropertyId identifying the property to fetch.
//   Output args:   just the property value (specific structs as applicable, BOOL for bool, PosStringType for string).
// SetProperty I/O:
//   Input args:    PosPropertyId followed by the property value (specific structs as applicable, BOOL for bool, PosStringType for string).
//   Output args:   None


// Do not recycle values because that breaks backwards compatibility.
// The next available value is 20.  Keep this comment up to date.

typedef enum _PosPropertyId
{
    //------------------------------------
    // Common properties
    //------------------------------------

    // IsEnabled : BOOL (read/write)
    // An enabled device is expected to be powered on and fully functional.
    // In a disabled state, the device is not expected to generate input and can be powered down.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : IsEnabled
    //   Output args   : BOOL : Current boolean value of IsEnabled
    //
    // SetProperty I/O
    //   Input args    : <PosPropertyId : IsEnabled>
    //                   <BOOL : Boolean value to update IsEnabled state>
    //   Output args   : None
    //
    IsEnabled = 1,

    // IsDisabledOnDataReceived : BOOL (read/write)
    // Indicates whether the scanner should automatically disable itself after each scan
    // event. This provides an opportunity for the hardware to enter an idle power
    // saving mode as frequently as possible.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : IsDisabledOnDataReceived
    //   Output args   : BOOL: Current boolean value of IsDisabledOnDataReceived
    //
    // SetProperty I/O
    //   Input args    : PosPropertyId : IsDisabledOnDataReceived
    //                   BOOL : Boolean value to update IsDisabledOnDataReceived state
    //   Output args   : None
    //
    IsDisabledOnDataReceived = 4,

    // PowerState: UINT32 (readonly)
    // Reports the current power state of the device.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : PowerState
    //   Output args   : UINT32: Current UINT32 value of PowerState
    //
    PowerState = 352,

    //------------------------------------
    // BarcodeScanner properties
    //------------------------------------

    // BarcodeScannerIsDecodeDataEnabled : BOOL (read/write)
    // When TRUE, the driver must return decoded bar code data in the form of
    // ScanDataLabel when raising a data received event in addition to ScanData.
    // Decoded barcode data typically only contains data from the scanner with
    // header information, scanner generated symbol character and length identification removed.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerIsDecodeDataEnabled
    //   Output args   : BOOL: Current boolean value of BarcodeScannerIsDecodeDataEnabled
    //
    // SetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerIsDecodeDataEnabled
    //                   BOOL : Boolean value to update BarcodeScannerIsDecodeDataEnabled state
    //   Output args   : None
    //
    BarcodeScannerIsDecodeDataEnabled = 5,

    // BarcodeScannerCapabilities : PosBarcodeScannerCapabilitiesType (readonly)
    // Returns the barcode scanner capability structure.
    //
    // For example, a barcode scanner may support imaging and
    // standard power reporting but not statistics updating and reporting.
    //
    //  PosBarcodeScannerCapabilitiesType DeviceCapability =
    //  {
    //      Standard;   // DriverUnifiedPosPowerReportingType PowerReportingType
    //      0;          // LONG IsStatisticsReportingSupported
    //      0;          // LONG IsStatisticsUpdatingSupported
    //      1;          // LONG IsImagePreviewSupported
    //  };
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerCapabilities
    //   Output args   : PosBarcodeScannerCapabilities Structure : Structure filled with device capability
    //
    // SetProperty I/O
    //   Input args    : None
    //   Output args   : None
    //
    BarcodeScannerCapabilities = 6,

    // BarcodeScannerSupportedSymbologies : UINT32 + UINT32[] (readonly)
    // Returns an array representing the complete list of symbologies that the
    // barcode scanner is capable of reading.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerSupportedSymbologies
    //   Output args   : UINT32 : The number of bytes required for the array of symbologies, including this UINT32
    //                 : UINT32 [] : Array of DWORD symbologies. Refer to BarcodeSymbology enumeration
    //                                (PointOfServiceCommonTypes.h) for symbology definition.
    //
    // SetProperty I/O
    //   Input args    : None
    //   Output args   : None
    //
    BarcodeScannerSupportedSymbologies = 7,

    // BarcodeScannerActiveSymbologies : UINT32 + UINT32[] (writeonly)
    // The symbologies that the barcode scanner is actively handling.
    //
    // GetProperty I/O
    //   Input args    : None
    //   Output args   : None
    //
    // SetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerActiveSymbologies
    //   Output args   : UINT32 : The number of bytes required for the array of symbologies, including this UINT32
    //                 : UINT32 [] : Array of DWORD symbologies. Refer to BarcodeSymbology enumeration
    //                               (PointOfServiceCommonTypes.h) for symbology definition.
    //
    BarcodeScannerActiveSymbologies = 8,

    // BarcodeScannerSupportedProfiles : PosStringType[] (readonly)
    // Returns the list of supported driver defined device configuration profiles.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerSupportedProfiles
    //   Output args   : PosProfileType : A PosProfileType that contains the total size and count of strings
    //                   PosStringTypes[] : An array of PosStringTypes containing list of supported profiles
    //
    // SetProperty I/O
    //   Input args    : None
    //   Output args   : None
    //
    BarcodeScannerSupportedProfiles = 9,

    // BarcodeScannerActiveProfile : PosStringType (writeonly)
    // Sets the active device configuration profile.Configure the driver using one of the driver
    // or manufacture defined profiles in the list returned by the BarcodeScannerSupportedProfiles
    // property. For example, you may have one profile for warehouse staff and another profile
    // for the sales dept. Each profile is expected to configure the device based on the
    // driver/manufacturer definition
    //
    // GetProperty I/O
    //   Input args    : None
    //   Output args   : None
    //
    // SetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerActiveProfile
    //                   PosStringType : Profile requested by current client to be set active.
    //   Output args   : None
    //
    BarcodeScannerActiveProfile = 10,

    //------------------------------------
    // MagneticStripeReader properties
    //------------------------------------

    // MagneticStripeReaderIsDecodeDataEnabled : BOOL (read/write)
    MagneticStripeReaderIsDecodeDataEnabled = 11,

    // MagneticStripeReaderCapabilities : PosMagneticStripeReaderCapabilitiesType (readonly)
    MagneticStripeReaderCapabilities = 12,

    // MagneticStripeReaderSupportedCardTypes : MSR_SUPPORTED_CARD_TYPES (readonly)
    MagneticStripeReaderSupportedCardTypes = 13,

    // MagneticStripeReaderDeviceAuthenticationProtocol : MsrAuthenticationProtocolType (readonly)
    MagneticStripeReaderDeviceAuthenticationProtocol = 14,

    // MagneticStripeReaderErrorReportingType : MsrErrorReportingType (read/write)
    MagneticStripeReaderErrorReportingType = 15,

    // MagneticStripeReaderTracksToRead : MsrTrackIds (read/write)
    MagneticStripeReaderTracksToRead = 16,

    // MagneticStripeReaderIsTransmitSentinelsEnabled : BOOL (read/write)
    MagneticStripeReaderIsTransmitSentinelsEnabled = 17,

    // MagneticStripeReaderIsDeviceAuthenticated : BOOL (readonly)
    MagneticStripeReaderIsDeviceAuthenticated = 18,

    // MagneticStripeReaderDataEncryptionAlgorithm: MsrDataEncryption (read/write)
    MagneticStripeReaderDataEncryptionAlgorithm = 19,

    // BarcodeScannerVideoDeviceId : PosStringType (readonly)
    // Returns the video device id for the camera barcode scanner.
    //
    // GetProperty I/O
    //   Input args    : PosPropertyId : BarcodeScannerVideoDeviceId
    //   Output args   : PosStringType : The video device id associated with camera lens.
    //
    BarcodeScannerVideoDeviceId = 20,

    //------------------------------------
    // PointOfServicePrinter properties
    //------------------------------------

    //PrinterCapabilities: PointOfServicePrinterCapabilitiesType (readonly)
    PrinterCapabilities = 100,

    //PrinterCartridgeNotifyEnabled: BOOL (read/write)
    PrinterCartridgeNotifyEnabled = 101,

    //PrinterSupportedCharacterSets: UINT32 + UINT32[] (readonly)
    //UINT32: The number of bytes required for the array, including this UINT32
    PrinterSupportedCharacterSets = 102,

    //PrinterErrorLevel: UINT32 (readonly)
    //PrinterErrorLevel = 103,

    //PrinterErrorStations:  UINT32 + UINT32[] (readonly)
    //UINT32: The number of bytes required for the array, including this UINT32
    //PrinterErrorStations = 104,

    //PrinterErrorString: PosStringType (readonly)
    //PrinterErrorString = 105,

    //PrinterFlagWhenIdle: BOOL (read/write)
    PrinterFlagWhenIdle = 106,

    //PrinterFontTypefaceList: PosStringType (readonly)
    PrinterFontTypefaceList = 107,

    //PrinterMapCharacterSet: BOOL (read/write)
    PrinterMapCharacterSet = 108,

    //PrinterRotateSpecial: UINT32 (PointOfServicePrinterRotation)  (read/write)
    PrinterRotateSpecial = 109,

    //PrinterSupportedJournalLineChars: UINT32 +  UINT32[] (readonly)
    //UINT32: The number of bytes required for the array, including this UINT32
    PrinterSupportedJournalLineChars = 110,

    //PrinterSupportedReceiptLineChars:  UINT32 + UINT32[] (readonly)
    //UINT32: The number of bytes required for the array, including this UINT32
    PrinterSupportedReceiptLineChars = 111,

    //PrinterSupportedReceiptBarcodeRotations:  UINT32 + UINT32[] (readonly)
    //UINT32: The number of bytes required for the array, including this UINT32
    PrinterSupportedReceiptBarcodeRotations = 112,

    //PrinterSupportedReceiptBitmapRotations:  UINT32 + UINT32[] (readonly)
    //UINT32: The number of bytes required for the array, including this UINT32
    PrinterSupportedReceiptBitmapRotations = 113,

    //PrinterSupportedSlipLineChars:  UINT32 + UINT32[] (readonly)
    //UINT32: The number of bytes required for the array, including this UINT32
    PrinterSupportedSlipLineChars = 114,

    //PrinterSupportedSlipBarcodeRotations: UINT32 +  UINT32[] (readonly)
    //UINT32: The number of bytes required for the array, including this UINT32
    PrinterSupportedSlipBarcodeRotations = 115,

    //PrinterSupportedSlipBitmapRotations:  UINT32 + UINT32[] (readonly)
    //UINT32: The number of bytes required for the array, including this UINT32
    PrinterSupportedSlipBitmapRotations = 116,

    //PrinterCharacterSet: UINT32 (read/write)
    PrinterCharacterSet = 117,

    //PrinterCoverOpen: BOOL (readonly)
    PrinterCoverOpen = 118,

    //PrinterMapMode: UINT32 (DriverPosPrinterMapMode) (read/write)
    PrinterMapMode = 119,

    //PrinterPageModeArea: PrinterWindowsFoundationSize (readonly)
    PrinterPageModeArea = 120,

    //PrinterPageModeDescriptor: UINT32 (PrinterPageModeDescriptor) (readonly)
    PrinterPageModeDescriptor = 121,

    //PrinterPageModeHorizontalPosition: UINT32 (read/write)
    PrinterPageModeHorizontalPosition = 122,

    //PrinterPageModePrintArea: PosPrinterWindowsFoundationRect (read/write)
    PrinterPageModePrintArea = 123,

    //PrinterPageModePrintDirection: UINT32 (PointOfServicePrinterPageModeDirectionTypes) (read/write)
    PrinterPageModePrintDirection = 124,

    //PrinterPageModeStation: UINT32 (PointOfServicePrinterStation) (read/write)
    PrinterPageModeStation = 125,

    //PrinterPageModeVerticalPosition: UINT32 (read/write)
    PrinterPageModeVerticalPosition = 126,

    //PrinterJournalLineChars: UINT32 (read/write)
    PrinterJournalLineChars = 127,

    //PrinterJournalLineHeight: UINT32 (read/write)
    PrinterJournalLineHeight = 128,

    //PrinterJournalLineSpacing: UINT32 (read/write)
    PrinterJournalLineSpacing = 129,

    //PrinterJournalLineWidth: UINT32 (readonly)
    PrinterJournalLineWidth = 130,

    //PrinterJournalLetterQuality: BOOL (read/write)
    PrinterJournalLetterQuality = 131,

    //PrinterJournalPaperEmpty: BOOL (readonly)
    PrinterJournalPaperEmpty = 132,

    //PrinterJournalPaperNearEnd: BOOL (readonly)
    PrinterJournalPaperNearEnd = 133,

    //PrinterJournalCartridgeState: UINT32 (PosPrinterCartridgeState) (readonly)
    PrinterJournalCartridgeState = 134,

    //PrinterJournalCurrentCartridge: UINT32 (PointOfServicePrinterColorCapabilities) (read/write)
    PrinterJournalCurrentCartridge = 135,

    //PrinterReceiptLineChars: UINT32 (read/write)
    PrinterReceiptLineChars = 136,

    //PrinterReceiptLineHeight: UINT32 (read/write)
    PrinterReceiptLineHeight = 137,

    //PrinterReceiptLineSpacing: UINT32 (read/write)
    PrinterReceiptLineSpacing = 138,

    //PrinterReceiptLineWidth: UINT32 (readonly)
    PrinterReceiptLineWidth = 139,

    //PrinterReceiptLetterQuality: BOOL (read/write)
    PrinterReceiptLetterQuality = 140,

    //PrinterReceiptPaperEmpty: BOOL (readonly)
    PrinterReceiptPaperEmpty = 141,

    //PrinterReceiptPaperNearEmpty: BOOL (readonly)
    PrinterReceiptPaperNearEmpty = 142,

    //PrinterReceiptSidewaysMaxLines: UINT32 (readonly)
    PrinterReceiptSidewaysMaxLines = 143,

    //PrinterReceiptSidewaysMaxChars: UINT32 (readonly)
    PrinterReceiptSidewaysMaxChars = 144,

    //PrinterReceiptLinesToPaperCut: UINT32 (readonly)
    PrinterReceiptLinesToPaperCut = 145,

    //PrinterReceiptCartridgeState: UINT32 (PointOfServicePrinterCartridgeStateType) (readonly)
    PrinterReceiptCartridgeState = 146,

    //PrinterReceiptCurrentCartridge: UINT32 (PointOfServicePrinterColorCapabilities) (read/write)
    PrinterReceiptCurrentCartridge = 147,

    //PrinterSlipLineChars: UINT32 (read/write)
    PrinterSlipLineChars = 148,

    //PrinterSlipLineHeight: UINT32 (read/write)
    PrinterSlipLineHeight = 149,

    //PrinterSlipLineSpacing: UINT32 (read/write)
    PrinterSlipLineSpacing = 150,

    //PrinterSlipLineWidth: UINT32 (readonly)
    PrinterSlipLineWidth = 151,

    //PrinterSlipLetterQuality: BOOL (read/write)
    PrinterSlipLetterQuality = 152,

    //PrinterSlipPaperEmpty: BOOL (readonly)
    PrinterSlipPaperEmpty = 153,

    //PrinterSlipPaperNearEmpty: BOOL (readonly)
    PrinterSlipPaperNearEmpty = 154,

    //PrinterSlipSidewaysMaxLines: UINT32 (readonly)
    PrinterSlipSidewaysMaxLines = 155,

    //PrinterSlipSideWaysMaxChars: UINT32 (readonly)
    PrinterSlipSideWaysMaxChars = 156,

    //PrinterSlipMaxLines: UINT32 (readonly)
    PrinterSlipMaxLines = 157,

    //PrinterSlipLinesNearEndToEnd: UINT32 (readonly)
    PrinterSlipLinesNearEndToEnd = 158,

    //PrinterSlipPrintSide: UINT32 (PointOfServicePrinterPrintSide) (readonly)
    PrinterSlipPrintside = 159,

    //PrinterSlipCartridgeState: UINT32 (PointOfServicePrinterCartridgeStateType) (readonly)
    PrinterSlipCartridgeState = 160,

    //PrinterSlipCurrentCartridge: UINT32 (PointOfServicePrinterColorCapabilities) (read/write)
    PrinterSlipCurrentCartridge = 161,

    //PosPrinterStatus: PosPrinterStatus
    PrinterStatusProp = 162,

    //------------------------------------
    // CashDrawer properties
    //------------------------------------

    //CashDrawerIsDrawerOpened: BOOL (readonly)
    CashDrawerIsDrawerOpened = 200,

    //CashDrawerCapabilities: CashDrawerCapabilitiesType (readonly)
    CashDrawerCapabilities = 201,

    //CashDrawerStatus: CashDrawerStatusType
    CashDrawerStatusProp = 202,

    //------------------------------------
    // LineDisplay properties
    //------------------------------------

    //LineDisplayCapabilities: LineDisplayCapabilitiesType (readonly)
    LineDisplayCapabilities = 303,

    //LineDisplayCurrentWindow: UINT32 (CurrentWindow) (read/write)
    LineDisplayCurrentWindow = 314,

    //LineDisplayWindowSizeInCharacters: LineDisplayCharactersSize (readonly)
    LineDisplayWindowSizeInCharacters = 315,

    //LineDisplayWindowInterCharacterWaitIntervalL: UINT32 (InterCharacterWait) (read/write)
    LineDisplayWindowInterCharacterWaitInterval = 316,

    //LineDisplayPhysicalDeviceName: PosStringType (PhysicalDeviceName) (readonly)
    LineDisplayPhysicalDeviceName = 330,

    //LineDisplayPhysicalDeviceDescription: PosStringType (PhysicalDescription) (readonly)
    LineDisplayPhysicalDeviceDescription = 331,

    //LineDisplayDeviceControlDescription: PosStringType (ControlDescription) (readonly)
    LineDisplayDeviceControlDescription = 332,

    //LineDisplayDeviceControlVersion: PosStringType (ControlVersion) (readonly)
    LineDisplayDeviceControlVersion = 333,

    //LineDisplayDeviceServiceVersion: PosStringType (ServiceVersion) (readonly)
    LineDisplayDeviceServiceVersion = 334,

    //LineDisplayCursorType: UINT32 (CursorType) (read/write)
    LineDisplayCursorTypeProperty = 335,

    //LineDisplayAutoUpdateEnabled: BOOL (CursorUpdate) (read/write)
    LineDisplayCursorAutoUpdateEnabled = 336,	

    //LineDisplayCursorPosition: LineDisplayCursorCoordinates (read/write)
    LineDisplayCursorPosition = 337,

    //LineDisplayScreenModeList: PosStringType (readonly)
    LineDisplayScreenModeList = 338,

    //LineDisplayScreenMode: UINT32 (read/write)
    LineDisplayScreenMode = 339,

    //LineDisplayMaxBitmapSize: UINT32 (readonly)
    LineDisplayMaxBitmapSizeInPixels = 340,

    //LineDisplayCharacterSetList: PosStringType (readonly)
    LineDisplayCharacterSetList = 341,

    //LineDisplayDeviceBrightness: UINT32 (read/write)
    LineDisplayDeviceBrightness = 342,

    //LineDisplayBlinkRate: UINT32 (read/write)
    LineDisplayBlinkRate = 343,

    //LineDisplayCharacterSet: UINT32 (read/write)
    LineDisplayCharacterSet = 344,

    //LineDisplayMapCharacterSet: BOOL (read/write)
    LineDisplayMapCharacterSet = 345,

    //LineDisplayGlyphSize: LineDisplayGlyphSizeType
    LineDisplayGlyphSizeInPixels = 346,

    //LineDisplayCustomGlyphList: PosStringType (readonly)
    LineDisplayCustomGlyphList = 347,

    //LineDisplayMarqueeFormat: UINT32 (read/write)
    LineDisplayMarqueeFormat = 348,

    //LineDisplayMarqueeRepeatWait: UINT32 (read/write)
    LineDisplayMarqueeRepeatWait = 349,

    //LineDisplayMarqueeUnitWait: UINT32 (read/write)
    LineDisplayMarqueeUnitWait = 350,

    //LineDisplayMarqueeType: UINT32 (read/write)
    LineDisplayMarqueeType = 351

    // 352 is reserved for PowerState

} PosPropertyId;

typedef struct _PosBarcodeScannerCapabilitiesType
{
    DriverUnifiedPosPowerReportingType PowerReportingType;
    LONG IsStatisticsReportingSupported; // whether the Statistics IOCTLs/Properties are supported
    LONG IsStatisticsUpdatingSupported; // whether IOCTL_POINT_OF_SERVICE_UPDATE_STATISTICS is supported.
    LONG IsImagePreviewSupported; // whether image data can be obtained from the barcode scanner device.
} PosBarcodeScannerCapabilitiesType;

typedef struct _PosBarcodeScannerCapabilitiesType2
{
    PosBarcodeScannerCapabilitiesType PosBarcodeScannerCapabilities;
    LONG IsSoftwareTriggerSupported; // whether software trigger is supported by the barcode scanner device.
} PosBarcodeScannerCapabilitiesType2;

typedef struct _PosMagneticStripeReaderCapabilitiesType
{
    DriverUnifiedPosPowerReportingType PowerReportingType;
    LONG IsStatisticsReportingSupported;
    LONG IsStatisticsUpdatingSupported;
    UINT32 CardAuthenticationLength;
    UINT32 SupportedEncryptionAlgorithms;
    DriverMagneticStripeReaderAuthenticationLevel AuthenticationLevel;
    LONG IsIsoSupported;
    LONG IsJisOneSupported;
    LONG IsJisTwoSupported;
    LONG IsTrackDataMaskingSupported;
    LONG IsTransmitSentinelsSupported;
} PosMagneticStripeReaderCapabilitiesType;
//enumdefinitions
#pragma endregion

#pragma region ioctldefinitions

#define POS_EVENT_DEFAULT_SIZE              2048


// helpers
#define READABLE_POS_IOCTL(enumname) \
    CTL_CODE(FILE_DEVICE_POINT_OF_SERVICE, POINT_OF_SERVICE_COMMON_IOCTL_BASE + ((UINT32)enumname), METHOD_BUFFERED, FILE_READ_ACCESS)

#define POS_IOCTL(enumname) \
    CTL_CODE(FILE_DEVICE_POINT_OF_SERVICE, POINT_OF_SERVICE_COMMON_IOCTL_BASE + ((UINT32)enumname), METHOD_BUFFERED, FILE_WRITE_ACCESS)


#define MIN_POINT_OF_SERVICE_IOCTL_READ READABLE_POS_IOCTL(_MinDeviceControlType)
#define MAX_POINT_OF_SERVICE_IOCTL_READ READABLE_POS_IOCTL(_MaxDeviceControlType)
#define MIN_POINT_OF_SERVICE_IOCTL_WRITE POS_IOCTL(_MinDeviceControlType)
#define MAX_POINT_OF_SERVICE_IOCTL_WRITE POS_IOCTL(_MaxDeviceControlType)

#define IS_POINT_OF_SERVICE_IOCTL(x)  \
    (((x) >= MIN_POINT_OF_SERVICE_IOCTL_READ && (x) <= MAX_POINT_OF_SERVICE_IOCTL_READ) || ((x) >= MIN_POINT_OF_SERVICE_IOCTL_WRITE && (x) <= MAX_POINT_OF_SERVICE_IOCTL_WRITE))

// Device IOCTLs

#define IOCTL_POINT_OF_SERVICE_GET_PROPERTY \
    READABLE_POS_IOCTL(GetProperty)

#define IOCTL_POINT_OF_SERVICE_SET_PROPERTY \
    POS_IOCTL(SetProperty)

#define IOCTL_POINT_OF_SERVICE_CLAIM_DEVICE \
    POS_IOCTL(ClaimDevice)

#define IOCTL_POINT_OF_SERVICE_RELEASE_DEVICE \
    POS_IOCTL(ReleaseDevice)

#define IOCTL_POINT_OF_SERVICE_RETAIN_DEVICE \
    POS_IOCTL(RetainDevice)

#define IOCTL_POINT_OF_SERVICE_CONNECT_REMOTE_DEVICE \
    POS_IOCTL(ConnectRemotePosDevice)

#define IOCTL_POINT_OF_SERVICE_RETRIEVE_STATISTICS \
    READABLE_POS_IOCTL(RetrieveStatistics)

#define IOCTL_POINT_OF_SERVICE_RESET_STATISTICS \
    POS_IOCTL(ResetStatistics)

#define IOCTL_POINT_OF_SERVICE_UPDATE_STATISTICS \
    POS_IOCTL(UpdateStatistics)

#define IOCTL_POINT_OF_SERVICE_CHECK_HEALTH \
    POS_IOCTL(CheckHealth)

#define IOCTL_POINT_OF_SERVICE_GET_DEVICE_BASICS \
    READABLE_POS_IOCTL(GetDeviceBasics)

#define IOCTL_POINT_OF_SERVICE_MOCK_DEVICE_INJECT_EVENT \
    POS_IOCTL(BarcodeScannerInjectEvent)

#define IOCTL_POINT_OF_SERVICE_MSR_RETRIEVE_DEVICE_AUTHENTICATION \
    POS_IOCTL(MsrRetrieveDeviceAuthentication)

#define IOCTL_POINT_OF_SERVICE_MSR_AUTHENTICATE_DEVICE \
    POS_IOCTL(MsrAuthenticateDevice)

#define IOCTL_POINT_OF_SERVICE_MSR_DEAUTHENTICATE_DEVICE \
    POS_IOCTL(MsrDeAuthenticateDevice)

#define IOCTL_POINT_OF_SERVICE_MSR_UPDATE_KEY \
    POS_IOCTL(MsrUpdateKey)

#define IOCTL_POINT_OF_SERVICE_START_BARCODE_SCANNER_TRIGGER \
    POS_IOCTL(StartBarcodeScannerSoftwareTrigger)

#define IOCTL_POINT_OF_SERVICE_STOP_BARCODE_SCANNER_TRIGGER \
    POS_IOCTL(StopBarcodeScannerSoftwareTrigger)

#define IOCTL_POINT_OF_SERVICE_PRINTER_CLEAR_OUTPUT \
    POS_IOCTL(PrinterClearOutput)

#define IOCTL_POINT_OF_SERVICE_PRINTER_SLIP_WAIT_FOR_PAPER_INSERTED \
    POS_IOCTL(PrinterSlipWaitForPaperInserted)

#define IOCTL_POINT_OF_SERVICE_PRINTER_SLIP_WAIT_FOR_PAPER_REMOVED \
    POS_IOCTL(PrinterSlipWaitForPaperRemoved)

#define IOCTL_POINT_OF_SERVICE_PRINTER_CHANGE_PRINT_SIDE \
    POS_IOCTL(PrinterChangePrintSide)

#define IOCTL_POINT_OF_SERVICE_PRINTER_CUT_PAPER \
    POS_IOCTL(PrinterCutPaper)

#define IOCTL_POINT_OF_SERVICE_PRINTER_DRAW_RULED_LINE \
    POS_IOCTL(PrinterDrawRuledLine)

#define IOCTL_POINT_OF_SERVICE_PRINTER_SLIP_OPEN_JAWS \
    POS_IOCTL(PrinterSlipOpenJaws)

#define IOCTL_POINT_OF_SERVICE_PRINTER_SLIP_CLOSE_JAWS \
    POS_IOCTL(PrinterSlipCloseJaws)

#define IOCTL_POINT_OF_SERVICE_PRINTER_MARK_FEED \
    POS_IOCTL(PrinterMarkFeed)

#define IOCTL_POINT_OF_SERVICE_PRINTER_PAGE_MODE_PRINT \
    POS_IOCTL(PrinterPageModePrint)

#define IOCTL_POINT_OF_SERVICE_PRINTER_PRINT_BARCODE \
    POS_IOCTL(PrinterPrintBarcode)

#define IOCTL_POINT_OF_SERVICE_PRINTER_PRINT_MEMORY_BITMAP_START \
    POS_IOCTL(PrinterPrintMemoryBitmapStart)

#define IOCTL_POINT_OF_SERVICE_PRINTER_PRINT_MEMORY_BITMAP_FILL \
    POS_IOCTL(PrinterPrintMemoryBitmapFill)

#define IOCTL_POINT_OF_SERVICE_PRINTER_PRINT_NORMAL \
    POS_IOCTL(PrinterPrintNormal)

#define IOCTL_POINT_OF_SERVICE_PRINTER_ROTATE_PRINT \
    POS_IOCTL(PrinterRotatePrint)

#define IOCTL_POINT_OF_SERVICE_PRINTER_SET_BITMAP_START \
    POS_IOCTL(PrinterSetBitmapStart)

#define IOCTL_POINT_OF_SERVICE_PRINTER_SET_BITMAP_FILL \
    POS_IOCTL(PrinterSetBitmapFill)

#define IOCTL_POINT_OF_SERVICE_PRINTER_TRANSACTION_PRINT \
    POS_IOCTL(PrinterTransactionPrint)

#define IOCTL_POINT_OF_SERVICE_PRINTER_VALIDATE_DATA \
    POS_IOCTL(PrinterValidateData)

#define IOCTL_POINT_OF_SERVICE_PRINTER_PRINT_SAVED_BITMAP\
    POS_IOCTL(PrinterPrintSavedBitmap)

#define IOCTL_POINT_OF_SERVICE_PRINTER_WAIT_FOR_JOB_COMPLETE\
    POS_IOCTL(PrinterWaitForJobComplete)

#define IOCTL_CASH_DRAWER_OPEN_DRAWER \
    POS_IOCTL(CashDrawerOpenDrawer)

#define IOCTL_CASH_DRAWER_CREATE_DRAWER_CLOSE_ALARM \
    POS_IOCTL(CashDrawerCreateDrawerCloseAlarm)

#define IOCTL_CASH_DRAWER_CANCEL_WAIT\
    POS_IOCTL(CashDrawerCancelWait)

#define IOCTL_LINE_DISPLAY_CREATE_WINDOW\
    POS_IOCTL(LineDisplayCreateWindow)

#define IOCTL_LINE_DISPLAY_DESTROY_WINDOW\
    POS_IOCTL(LineDisplayDestroyWindow)

#define IOCTL_LINE_DISPLAY_REFRESH_WINDOW\
    POS_IOCTL(LineDisplayRefreshWindow)

#define IOCTL_LINE_DISPLAY_WINDOW_DISPLAY_TEXT\
    POS_IOCTL(LineDisplayWindowDisplayText)

#define IOCTL_LINE_DISPLAY_WINDOW_DISPLAY_TEXT_AT\
    POS_IOCTL(LineDisplayWindowDisplayTextAt)

#define IOCTL_LINE_DISPLAY_WINDOW_SCROLL_TEXT\
    POS_IOCTL(LineDisplayWindowScrollText)

#define IOCTL_LINE_DISPLAY_WINDOW_CLEAR_TEXT\
    POS_IOCTL(LineDisplayWindowClearText)

#define IOCTL_LINE_DISPLAY_WINDOW_DISPLAY_BITMAP\
    POS_IOCTL(LineDisplayWindowDisplayBitmap)

#define IOCTL_LINE_DISPLAY_SET_BITMAP\
    POS_IOCTL(LineDisplaySetBitmap)

#define IOCTL_LINE_DISPLAY_SET_DESCRIPTOR\
    POS_IOCTL(LineDisplaySetDescriptor)

#define IOCTL_LINE_DISPLAY_CLEAR_DESCRIPTORS\
    POS_IOCTL(LineDisplayClearDescriptors)

#define IOCTL_LINE_DISPLAY_DEFINE_GLYPH\
    POS_IOCTL(LineDisplayDefineGlyph)

#define IOCTL_LINE_DISPLAY_READ_CHARACTER_AT_CURSOR\
    READABLE_POS_IOCTL(LineDisplayReadCharacterAtCursor)

#define IOCTL_POINT_OF_SERVICE_BARCODE_SCANNER_GET_SYMBOLOGY_ATTRIBUTES \
    READABLE_POS_IOCTL(BarcodeScannerGetSymbologyAttributes)

#define IOCTL_POINT_OF_SERVICE_BARCODE_SCANNER_SET_SYMBOLOGY_ATTRIBUTES \
    POS_IOCTL(BarcodeScannerSetSymbologyAttributes)

//----------------------------------------------------------------------------------------------
//                                  Device Interface IDs
//----------------------------------------------------------------------------------------------

DEFINE_GUID(GUID_DEVINTERFACE_POS_SCANNER,
    0xC243FFBD, 0x3AFC, 0x45E9, 0xB3, 0xD3, 0x2B, 0xA1, 0x8B, 0xC7, 0xEB, 0xC5);
/* Identifies the device as a Scanner. */

DEFINE_GUID(GUID_DEVINTERFACE_POS_MSR,
    0x2A9FE532, 0x0CDC, 0x44F9, 0x98, 0x27, 0x76, 0x19, 0x2F, 0x2C, 0xA2, 0xFB);
/* Identifies the device as an MSR. */

// {C7BC9B22-21F0-4F0D-9BB6-66C229B8CD33}
DEFINE_GUID(GUID_DEVINTERFACE_POS_PRINTER,
    0xC7BC9B22, 0x21F0, 0x4F0D, 0x9B, 0xB6, 0x66, 0xC2, 0x29, 0xB8, 0xCD, 0x33);
/* Identifies the device as a Printer. */

// {772E18F2-8925-4229-A5AC-6453CB482FDA}
DEFINE_GUID(GUID_DEVINTERFACE_POS_CASHDRAWER,
    0x772e18f2, 0x8925, 0x4229, 0xa5, 0xac, 0x64, 0x53, 0xcb, 0x48, 0x2f, 0xda);
/* Identifies the device as a Cash Drawer */

// {4FC9541C-0FE6-4480-A4F6-9495A0D17CD2}
DEFINE_GUID(GUID_DEVINTERFACE_POS_LINEDISPLAY,
    0x4fc9541c, 0xfe6, 0x4480, 0xa4, 0xf6, 0x94, 0x95, 0xa0, 0xd1, 0x7c, 0xd2);
/* Identifies the device as a Line Display */

//ioctldefinitions
#pragma endregion

//
// Data format related constants
//
#define MSR_TRACK_SIZE                              112
#define MSR_CARD_AUTHENTICATION_DATA_SIZE           128 // based on magtek + POS.Net
#define MSR_ADDITIONAL_SECURITY_INFORMATION_SIZE    10  // based on magtek + POS.Net
#define MSR_PROPERTY_NAME_LENGTH                    32
#define MSR_PROPERTY_VALUE_LENGTH                   32
#define MSR_KEY_SERIAL_NUMBER_SIZE                  10
#define MSR_CHALLENGE_SIZE                          8
#define MSR_SESSION_ID_SIZE                         8
#define MSR_KEY_SIZE                                128
#define MSR_KEY_NAME_SIZE                           128
#define MSR_ERROR_MAX_MESSAGE_LENGTH                128
#define MSR_CAP_CARD_AUTHENTICATION_MAX_LENGTH      128
#define MSR_CARD_TYPE_MAX_COUNT                     10
#define MSR_READER_SERIAL_NUMBER_SIZE               10

typedef enum _MsrCardType
{
    MsrCardType_Unknown,
    MsrCardType_Bank,
    MsrCardType_Aamva,
    MsrCardType_ExtendedBase,
} MsrCardType;

typedef enum _MsrDataEncryption
{
    MsrDataEncryption_None,
    MsrDataEncryption_3DEA_DUKPT,
    MsrDataEncryption_AES,
    MsrDataEncryption_ExtendedBase  // Values 0x01000000 and above are reserved for additional encryption algorithms supported by the service
} MsrDataEncryption;

typedef enum _MsrAuthenticationProtocol
{
    MsrAuthenticationProtocolType_None = 0,
    MsrAuthenticationProtocolType_ChallengeResponse,
} MsrAuthenticationProtocolType;

typedef enum _MsrTrackIds
{
    MsrTrackIds_None = 0x0,
    MsrTrackIds_Track1 = 0x1,
    MsrTrackIds_Track2 = 0x2,
    MsrTrackIds_Track3 = 0x4,
    MsrTrackIds_Track4 = 0x8
} MsrTrackIds;

typedef enum _MsrErrorReportingType
{
    MsrErrorReportingType_CardLevel = 0,
    MsrErrorReportingType_TrackLevel
} MsrErrorReportingType;

typedef enum _MsrTrackErrorType
{
    MsrTrackErrorType_Unknown = -1,
    MsrTrackErrorType_None = 0,
    MsrTrackErrorType_StartSentinelError = 1,
    MsrTrackErrorType_EndSentinelError = 2,
    MsrTrackErrorType_ParityError = 3,
    MsrTrackErrorType_LrcError = 4
} MsrTrackErrorType;

typedef enum _MsrStatusUpdateType
{
    // Power state reporting: Online
    // Valid if PowerReportingType is Standard or Advanced
    MsrStatusUpdateType_Online = 0,

    // Power state reporting: Powered off or detached from the terminal
    // Valid if PowerReportingType is Advanced
    MsrStatusUpdateType_Off,

    // Power state reporting: Powered on, but not ready or unable to respond to requests
    // Valid if PowerReportingType is Advanced
    MsrStatusUpdateType_Offline,

    // Power state reporting: Either Off or Offline
    // Valid if PowerReportingType is Standard
    MsrStatusUpdateType_OffOrOffline,

    // Authentication state reporting: device was unauthenticated
    // Valid if device supported authentication
    MsrStatusUpdateType_Unauthenticated,

    // Authentication state reporting: device was authenticated
    // Valid if device supported authentication
    MsrStatusUpdateType_Authenticated,

    // OEM status
    MsrStatusUpdateType_Extended
} MsrStatusUpdateType;

typedef enum _MsrStatisticsEntryType
{
    MsrStatisticsEntryType_Invalid = -1,

    // Number of hours the device was powered on
    MsrStatisticsEntryType_HoursPoweredCount,

    // Number of communication errors
    MsrStatisticsEntryType_CommunicationErrorCount,

    // Number of successful reads
    MsrStatisticsEntryType_GoodReadCount,

    // Number of failed reads
    MsrStatisticsEntryType_FailedReadCount,

    // Number of unreadable cards
    MsrStatisticsEntryType_UnreadableCardCount,

    // Number of successful writes - should never be used
    MsrStatisticsEntryType_GoodWriteCount,

    // Number of failed writes - should never be used
    MsrStatisticsEntryType_FailedWriteCount,

    // Number of error with missing start sentinel on track 1 (possible empty track)
    MsrStatisticsEntryType_MissingStartSentinelTrack1Count,

    // Number of Parity or LRC errors on track 1
    MsrStatisticsEntryType_ParityLRCErrorTrack1Count,

    // Number of error with missing start sentinel on track 2 (possible empty track)
    MsrStatisticsEntryType_MissingStartSentinelTrack2Count,

    // Number of Parity or LRC errors on track 2
    MsrStatisticsEntryType_ParityLRCErrorTrack2Count,

    // Number of error with missing start sentinel on track 3 (possible empty track)
    MsrStatisticsEntryType_MissingStartSentinelTrack3Count,

    // Number of Parity or LRC errors on track 3
    MsrStatisticsEntryType_ParityLRCErrorTrack3Count,

    // Number of error with missing start sentinel on track 4 (possible empty track)
    MsrStatisticsEntryType_MissingStartSentinelTrack4Count,

    // Number of Parity or LRC errors on track 4
    MsrStatisticsEntryType_ParityLRCErrorTrack4Count,

    // Number of successful card authentication data reads
    MsrStatisticsEntryType_GoodCardAuthenticationDataCount,

    // Number of failed card authentication data reads
    MsrStatisticsEntryType_FailedCardAuthenticationDataCount,

    // Number of successful calls to retrieveDeviceAuthenticationData
    MsrStatisticsEntryType_ChallengeRequestCount,

    // Number of successful card authentication attempts
    MsrStatisticsEntryType_GoodDeviceAuthenticationCount,

    // Number of failed card authentication attempts
    MsrStatisticsEntryType_FailedDeviceAuthenticationCount,


    // Count of entry types
    MsrStatisticsEntryType_Count
} MstStatisticsEntryType;

#define MSR_STATISTICS_TYPE_(_name_) MsrStatisticsEntryType_##_name_

#pragma pack(push,1)

//// Card data format
typedef struct _MSR_DATA_RECEIVED {

    MsrCardType CardType;

    unsigned char Track1EncryptedDataLength;
    unsigned char Track2EncryptedDataLength;
    unsigned char Track3EncryptedDataLength;
    unsigned char Track4EncryptedDataLength;

    unsigned char Track1EncryptedData[MSR_TRACK_SIZE];
    unsigned char Track2EncryptedData[MSR_TRACK_SIZE];
    unsigned char Track3EncryptedData[MSR_TRACK_SIZE];
    unsigned char Track4EncryptedData[MSR_TRACK_SIZE];

    unsigned char Track1MaskedDataLength;
    unsigned char Track2MaskedDataLength;
    unsigned char Track3MaskedDataLength;
    unsigned char Track4MaskedDataLength;

    unsigned char Track1MaskedData[MSR_TRACK_SIZE];
    unsigned char Track2MaskedData[MSR_TRACK_SIZE];
    unsigned char Track3MaskedData[MSR_TRACK_SIZE];
    unsigned char Track4MaskedData[MSR_TRACK_SIZE];

    unsigned char Track1DiscretionaryDataLength;
    unsigned char Track2DiscretionaryDataLength;

    unsigned char Track1DiscretionaryData[MSR_TRACK_SIZE];
    unsigned char Track2DiscretionaryData[MSR_TRACK_SIZE];

    unsigned char CardAuthenicationDataLength;                                  // Length of data after encryption, may include padding.
    unsigned char CardAuthenticationDataAbsoluteLength;                         // Length of data before encryption, may be needed to strip padding on decryption.
    unsigned char CardAuthenicationData[MSR_CARD_AUTHENTICATION_DATA_SIZE];

    unsigned char AdditionalSecurityInformationLength;
    unsigned char AdditionalSecurityInformation[MSR_ADDITIONAL_SECURITY_INFORMATION_SIZE];
} MSR_DATA_RECEIVED, *PMSR_DATA_RECEIVED;

//// MagneticStripeReaderSupportedCardTypes
typedef struct _MSR_SUPPORTED_CARD_TYPES {
    unsigned char Count;
    unsigned int CardTypes[MSR_CARD_TYPE_MAX_COUNT];
} MSR_SUPPORTED_CARD_TYPES, *PMSR_SUPPORTED_CARD_TYPES;

//// MsrRetrieveDeviceAuthentication
typedef struct _MSR_RETRIEVE_DEVICE_AUTHENTICATION_DATA {
    unsigned char KeySerialNumber[MSR_KEY_SERIAL_NUMBER_SIZE];
    unsigned char Challenge1[MSR_CHALLENGE_SIZE];
    unsigned char Challenge2[MSR_CHALLENGE_SIZE];
} MSR_RETRIEVE_DEVICE_AUTHENTICATION_DATA, *PMSR_RETRIEVE_DEVICE_AUTHENTICATION_DATA;

//// MsrAuthenticateDevice
typedef struct _MSR_AUTHENTICATE_DEVICE {
    unsigned char Size;  // If the optional SessionId is present this will include the size of SessionId[]
    unsigned char Challenge1[MSR_CHALLENGE_SIZE];
    unsigned char SessionId[MSR_SESSION_ID_SIZE];
} MSR_AUTHENTICATE_DEVICE, *PMSR_AUTHENTICATE_DEVICE;

//// MsrDeAuthenticateDevice
typedef struct _MSR_DEAUTHENTICATE_DEVICE {
    unsigned char Challenge2[MSR_CHALLENGE_SIZE];
} MSR_DEAUTHENTICATE_DEVICE, *PMSR_DEAUTHENTICATE_DEVICE;

//// MsrUpdateKey
typedef struct _MSR_UPDATE_KEY{
    unsigned char KeyLength;
    unsigned char KeyNameLength;
    unsigned char Key[MSR_KEY_SIZE];
    unsigned char KeyName[MSR_KEY_NAME_SIZE];
} MSR_UPDATE_KEY, *PMSR_UPDATE_KEY;

//// Error event format
typedef struct _MSR_ERROR_EVENT
{
    PosEventDataHeader Header;

    MsrTrackErrorType Track1Status;
    MsrTrackErrorType Track2Status;
    MsrTrackErrorType Track3Status;
    MsrTrackErrorType Track4Status;

    DriverUnifiedPosErrorSeverity Severity;
    DriverUnifiedPosErrorReason Reason;
    UINT32 ExtendedReason;

    MSR_DATA_RECEIVED CardData;

    wchar_t Message[MSR_ERROR_MAX_MESSAGE_LENGTH];

} MSR_ERROR_EVENT, *PMSR_ERROR_EVENT;

#pragma pack(pop)


#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#include <poppack.h>

#endif // POINT_OF_SERVICE_DRIVER_INTERFACE_H
