////////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) Microsoft Corporation. All rights reserved.
//
////////////////////////////////////////////////////////////////////////////////


#pragma once

//
// Define a device interface unique GUID for touch 
// Note: this is used in \src\uxplat\Splash\Dev\Libraries\InputReader\Library\InputStateManager.cpp 
//                  and in \src\uxplat\Input\Dev\Drivers\TchHID\TchHID.c
//

DEFINE_GUID( GUID_WP_DEVINTERFACE_TCH, 0x2c05ce1a, 0x75e8, 0x4ea7, 0xa7, 0xa, 0xe3, 0x23, 0xb0, 0x72, 0x25, 0x8c);

//
// InputEventFlags are intended to be generic Input Flags to indicate actions for
// Touch, Mouse or Keyboard events.
//

enum InputEventFlag
{
    InputEventFlag_None             = 0x0000,
    
    InputEventFlag_Down             = 0x0001,
    InputEventFlag_Move             = 0x0002,
    InputEventFlag_Hold             = 0x0002,
    InputEventFlag_Up               = 0x0004,

    InputEventFlag_Required         = 0x0008,
    InputEventFlag_InRange          = 0x0008,

    InputEventFlag_DownAndUp        = (InputEventFlag_Down|InputEventFlag_Up),  // 0x0005

    InputEventFlag_PrimaryButton    = 0x0100,
    InputEventFlag_SecondaryButton  = 0x0200,

    InputEventFlag_ScreenReaderEnabled = 0x0400,

    InputEventFlag_Empty            = 0x1000,
    InputEventFlag_Invalid          = 0x2000,
    
    InputEventFlag_TestInjection    = 0x4000,
    InputEventFlag_TestSync         = 0x8000
};


//
// The maximum number of the supported capacitive buttons.
// Back/Start/Search are supported for now.
//

#define MAX_CAPACITIVE_BUTTONS   3


//
// InputSessionFlags are intended to be generic Input Session Flags to indicate
// actions for a full Touch Session.
//

enum InputSessionFlag
{
    InputSessionFlag_None           = 0x0000,
    
    InputSessionFlag_Begin          = 0x0001,
    InputSessionFlag_End            = 0x0004,
    
    InputSessionFlag_Reserved       = 0x0200,

    InputSessionFlag_Mouse          = 0x0800,
    InputSessionFlag_Touchpad       = 0x1000,

    InputSessionFlag_Cancel         = 0x8000
};


//
// ModifierKeyStateFlags are intended to capture modifiers key states that exist
// before/while other key events occur.
//

enum ModifierKeyStateFlag
{
    ModifierKeyStateFlag_None           = 0x0000,

    ModifierKeyStateFlag_Shift          = 0x0001,
    ModifierKeyStateFlag_ShiftLeft      = 0x0003,
    ModifierKeyStateFlag_ShiftRight     = 0x0005,
    ModifierKeyStateFlag_ShiftMask      = 0x0007,

    ModifierKeyStateFlag_Control        = 0x0008,
    ModifierKeyStateFlag_ControlLeft    = 0x0018,
    ModifierKeyStateFlag_ControlRight   = 0x0028,
    ModifierKeyStateFlag_ControlMask    = 0x0038,

    ModifierKeyStateFlag_Alt            = 0x0040,
    ModifierKeyStateFlag_AltLeft        = 0x00C0,
    ModifierKeyStateFlag_AltRight       = 0x0140,
    ModifierKeyStateFlag_AltMask        = 0x01C0,

    ModifierKeyStateFlag_Function       = 0x0200,
    ModifierKeyStateFlag_FunctionLeft   = 0x0600,
    ModifierKeyStateFlag_FunctionRight  = 0x0A00,
    ModifierKeyStateFlag_FunctionMask   = 0x0E00,

    ModifierKeyStateFlag_LockShift      = 0x1000,
    ModifierKeyStateFlag_LockNum        = 0x2000,
    ModifierKeyStateFlag_LockFunction   = 0x4000,
    ModifierKeyStateFlag_LockMask       = 0xF000
};


//
// MouseInfo represents information about a Single Mouse Event.  At the moment
// only the left mouse button is represented, but dwFlags is large enough to 
// represent other button actions in the HIWORD.  For now assume all
// InputEventFlag_* data represents the left button only.
//

