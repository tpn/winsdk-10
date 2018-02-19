//
// Copyright (c) Microsoft Corporation.  All rights reserved.
//

//
// Kernel Mode Network Power Dependency Broker
//      API to wake up the network interface from low power mode
//

#pragma once

#ifdef __cplusplus
extern "C" {
#endif

//
// client ID for the purpose of network interface power control
//
#define NETPWRDEPBROKER_CLIENT_WIFICALLING          0

//
// predefined macros for timeout
//
// use default timeout while acquiring referece to the network interface activation
#define NETPWRDEPBROKER_TIMEOUT_MS_USEDEFAULT       (-1)
// use minimum timeout while acquiring referece to the network interface activation
#define NETPWRDEPBROKER_TIMEOUT_MS_USEMIN           (-2)
// use maximum timeout while acquiring referece to the network interface activation
#define NETPWRDEPBROKER_TIMEOUT_MS_USEMAX           (-3)

//
// Description:
//      Initialize the API
// Arguments:
//      [in]    ulClientID  Only NETPWRDEPBROKER_CLIENT_WIFICALLING is supported currently.
//      [out]   phBroker    returns the handle to be used for other API calls.
// Return Value:
//      STATUS_SUCCESS if succeeded.
// Remarks:
//      IRQL == PASSIVE_LEVEL.
//      The returned handle must be released by calling NpdBrokerUninitialize.
//
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
NpdBrokerInitialize(
ULONG ulClientID,
OUT PHANDLE phBroker
);

//
// Description:
//      Uninitialize the API
// Arguments:
//      [in]    hBroker     handle returned from NpdBrokerInitialize.
// Return Value:
//      STATUS_SUCCESS if succeeded.
// Remarks:
//      IRQL == PASSIVE_LEVEL.
//      Once this API is called, the handle is no longer valid.
//
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
NpdBrokerUninitialize(
IN HANDLE hBroker
);

//
// Description:
//      Activate the network interface with timeout
// Arguments:
//      [in]    hBroker     handle returned from NpdBrokerInitialize.
//      [in]    lTimeoutMS  timeout in millisecond to release the activation reference for the network interface.
// Return Value:
//      STATUS_SUCCESS if succeeded and acquired the reference.
//      STATUS_ABANDONED if succeeded but the activation reference has been acquired already (not timed out).
// Remarks:
//      IRQL == PASSIVE_LEVEL.
//      This API gets the activation reference for the network interface and set a timer to release it in the given timeout.
//      If the reference has been acquired already and not timed out, it returns STATUS_ABANDONED.
//      Even if STATUS_ABANDONED is returned, the timer is updated with the given value.
//      If lTimeoutMS is NETPWRDEPBROKER_TIMEOUT_MS_USEDEFAULT, then the default timeout (3 sec) is used.
//      If lTimeoutMS is NETPWRDEPBROKER_TIMEOUT_MS_USEMIN, then the minimum timeout (500 ms) is used.
//      If lTimeoutMS is NETPWRDEPBROKER_TIMEOUT_MS_USEMAX, then the minimum timeout (30 sec) is used.
//      Otherwise, lTimeoutMS cannot be smaller than minimum nor bigger than maximum.
//
_IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
NpdBrokerAcquireWithTimeout(
IN HANDLE hBroker,
LONG lTimeoutMS
);

#ifdef __cplusplus
}
#endif
