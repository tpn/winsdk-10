//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//
#pragma once

#include <windows.h>
#include <initguid.h>
#include <nfcdriverddi.h>

#ifdef __cplusplus
extern "C" {
#endif  // __cplusplus

#define NFC_DEVICES_REG_KEY L"SOFTWARE\\Microsoft\\NFCDevices"

#define NFC_DRIVER_PATH_REG_VALUE L"DriverPath"
#define NFC_DRIVER_PROXIMITY_SUPPORTED_REG_VALUE L"ProximitySupported"
#define NFC_DRIVER_SECURE_ELEMENT_SUPPORTED_REG_VALUE L"SecureElementSupported"

#define NFC_PROXIMATE_DEVICE_ARRIVAL_MESSAGE_TYPE L"DeviceArrived"
#define NFC_PROXIMATE_DEVICE_DEPARTURE_MESSAGE_TYPE L"DeviceDeparted"

#define NFC_MAX_PROXIMITY_MESSAGE_TYPE_PROTOCOL_CHARS 250
#define NFC_MAX_PROXIMITY_MESSAGE_TYPE_SUBTYPE_CHARS 250

// Total max message type is the protocol + subtype + extra 1 for the dot between them
#define NFC_MAX_PROXIMITY_MESSAGE_TYPE_CHARS (NFC_MAX_PROXIMITY_MESSAGE_TYPE_PROTOCOL_CHARS + NFC_MAX_PROXIMITY_MESSAGE_TYPE_SUBTYPE_CHARS + 1)

/// <summary>
/// The InitializeDriver function may be used by the driver to initialize any global driver data or resources
/// that is independent of an individual device. InitializeDriver maybe called multiple times. Each call to
/// InitializeDriver function must be matched by corresponding call to UninitializeDriver.
/// </summary>
/// <returns>
/// S_OK - The operation succeeded
/// </returns>
/// <remarks>
/// </remarks>
HRESULT WINAPI InitializeDriver();

typedef HRESULT (WINAPI *INITIALIZE_DRIVER)();


/// <summary>
/// The UninitializeDriver function shall free all resources held by the driver. Any open device handles 
/// shall be forcibly closed and invalidated.
/// </summary>
/// <returns>
/// S_OK - The operation completed successfully
/// E_NOTINIT - The driver was not initialized
/// </returns>
/// <remarks>
/// </remarks>
HRESULT WINAPI UninitializeDriver();

typedef HRESULT (WINAPI *UNINITIALIZE_DRIVER)();


/// <summary>
/// Handle to an open device
/// </summary>
typedef void *DEVICE_HANDLE;

/// <summary>
/// The OpenDevice function shall prepare the specified device for operation, and return a device 
/// handle to the caller. The driver must allow a single device to be opened multiple times within
/// the driver's process. This is to say, multiple calls to OpenDevice must succeed and return a
/// valid handle to the device, and each handle must remain valid until the specific handle is closed
/// with CloseDevice. Calling CloseDevice on only a single device handle while there are others still
/// open should not close any of the other open handles. Only once all outstanding handles have each been
/// closed with CloseDevice, should the device be fully closed. This allows for multiple disparate
/// components within the process to share access to the device by each having their own DEVICE_HANDLE.
/// </summary>
/// <param name="lpcwstrDeviceName">Unicode string specifying the name of the device to 
/// open. The device name shall be discoverable through the registry as described in the 
/// "Device Discovery" section</param>
/// <param name="phDevice">Returns a handle to the opened device.</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_INVALIDARG - An argument passed was invalid
/// E_POINTER - A non-optional pointer passed was NULL
/// E_FILENOTFOUND - The device name was not valid
/// </returns>
/// <remarks>
/// </remarks>
HRESULT WINAPI OpenDevice(
    __in    LPCWSTR lpcwstrDeviceName, 
    __out   DEVICE_HANDLE *phDevice);
    
typedef HRESULT (WINAPI *OPEN_DEVICE)(
    __in    LPCWSTR lpcwstrDeviceName, 
    __out   DEVICE_HANDLE *phDevice);


/// <summary>
/// The CloseDevice function shall close the device, freeing any related resources, and 
/// forcibly terminating any outstanding operations such as proximity subscriptions or 
/// publications and secure element connections.
/// </summary>
/// <param name="hDevice">Handle to a device opened with OpenDevice.</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_INVALIDARG - An argument passed was invalid
/// </returns>
/// <remarks>
/// </remarks>
HRESULT WINAPI CloseDevice(__in DEVICE_HANDLE hDevice);

typedef HRESULT (WINAPI *CLOSE_DEVICE)(__in DEVICE_HANDLE hDevice);


/// <summary>
/// This function retrieves manutfacturing data about the device or secure element including 
/// serial number and hardware model data. The hardware model data is a byte 
/// buffer containing IHV-specific data about the hardware model of the device, 
/// for example model identification, batch number, hardware revision, mask ID etc.
/// </summary>
/// <param name="hDevice">Handle to a device opened with OpenDevice</param>
/// <param name="pguidSecureElementId">Optional GUID of the secure element to get data from, or NULL for device</param>
/// <param name="pdwVendorID">Identifies the vendor of the secure element, 
/// and so indicates how to interpret the hardware model data.</param>
/// <param name="pbSerialNumber">Buffer to receive the serial number of the secure element.</param>
/// <param name="pcbSerialNumber">On input specifies the size in bytes of pbSerialNumber,
/// on output specifies the number of bytes in the serial number</param>
/// <param name="pbHardwareModelData">Buffer to receive the hardware model data
/// (model identifier, hardware revision, batch number, mask ID etc) of the secure element.</param>
/// <param name="pcbHardwareModelData">On input specifies the size in bytes of 
/// pbHardwareModelData, on output specifies the number of bytes in the hardware model data.</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_INVALIDARG - An argument passed was invalid
/// E_NOT_SUFFICIENT_BUFFER - A supplied buffer was not large enough to receive the data. The caller should reallocate a buffer of the returned size and call again
/// E_NOTIMPL - The secure element does not support retrieving the data
/// E_SHARING_VIOLATION - The secure element wasn't able to retrieve data due to sharing violation
/// </returns>
/// <remarks>
/// </remarks>
HRESULT WINAPI DeviceGetManufacturerData(
    __in                                DEVICE_HANDLE hDevice, 
    __in_opt                            GUID *pguidSecureElementId,
    __out_opt                           DWORD *pdwVendorID,
    __out_bcount_opt(*pcbSerialNumber)  BYTE *pbSerialNumber,
    __inout                             DWORD *pcbSerialNumber,
    __out_bcount_opt(*pcbHardwareModelData) BYTE *pbHardwareModelData,
    __inout                             DWORD *pcbHardwareModelData);

typedef HRESULT (WINAPI *DEVICE_GET_MANUFACTURER_DATA)(
    __in                                DEVICE_HANDLE hDevice, 
    __in_opt                            GUID *pguidSecureElementId,
    __out_opt                           DWORD *pdwVendorID,
    __out_bcount_opt(*pcbSerialNumber)  BYTE *pbSerialNumber,
    __inout                             DWORD *pcbSerialNumber,
    __out_bcount_opt(*pcbHardwareModelData) BYTE *pbHardwareModelData,
    __inout                             DWORD *pcbHardwareModelData);


/// <summary>
/// The DiagnoseDevice function shall trigger the hardware to perform any available 
/// self-diagnostic tests to detect any issues exist, and returns IHV-specific diagnostic 
/// data to indicate what types of problems were found.
/// </summary>
/// <param name="hDevice">Handle to a device opened with OpenDevice.</param>
/// <param name="pfDiagnosticPassed">Returns TRUE if the hardware self-diagnostics 
/// passed and found no problems, FALSE if problems were detected.</param>
/// <param name="pbDiagnosticData">Returns IHV-specific data in case the diagnostic
/// fails to detail what problems were detected.</param>
/// <param name="pcbDiagnosticData">On input specifies the size of the supplied
/// pbDiagnosticData buffer, on output returns either the size of buffer required  
/// when the supplied buffer was too small (E_NOT_SUFFICIENT_BUFFER returned) or the 
/// size of the data written to the pbDiagnosticData buffer if the operation was
/// successful.</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_INVALIDARG - An argument passed was invalid
/// E_NOT_SUFFICIENT_BUFFER - The buffer provided was too small
/// E_NOTIMPL - The device does not support any self-diagnostics
/// </returns>
/// <remarks>
/// The IHV-specific data shall be
/// fixed length per IHV, the caller shall first call the function with NULL for both 
/// pbDiagnosticData and pfDiagnosticPassed and 0 for pcbDiagnosticData to discover 
/// the size required and diagnostics shall not be performed. Instead, the fixed output 
/// buffer size shall be returned to the caller and E_NOT_SUFFICIENT_BUFFER error. The 
/// diagnostics shall only be performed when the caller has provided a buffer large
/// enough to hold the diagnostic result data.
/// </remarks>
HRESULT WINAPI DiagnoseDevice(
    __in                            DEVICE_HANDLE hDevice,
    __in_bcount_opt(cbInputData)    BYTE *pbInputData,
    __in                            DWORD cbInputData,
    __out_opt                       BOOL *pfDiagnosticPassed,
    __out_bcount_opt(*pcbDiagnosticData) BYTE *pbDiagnosticData,
    __inout                         DWORD *pcbDiagnosticData);

typedef HRESULT (WINAPI *DIAGNOSE_DEVICE)(
    __in                            DEVICE_HANDLE hDevice,
    __in_bcount_opt(cbInputData)    BYTE *pbInputData,
    __in                            DWORD cbInputData,
    __out_opt                       BOOL *pfDiagnosticPassed,
    __out_bcount_opt(*pcbDiagnosticData) BYTE *pbDiagnosticData,
    __inout                         DWORD *pcbDiagnosticData);



/// <summary>
/// Handle to a proximity publication or subscription
/// </summary>
typedef void *PROXIMITY_HANDLE;

/// <summary>
/// Callback function called when a proximity message has been transmitted
/// </summary>
/// <param name="pCallbackContext">The callback context that was specified by the caller 
/// when the publication was created.</param>
/// <param name="lpcwstrMessageType">The message type published</param>
/// <param name="hMessagePublication">The proximity handle to the publication</param>
/// <returns>
/// S_OK - The operation succeeded
/// </returns>
/// <remarks>
/// </remarks>
typedef void (WINAPI *PROXIMITY_MESSAGE_TRANSMITTED_CALLBACK)(
    __in        VOID *pCallbackContext,
    __in_z      LPCWSTR lpcwstrMessageType,
    __in        PROXIMITY_HANDLE hMessagePublication);


/// <summary>
/// Publishes the supplied message, and keep the message published until it is explicitly unpublished
/// with the ProximityUnpublishMessage function. The optionally supplied message transmitted 
/// callback function shall be called whenever the message has been published to a proximate device.
/// </summary>
/// <param name="hDevice">Handle to a device opened with OpenDevice.</param>
/// <param name="lpcwstrMessageType">A Unicode string specifying the type of message to be published.</param>
/// <param name="pbMessageData">Buffer containing the message data to be published</param>
/// <param name="cbMessageData">The size in bytes of the pbMessageData buffer</param>
/// <param name="pfnCallback">Optional callback function to be called each time the message has been 
/// published to a proximate device. May be NULL if no notification is needed by the caller.</param>
/// <param name="pCallbackContext">Optional caller-specific opaque pointer that will be passed through 
/// when calling the callback function.</param>
/// <param name="phMessagePublication">Returns a handle to the newly created message publication.</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_INVALIDARG - An argument passed was invalid
/// E_SHARING_VIOLATION - An already published message of a message type that prevents sharing has 
/// prevented the message from being published again. For example, the "NDEF.WriteTag" message type 
/// supports only a single outstanding message of that type from being published at a time.
/// </returns>
/// <remarks>
/// </remarks>
HRESULT WINAPI ProximityPublishMessage(
    __in                        DEVICE_HANDLE hDevice, 
    __in_z                      LPCWSTR lpcwstrMessageType, 
    __in_bcount(cbMessageData)  BYTE *pbMessageData, 
    __in                        DWORD cbMessageData,  
    __in_opt                    PROXIMITY_MESSAGE_TRANSMITTED_CALLBACK pfnCallback, 
    __in_opt                    VOID *pCallbackContext, 
    __out                       PROXIMITY_HANDLE *phMessagePublication);

typedef HRESULT (WINAPI *PROXIMITY_PUBLISH_MESSAGE)(
    __in                        DEVICE_HANDLE hDevice, 
    __in_z                      LPCWSTR lpcwstrMessageType, 
    __in_bcount(cbMessageData)  BYTE *pbMessageData, 
    __in                        DWORD cbMessageData,  
    __in_opt                    PROXIMITY_MESSAGE_TRANSMITTED_CALLBACK pfnCallback, 
    __in_opt                    VOID *pCallbackContext, 
    __out                       PROXIMITY_HANDLE *phMessagePublication);

    
/// <summary>
/// Closes a proximity handle and either unpublishes the message or terminates the subscription 
/// given a handle returned by either ProximityPublishMessage or ProximitySubscribeForMessage. 
/// After calling this function, the handle becomes invalid.
/// </summary>
/// <param name="hProximity">A proximity handle returned by either ProximityPublishMessage 
/// or ProximitySubscribeForMessage</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_INVALIDARG - An argument passed was invalid
/// </returns>
/// <remarks>
/// </remarks>
HRESULT WINAPI ProximityCloseHandle(__in PROXIMITY_HANDLE hProximity);

typedef HRESULT (WINAPI *PROXIMITY_CLOSE_HANDLE)(__in PROXIMITY_HANDLE hProximity);


/// <summary>
/// Callback function called when a proximity message has been received
/// </summary>
/// <param name="pCallbackContext">The callback context that was specified by
/// the caller when the subscription was created.</param>
/// <param name="lpcwstrMessageType">The message type received</param>
/// <param name="hMessagePublication">The proximity handle to the subscription</param>
/// <param name="pbMessageData">The message data received from the 
/// proximate device. See the Windows 8 Proximity DDI spec for details.</param>
/// <param name="cbMessageData">The size in bytes of pbMessageData</param>
/// <returns>
/// S_OK - The operation succeeded
/// </returns>
/// <remarks>
/// </remarks>
typedef void (WINAPI *PROXIMITY_MESSAGE_RECEIVED_CALLBACK)(
    __in                        VOID *pCallbackContext, 
    __in_z                      LPCWSTR lpcwstrMessageType,
    __in                        PROXIMITY_HANDLE hMessagePublication,
    __in_bcount(cbMessageData)  BYTE *pbMessageData, 
    __in                        DWORD cbMessageData);

/// <summary>
/// Subscribes to receive messages of the specified type.
/// </summary>
/// <param name="hDevice">Handle to a device opened with OpenDevice.</param>
/// <param name="lpcwstrMessageType">A Unicode string specifying the type of messages to subscribe for.</param>
/// <param name="pfnCallback">Callback function to be called each time the event is raised.</param>
/// <param name="pCallbackContext">Optional caller-specific opaque pointer that will be passed through when calling the callback function.</param>
/// <param name="phMessageSubscription">Returns a handle to the newly created message subscription.</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_INVALIDARG - An argument passed was invalid
/// </returns>
/// <remarks>
/// The provider should assume that
/// if the client subscribes for a message type twice, it is because the client wants to receive
/// the message twice when the message is received.
/// </remarks>
HRESULT WINAPI ProximitySubscribeForMessage(
    __in        DEVICE_HANDLE hDevice, 
    __in_z      LPCWSTR lpcwstrMessageType, 
    __in        PROXIMITY_MESSAGE_RECEIVED_CALLBACK pfnCallback, 
    __in_opt    VOID *pCallbackContext, 
    __out       PROXIMITY_HANDLE *phMessageSubscription);

typedef HRESULT (WINAPI *PROXIMITY_SUBSCRIBE_FOR_MESSAGE)(
    __in        DEVICE_HANDLE hDevice, 
    __in_z      LPCWSTR lpcwstrMessageType, 
    __in        PROXIMITY_MESSAGE_RECEIVED_CALLBACK pfnCallback, 
    __in_opt    VOID *pCallbackContext, 
    __out       PROXIMITY_HANDLE *phMessageSubscription);


/// <summary>
/// A client can temporarily disable a subscription/publication or all of proximity on the device by calling this function. 
/// This is useful when a client wants to disable the proximity functionality but keep the resources 
/// allocated to quickly re-enable them when needed. This function disables proximity for the 
/// operation on the specified proximity operation or device handle, proximity operations on other proximity handles or devices 
/// are not affected.
/// </summary>
/// <param name="hProximity">Proximity handle returned by either ProximityPublishMessage
/// or ProximitySubscribeForMessage,  or a device handle returned by OpenDevice</param>
/// <returns>
/// S_OK - The operation succeeded
/// S_FALSE - The proximity handle was already disabled
/// E_INVALIDARG - An argument passed was invalid
/// </returns>
/// <remarks>
/// Any outstanding published messages or subscriptions shall be temporarily
/// disabled from being published to proximate devices or subscribing to messages, but upon 
/// being re-enabled with ProximityEnable shall then return to publishing and subscribing normally.
/// </remarks>
HRESULT WINAPI ProximityDisable(__in void *hProximity);

typedef HRESULT (WINAPI *PROXIMITY_DISABLE)(__in void *hProximity);


/// <summary>
/// A client can re-enable a previously disabled subscription/publication or all of proximity on the device for the specified 
/// proximity operation or device handle with this function.
/// </summary>
/// <param name="hProximity">Proximity handle returned by either ProximityPublishMessage or 
/// ProximitySubscribeForMessage, or a device handle returned by OpenDevice</param>
/// <returns>
/// S_OK - The operation succeeded
/// S_FALSE - The proximity handle was already enabled
/// E_INVALIDARG - An argument passed was invalid
/// </returns>
/// <remarks>
/// </remarks>
HRESULT WINAPI ProximityEnable(__in void *hProximity);

typedef HRESULT (WINAPI *PROXIMITY_ENABLE)(__in void *hProximity);

/// <summary>
/// Each provider implementation can specify a maximum message size for publications and 
/// subscriptions. This function returns the maximum supported size of a 
/// message.
/// </summary>
/// <param name="hDevice">Handle to a device opened with OpenDevice</param>
/// <param name="pcbMaxMessage">Returns the maximum message size in bytes that 
/// the driver is capable of handling.</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_INVALIDARG - An argument passed was invalid
/// </returns>
/// <remarks>
/// Windows and Windows Phone require that this maximum provider-supported 
/// message size be no less than 2KB.
/// </remarks>
HRESULT WINAPI ProximityGetMaxMessageBytes(
    __in        DEVICE_HANDLE hDevice, 
    __out       DWORD *pcbMaxMessage);

typedef HRESULT (WINAPI *PROXIMITY_GET_MAX_MESSAGE_BYTES)(
    __in        DEVICE_HANDLE hDevice, 
    __out       DWORD *pcbMaxMessage);

/// <summary>
/// Returns the approximate transmission speed (in kilobytes per second) supported
///  by the provider.
/// </summary>
/// <param name="hDevice">Handle to a device opened with OpenDevice</param>
/// <param name="pdwSpeed">Returns the approximate transmission speed in kilobytes per second.</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_INVALIDARG - An argument passed was invalid
/// </returns>
/// <remarks>
/// Must be no less than 16 kilobytes per second.
/// </remarks>
HRESULT WINAPI ProximityGetTransmissionRateKilobytesPerSecond(
    __in        DEVICE_HANDLE hDevice, 
    __out       DWORD *pdwSpeed);

typedef HRESULT (WINAPI *PROXIMITY_GET_TRANSMISSION_RATE_KILOBYTES_PER_SECOND)(
    __in        DEVICE_HANDLE hDevice, 
    __out       DWORD *pdwSpeed);

/// <summary>
/// Handle to a secure element enumeration
/// </summary>
typedef void *SECURE_ELEMENT_ENUM_HANDLE;

/// <summary>
/// Calling this function resets and initializes the enumeration of secure elements.
/// </summary>
/// <param name="hDevice">Handle to a device opened with OpenDevice</param>
/// <param name="phSecureElementEnum">Handle to enumerate Secure Elements on the device</param>
/// <returns>
/// </returns>
/// <remarks>
/// </remarks>
HRESULT WINAPI SecureElementInitEnum(
    __in        DEVICE_HANDLE hDevice,
    __out       SECURE_ELEMENT_ENUM_HANDLE *phSecureElementEnum);

typedef HRESULT (WINAPI *SECURE_ELEMENT_INIT_ENUM)(
    __in        DEVICE_HANDLE hDevice,
    __out       SECURE_ELEMENT_ENUM_HANDLE *phSecureElementEnum);


/// <summary>
/// Returns information about the next secure element in the enumeration. 
/// </summary>
/// <param name="hSecureElementEnum">Handle to a Secure Element Enumeration</param>
/// <param name="pguidSecureElementId">Returns a GUID identifying the secure 
/// element which may be used to refer to the particular secure element. In the 
/// case of internal secure elements, the GUID shall be a unique identifier derived 
/// from the serial number and/or other unique identification of the secure element. 
/// For external secure elements, the GUID may be a fixed constant and identifies
/// only the "socket" into which the secure element is connected.</param>
/// <param name="peSecureElementType">Identifies the type of secure element</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_INVALIDARG - An argument passed was invalid
/// E_NOMORE  - All secure elements have already been enumerated.
/// </returns>
/// <remarks>
/// The caller must have first called SecureElementInitEnum once to intitialize the 
/// enumeration process. The enumeration shall be per-device handle, such that 
/// an enumeration on one device handle shall not affect enumeration on another.
/// </remarks>
HRESULT WINAPI SecureElementEnumNext(
    __in        SECURE_ELEMENT_ENUM_HANDLE hSecureElementEnum, 
    __out       GUID *pguidSecureElementId, 
    __out       SECURE_ELEMENT_TYPE *peSecureElementType);

typedef HRESULT (WINAPI *SECURE_ELEMENT_ENUM_NEXT)(
    __in        SECURE_ELEMENT_ENUM_HANDLE hSecureElementEnum, 
    __out       GUID *pguidSecureElementId, 
    __out       SECURE_ELEMENT_TYPE *peSecureElementType);


/// <summary>
/// Calling this function deinitializes the enumeration of secure elements.
/// </summary>
/// <param name="hSecureElementEnum">Handle to a Secure Element Enumeration</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_INVALIDARG - An argument passed was invalid
/// </returns>
/// <remarks>
/// The caller must call this function to deinitialize the enumeration of the secure
/// elements. Each call to initialize enumeration must be matched by a corresponding
/// call to deinitialize enumeration.
/// </remarks>
HRESULT WINAPI SecureElementDeinitEnum(
    __in        SECURE_ELEMENT_ENUM_HANDLE hSecureElementEnum);

typedef HRESULT (WINAPI *SECURE_ELEMENT_DEINIT_ENUM)(
    __in        SECURE_ELEMENT_ENUM_HANDLE hSecureElementEnum);


/// <summary>
/// Handle to a secure element event subscription
/// </summary>
typedef void * SECURE_ELEMENT_EVENT_SUBSCRIPTION_HANDLE;

/// <summary>
/// Callback function called when a secure element event is fired
/// </summary>
/// <param name="pCallbackContext">Optional caller-specific opaque pointer passed
/// through from when the event was subscribed to.</param>
/// <param name="pguidSecureElementId">Identifies the secure element raising the 
/// event, or NULL if the event was not specific to a secure element</param>
/// <param name="eSecureElementEventType">The type of event being raised by 
/// the secure element</param>
/// <param name="pbEventData">Additional data specific to the type of event,
/// or NULL if the event does not contain additional data. See the
/// SECURE_ELEMENT_EVENT_TYPE Enum section for information about 
/// which events return additional data.</param>
/// <param name="cbEventData">Size in bytes of the additional data</param>
/// <param name="hSub">The event subscription handle for the event that was fired</param>
/// <returns>
/// S_OK - The operation succeeded
/// </returns>
/// <remarks>
/// </remarks>
typedef void (WINAPI *SECURE_ELEMENT_EVENT_CALLBACK)(
    __in                        VOID *pCallbackContext, 
    __in                        GUID *pguidSecureElementId, 
    __in                        SECURE_ELEMENT_EVENT_TYPE eSecureElementEventType, 
    __in                        SECURE_ELEMENT_EVENT_SUBSCRIPTION_HANDLE hSub,
    __in_bcount(cbEventData)    BYTE *pbEventData,
    __in                        DWORD cbEventData);

/// <summary>
/// Subscribes to the specified secure element event from the specified secure element. 
/// Once subscribed, the driver shall call the supplied callback function each time the 
/// event is raised. The subscription shall be terminated only once the device is closed 
/// with CloseDevice.
/// </summary>
/// <param name="hDevice">Handle to a device opened with OpenDevice</param>
/// <param name="pguidSecureElementId">dentifies the secure element from 
/// which to receive events. If NULL, will subscribe to the event across all
///  secure elements.</param>
/// <param name="eSecureElementEventType">Specifies the type of event to 
/// subscribe to. See the definition for SECURE_ELEMENT_EVENT_TYPE for more 
/// details on types of events.</param>
/// <param name="pfnCallback">Callback function to be called each time the event is raised.</param>
/// <param name="pCallbackContext">Optional caller-specific opaque pointer that will 
/// be passed through when calling the callback function.</param>
/// <param name="phSubHandle">Receives a secure element subscription handle to allow the 
/// subscription to be ended by calling SecureElementUnsubscribeForEvent. The caller should end the
/// subscription before closing the device.</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_INVALIDARG - An argument passed was invalid
/// E_NOTIMPL  - The specified event type is not supported by the specified secure element
/// </returns>
/// <remarks>
/// </remarks>
HRESULT WINAPI SecureElementSubscribeForEvent(
    __in        DEVICE_HANDLE hDevice, 
    __in_opt    GUID *pguidSecureElementId, 
    __in        SECURE_ELEMENT_EVENT_TYPE eSecureElementEventType,
    __in        SECURE_ELEMENT_EVENT_CALLBACK pfnCallback, 
    __in_opt    VOID *pCallbackContext,
    __out       SECURE_ELEMENT_EVENT_SUBSCRIPTION_HANDLE *phSubHandle);

typedef HRESULT (WINAPI *SECURE_ELEMENT_SUBSCRIBE_FOR_EVENT)(
    __in        DEVICE_HANDLE hDevice, 
    __in_opt    GUID *pguidSecureElementId, 
    __in        SECURE_ELEMENT_EVENT_TYPE eSecureElementEventType,
    __in        SECURE_ELEMENT_EVENT_CALLBACK pfnCallback, 
    __in_opt    VOID *pCallbackContext,
    __out       SECURE_ELEMENT_EVENT_SUBSCRIPTION_HANDLE *phSubHandle);

/// <summary>
/// Closes a secure element event subscription handle, terminating the subscription. 
/// After calling this function, the handle becomes invalid, and no further callbacks 
/// will be fired. The invalid handle should no longer be used by the caller.
/// </summary>
/// <param name="hSubHandle">A secure element event subscription handle 
/// returned by SecureElementSubscribeFo</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_POINTER - A null pointer was passed as an argument
/// </returns>
HRESULT SecureElementUnsubscribeForEvent(__in SECURE_ELEMENT_EVENT_SUBSCRIPTION_HANDLE hSubHandle);

typedef HRESULT (WINAPI *SECURE_ELEMENT_UNSUBSCRIBE_FOR_EVENT)(
    __in SECURE_ELEMENT_EVENT_SUBSCRIPTION_HANDLE hSubHandle);


/// <summary>
/// Sets whether the specified secure element is exposed in card emulation mode. When a secure 
/// element is "exposed" as card emulation, it means when the device is brought to an external 
/// reader that secure element may be accessed by the reader.
/// </summary>
/// <param name="hDevice">Handle to a device opened with OpenDevice</param>
/// <param name="pguidSecureElementId">The ID of the secure element whose mode is to be set</param>
/// <param name="eEmulationMode">The mode to set. Note that if the mode is set to "ExclusiveOn", 
/// then any other secure elements previously exposed shall no longer be exposed. See the next 
/// section for a definition of the SECURE_ELEMENT_CARD_EMULATION_MODE enum data type.</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_NOTIMPL - The caller tried to set a mode not supported
/// E_INVALIDARG - An argument was not valid
/// </returns>
/// <remarks>
/// Currently, only a single secure element may be exposed at a time. Any changes to the card 
/// emulation mode shall be persisted, including if the device driver is unloaded or the device 
/// loses external power. The default card emulation mode for devices that have not had their 
/// mode set before shall be "Off".
/// </remarks>
HRESULT WINAPI SecureElementSetCardEmulationMode(
    __in        DEVICE_HANDLE hDevice, 
    __in        GUID *pguidSecureElementId, 
    __in        SECURE_ELEMENT_CARD_EMULATION_MODE eEmulationMode);

typedef HRESULT (WINAPI *SECURE_ELEMENT_SET_CARD_EMULATION_MODE)(
    __in        DEVICE_HANDLE hDevice, 
    __in        GUID *pguidSecureElementId, 
    __in        SECURE_ELEMENT_CARD_EMULATION_MODE eEmulationMode);

/// <summary>
/// Retrieves the NFC controller capabilities. It is required for the
/// caller to ensure it checks the driver's capabilities before using
/// these optional features.
/// </summary>
/// <param name="hDevice">A device handle</param>
/// <param name="pCapabilities">The NFC controller capabilities</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_POINTER - A null pointer was passed as an argument
/// </returns>
HRESULT WINAPI SecureElementGetNfccCapabilities(
    __in        DEVICE_HANDLE hDevice,
    __out       SECURE_ELEMENT_NFCC_CAPABILITIES *pCapabilities);

typedef HRESULT (WINAPI *SECURE_ELEMENT_GET_NFCC_CAPABILITIES)(
    __in        DEVICE_HANDLE hDevice,
    __out       SECURE_ELEMENT_NFCC_CAPABILITIES *pCapabilities);

/// <summary>
/// Retrieves the current routing table of the NFC controller. The routing
/// table shouldn't include the implicit NFC-DEP protocol routing entry.
/// </summary>
/// <param name="hDevice">A device handle</param>
/// <param name="pRoutingTable">The routing table</param>
/// <param name="cbRoutingTable">The size of the input routing table</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_POINTER - A null pointer was passed as an argument
/// </returns>
HRESULT WINAPI SecureElementGetRoutingTable(
    __in                            DEVICE_HANDLE hDevice,
    __out_bcount(cbRoutingTable)    SECURE_ELEMENT_ROUTING_TABLE *pRoutingTable,
    __in                            DWORD cbRoutingTable);

typedef HRESULT (WINAPI *SECURE_ELEMENT_GET_ROUTING_TABLE)(
    __in                            DEVICE_HANDLE hDevice,
    __out_bcount(cbRoutingTable)    SECURE_ELEMENT_ROUTING_TABLE *pRoutingTable,
    __in                            DWORD cbRoutingTable);

/// <summary>
/// Set the routing table of the NFC controller. The routing table
/// set shouldn't include the implicit NFC-DEP protocol routing entry.
/// The caller should ensure the routing table being set doesn't 
/// exceed the max routing table size indicated in the NFCC capabilities
/// otherwise the driver should return an error
/// </summary>
/// <param name="hDevice">A device handle</param>
/// <param name="pRoutingTable">The routing table</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_INVALIDARG - The routing table supplied was invalid
/// E_INVALID_USER_BUFFER - The max routing table size limit exceeded
/// E_POINTER - A null pointer was passed as an argument
/// </returns>
HRESULT WINAPI SecureElementSetRoutingTable(
    __in        DEVICE_HANDLE hDevice,
    __in        SECURE_ELEMENT_ROUTING_TABLE *pRoutingTable);

typedef HRESULT (WINAPI *SECURE_ELEMENT_SET_ROUTING_TABLE)(
    __in        DEVICE_HANDLE hDevice,
    __in        SECURE_ELEMENT_ROUTING_TABLE *pRoutingTable);

/// <summary>
/// The handle for the HCE remote receive subscription
/// </summary>
typedef void *HCE_REMOTE_RECV_SUBSCRIPTION_HANDLE;

typedef void (WINAPI *SECURE_ELEMENT_HCE_REMOTE_RECV_CALLBACK)(
    __in_opt                VOID *pCallbackContext,
    __in                    USHORT uConnectionId,
    __in_bcount(cbPayload)  BYTE *pbPayload,
    __in                    USHORT cbPayload);

/// <summary>
/// Subscribes for the HCE remote receive event. On receipt of a packet from the
/// HCE connection, the driver will invoke the receive callback handler
/// </summary>
/// <param name="hDevice">A device handle</param>
/// <param name="pCallback">The callback to invoke when a remote packet is received over HCE</param>
/// <param name="pCallbackContext">The callback context</param>
/// <param name="hSubHandle">The handle for the subscription</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_POINTER - A null pointer was passed as an argument
/// </returns>
HRESULT WINAPI SecureElementSubscribeForHceRemoteRecv(
    __in        DEVICE_HANDLE hDevice,
    __in        SECURE_ELEMENT_HCE_REMOTE_RECV_CALLBACK pCallback,
    __in_opt    VOID *pCallbackContext,
    __out       HCE_REMOTE_RECV_SUBSCRIPTION_HANDLE *phSubHandle);

typedef HRESULT (WINAPI *SECURE_ELEMENT_SUBSCRIBE_FOR_HCE_REMOTE_RECV)(
    __in        DEVICE_HANDLE hDevice,
    __in        SECURE_ELEMENT_HCE_REMOTE_RECV_CALLBACK pCallback,
    __in_opt    VOID *pCallbackContext,
    __out       HCE_REMOTE_RECV_SUBSCRIPTION_HANDLE *phSubHandle);

/// <summary>
/// Unsubscribes for the HCE remote receive event
/// </summary>
/// <param name="hDevice">A device handle</param>
/// <param name="hSubHandle">The handle for the subscription</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_POINTER - A null pointer was passed as an argument
/// </returns>
HRESULT WINAPI SecureElementUnsubscribeForHceRemoteRecv(
    __in        DEVICE_HANDLE hDevice,
    __in        HCE_REMOTE_RECV_SUBSCRIPTION_HANDLE hSubHandle);

typedef HRESULT (WINAPI *SECURE_ELEMENT_UNSUBSCRIBE_FOR_HCE_REMOTE_RECV)(
    __in        DEVICE_HANDLE hDevice,
    __in        HCE_REMOTE_RECV_SUBSCRIPTION_HANDLE hSubHandle);

/// <summary>
/// Sends the response packet over the HCE connection to the remote device. The data
/// send must be in a valid 7816-4 APDU format. There has to be an active HCE connection
/// otherwise the driver should return an error
/// </summary>
/// <param name="hDevice">A device handle</param>
/// <param name="pPacket">The data packet to send over HCE</param>
/// <returns>
/// S_OK - The operation succeeded
/// E_POINTER - A null pointer was passed as an argument
/// E_INVALIDARG - The data packet isn't valid
/// E_NOT_VALID_STATE - No HCE connection exists
/// </returns>
HRESULT WINAPI SecureElementHceRemoteSend(
    __in                    DEVICE_HANDLE hDevice,
    __in                    USHORT uConnectionId,
    __in_bcount(cbPayload)  BYTE *pbPayload,
    __in                    USHORT cbPayload);

typedef HRESULT (WINAPI *SECURE_ELEMENT_HCE_REMOTE_SEND)(
    __in                    DEVICE_HANDLE hDevice,
    __in                    USHORT uConnectionId,
    __in_bcount(cbPayload)  BYTE *pbPayload,
    __in                    USHORT cbPayload);

#ifdef __cplusplus
} // extern "C"
#endif  // __cplusplus
