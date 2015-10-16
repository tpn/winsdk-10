//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//

#pragma once

#define ICON_URI_MAX_LENGTH 250
#define DETAILED_TEXT_MAX_LENGTH 250
#define DETAILED_TEXT_MAX_COUNT 3
#define BADGE_MAX_COUNT 5
#define BADGE_VALUE_MAX_LENGTH ICON_URI_MAX_LENGTH

/// <summary>
/// This struct represents one line of text in the "Detailed Text" area.
/// </summary>
typedef struct _DETAILED_TEXT_INFORMATION
{
    WCHAR detailedText[DETAILED_TEXT_MAX_LENGTH];
    BOOL isBoldText;
} DETAILED_TEXT_INFORMATION, *LPDETAILED_TEXT_INFORMATION;

/// <summary>
/// Describes what type of information a badge value contains.
/// </summary>
typedef enum _BADGE_VALUE_TYPE
{
    /// <summary>
    /// The badge value doesn't contain any value.
    /// </summary>
    BADGE_VALUE_TYPE_NONE,

    /// <summary>
    /// The badge value contains a string representation of a number.
    /// It can also contain a friendly text representing a large number
    /// (for example, the string "99+").
    /// </summary>
    BADGE_VALUE_TYPE_COUNT,

    /// <summary>
    /// The badge value contains a URI to a glyph icon.
    /// </summary>
    BADGE_VALUE_TYPE_GLYPH
} BADGE_VALUE_TYPE;

/// <summary>
/// This struct contains all the information relevant to a notification badge.
/// </summary>
typedef struct _BADGE_INFORMATION
{
    /// <summary>
    /// Description of what type of value this badge has.
    /// </summary>
    BADGE_VALUE_TYPE badgeValueType;

    /// <summary>
    /// Value of the badge. This value can be either:
    ///   - an empty string
    ///   - a string representation of a numeric value between 1 and 99
    ///   - the localized string "99+"
    ///   - a URI to a glyph icon
    /// If it is empty, this value should not be displayed.
    /// </summary>
    WCHAR badgeValue[BADGE_VALUE_MAX_LENGTH];

    /// <summary>
    /// URI to the icon to be displayed. If it is an empty string the icon should not be
    /// displayed.
    /// </summary>
    WCHAR badgeIconUri[ICON_URI_MAX_LENGTH];
} BADGE_INFORMATION, *LPBADGE_INFORMATION;

/// <summary>
/// This struct represents a full snapshot of the information that needs to be displayed in the
/// lock screen.
/// </summary>
typedef struct _DEVICE_LOCK_SCREEN_SNAPSHOT
{
    /// <summary>
    /// Size in bytes of the whole structure.
    /// </summary>
    DWORD size;

    /// <summary>
    /// URI to the driving mode icon.
    /// If this URI is empty it means driving mode is not active.
    /// </summary>
    WCHAR drivingModeIconUri[ICON_URI_MAX_LENGTH];

    /// <summary>
    /// URI to the do not disturb mode icon.
    /// If this URI is empty it means do not disturb mode is not active.
    /// </summary>
    WCHAR doNotDisturbModeIconUri[ICON_URI_MAX_LENGTH];

    /// <summary>
    /// URI to the alarm icon.
    /// If this URI is empty it means the alarm is off.
    /// </summary>
    WCHAR alarmIconUri[ICON_URI_MAX_LENGTH];

    /// <summary>
    /// Number of lines of text to display.
    /// </summary>
    DWORD detailedTextCount;

    /// <summary>
    /// Array of all lines of text to display.
    /// </summary>
    DETAILED_TEXT_INFORMATION detailedTexts[DETAILED_TEXT_MAX_COUNT];

    /// <summary>
    /// Number of notification badges to display.
    /// </summary>
    DWORD badgeCount;

    /// <summary>
    /// Array of all notification badges.
    /// </summary>
    BADGE_INFORMATION badges[BADGE_MAX_COUNT];
} DEVICE_LOCK_SCREEN_SNAPSHOT, *LPDEVICE_LOCK_SCREEN_SNAPSHOT;
