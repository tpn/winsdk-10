/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    iphlpapi.h

Abstract:
    Header file for functions to interact with the IP Stack for MIB-II and
    related functionality

--*/

#ifndef __IPHLPAPI_H__
#define __IPHLPAPI_H__

#if _MSC_VER > 1000
#pragma once
#endif
#include <winapifamily.h>

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#ifdef __cplusplus
extern "C" {
#endif

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// IPRTRMIB.H has the definitions of the structures used to set and get     //
// information                                                              //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

#include <iprtrmib.h>
#include <ipexport.h>
#include <iptypes.h>
#include <tcpestats.h>

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// The GetXXXTable APIs take a buffer and a size of buffer.  If the buffer  //
// is not large enough, the APIs return ERROR_INSUFFICIENT_BUFFER  and      //
// *pdwSize is the required buffer size                                     //
// The bOrder is a BOOLEAN, which if TRUE sorts the table according to      //
// MIB-II (RFC XXXX)                                                        //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////


//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Retrieves the number of interfaces in the system. These include LAN and  //
// WAN interfaces                                                           //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////


DWORD
WINAPI
GetNumberOfInterfaces(
    _Out_ PDWORD  pdwNumIf
    );

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Gets the MIB-II ifEntry                                                  //
// The dwIndex field of the MIB_IFROW should be set to the index of the     //
// interface being queried                                                  //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

DWORD
WINAPI
GetIfEntry(
    _Inout_ PMIB_IFROW   pIfRow
    );

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Gets the MIB-II IfTable                                                  //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

DWORD
WINAPI
GetIfTable(
    _Out_writes_bytes_opt_(*pdwSize) PMIB_IFTABLE pIfTable,
    _Inout_                    PULONG       pdwSize,
    _In_                       BOOL         bOrder
    );

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Gets the Interface to IP Address mapping                                 //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

DWORD
WINAPI
GetIpAddrTable(
    _Out_writes_bytes_opt_(*pdwSize)    PMIB_IPADDRTABLE pIpAddrTable,
    _Inout_                       PULONG           pdwSize,
    _In_                          BOOL             bOrder
    );

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Gets the current IP Address to Physical Address (ARP) mapping            //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

ULONG
WINAPI
GetIpNetTable(
    _Out_writes_bytes_opt_(*SizePointer) PMIB_IPNETTABLE IpNetTable,
    _Inout_                        PULONG          SizePointer,
    _In_                           BOOL            Order
    );

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Gets the IP Routing Table  (RFX XXXX)                                    //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

DWORD
WINAPI
GetIpForwardTable(
    _Out_writes_bytes_opt_(*pdwSize)    PMIB_IPFORWARDTABLE pIpForwardTable,
    _Inout_                       PULONG              pdwSize,
    _In_                          BOOL                bOrder
    );

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Gets TCP Connection/UDP Listener Table                                   //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

ULONG
WINAPI
GetTcpTable(
    _Out_writes_bytes_opt_(*SizePointer)   PMIB_TCPTABLE TcpTable,
    _Inout_                          PULONG        SizePointer,
    _In_                             BOOL          Order
    );

DWORD
WINAPI
GetExtendedTcpTable(
    _Out_writes_bytes_opt_(*pdwSize)        PVOID           pTcpTable,
    _Inout_
    _When_(ulAf == AF_INET, _Deref_in_range_(>=, sizeof(MIB_TCPTABLE)))
    _When_(
        (TableClass == TCP_TABLE_OWNER_PID_LISTENER ||
         TableClass == TCP_TABLE_OWNER_PID_CONNECTIONS ||
         TableClass == TCP_TABLE_OWNER_PID_ALL) && ulAf == AF_INET6,
        _Deref_in_range_(>=, sizeof(MIB_TCP6TABLE_OWNER_PID)))
    _When_(
        (TableClass == TCP_TABLE_OWNER_MODULE_LISTENER ||
         TableClass == TCP_TABLE_OWNER_MODULE_CONNECTIONS ||
         TableClass == TCP_TABLE_OWNER_MODULE_ALL) && ulAf == AF_INET6,
        _Deref_in_range_(>=, sizeof(MIB_TCP6TABLE_OWNER_MODULE)))
    PDWORD          pdwSize,
    _In_                          BOOL            bOrder,
    _In_                          ULONG           ulAf,
    _In_                          TCP_TABLE_CLASS TableClass,
    _In_                          ULONG           Reserved
    );

DWORD
WINAPI
GetOwnerModuleFromTcpEntry(
    _In_                   PMIB_TCPROW_OWNER_MODULE      pTcpEntry,
    _In_                   TCPIP_OWNER_MODULE_INFO_CLASS Class,
    _Out_writes_bytes_(*pdwSize) PVOID                         pBuffer,
    _Inout_                PDWORD                        pdwSize
    );

ULONG
WINAPI
GetUdpTable(
    _Out_writes_bytes_opt_(*SizePointer)   PMIB_UDPTABLE UdpTable,
    _Inout_                          PULONG        SizePointer,
    _In_                             BOOL          Order
    );

DWORD
WINAPI
GetExtendedUdpTable(
    _Out_writes_bytes_opt_(*pdwSize)    PVOID           pUdpTable,
    _Inout_                       PDWORD          pdwSize,
    _In_                          BOOL            bOrder,
    _In_                          ULONG           ulAf,
    _In_                          UDP_TABLE_CLASS TableClass,
    _In_                          ULONG           Reserved
    );

DWORD
WINAPI
GetOwnerModuleFromUdpEntry(
    _In_                      PMIB_UDPROW_OWNER_MODULE      pUdpEntry,
    _In_                      TCPIP_OWNER_MODULE_INFO_CLASS Class,
    _Out_writes_bytes_(*pdwSize)    PVOID                         pBuffer,
    _Inout_                   PDWORD                        pdwSize
    );

#if (NTDDI_VERSION >= NTDDI_VISTA)
ULONG
WINAPI
GetTcpTable2(
    _Out_writes_bytes_opt_(*SizePointer)   PMIB_TCPTABLE2 TcpTable,
    _Inout_                          PULONG         SizePointer,
    _In_                             BOOL           Order
    );
#endif // (NTDDI_VERSION >= NTDDI_VISTA)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#if (NTDDI_VERSION < NTDDI_VISTA)
//
// Deprecated APIs, Added for documentation.
//

DWORD
AllocateAndGetTcpExTableFromStack(
    _Outptr_ PVOID         *ppTcpTable,
    _In_        BOOL          bOrder,
    _In_        HANDLE        hHeap,
    _In_        DWORD         dwFlags,
    _In_        DWORD         dwFamily
    );

DWORD
AllocateAndGetUdpExTableFromStack(
    _Outptr_ PVOID         *ppUdpTable,
    _In_        BOOL          bOrder,
    _In_        HANDLE        hHeap,
    _In_        DWORD         dwFlags,
    _In_        DWORD         dwFamily
    );

#endif // (NTDDI_VERSION < NTDDI_VISTA)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#ifdef _WS2IPDEF_
//
// The following definitions require Winsock2.
//

#if (NTDDI_VERSION >= NTDDI_VISTA)
ULONG
WINAPI
GetTcp6Table(
    _Out_writes_bytes_(*SizePointer)   PMIB_TCP6TABLE TcpTable,
    _Inout_                      PULONG         SizePointer,
    _In_                         BOOL           Order
    );

ULONG
WINAPI
GetTcp6Table2(
    _Out_writes_bytes_(*SizePointer)   PMIB_TCP6TABLE2 TcpTable,
    _Inout_                      PULONG          SizePointer,
    _In_                         BOOL            Order
    );

#endif // (NTDDI_VERSION >= NTDDI_VISTA)

#ifdef WINAPI

ULONG
WINAPI
GetPerTcpConnectionEStats(
    _In_ PMIB_TCPROW Row,
    _In_ TCP_ESTATS_TYPE EstatsType,
    _Out_writes_bytes_opt_(RwSize) PUCHAR Rw,
    _In_ ULONG RwVersion,
    _In_ ULONG RwSize,
    _Out_writes_bytes_opt_(RosSize) PUCHAR Ros,
    _In_ ULONG RosVersion,
    _In_ ULONG RosSize,
    _Out_writes_bytes_opt_(RodSize) PUCHAR Rod,
    _In_ ULONG RodVersion,
    _In_ ULONG RodSize
    );

ULONG
WINAPI
SetPerTcpConnectionEStats(
    _In_ PMIB_TCPROW Row,
    _In_ TCP_ESTATS_TYPE EstatsType,
    _In_reads_bytes_(RwSize) PUCHAR Rw,
    _In_ ULONG RwVersion,
    _In_ ULONG RwSize,
    _In_ ULONG Offset
    );

#ifdef _WS2IPDEF_

ULONG
WINAPI
GetPerTcp6ConnectionEStats(
    _In_ PMIB_TCP6ROW Row,
    _In_ TCP_ESTATS_TYPE EstatsType,
    _Out_writes_bytes_opt_(RwSize) PUCHAR Rw,
    _In_  ULONG RwVersion,
    _In_  ULONG RwSize,
    _Out_writes_bytes_opt_(RosSize) PUCHAR Ros,
    _In_  ULONG RosVersion,
    _In_  ULONG RosSize,
    _Out_writes_bytes_opt_(RodSize) PUCHAR Rod,
    _In_  ULONG RodVersion,
    _In_  ULONG RodSize
    );

ULONG
WINAPI
SetPerTcp6ConnectionEStats(
    _In_ PMIB_TCP6ROW Row,
    _In_ TCP_ESTATS_TYPE EstatsType,
    _In_reads_bytes_(RwSize) PUCHAR Rw,
    _In_ ULONG RwVersion,
    _In_ ULONG RwSize,
    _In_ ULONG Offset
    );

#endif // _WS2IPDEF_

#endif // WINAPI

DWORD
WINAPI
GetOwnerModuleFromTcp6Entry(
    _In_                      PMIB_TCP6ROW_OWNER_MODULE     pTcpEntry,
    _In_                      TCPIP_OWNER_MODULE_INFO_CLASS Class,
    _Out_writes_bytes_(*pdwSize)    PVOID                         pBuffer,
    _Inout_                   PDWORD                        pdwSize
    );

ULONG
WINAPI
GetUdp6Table(
    _Out_writes_bytes_opt_(*SizePointer)   PMIB_UDP6TABLE Udp6Table,
    _Inout_                      PULONG         SizePointer,
    _In_                         BOOL           Order
    );

DWORD
WINAPI
GetOwnerModuleFromUdp6Entry(
    _In_                      PMIB_UDP6ROW_OWNER_MODULE     pUdpEntry,
    _In_                      TCPIP_OWNER_MODULE_INFO_CLASS Class,
    _Out_writes_bytes_(*pdwSize)    PVOID                         pBuffer,
    _Inout_                   PDWORD                        pdwSize
    );

#endif // _WS2IPDEF_

DWORD
GetOwnerModuleFromPidAndInfo(
    _In_                     ULONG                         ulPid,
    _In_                     ULONGLONG                     *pInfo,
    _In_                     TCPIP_OWNER_MODULE_INFO_CLASS Class,
    _Out_writes_bytes_(*pdwSize)   PVOID                         pBuffer,
    _Inout_                  PDWORD                        pdwSize
    );

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Gets IP/ICMP/TCP/UDP Statistics                                          //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

#if (NTDDI_VERSION >= NTDDI_WIN2K)
ULONG
WINAPI
GetIpStatistics(
    _Out_ PMIB_IPSTATS Statistics
    );

ULONG
WINAPI
GetIcmpStatistics(
    _Out_ PMIB_ICMP Statistics
    );


ULONG
WINAPI
GetTcpStatistics(
    _Out_ PMIB_TCPSTATS Statistics
    );

ULONG
WINAPI
GetUdpStatistics(
    _Out_ PMIB_UDPSTATS Stats
    );
#endif

#if (NTDDI_VERSION >= NTDDI_WINXP)
ULONG
WINAPI
GetIpStatisticsEx(
    _Out_ PMIB_IPSTATS Statistics,
    _In_  ULONG Family
    );

ULONG
WINAPI
SetIpStatisticsEx(
    _In_ PMIB_IPSTATS Statistics,
    _In_ ULONG Family
    );

ULONG
WINAPI
GetIcmpStatisticsEx(
    _Out_ PMIB_ICMP_EX Statistics,
    _In_  ULONG Family
    );

ULONG
WINAPI
GetTcpStatisticsEx(
    _Out_ PMIB_TCPSTATS Statistics,
    _In_  ULONG Family
    );

ULONG
WINAPI
GetUdpStatisticsEx(
    _Out_ PMIB_UDPSTATS Statistics,
    _In_  ULONG Family
    );
#endif

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Used to set the ifAdminStatus on an interface.  The only fields of the   //
// MIB_IFROW that are relevant are the dwIndex (index of the interface      //
// whose status needs to be set) and the dwAdminStatus which can be either  //
// MIB_IF_ADMIN_STATUS_UP or MIB_IF_ADMIN_STATUS_DOWN                       //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

DWORD
WINAPI
SetIfEntry(
    _In_ PMIB_IFROW pIfRow
    );

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Used to create, modify or delete a route.  In all cases the              //
// dwForwardIfIndex, dwForwardDest, dwForwardMask, dwForwardNextHop and     //
// dwForwardPolicy MUST BE SPECIFIED. Currently dwForwardPolicy is unused   //
// and MUST BE 0.                                                           //
// For a set, the complete MIB_IPFORWARDROW structure must be specified     //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

DWORD
WINAPI
CreateIpForwardEntry(
    _In_ PMIB_IPFORWARDROW pRoute
    );

DWORD
WINAPI
SetIpForwardEntry(
    _In_ PMIB_IPFORWARDROW pRoute
    );

DWORD
WINAPI
DeleteIpForwardEntry(
    _In_ PMIB_IPFORWARDROW pRoute
    );

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Used to set the ipForwarding to ON or OFF (currently only ON->OFF is     //
// allowed) and to set the defaultTTL.  If only one of the fields needs to  //
// be modified and the other needs to be the same as before the other field //
// needs to be set to MIB_USE_CURRENT_TTL or MIB_USE_CURRENT_FORWARDING as  //
// the case may be                                                          //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

#if (NTDDI_VERSION >= NTDDI_WIN2K)
DWORD
WINAPI
SetIpStatistics(
    _In_ PMIB_IPSTATS pIpStats
    );
#endif

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Used to set the defaultTTL.                                              //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

DWORD
WINAPI
SetIpTTL(
    _In_ UINT nTTL
    );

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Used to create, modify or delete an ARP entry.  In all cases the dwIndex //
// dwAddr field MUST BE SPECIFIED.                                          //
// For a set, the complete MIB_IPNETROW structure must be specified         //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

DWORD
WINAPI
CreateIpNetEntry(
    _In_ PMIB_IPNETROW    pArpEntry
    );

DWORD
WINAPI
SetIpNetEntry(
    _In_ PMIB_IPNETROW    pArpEntry
    );

DWORD
WINAPI
DeleteIpNetEntry(
    _In_ PMIB_IPNETROW    pArpEntry
    );

DWORD
WINAPI
FlushIpNetTable(
    _In_ DWORD   dwIfIndex
    );


//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Used to create or delete a Proxy ARP entry. The dwIndex is the index of  //
// the interface on which to PARP for the dwAddress.  If the interface is   //
// of a type that doesnt support ARP, e.g. PPP, then the call will fail     //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

DWORD
WINAPI
CreateProxyArpEntry(
    _In_  DWORD   dwAddress,
    _In_  DWORD   dwMask,
    _In_  DWORD   dwIfIndex
    );

DWORD
WINAPI
DeleteProxyArpEntry(
    _In_  DWORD   dwAddress,
    _In_  DWORD   dwMask,
    _In_  DWORD   dwIfIndex
    );

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Used to set the state of a TCP Connection. The only state that it can be //
// set to is MIB_TCP_STATE_DELETE_TCB.  The complete MIB_TCPROW structure   //
// MUST BE SPECIFIED                                                        //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

DWORD
WINAPI
SetTcpEntry(
    _In_ PMIB_TCPROW pTcpRow
    );


DWORD
WINAPI
GetInterfaceInfo(
    _Out_writes_bytes_opt_(*dwOutBufLen) PIP_INTERFACE_INFO  pIfTable,
    _Inout_                        PULONG              dwOutBufLen
    );

DWORD
WINAPI
GetUniDirectionalAdapterInfo(
    _Out_writes_bytes_opt_(*dwOutBufLen) PIP_UNIDIRECTIONAL_ADAPTER_ADDRESS pIPIfInfo,
    _Inout_                        PULONG                             dwOutBufLen
    );

#if (NTDDI_VERSION >= NTDDI_WIN2KSP1)
#ifndef NHPALLOCATEANDGETINTERFACEINFOFROMSTACK_DEFINED
#define NHPALLOCATEANDGETINTERFACEINFOFROMSTACK_DEFINED

DWORD
WINAPI
NhpAllocateAndGetInterfaceInfoFromStack(
    _Outptr_ IP_INTERFACE_NAME_INFO  **ppTable,
    _Out_       PDWORD                  pdwCount,
    _In_        BOOL                    bOrder,
    _In_        HANDLE                  hHeap,
    _In_        DWORD                   dwFlags
    );

#endif
#endif // (NTDDI_VERSION >= NTDDI_WIN2KSP1)

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Gets the "best" outgoing interface for the specified destination address //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

DWORD
WINAPI
GetBestInterface(
    _In_  IPAddr  dwDestAddr,
    _Out_ PDWORD  pdwBestIfIndex
    );

#pragma warning(push)
#pragma warning(disable:4115)
DWORD
WINAPI
GetBestInterfaceEx(
    _In_  struct sockaddr *pDestAddr,
    _Out_ PDWORD           pdwBestIfIndex
    );
#pragma warning(pop)

//////////////////////////////////////////////////////////////////////////////
//                                                                          //
// Gets the best (longest matching prefix) route for the given destination  //
// If the source address is also specified (i.e. is not 0x00000000), and    //
// there are multiple "best" routes to the given destination, the returned  //
// route will be one that goes out over the interface which has an address  //
// that matches the source address                                          //
//                                                                          //
//////////////////////////////////////////////////////////////////////////////

DWORD
WINAPI
GetBestRoute(
    _In_      DWORD               dwDestAddr,
    _In_opt_  DWORD               dwSourceAddr,
    _Out_     PMIB_IPFORWARDROW   pBestRoute
    );

DWORD
WINAPI
NotifyAddrChange(
    _Out_ PHANDLE      Handle,
    _In_  LPOVERLAPPED overlapped
    );


DWORD
WINAPI
NotifyRouteChange(
    _Out_ PHANDLE      Handle,
    _In_  LPOVERLAPPED overlapped
    );

BOOL
WINAPI
CancelIPChangeNotify(
    _In_  LPOVERLAPPED notifyOverlapped
    );

DWORD
WINAPI
GetAdapterIndex(
    _In_    LPWSTR  AdapterName,
    _Inout_ PULONG IfIndex
    );

DWORD
WINAPI
AddIPAddress(
    _In_ IPAddr  Address,
    _In_ IPMask  IpMask,
    _In_ DWORD   IfIndex,
    _Out_ PULONG  NTEContext,
    _Out_ PULONG  NTEInstance
    );

DWORD
WINAPI
DeleteIPAddress(
    _In_ ULONG NTEContext
    );

#if (NTDDI_VERSION >= NTDDI_WIN2KSP1)
DWORD
WINAPI
GetNetworkParams(
    _Out_writes_bytes_opt_(*pOutBufLen)   PFIXED_INFO pFixedInfo,
    _Inout_                         PULONG      pOutBufLen
    );
#endif

ULONG
WINAPI
GetAdaptersInfo(
    _Out_writes_bytes_opt_(*SizePointer) PIP_ADAPTER_INFO AdapterInfo,
    _Inout_                         PULONG           SizePointer
    );

PIP_ADAPTER_ORDER_MAP
WINAPI
GetAdapterOrderMap(
    VOID
    );


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)

#ifdef _WINSOCK2API_

//
// The following functions require Winsock2.
//

ULONG
WINAPI
GetAdaptersAddresses(
    _In_ ULONG Family,
    _In_ ULONG Flags,
    _Reserved_ PVOID Reserved,
    _Out_writes_bytes_opt_(*SizePointer) PIP_ADAPTER_ADDRESSES AdapterAddresses,
    _Inout_ PULONG SizePointer
    );

#endif

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)

