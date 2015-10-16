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

#define STATISTICS_STRING_SIZE                  128

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

// Indicates the type of health which may be performed by the checkHealth method.
typedef enum DriverUnifiedPosHealthCheckLevel
{
    UnknownHealthCheckLevel = 0, //
    POSInternal = 1, // performs a health check without altering the device. The device is tested by internal tests as far as possible.
    External = 2, // performs a more thourough test which may affect the device.  For example, a printer may produce some output.
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

typedef enum PosPrinterCartridgeState
{
    PosPrinterCartridgeState_Unknown = 0,
    PosPrinterCartridgeState_Removed = 1,
    PosPrinterCartridgeState_Empty = 2,
    PosPrinterCartridgeState_Cleaning = 3,
    PosPrinterCartridgeState_NearEmpty = 4,
    PosPrinterCartridgeState_Ok = 5
} PosPrinterCartridgeState;

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

typedef struct _CashDrawerCapabilitiesType
{
    UINT32 PowerReportingType;
    BOOLEAN IsStatisticsReportingSupported;
    BOOLEAN IsStatisticsUpdatingSupported;
    BOOLEAN IsStatusReportingSupported;
    BOOLEAN IsStatusMultiDrawerDetectSupported;
    BOOLEAN IsDrawerOpenSensorAvailable;
}CashDrawerCapabilitiesType;


typedef enum _BarcodeSymbology
{
    PosUnknown = 0,        // The service object can't determine the barcode symbology.

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

    // Special cases
    ExtendedBase = 501       // If greater than or equal to this type, the device has returned an OEM or undefined symbology.             
} BarcodeSymbology;

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
}PosDeviceInformation;
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

    // Update the following value when new device types show up.
    PosDeviceType_Max = 5
} PosDeviceType;


#endif // (NTDDI_VERSION >= NTDDI_WINTHRESHOLD)

#endif // POINT_OF_SERVICE_COMMON_TYPES_H
