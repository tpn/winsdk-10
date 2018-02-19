/*++

Copyright (C) Microsoft Corporation.  All rights reserved.

Module Name:

PointOfServiceCommonTypes.h

Abstract:

Common header shared with anything that needs access to Point Of Service types
(i.e. WinRT APIs, Drivers, Protocol Providers)

Environment:

User and Kernel Mode and MIDL.

--*/
#ifndef POINT_OF_SERVICE_COMMON_TYPES_H
#define POINT_OF_SERVICE_COMMON_TYPES_H

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#include <pshpack8.h>

#define STATISTICS_STRING_SIZE 128

#if(NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

typedef enum DriverUnifiedPosErrorSeverity
{
    UnknownErrorSeverity = 0,
    Warning = 1,
    Recoverable = 2,
    Unrecoverable = 3,
    AssistanceRequired = 4,
    Fatal = 5
}DriverUnifiedPosErrorSeverity;

typedef enum DriverUnifiedPosPowerReportingType
{
    UnknownPowerReportingType = 0,
    Standard = 1,
    Advanced = 2
} DriverUnifiedPosPowerReportingType;

typedef enum DriverUnifiedPosPowerState
{
    PowerStateUnknown = 2000,
    PowerStateOnline,
    PowerStateOff,
    PowerStateOffline,
    PowerStateOffOffline
} DriverUnifiedPosPowerState;

// Indicates the type of health which may be performed by the checkHealth method.
typedef enum DriverUnifiedPosHealthCheckLevel
{
    UnknownHealthCheckLevel = 0, //
    POSInternal = 1, // performs a health check without altering the device. The device is tested by internal tests as far as possible.
    External = 2, // performs a more thorough test which may affect the device.  For example, a printer may produce some output.
    Interactive = 3 // may display a dialog box that displays test options and results so that you can test the device interactively. No APIs for testing interactively are currently supported.
} DriverUnifiedPosHealthCheckLevel;

typedef enum DriverUnifiedPosErrorReason
{
    UnknownErrorReason = 0,
    NoService = 1,      // cannot communicate with device due to configuration
    Disabled = 2,       // operation cannot be performed when the device is disabled
    Illegal = 3,        // Unsupported or unavailable device function
    NoHardware = 4,     // physical hardware is not connected or not powered on
    Closed = 5,         // An operation was attempted while the device was closed
    Offline = 6,        // The device is offline
    Failure = 7,        // The device failed to perform the operation but is connected and powered on
    Timeout = 8,        // Operation timed out from the device
    Busy = 9,           // Device is busy and cannot complete the operation
    Extended = 10,      // Device returned a vendor specific error
} DriverUnifiedPosErrorReason;

typedef enum DriverMagneticStripeReaderAuthenticationLevel
{
    NotSupported = 0,
    Optional = 1,
    Required = 2
} DriverMagneticStripeReaderAuthenticationLevel;

typedef enum PointOfServicePrinterBitmapWidthType
{
    PointOfServicePrinterBitmapWidthType_AsIs = 0, // this means that there is a 1:1 map between pixel and printer dot
    PointOfServicePrinterBitmapWidthType_Custom = 1
} PointOfServicePrinterBitmapWidthType;

typedef struct _PosPrinterWindowsFoundationSize
{
    UINT32 height;
    UINT32 width;
}PosPrinterWindowsFoundationSize;

typedef struct _PosPrinterWindowsFoundationRect
{
    UINT32 x;
    UINT32 y;
    UINT32 height;
    UINT32 width;
}PosPrinterWindowsFoundationRect;

typedef enum PosPrinterStation
{
    PosPrinterStation_Receipt = 0,
    PosPrinterStation_Journal = 1,
    PosPrinterStation_Slip = 2
} PosPrinterStation;

typedef enum DriverPosPrinterBarcodeTextPosition
{
    PrinterBarcodeTextNone = 0,
    PrinterBarcodeTextAbove,
    PrinterBarcodeTextBelow
} DriverPosPrinterBarcodeTextPosition;

// Values must correspond to Windows.Devices.PointOfService.PosPrinterCartridgeSensors
typedef enum DriverPosPrinterCartridgeSensors
{
    PrinterCartridgeNone = 0x0,
    PrinterCartridgeRemoved = 0x1,
    PrinterCartridgeEmpty = 0x2,
    PrinterCartridgeHeadCleaning = 0x4,
    PrinterCartridgeNearEmpty = 0x8
} DriverPosPrinterCartridgeSensors;