#if (NTDDI_VERSION >= NTDDI_WIN2KSP1)
DWORD
WINAPI
GetPerAdapterInfo(
    _In_                            ULONG                IfIndex,
    _Out_writes_bytes_opt_(*pOutBufLen)   PIP_PER_ADAPTER_INFO pPerAdapterInfo,
    _Inout_                         PULONG               pOutBufLen
    );
#endif

DWORD
WINAPI
IpReleaseAddress(
    _In_ PIP_ADAPTER_INDEX_MAP  AdapterInfo
    );


DWORD
WINAPI
IpRenewAddress(
    _In_ PIP_ADAPTER_INDEX_MAP  AdapterInfo
    );

DWORD
WINAPI
SendARP(
    _In_ IPAddr DestIP,
    _In_ IPAddr SrcIP,
    _Out_writes_bytes_(*PhyAddrLen) PVOID pMacAddr,
    _Inout_ PULONG  PhyAddrLen
    );

BOOL
WINAPI
GetRTTAndHopCount(
    _In_  IPAddr DestIpAddress,
    _Out_ PULONG HopCount,
    _In_  ULONG  MaxHops,
    _Out_ PULONG RTT
    );

DWORD
WINAPI
GetFriendlyIfIndex(
    _In_ DWORD IfIndex
    );