#ifdef __cplusplus 
struct MouseInfo
{
    DWORD   dwFlags;        // See InputEventFlag_* flags
    DWORD   dwTimeStamp;    // Driver timestamp
    HANDLE  hSource;        // Source of the Mouse data
    SHORT   xScreen;        // Screen Space X-Position
    SHORT   yScreen;        // Screen Space Y-Position
    SHORT   xWindow;        // Client Space X-Position
    SHORT   yWindow;        // Client Space Y-Position
};
#else // __cplusplus 
// not yet needed for C
#endif // __cplusplus 


//
// TouchContact represents information about a Single Touch Contact that should only
// exists as part of a Touch Session update (See TouchInfo).
//

#ifdef __cplusplus 
struct TouchContact
{
    WORD    wContactID;     // The ID of this contact
    WORD    wFlags;         // See InputEventFlag_* flags
    SHORT   xScreen;        // Screen Space X-Position
    SHORT   yScreen;        // Screen Space Y-Position
    SHORT   xWindow;        // Client Space X-Position
    SHORT   yWindow;        // Client Space Y-Position
    SHORT   reserved0;      // Reserved
    SHORT   reserved1;      // Reserved
    SHORT   reserved2;      // Reserved
    SHORT   reserved3;      // Reserved
    SHORT   reserved4;      // Reserved
    SHORT   reserved5;      // Reserved
    ULONG64 reserved6;      // Reserved
    FLOAT   reserved7[6];   // Reserved
};
#else // __cplusplus 
typedef struct _TouchContact
{
    UINT16  ContactID;      // The ID of this contact
    UINT16  Flags;          // See InputEventFlag_* flags
    INT16   ScreenX;        // Screen Space X-Position
    INT16   ScreenY;        // Screen Space Y-Position
    INT16   WindowX;        // Client Space X-Position
    INT16   WindowY;        // Client Space Y-Position
    INT16   Reserved0;      // Reserved
    INT16   Reserved1;      // Reserved
    INT16   Reserved2;      // Reserved
    INT16   Reserved3;      // Reserved
    INT16   Reserved4;      // Reserved
    INT16   Reserved5;      // Reserved
    ULONG64 Reserved6;      // Reserved
    float   Reserved7[6];   // Reserved
} TouchContact;
#endif // __cplusplus 


//
// TouchInfo represents information about an in-the-moment view of Touch Events within
// a Touch Session.
//

#ifdef __cplusplus
static const DWORD c_cTouchContactsMaximum = 10;

struct TouchInfo
{
    WORD            cbSize;         // Size, in bytes, of this structure (includes n contacts)
    WORD            wFlags;         // See InputSessionFlag_* flags
    DWORD           dwTimeStamp;    // Driver timestamp
    ULONG64         hSource;        // HANDLE to the Source of the Touch data
    DWORD           dwSessionID;    // Touch session ID
    BYTE            reserved0;      // Reserved
    BYTE            reserved1;      // Reserved
    BYTE            reserved2;      // Reserved
    BYTE            cContacts;      // Count of touch contact data points
    TouchContact    rgContacts[1];  // Collection of contacts
};
#else // __cplusplus 
#define c_cTouchContactsMaximum  10

typedef struct _TouchInfo
{
    UINT16          Size;           // Size, in bytes, of this structure (includes n contacts)
    UINT16          Flags;          // See InputSessionFlag_* flags
    UINT32          TimeStamp;      // Driver timestamp
    ULONG64         Source;         // HANDLE to the Source of the Touch data
    UINT32          SessionID;      // Gesture session ID
    UINT8           Reserved0;      // Reserved
    UINT8           Reserved1;      // Reserved
    UINT8           Reserved2;      // Reserved
    UINT8           ContactCount;   // Count of touch contact data points
    TouchContact    ContactArray[c_cTouchContactsMaximum];// Collection of contacts
} TouchInfo;
#endif // __cplusplus 


//
// Min TouchInfo size is the predefined size (with only 1 TouchContact).
// Max TouchInfo size can include CETOUCHINPUT_MAX_SIMULTANEOUS (16) total
// points, but TouchInfo is defined with one of these already (so -1).
//

#ifdef __cplusplus
static const DWORD c_cbTouchInfoMinimum = (sizeof(TouchInfo));
static const DWORD c_cbTouchInfoMaximum = 
        (c_cbTouchInfoMinimum + (sizeof(TouchContact) * (c_cTouchContactsMaximum - 1)));
#else // __cplusplus
#define c_cbTouchInfoMinimum (sizeof(TouchInfo) - (sizeof(TouchContact) * (c_cTouchContactsMaximum - 1)))
#define c_cbTouchInfoMaximum (sizeof(TouchInfo))
#endif // __cplusplus 