typedef enum PosPrinterCartridgeState
{
    PosPrinterCartridgeState_Unknown = 0,
    PosPrinterCartridgeState_Removed = 1,
    PosPrinterCartridgeState_Empty = 2,
    PosPrinterCartridgeState_Cleaning = 3,
    PosPrinterCartridgeState_NearEmpty = 4,
    PosPrinterCartridgeState_Ok = 5
} PosPrinterCartridgeState;

// Values must correspond to Windows.Devices.PointOfService.PosPrinterColorCapabilities
typedef enum DriverPosPrinterColorCapabilities
{
    PrinterColorCapNone = 0,
    PrinterColorCapPrimary = 0x1,
    PrinterColorCapCustom1 = 0x2,
    PrinterColorCapCustom2 = 0x4,
    PrinterColorCapCustom3 = 0x8,
    PrinterColorCapCustom4 = 0x10,
    PrinterColorCapCustom5 = 0x20,
    PrinterColorCapCustom6 = 0x40,
    PrinterColorCapCyan = 0x80,
    PrinterColorCapMagenta = 0x100,
    PrinterColorCapYellow = 0x200,
    PrinterColorCapFull = 0x400,
} DriverPosPrinterColorCapabilities;

// Values must correspond to Windows.Devices.PointOfService.PosPrinterColorCartridge
typedef enum DriverPosPrinterColorCartridge
{
    PrinterColorCartUnknown = 0,
    PrinterColorCartPrimary,
    PrinterColorCartCustom1,
    PrinterColorCartCustom2,
    PrinterColorCartCustom3,
    PrinterColorCartCustom4,
    PrinterColorCartCustom5,
    PrinterColorCartCustom6,
    PrinterColorCartCyan,
    PrinterColorCartMagenta,
    PrinterColorCartYellow,
} DriverPosPrinterColorCartridge;

typedef enum DriverPosPrinterMarkFeed
{
    PrinterFeedTakeup = 0,
    PrinterFeedToCutter = 1,
    PrinterFeedToCurrentTopOfForm = 2,
    PrinterFeedToNextTopOfForm = 3,
} DriverPosPrinterMarkFeed;

typedef enum PointOfServicePrinterPageModeTypes
{
    PointOfServicePrinterPageModeTypes_None = 0,
    PointOfServicePrinterPageModeTypes_Bitmap = 0x1,
    PointOfServicePrinterPageModeTypes_Barcode = 0x2,
    PointOfServicePrinterPageModeTypes_BitmapRotation = 0x4,
    PointOfServicePrinterPageModeTypes_BarcodeRotation = 0x8,
    PointOfServicePrinterPageModeTypes_Opaque = 0x10
} PointOfServicePrinterPageModeTypes;

typedef enum PointOfServicePrinterPageModeDirectionTypes
{
    PointOfServicePrinterPageModeDirectionTypes_LeftToRight = 0,
    PointOfServicePrinterPageModeDirectionTypes_BottomToTop = 1,
    PointOfServicePrinterPageModeDirectionTypes_RightToLeft = 2,
    PointOfServicePrinterPageModeDirectionTypes_TopToBottom = 3
} PointOfServicePrinterPageModeDirectionTypes;

typedef enum PointOfServicePrinterPageModePrintType
{
    PointOfServicePrinterPageModePrintType_PageMode = 0,
    PointOfServicePrinterPageModePrintType_PrintSave = 1,
    PointOfServicePrinterPageModePrintType_Normal = 2,
    PointOfServicePrinterPageModePrintType_Cancel = 3
} PointOfServicePrinterPageModePrintType;

typedef enum PointOfServicePrinterObjectAlignment
{
    PointOfServicePrinterObjectAlignment_Left = 0,
    PointOfServicePrinterObjectAlignment_Center = 1,
    PointOfServicePrinterObjectAlignment_Right = 2,
    PointOfServicePrinterObjectAlignment_CustomDistance = 3
} PointOfServicePrinterObjectAlignment;

typedef enum DriverPosPrinterPrintSide
{
    PrintSideUnknown = 0,
    PrintSide1,
    PrintSide2
} DriverPosPrinterPrintSide;