DWORD
WINAPI
EnableRouter(
    _Out_ HANDLE* pHandle,
    _Out_ OVERLAPPED* pOverlapped
    );

DWORD
WINAPI
UnenableRouter(
    _In_      OVERLAPPED* pOverlapped,
    _Out_opt_ LPDWORD lpdwEnableCount
    );
DWORD
WINAPI
DisableMediaSense(
    _Out_ HANDLE *pHandle,
    _In_  OVERLAPPED *pOverLapped
    );

DWORD
WINAPI
RestoreMediaSense(
    _In_      OVERLAPPED* pOverlapped,
    _Out_opt_ LPDWORD lpdwEnableCount
    );

#if (NTDDI_VERSION >= NTDDI_VISTA)

DWORD
WINAPI
GetIpErrorString(
    _In_    IP_STATUS ErrorCode,
    _Out_writes_opt_(*Size + 1) PWSTR Buffer,
    _Inout_ PDWORD Size
    );

#if (NTDDI_VERSION >= NTDDI_VISTA)
#ifdef _WS2DEF_
ULONG
WINAPI
ResolveNeighbor(
    _In_    SOCKADDR *NetworkAddress,
    _Out_writes_bytes_(*PhysicalAddressLength) PVOID PhysicalAddress,
    _Inout_ PULONG PhysicalAddressLength
    );