//
// TouchInfoBuffer is a structure large enough to hold a TouchInfo structure
// including the maximum allowable contacts.
//

#ifdef __cplusplus
struct TouchInfoBuffer
{
    //
    // WARNING: This structure is intended to allow overflow for TouchInfo
    // including c_cTouchContactsMaximum total contacts (one contiguous block)
    //
    
    TouchInfo       ti;
    TouchContact    rgAdditionalContacts[c_cTouchContactsMaximum - 1];
};
#else // __cplusplus
// Currently TouchInfo acts like TouchInfoBuffer does in C++
#endif // __cplusplus 


#ifdef __cplusplus

//
// Min KeyEventInfo size is the predefined size (with only 1 Character).
// Max KeyEventInfo size can include (16) total characters, but KeyEventInfo is
// defined with one character already (so -1).
//

static const DWORD c_cKeyEventCharacterMaximum = 16;


//
// ButtonEventInfo represents information about a button event (could be
// hardware or capacitive buttons).
//

struct ButtonEventInfo
{
    DWORD       ButtonType;   // See DeviceButtonType_* types
    DWORD       EventFlags;   // See InputEventFlag_* flags
};


//
// InputDeviceType represents an input device type or set of input device types.
//

enum InputDeviceType
{
    InputDeviceType_Mouse           = 0x0001,
    InputDeviceType_Touch           = 0x0002,
    InputDeviceType_Keyboard        = 0x0004,
    
    InputDeviceType_AllDevicesMask  = 
            InputDeviceType_Mouse       |
            InputDeviceType_Touch       | 
            InputDeviceType_Keyboard
};

#else // __cplusplus 
// not yet needed for C
#endif // __cplusplus 


//
// Touch device usage info
//

typedef struct _USAGE_INFO
{
    LONG                    LogMin;
    LONG                    LogMax;
    LONG                    PhyMin;
    LONG                    PhyMax;
    ULONG                   Units;
    ULONG                   UnitsExp;
    USHORT                  UsagePageId;
    USHORT                  UsageId;
} USAGE_INFO, *PUSAGE_INFO;


//
// Device IO codes for retrieving the supported device usages from TchHID. There is no 
// FILE_DEVICE_* defined for touch, and FILE_DEVICE_UNKNOWN is used based on a recommendation
// from Windows.
//

#define IOCTL_TCHHID_GET_DEVICE_USAGE_COUNT CTL_CODE(FILE_DEVICE_UNKNOWN, 0x8001, METHOD_BUFFERED, FILE_ANY_ACCESS)
#define IOCTL_TCHHID_GET_DEVICE_USAGES CTL_CODE(FILE_DEVICE_UNKNOWN, 0x8002, METHOD_BUFFERED, FILE_ANY_ACCESS)


//
// Device name and the symbolic link for the virtual driver device that user-mode applications
// can retrieve touch device usages from.
//

#define TOUCH_USAGE_DEVICE_NAME L"\\Device\\TouchUsages0"
#define TOUCH_USAGE_DEVICE_LINK L"\\DosDevices\\TouchUsages0"
#define TOUCH_USAGE_FILE_PATH L"\\\\.\\TouchUsages0"


//
// The height of the 0D capacitive buttons in number of pixels. Any arbitrary number
// can be used because the buttons are outside fo the regular touch panel on 0D devices.
// It works as long as Chrome and InputStateManager agree on the same button height.
//

#define CAPACITIVE_BUTTON_HEIGHT 100


//------------------------------------------------------------------------------
//
// CalculateTouchInfoSize()
//
// Calculate enough space (in bytes) to hold a TouchInfo structure plus any additional
// needed for contact data beyond the mandatory one TouchContact.
//
//------------------------------------------------------------------------------

#ifdef __cplusplus
inline DWORD
CalculateTouchInfoSize(
    DWORD cContacts)    // the number of contacts that the TouchInfo structure will require
#else // __cplusplus 
__inline ULONG
CalculateTouchInfoSize(
    ULONG cContacts)    // the number of contacts that the TouchInfo structure will require
#endif // __cplusplus 
{
    if ((cContacts > c_cTouchContactsMaximum) || (cContacts <= 0))
    {
        // This should never be a request
        return 0;
    }
    else if (cContacts == 1)
    {
        return c_cbTouchInfoMinimum;
    }


    //
    // This is a more complex case where we need enough room for TouchInfo,
    // plus additional space for any more than the first pre-allocated
    // TouchContact.
    //

    return (c_cbTouchInfoMinimum + (sizeof(TouchContact) * (cContacts - 1)));
}