typedef enum PointOfServicePrinterTransactionMode
{
    PointOfServicePrinterTransactionMode_Transaction = 0,
    PointOfServicePrinterTransactionMode_Normal = 1
} PointOfServicePrinterTransactionMode;

// these values reported as extended (or not sent to WinRT APIs at all, potentially just cached and returned as property info)
typedef enum PointOfServicePrinterExtendedStatus
{
    PointOfServicePrinterExtendedStatus_Unknown,
    PointOfServicePrinterExtendedStatus_CoverOpen,
    PointOfServicePrinterExtendedStatus_CoverOk,
    PointOfServicePrinterExtendedStatus_JournalEmpty,
    PointOfServicePrinterExtendedStatus_JournalNearEmpty,
    PointOfServicePrinterExtendedStatus_JournalPaperOk,
    PointOfServicePrinterExtendedStatus_ReceiptEmpty,
    PointOfServicePrinterExtendedStatus_ReceiptNearEmpty,
    PointOfServicePrinterExtendedStatus_ReceiptPaperOk,
    PointOfServicePrinterExtendedStatus_SlipEmpty,
    PointOfServicePrinterExtendedStatus_SlipNearEmpty,
    PointOfServicePrinterExtendedStatus_SlipPaperOk,
    PointOfServicePrinterExtendedStatus_Idle,
    PointOfServicePrinterExtendedStatus_JournalCartridgeEmpty,
    PointOfServicePrinterExtendedStatus_JournalHeadCleaning,
    PointOfServicePrinterExtendedStatus_JournalCartridgeNearEmpty,
    PointOfServicePrinterExtendedStatus_JournalCartridgeOk,
    PointOfServicePrinterExtendedStatus_ReceiptCartridgeEmpty,
    PointOfServicePrinterExtendedStatus_ReceiptHeadCleaning,
    PointOfServicePrinterExtendedStatus_ReceiptCartridgeNearEmpty,
    PointOfServicePrinterExtendedStatus_ReceiptCartridgeOk,
    PointOfServicePrinterExtendedStatus_SlipCartridgeEmpty,
    PointOfServicePrinterExtendedStatus_SlipHeadCleaning,
    PointOfServicePrinterExtendedStatus_SlipCartridgeNearEmpty,
    PointOfServicePrinterExtendedStatus_SlipCartridgeOk,
    PointOfServicePrinterExtendedStatus_JournalCoverOpen,
    PointOfServicePrinterExtendedStatus_JournalCoverOk,
    PointOfServicePrinterExtendedStatus_ReceiptCoverOpen,
    PointOfServicePrinterExtendedStatus_ReceiptCoverOk,
    PointOfServicePrinterExtendedStatus_SlipCoverOpen,
    PointOfServicePrinterExtendedStatus_SlipCoverOk,
} PointOfServicePrinterExtendedStatus;

// Values must correspond to Windows.Devices.PointOfService.PosPrinterLineDirection
typedef enum DriverPosPrinterLineDirection
{
    LineDirectionHorizontal = 0,
    LineDirectionVertical
} DriverPosPrinterLineDirection;

// Values must correspond to Windows.Devices.PointOfService.PosPrinterLineStyle
typedef enum DriverPosPrinterLineStyle
{
    LineStyleSingleSolid = 0,
    LineStyleDoubleSolid,
    LineStyleBroken,
    LineStyleChain
} DriverPosPrinterLineStyle;

typedef enum DriverPosPrinterMapMode
{
    MapModeDots = 0,
    MapModeTwips,
    MapModeEnglish,
    MapModeMetric
} DriverPosPrinterMapMode;

// Values must correspond to Windows.Devices.PointOfService.PosPrinterRotation
typedef enum DriverPosPrinterRotation
{
    RotateNormal = 0,
    RotateRight90,
    RotateLeft90,
    RotateInvert180
} DriverPosPrinterRotation;

typedef struct _CommonPosStationCapabilitiesType
{
    UINT32 CartridgeSensors;
    UINT32 ColorCartridgesAvailable;
    BOOLEAN IsPrinterPresent;
    BOOLEAN Is2ColorsSupported;
    BOOLEAN IsBoldSupported;
    BOOLEAN IsDoubleHighPrintSupported;
    BOOLEAN IsDoubleWidePrintSupported;
    BOOLEAN IsDoubleHighDoubleWidePrintSupported;
    BOOLEAN HasPaperEmptySensor;
    BOOLEAN IsItalicSupported;
    BOOLEAN HasPaperNearEndSensor;
    BOOLEAN IsUnderlineSupported;
} CommonPosStationCapabilitiesType;