#endif
#endif
//
// Port reservation API routines.
//

ULONG
WINAPI
CreatePersistentTcpPortReservation(
    _In_  USHORT StartPort,
    _In_  USHORT NumberOfPorts,
    _Out_ PULONG64 Token
    );

ULONG
WINAPI
CreatePersistentUdpPortReservation(
    _In_  USHORT StartPort,
    _In_  USHORT NumberOfPorts,
    _Out_ PULONG64 Token
    );

ULONG
WINAPI
DeletePersistentTcpPortReservation(
    _In_ USHORT StartPort,
    _In_ USHORT NumberOfPorts
    );

ULONG
WINAPI
DeletePersistentUdpPortReservation(
    _In_ USHORT StartPort,
    _In_ USHORT NumberOfPorts
    );

ULONG
WINAPI
LookupPersistentTcpPortReservation(
    _In_  USHORT StartPort,
    _In_  USHORT NumberOfPorts,
    _Out_ PULONG64 Token
    );

ULONG
WINAPI
LookupPersistentUdpPortReservation(
    _In_  USHORT StartPort,
    _In_  USHORT NumberOfPorts,
    _Out_ PULONG64 Token
    );


//
// Network String parsing API
//

#define NET_STRING_IPV4_ADDRESS           0x00000001
   // The string identifies an IPv4 Host/router using literal address.
   // (port or prefix not allowed)
