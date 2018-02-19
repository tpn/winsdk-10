//------------------------------------------------------------------------------
//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
//------------------------------------------------------------------------------

#pragma once

#include "WinPhoneInput.h"


//------------------------------------------------------------------------------
//
//  ApiInjectInitialize
//
//  ApiInjectInitialize() initializes the internal data necessary for supporting
//      input injection.
//
//------------------------------------------------------------------------------

EXTERN_C HRESULT WINAPI
ApiInjectInitialize();


//------------------------------------------------------------------------------
//
//  ApiInjectUninitialize
//
//  ApiInjectUninitialize() tears down any resources created after a successful
//      call to ApiInjectInitialize().
//
//------------------------------------------------------------------------------

EXTERN_C HRESULT WINAPI
ApiInjectUninitialize();


//------------------------------------------------------------------------------
//
//  ApiInjectEnableExclusive
//
//  ApiInjectEnableExclusive() tells the injection service to start ignoring
//      input from the drivers so that the injection path is exclusively enabled
//      for input for a specified device type.
//
//
//  wInputDeviceType - A flag of enum type InputDeviceType representing the type
//      of input device (touch or keyboard), on which to enable/disable using
//      injection exclusively.
//
//  fEnabled - A simple boolean value to tell the injection service to enable or
//      disable the ability for injection to run with exclusive access.  In
//      other words, no input from the driver of the specified device type will
//      be processed while the exclusive mode is enabled.
//
//  Note:  Enabling Exclusive mode for a device while input is half processed
//      (e.g. Button Down but not released or half-way through a touch session)
//      may cause undefined behavior.  
//
//------------------------------------------------------------------------------


EXTERN_C HRESULT WINAPI
ApiInjectEnableExclusive(
    IN WORD wInputDeviceType,   // Device Type to Set Exclusive mode   
#ifdef __cplusplus
    IN bool fEnabled);          // Is Exclusive Mode Enabled?
#else
    IN BOOLEAN fEnabled);       // Is Exclusive Mode Enabled?
#endif


//------------------------------------------------------------------------------
//
//  ApiInjectButtonEvent
//
//  ApiInjectButtonEvent() Injects a new Button Event.
//
//
//  wEventFlag - A flag of enum type InputEventFlag representing the type of
//      event to inject.  Only InputEventFlag_Down (0x0001) and
//      InputEventFlag_Up (0x0004) are expected flags.  They may be combined to
//      Send an up and down as a single event or use InputEventFlag_DownAndUp
//      (0x0005) as a convenience.  Note that Sending InputEventFlag_DownAndUp
//      after sending InputEventFlag_Down (without InputEventFlag_Up) is
//      undefined.
//
//  wButtonType - An id of enum type GPIOBUTTONS_BUTTON_TYPE representing the
//      type of button, which is to be injected.
//
//------------------------------------------------------------------------------

EXTERN_C HRESULT WINAPI
ApiInjectButtonEvent(
    IN WORD wEventFlag,         // Use enum InputEventFlag
    IN WORD wButtonType);       // Use enum GPIOBUTTONS_BUTTON_TYPE


//------------------------------------------------------------------------------
//
//  ApiInjectTouchEvent
//
//  ApiInjectTouchEvent() Injects a new Touch Event, where a touch event is defined
//      as a message representing a single moment in time.  A series of touch
//      events will make up a Touch Session and fully represent a single user
//      action or a set of user actions from the first recognized Touch Event to
//      the final Touch Event, which must represent that all touch contacts have
//      been removed.  A Touch Event can represent up to 10 Touch Contacts per
//      Touch Event, each of which must define the event flags specific to the
//      actions of the contact represented.
//
//
//  pTouchInfo - A structure representing the collection of Touch Contacts
//      recognized.  Once a Touch Session begins the first Contact (at index 0)
//      must have a Contact ID of 0, and the Contact IDs must be represented in
//      a consistent order, where the Contact ID to represent a finger always
//      represents the same finger while it is detected.  It is not recommended
//      that a Contact ID be resused until an Up event for all Touch Contacts
//      has been sent.
//
//      The following TouchInfo fields must be completed:
//          WORD cbSize;                // Size, in bytes, of this structure
//          DWORD dwTimeStamp;          // Driver timestamp (use GetTickCount())
//          DWORD cContacts;            // Count of touch contact data points
//          TouchContact rgContacts[1]; // Collection of contacts
//
//      The following TouchInfo fields must remain empty (zeroed in memory):
//          WORD wFlags;                // See InputSessionFlag_* flags
//          DWORD dwSessionID;          // Touch session ID
//
//      The following TouchInfo fields are currently optional
//          HANDLE hSource;             // Source of the Touch data
//
//      
//      The following TouchContact (see rgContacts) fields must be completed:
//          WORD wContactID;            // The ID of this contact
//          WORD wFlags;                // See InputEventFlag_* flags
//          SHORT xScreen;              // Screen Space X-Position
//          SHORT yScreen;              // Screen Space Y-Position
//
//      The following TouchContact (see rgContacts) fields are for internal use:
//          SHORT xWindow;              // Client Space X-Position
//          SHORT yWindow;              // Client Space Y-Position
//
//
//      The flags associated with the Touch Contacts will also need to follow
//      some special behavior due to make up for some logic being bypassed in
//      the drivers.  First InputEventFlag_Down (0x0001) should be used to
//      indicate that a contact is recognized, InputEventFlag_Move (0x0002) to
//      indicate a contact has moved (or has remained in the same position while
//      reporting a change in activity from another Touch Contact), and
//      InputEventFlag_Up (0x0004) to indicate that a Touch Contact is no longer
//      recognized.  These flags should never be combined.
//
//      Another special flag that MUST be combined with the InputEventFlag_Up
//      flag of the final (and only the final) Touch Session message is
//      InputEventFlag_Empty (0x1000).  The Empty flag is kind of a convienience
//      that we add in the Touch HID processor so that we don't need to validate
//      (again) that all Touch Contacts are up.
//
//      As a completely optional Touch Contact flag, we use
//      InputEventFlag_Invalid (0x2000), which we use to indicate that unclear,
//      broken, or invalid behavior has been detected for a Touch Contact.  We,
//      will then apply this flag to all Touch Contacts (along with Up Events),
//      which we then use to begin attempting to reset our internal state.
//      Essentially we then wait until a new touch session begins before
//      accepting any new touch input.
//
//------------------------------------------------------------------------------

EXTERN_C HRESULT WINAPI
ApiInjectTouchEvent(
    IN const TouchInfo * pTouchInfo);