typedef struct _SlipReceiptCapabilitiesType
{
    CommonPosStationCapabilitiesType CommonCapabilities;
    UINT32 RuledLineCapabilities;
    BOOLEAN IsBarcodeSupported;
    BOOLEAN IsBitmapSupported;
    BOOLEAN IsLeft90Supported;
    BOOLEAN IsRight90Supported;
    BOOLEAN IsRotate180Supported;
    BOOLEAN IsPageModeSupported;
} SlipReceiptCapabilitiesType;

typedef struct _SlipCapabilitiesType
{
    SlipReceiptCapabilitiesType SlipAndReceiptCommonCapabilities;
    BOOLEAN IsFullLengthSupported;
    BOOLEAN IsBothSidesPrintingSupported;
} SlipCapabilitiesType;

typedef struct _ReceiptCapabilitiesType
{
    SlipReceiptCapabilitiesType SlipAndReceiptCommonCapabilities;
    UINT32 MarkSensedPaperFeedHandling;
    BOOLEAN HasPapercut;
    BOOLEAN IsStampSupported;
} ReceiptCapabilitiesType;

typedef struct _PointOfServicePrinterCapabilitiesType
{
    //general UPOS device capabilities
    UINT32 PowerReportingType;
    BOOLEAN IsStatisticsReportingSupported;
    BOOLEAN IsStatisticsUpdatingSupported;

    // Pos printer capabilities
    UINT32 DefaultCharacterSet;
    BOOLEAN IsConcurrentJournalReceiptPrintSupported;
    BOOLEAN IsConcurrentJournalSlipPrintSupported;
    BOOLEAN IsConcurrentPageModeSupported;
    BOOLEAN IsConcurrentReceiptSlipPrintSupported;
    BOOLEAN HasCoverSensor;
    BOOLEAN CanMapCharacterSet;
    BOOLEAN IsTransactionSupported;

    // Journal properties
    CommonPosStationCapabilitiesType JournalCapabilities;

    // Receipt properties
    ReceiptCapabilitiesType ReceiptCapabilities;

    //Slip properties
    SlipCapabilitiesType SlipCapabilities;
}PointOfServicePrinterCapabilitiesType;

typedef enum _CashDrawerStatusType
{
    CashDrawerStatusType_Online = 0,
    CashDrawerStatusType_Off = 1,
    CashDrawerStatusType_Offline = 2,
    CashDrawerStatusType_OffOrOffline = 3,
    CashDrawerStatusType_Extended = 4
} CashDrawerStatusType;

typedef struct _CashDrawerCapabilitiesType
{
    UINT32 PowerReportingType;                  //CapPowerReporting
    BOOLEAN IsStatisticsReportingSupported;     //CapStatisticsReporting
    BOOLEAN IsStatisticsUpdatingSupported;      //CapStatisticsUpdating
    BOOLEAN IsStatusReportingSupported;         //CapStatus
    BOOLEAN IsStatusMultiDrawerDetectSupported; //CapStatusMultiDrawerDetect
    BOOLEAN IsDrawerOpenSensorAvailable;        //CapStatus (duplicate)
} CashDrawerCapabilitiesType;

typedef struct _LineDisplayCapabilitiesType
{
    BOOLEAN IsStatisticsReportingSupported;     //CapStatisticsReporting
    BOOLEAN IsStatisticsUpdatingSupported;      //CapStatisticsUpdating
    UINT32 PowerReportingType;                  //CapPowerReporting
    BOOLEAN CanChangeScreenSize;                //CapScreenMode
    BOOLEAN CanDisplayBitmaps;                  //CapBitmap
    BOOLEAN CanReadCharacterAtCursor;           //CapReadBack
    BOOLEAN CanMapCharacterSets;                //CapMapCharacterSet
    BOOLEAN CanDisplayCustomGlyphs;             //CapCustomGlyph
    UINT32 CanReverse;                          //CapReverse (LineDisplayCharactersSelection values)
    UINT32 CanBlink;                            //CapBlink (LineDisplayCharactersSelection values)
    BOOLEAN CanChangeBlinkRate;                 //CapBlinkRate
    BOOLEAN IsBrightnessSupported;              //CapBrightness
    LONG CursorType;                            //CapCursorType
    BOOLEAN IsHorizontalMarqueeSupported;       //CapHMarquee
    BOOLEAN IsVerticalMarqueeSupported;         //CapVMarquee
    BOOLEAN IsInterCharacterWaitSupported;      //CapICharWait
    UINT32 SupportedDescriptors;                //DeviceDescriptors
    UINT32 SupportedWindows;                    //DeviceWindows
} LineDisplayCapabilitiesType;