#define NET_STRING_IPV4_SERVICE           0x00000002
   // The string identifies an IPv4 service using literal address.
   // (port required; prefix not allowed)
#define NET_STRING_IPV4_NETWORK           0x00000004
   // The string identifies an IPv4 network.
   // (prefix required; port not allowed)
#define NET_STRING_IPV6_ADDRESS           0x00000008
   // The string identifies an IPv6 Host/router using literal address.
   // (port or prefix not allowed; scope-id allowed)
#define NET_STRING_IPV6_ADDRESS_NO_SCOPE  0x00000010
   // The string identifies an IPv6 Host/router using literal address
   // where the interface context is already known.
   // (port or prefix not allowed; scope-id not allowed)
#define NET_STRING_IPV6_SERVICE           0x00000020
   // The string identifies an IPv6 service using literal address.
   // (port required; prefix not allowed; scope-id allowed)
#define NET_STRING_IPV6_SERVICE_NO_SCOPE  0x00000040
   // The string identifies an IPv6 service using literal address
   // where the interface context is already known.
   // (port required; prefix not allowed; scope-id not allowed)
#define NET_STRING_IPV6_NETWORK           0x00000080
   // The string identifies an IPv6 network.
   // (prefix required; port or scope-id not allowed)
#define NET_STRING_NAMED_ADDRESS          0x00000100
   // The string identifies an Internet Host using DNS.
   // (port or prefix or scope-id not allowed)
#define NET_STRING_NAMED_SERVICE          0x00000200
   // The string identifies an Internet service using DNS.
   // (port required; prefix or scope-id not allowed)

#define NET_STRING_IP_ADDRESS             (NET_STRING_IPV4_ADDRESS   | \
                                           NET_STRING_IPV6_ADDRESS)

#define NET_STRING_IP_ADDRESS_NO_SCOPE    (NET_STRING_IPV4_ADDRESS   | \
                                           NET_STRING_IPV6_ADDRESS_NO_SCOPE)

#define NET_STRING_IP_SERVICE             (NET_STRING_IPV4_SERVICE   | \
                                           NET_STRING_IPV6_SERVICE)

#define NET_STRING_IP_SERVICE_NO_SCOPE    (NET_STRING_IPV4_SERVICE   | \
                                           NET_STRING_IPV6_SERVICE_NO_SCOPE)

#define NET_STRING_IP_NETWORK             (NET_STRING_IPV4_NETWORK   | \
                                           NET_STRING_IPV6_NETWORK)

#define NET_STRING_ANY_ADDRESS            (NET_STRING_NAMED_ADDRESS  | \
                                           NET_STRING_IP_ADDRESS)

#define NET_STRING_ANY_ADDRESS_NO_SCOPE   (NET_STRING_NAMED_ADDRESS  | \
                                           NET_STRING_IP_ADDRESS_NO_SCOPE)