enum LineDisplayCursorCapabilities
{
    CursorNone = 0x00000000,
    CursorFixed = 0x00000001,
    CursorBlock = 0x00000002,
    CursorHalfBlock = 0x00000004,
    CursorUnderline = 0x00000008,
    CursorReverse = 0x00000010,
    CursorOther = 0x00000020,
    CursorBlink = 0x00000040
};

typedef struct _LineDisplayCharactersSize
{
    UINT32 Rows;
    UINT32 Columns;
} LineDisplayCharactersSize;

typedef struct _LineDisplaySizeInPixelsType
{
    UINT32 Width;
    UINT32 Height;
} LineDisplaySizeInPixelsType;

typedef struct _LineDisplayCursorCoordinates
{
    UINT32 Row;
    UINT32 Column;
} LineDisplayCursorCoordinates;

typedef enum _BarcodeSymbology
{
    PosUnknown = 0, // The service object can't determine the barcode symbology.

    Ean8 = 101,
    Ean8Add2 = 102,
    Ean8Add5 = 103,
    Eanv = 104,
    EanvAdd2 = 105,
    EanvAdd5 = 106,

    Ean13 = 107,
    Ean13Add2 = 108,
    Ean13Add5 = 109,
    Isbn = 110,
    IsbnAdd5 = 111,
    Ismn = 112,
    IsmnAdd2 = 113,
    IsmnAdd5 = 114,
    Issn = 115,
    IssnAdd2 = 116,
    IssnAdd5 = 117,
    Ean99 = 118,
    Ean99Add2 = 119,
    Ean99Add5 = 120,

    Upca = 121,
    UpcaAdd2 = 122,
    UpcaAdd5 = 123,
    Upce = 124,
    UpceAdd2 = 125,
    UpceAdd5 = 126,
    UpcCoupon = 127,

    TfStd = 128,
    TfDis = 129,
    TfInt = 130,
    TfInd = 131,
    TfMat = 132,
    TfIata = 133,

    Gs1DatabarType1 = 134,
    Gs1DatabarType2 = 135,
    Gs1DatabarType3 = 136,

    Code39 = 137,
    Code39Ex = 138,
    Trioptic39 = 139,
    Code32 = 140,
    Pzn = 141,
    Code93 = 142,
    Code93Ex = 143,

    Code128 = 144,
    Gs1128 = 145,
    Gs1128Coupon = 146,
    UccEan128 = 147,
    Sisac = 148,
    Isbt = 149,

    Codabar = 150,
    Code11 = 151,
    Msi = 152,
    Plessey = 153,
    Telepen = 154,

    Code16k = 155,
    CodablockA = 156,
    CodablockF = 157,
    Codablock128 = 158,
    Code49 = 159,

    Aztec = 160,
    DataCode = 161,
    DataMatrix = 162,
    HanXin = 163,
    Maxicode = 164,
    MicroPdf417 = 165,
    MicroQr = 166,
    Pdf417 = 167,
    Qr = 168,

    MsTag = 169,

    Ccab = 170,
    Ccc = 171,
    Tlc39 = 172,

    AusPost = 173,
    CanPost = 174,
    ChinaPost = 175,
    DutchKix = 176,
    InfoMail = 177,
    ItalianPost25 = 178,
    ItalianPost39 = 179,
    JapanPost = 180,
    KoreanPost = 181,
    SwedenPost = 182,
    UkPost = 183,
    UsIntelligent = 184,
    UsIntelligentPkg = 185,
    UsPlanet = 186,
    UsPostNet = 187,
    Us4StateFics = 188,

    OcrA = 189,
    OcrB = 190,
    Micr = 191,

    Gs1DWCode = 192,

    // Special cases
    ExtendedBase = 501 // If greater than or equal to this type, the device has returned an OEM or undefined symbology.
} BarcodeSymbology;

typedef enum _BarcodeSymbologyDecodeLengthType
{
    DecodeLengthType_AnyLength = 0,
    DecodeLengthType_Discrete = 1,
    DecodeLengthType_Range = 2
} BarcodeSymbologyDecodeLengthType;

typedef struct _BarcodeSymbologyAttributesData
{
    BarcodeSymbology Symbology;
    UINT32 IsCheckDigitValidationSupported;
    UINT32 IsCheckDigitValidationEnabled;
    UINT32 IsCheckDigitTransmissionSupported;
    UINT32 IsCheckDigitTransmissionEnabled;
    UINT32 IsDecodeLengthSupported;
    BarcodeSymbologyDecodeLengthType DecodeLengthType;
    UINT32 DecodeLength1;
    UINT32 DecodeLength2;
} BarcodeSymbologyAttributesData;

typedef enum _BarcodeStatus
{
    BarcodeStatusUpdateType_Online = 0,
    BarcodeStatusUpdateType_Off = 1,
    BarcodeStatusUpdateType_Offline = 2,
    BarcodeStatusUpdateType_OffOrOffline = 3,
    BarcodeStatusUpdateType_Extended = 4
} BarcodeStatus;

typedef enum _PrinterStatus
{
    // Power state reporting: Online
    // Valid if IPointOfServicePrinterCapabilities::PowerReportingType is Standard or Advanced
    PrinterStatusUpdateType_Online = 0,

    // Power state reporting: Powered off or detached from the terminal
    // Valid if IPointOfServicePrinterCapabilities::PowerReportingType is Advanced
    PrinterStatusUpdateType_Off = 1,

    // Power state reporting: Powered on, but not ready or unable to respond to requests
    // Valid if IPointOfServicePrinterCapabilities::PowerReportingType is Advanced
    PrinterStatusUpdateType_Offline = 2,

    // Power state reporting: Either Off or Offline
    // Valid if IPointOfServicePrinterCapabilities::PowerReportingType is Standard
    PrinterStatusUpdateType_OffOrOffline = 3,

    PrinterStatusUpdateType_CoverOpen = 4,
    PrinterStatusUpdateType_CoverOk = 5,
    PrinterStatusUpdateType_JournalEmpty = 6,
    PrinterStatusUpdateType_JournalNearEmpty = 7,
    PrinterStatusUpdateType_JournalPaperOk = 8,
    PrinterStatusUpdateType_ReceiptEmpty = 9,
    PrinterStatusUpdateType_ReceiptNearEmpty = 10,
    PrinterStatusUpdateType_ReceiptPaperOk = 11,
    PrinterStatusUpdateType_SlipEmpty = 12,
    PrinterStatusUpdateType_SlipNearEmpty = 13,
    PrinterStatusUpdateType_SlipPaperOk = 14,
    PrinterStatusUpdateType_Idle = 15,
    PrinterStatusUpdateType_JournalCartridgeEmpty = 16,
    PrinterStatusUpdateType_JournalHeadCleaning = 17,
    PrinterStatusUpdateType_JournalCartridgeNearEmpty = 18,
    PrinterStatusUpdateType_JournalCartridgeOk = 19,
    PrinterStatusUpdateType_ReceiptCartridgeEmpty = 20,
    PrinterStatusUpdateType_ReceiptHeadCleaning = 21,
    PrinterStatusUpdateType_ReceiptCartridgeNearEmpty = 22,
    PrinterStatusUpdateType_ReceiptCartridgeOk = 23,
    PrinterStatusUpdateType_SlipCartridgeEmpty = 24,
    PrinterStatusUpdateType_SlipHeadCleaning = 25,
    PrinterStatusUpdateType_SlipCartridgeNearEmpty = 26,
    PrinterStatusUpdateType_SlipCartridgeOk = 27,
    PrinterStatusUpdateType_JournalCoverOpen = 28,
    PrinterStatusUpdateType_JournalCoverOk = 29,
    PrinterStatusUpdateType_ReceiptCoverOpen = 30,
    PrinterStatusUpdateType_ReceiptCoverOk = 31,
    PrinterStatusUpdateType_SlipCoverOpen = 32,
    PrinterStatusUpdateType_SlipCoverOk = 33,

    // OEM status
    // Reported in IPointOfServicePrinterStatusUpdatedEventArgs::ExtendedStatus
    PrinterStatusUpdateType_Extended,
} PrinterStatus;