#define NET_STRING_ANY_SERVICE            (NET_STRING_NAMED_SERVICE  | \
                                           NET_STRING_IP_SERVICE)

#define NET_STRING_ANY_SERVICE_NO_SCOPE   (NET_STRING_NAMED_SERVICE  | \
                                           NET_STRING_IP_SERVICE_NO_SCOPE)

typedef enum NET_ADDRESS_FORMAT_
{
   NET_ADDRESS_FORMAT_UNSPECIFIED = 0,

   NET_ADDRESS_DNS_NAME,
   NET_ADDRESS_IPV4,
   NET_ADDRESS_IPV6

} NET_ADDRESS_FORMAT;

#if defined (_WS2DEF_) && defined (_WS2IPDEF_) && defined(_WINDNS_INCLUDED_)
	// app must include winsock2.h, ws2ipdef.h, and windns.h to use this API

typedef struct NET_ADDRESS_INFO_
{
   NET_ADDRESS_FORMAT Format;

   union
   {
      struct {
         WCHAR Address[DNS_MAX_NAME_BUFFER_LENGTH];
         WCHAR Port[6];
      } NamedAddress;

      SOCKADDR_IN Ipv4Address;
      SOCKADDR_IN6 Ipv6Address;
      SOCKADDR IpAddress;
   };

} NET_ADDRESS_INFO, *PNET_ADDRESS_INFO;

DWORD
WINAPI
ParseNetworkString(
   _In_z_    CONST WCHAR* NetworkString,
   _In_      DWORD Types,
   _Out_opt_ PNET_ADDRESS_INFO AddressInfo,
   _Out_opt_ USHORT* PortNumber,
   _Out_opt_ BYTE* PrefixLength
   );

#endif


#endif // (NTDDI_VERSION >= NTDDI_VISTA)

#if (NTDDI_VERSION >= NTDDI_VISTA)

#include <netioapi.h>

#endif // (NTDDI_VERSION >= NTDDI_VISTA)

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#ifdef __cplusplus
}
#endif
#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM) */
#pragma endregion

#endif //__IPHLPAPI_H__