typedef enum _PosPrinterErrorOccuredData
{
    ErrorUnknown = -1,

    CoverOpen = 0,
    JournalOutOfPaper = 1,
    SlipOutOfPaper = 2,
    JournalCartridgeRemoved = 3,
    JournalCartridgeEmpty = 4,
    JournalHeadCleaning = 5,
    ReceiptCartridgeRemoved = 6,
    ReceiptCartridgeEmpty = 7,
    ReceiptHeadCleaning = 8,
    SlipCartridgeRemoved = 9,
    SlipCartridgeEmpty = 10,
    SlipHeadCleaning = 11,
}PosPrinterErrorOccuredData;

// PosDeviceInformation
// The structure holds the device information value required by UPOS
//      All entries are as define in UPOS standard.
typedef struct _PosDeviceInformation
{
    _Field_z_ wchar_t UnifiedPOSVersion[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t DeviceCategory[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t ManufacturerName[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t ModelName[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t SerialNumber[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t ManufactureDate[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t MechanicalRevision[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t FirmwareRevision[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t Interface[STATISTICS_STRING_SIZE];
    _Field_z_ wchar_t InstallationDate[STATISTICS_STRING_SIZE];
} PosDeviceInformation;

typedef enum _LineDisplayTextDisplayAttribute
{
    TextNormal = 0,
    TextBlink,
    TextReverse,
    TextReverseBlink
} LineDisplayTextDisplayAttribute;

typedef enum _LineDisplayTextScrollDirection
{
    Up = 0,
    Down,
    Left,
    Right
} LineDisplayTextScrollDirection;

typedef enum _LineDisplayCharactersSelection
{
    NoCharacters = 0,
    EntireDisplay,
    PerCharacter
} LineDisplayCharactersSelection;

enum LineDisplayCursorTypeFlags
{
    CursorTypeNone = 0,
    CursorTypeFixed = 1,
    CursorTypeBlock = 2,
    CursorTypeHalfBlock = 3,
    CursorTypeUnderline = 4,
    CursorTypeReverse = 5,
    CursorTypeOther = 6,
    CursorTypeBlink = 0x10000000
};

enum LineDisplayHorizontalBitmapAlignment
{
    HorizontalAlignmentLeft = -1,
    HorizontalAlignmentCenter = -2,
    HorizontalAlignmentRight = -3,
};

enum LineDisplayVerticalBitmapAlignment
{
    VerticalAlignmentTop = -1,
    VerticalAlignmentCenter = -2,
    VerticalAlignmentBottom = -3,
};

enum LineDisplayBitmapWidth
{
    AsIs = -11
};

typedef enum _LineDisplayStatusType
{
    LineDisplayStatusType_Unknown = 0,
    LineDisplayStatusType_Online = 1,
    LineDisplayStatusType_Off = 2,
    LineDisplayStatusType_Offline = 3,
    LineDisplayStatusType_OffOrOffline = 4
} LineDisplayStatusType;

typedef enum _LineDisplayMarqueeTypeType
{
    MarqueeTypeNone = 0,
    MarqueeTypeUp = 1,
    MarqueeTypeDown = 2,
    MarqueeTypeLeft = 3,
    MarqueeTypeRight = 4,
    MarqueeTypeInit = 5
} LineDisplayMarqueeTypeType;

typedef enum _LineDisplayMarqueeFormatType
{
    MarqueeFormatWalk = 0,
    MarqueeFormatPlace = 1
} LineDisplayMarqueeFormatType;

//------------------------------------
// Common Control Data formats
//------------------------------------
typedef enum _PosDeviceType
{
    PosDeviceType_Unknown = 0,
    PosDeviceType_BarcodeScanner = 1,
    PosDeviceType_MagneticStripeReader = 2,
    PosDeviceType_Printer = 3,
    PosDeviceType_CashDrawer = 4,
    PosDeviceType_LineDisplay = 5,

    // Update the following value when new device types show up.
    PosDeviceType_Max = 6
} PosDeviceType;

#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#include <poppack.h>

#endif // POINT_OF_SERVICE_COMMON_TYPES_H
