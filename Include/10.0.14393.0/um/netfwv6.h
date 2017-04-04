

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0618 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __netfwv6_h__
#define __netfwv6_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __INetFwV6Mgr_FWD_DEFINED__
#define __INetFwV6Mgr_FWD_DEFINED__
typedef interface INetFwV6Mgr INetFwV6Mgr;

#endif 	/* __INetFwV6Mgr_FWD_DEFINED__ */


#ifndef __INetFwV6Connection_FWD_DEFINED__
#define __INetFwV6Connection_FWD_DEFINED__
typedef interface INetFwV6Connection INetFwV6Connection;

#endif 	/* __INetFwV6Connection_FWD_DEFINED__ */


#ifndef __INetFwV6Port_FWD_DEFINED__
#define __INetFwV6Port_FWD_DEFINED__
typedef interface INetFwV6Port INetFwV6Port;

#endif 	/* __INetFwV6Port_FWD_DEFINED__ */


#ifndef __IEnumNetFwV6Connections_FWD_DEFINED__
#define __IEnumNetFwV6Connections_FWD_DEFINED__
typedef interface IEnumNetFwV6Connections IEnumNetFwV6Connections;

#endif 	/* __IEnumNetFwV6Connections_FWD_DEFINED__ */


#ifndef __IEnumNetFwV6Ports_FWD_DEFINED__
#define __IEnumNetFwV6Ports_FWD_DEFINED__
typedef interface IEnumNetFwV6Ports IEnumNetFwV6Ports;

#endif 	/* __IEnumNetFwV6Ports_FWD_DEFINED__ */


#ifndef __INetFwV6ConnectionCollection_FWD_DEFINED__
#define __INetFwV6ConnectionCollection_FWD_DEFINED__
typedef interface INetFwV6ConnectionCollection INetFwV6ConnectionCollection;

#endif 	/* __INetFwV6ConnectionCollection_FWD_DEFINED__ */


#ifndef __IEnumNetFwV6ConnectionsAsVariants_FWD_DEFINED__
#define __IEnumNetFwV6ConnectionsAsVariants_FWD_DEFINED__
typedef interface IEnumNetFwV6ConnectionsAsVariants IEnumNetFwV6ConnectionsAsVariants;

#endif 	/* __IEnumNetFwV6ConnectionsAsVariants_FWD_DEFINED__ */


#ifndef __INetFwV6PortsCollection_FWD_DEFINED__
#define __INetFwV6PortsCollection_FWD_DEFINED__
typedef interface INetFwV6PortsCollection INetFwV6PortsCollection;

#endif 	/* __INetFwV6PortsCollection_FWD_DEFINED__ */


#ifndef __IEnumNetFwV6PortsAsVariants_FWD_DEFINED__
#define __IEnumNetFwV6PortsAsVariants_FWD_DEFINED__
typedef interface IEnumNetFwV6PortsAsVariants IEnumNetFwV6PortsAsVariants;

#endif 	/* __IEnumNetFwV6PortsAsVariants_FWD_DEFINED__ */


#ifndef __INetFwV6Mgr_FWD_DEFINED__
#define __INetFwV6Mgr_FWD_DEFINED__
typedef interface INetFwV6Mgr INetFwV6Mgr;

#endif 	/* __INetFwV6Mgr_FWD_DEFINED__ */


#ifndef __INetFwV6Connection_FWD_DEFINED__
#define __INetFwV6Connection_FWD_DEFINED__
typedef interface INetFwV6Connection INetFwV6Connection;

#endif 	/* __INetFwV6Connection_FWD_DEFINED__ */


#ifndef __INetFwV6Port_FWD_DEFINED__
#define __INetFwV6Port_FWD_DEFINED__
typedef interface INetFwV6Port INetFwV6Port;

#endif 	/* __INetFwV6Port_FWD_DEFINED__ */


#ifndef __IEnumNetFwV6Connections_FWD_DEFINED__
#define __IEnumNetFwV6Connections_FWD_DEFINED__
typedef interface IEnumNetFwV6Connections IEnumNetFwV6Connections;

#endif 	/* __IEnumNetFwV6Connections_FWD_DEFINED__ */


#ifndef __IEnumNetFwV6Ports_FWD_DEFINED__
#define __IEnumNetFwV6Ports_FWD_DEFINED__
typedef interface IEnumNetFwV6Ports IEnumNetFwV6Ports;

#endif 	/* __IEnumNetFwV6Ports_FWD_DEFINED__ */


#ifndef __INetFwV6ConnectionCollection_FWD_DEFINED__
#define __INetFwV6ConnectionCollection_FWD_DEFINED__
typedef interface INetFwV6ConnectionCollection INetFwV6ConnectionCollection;

#endif 	/* __INetFwV6ConnectionCollection_FWD_DEFINED__ */


#ifndef __IEnumNetFwV6ConnectionsAsVariants_FWD_DEFINED__
#define __IEnumNetFwV6ConnectionsAsVariants_FWD_DEFINED__
typedef interface IEnumNetFwV6ConnectionsAsVariants IEnumNetFwV6ConnectionsAsVariants;

#endif 	/* __IEnumNetFwV6ConnectionsAsVariants_FWD_DEFINED__ */


#ifndef __INetFwV6PortsCollection_FWD_DEFINED__
#define __INetFwV6PortsCollection_FWD_DEFINED__
typedef interface INetFwV6PortsCollection INetFwV6PortsCollection;

#endif 	/* __INetFwV6PortsCollection_FWD_DEFINED__ */


#ifndef __IEnumNetFwV6PortsAsVariants_FWD_DEFINED__
#define __IEnumNetFwV6PortsAsVariants_FWD_DEFINED__
typedef interface IEnumNetFwV6PortsAsVariants IEnumNetFwV6PortsAsVariants;

#endif 	/* __IEnumNetFwV6PortsAsVariants_FWD_DEFINED__ */


#ifndef __NetFirewallV6Manager_FWD_DEFINED__
#define __NetFirewallV6Manager_FWD_DEFINED__

#ifdef __cplusplus
typedef class NetFirewallV6Manager NetFirewallV6Manager;
#else
typedef struct NetFirewallV6Manager NetFirewallV6Manager;
#endif /* __cplusplus */

#endif 	/* __NetFirewallV6Manager_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_netfwv6_0000_0000 */
/* [local] */ 

//+-------------------------------------------------------------------------
//
//  Microsoft Windows
//  Copyright (C) Microsoft Corporation, 1992-2002.
//
//--------------------------------------------------------------------------

#if ( _MSC_VER >= 800 )
#pragma warning(disable:4201)
#endif

#include <guiddef.h>
DEFINE_GUID(CLSID_NetFwV6Mgr,
0x03707315, 0x53E9, 0x4B84, 0x82, 0xB2, 0xF0, 0x90, 0x25, 0xCA, 0xD2, 0x07);









#ifndef _PORT_PROTOCOL_
#define _PORT_PROTOCOL_
typedef /* [public][public][public][public][public][public][public][public][public][public][public] */ 
enum __MIDL___MIDL_itf_netfwv6_0000_0000_0001
    {
        PORT_PROTOCOL_TCP	= 6,
        PORT_PROTOCOL_UDP	= 17
    } 	PORT_PROTOCOL;

#endif


extern RPC_IF_HANDLE __MIDL_itf_netfwv6_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netfwv6_0000_0000_v0_0_s_ifspec;

#ifndef __INetFwV6Mgr_INTERFACE_DEFINED__
#define __INetFwV6Mgr_INTERFACE_DEFINED__

/* interface INetFwV6Mgr */
/* [helpstring][unique][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_INetFwV6Mgr;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1C3FEDF7-1B2B-4550-A964-1511DF2163C8")
    INetFwV6Mgr : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateConnections( 
            /* [retval][out] */ IEnumNetFwV6Connections **ppEnum) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE GetConnection( 
            /* [in] */ BSTR bstrConnectionId,
            /* [retval][out] */ INetFwV6Connection **ppConnection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Connections( 
            /* [retval][out] */ INetFwV6ConnectionCollection **pCollection) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LogfilePath( 
            /* [retval][out] */ BSTR *pbstrLogfilePath) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LogfilePath( 
            /* [in] */ BSTR bstrLogfilePath) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LogfileMaximumSize( 
            /* [retval][out] */ ULONG *pulLogfileSize) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LogfileMaximumSize( 
            /* [in] */ ULONG ulLogfileSize) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LogDroppedPackets( 
            /* [retval][out] */ VARIANT_BOOL *pbvLogDroppedPackets) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LogDroppedPackets( 
            /* [in] */ VARIANT_BOOL bvLogDroppedPackets) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_LogConnections( 
            /* [retval][out] */ VARIANT_BOOL *pbvLogConnections) = 0;
        
        virtual /* [helpstring][id][propput] */ HRESULT STDMETHODCALLTYPE put_LogConnections( 
            /* [in] */ VARIANT_BOOL bvLogConnections) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenGlobalPort( 
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol,
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE CloseGlobalPort( 
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsPortGloballyOpen( 
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol,
            /* [retval][out] */ VARIANT_BOOL *pvbPortIsOpen) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateGloballyOpenPorts( 
            /* [retval][out] */ IEnumNetFwV6Ports **ppEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_GloballyOpenPorts( 
            /* [retval][out] */ INetFwV6PortsCollection **pCollection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetFwV6MgrVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INetFwV6Mgr * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INetFwV6Mgr * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INetFwV6Mgr * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INetFwV6Mgr * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INetFwV6Mgr * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INetFwV6Mgr * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INetFwV6Mgr * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateConnections )( 
            INetFwV6Mgr * This,
            /* [retval][out] */ IEnumNetFwV6Connections **ppEnum);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *GetConnection )( 
            INetFwV6Mgr * This,
            /* [in] */ BSTR bstrConnectionId,
            /* [retval][out] */ INetFwV6Connection **ppConnection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Connections )( 
            INetFwV6Mgr * This,
            /* [retval][out] */ INetFwV6ConnectionCollection **pCollection);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogfilePath )( 
            INetFwV6Mgr * This,
            /* [retval][out] */ BSTR *pbstrLogfilePath);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogfilePath )( 
            INetFwV6Mgr * This,
            /* [in] */ BSTR bstrLogfilePath);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogfileMaximumSize )( 
            INetFwV6Mgr * This,
            /* [retval][out] */ ULONG *pulLogfileSize);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogfileMaximumSize )( 
            INetFwV6Mgr * This,
            /* [in] */ ULONG ulLogfileSize);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogDroppedPackets )( 
            INetFwV6Mgr * This,
            /* [retval][out] */ VARIANT_BOOL *pbvLogDroppedPackets);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogDroppedPackets )( 
            INetFwV6Mgr * This,
            /* [in] */ VARIANT_BOOL bvLogDroppedPackets);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_LogConnections )( 
            INetFwV6Mgr * This,
            /* [retval][out] */ VARIANT_BOOL *pbvLogConnections);
        
        /* [helpstring][id][propput] */ HRESULT ( STDMETHODCALLTYPE *put_LogConnections )( 
            INetFwV6Mgr * This,
            /* [in] */ VARIANT_BOOL bvLogConnections);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenGlobalPort )( 
            INetFwV6Mgr * This,
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *CloseGlobalPort )( 
            INetFwV6Mgr * This,
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsPortGloballyOpen )( 
            INetFwV6Mgr * This,
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol,
            /* [retval][out] */ VARIANT_BOOL *pvbPortIsOpen);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateGloballyOpenPorts )( 
            INetFwV6Mgr * This,
            /* [retval][out] */ IEnumNetFwV6Ports **ppEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_GloballyOpenPorts )( 
            INetFwV6Mgr * This,
            /* [retval][out] */ INetFwV6PortsCollection **pCollection);
        
        END_INTERFACE
    } INetFwV6MgrVtbl;

    interface INetFwV6Mgr
    {
        CONST_VTBL struct INetFwV6MgrVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetFwV6Mgr_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetFwV6Mgr_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetFwV6Mgr_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetFwV6Mgr_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INetFwV6Mgr_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INetFwV6Mgr_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INetFwV6Mgr_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INetFwV6Mgr_EnumerateConnections(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumerateConnections(This,ppEnum) ) 

#define INetFwV6Mgr_GetConnection(This,bstrConnectionId,ppConnection)	\
    ( (This)->lpVtbl -> GetConnection(This,bstrConnectionId,ppConnection) ) 

#define INetFwV6Mgr_get_Connections(This,pCollection)	\
    ( (This)->lpVtbl -> get_Connections(This,pCollection) ) 

#define INetFwV6Mgr_get_LogfilePath(This,pbstrLogfilePath)	\
    ( (This)->lpVtbl -> get_LogfilePath(This,pbstrLogfilePath) ) 

#define INetFwV6Mgr_put_LogfilePath(This,bstrLogfilePath)	\
    ( (This)->lpVtbl -> put_LogfilePath(This,bstrLogfilePath) ) 

#define INetFwV6Mgr_get_LogfileMaximumSize(This,pulLogfileSize)	\
    ( (This)->lpVtbl -> get_LogfileMaximumSize(This,pulLogfileSize) ) 

#define INetFwV6Mgr_put_LogfileMaximumSize(This,ulLogfileSize)	\
    ( (This)->lpVtbl -> put_LogfileMaximumSize(This,ulLogfileSize) ) 

#define INetFwV6Mgr_get_LogDroppedPackets(This,pbvLogDroppedPackets)	\
    ( (This)->lpVtbl -> get_LogDroppedPackets(This,pbvLogDroppedPackets) ) 

#define INetFwV6Mgr_put_LogDroppedPackets(This,bvLogDroppedPackets)	\
    ( (This)->lpVtbl -> put_LogDroppedPackets(This,bvLogDroppedPackets) ) 

#define INetFwV6Mgr_get_LogConnections(This,pbvLogConnections)	\
    ( (This)->lpVtbl -> get_LogConnections(This,pbvLogConnections) ) 

#define INetFwV6Mgr_put_LogConnections(This,bvLogConnections)	\
    ( (This)->lpVtbl -> put_LogConnections(This,bvLogConnections) ) 

#define INetFwV6Mgr_OpenGlobalPort(This,usPort,Protocol,bstrName)	\
    ( (This)->lpVtbl -> OpenGlobalPort(This,usPort,Protocol,bstrName) ) 

#define INetFwV6Mgr_CloseGlobalPort(This,usPort,Protocol)	\
    ( (This)->lpVtbl -> CloseGlobalPort(This,usPort,Protocol) ) 

#define INetFwV6Mgr_IsPortGloballyOpen(This,usPort,Protocol,pvbPortIsOpen)	\
    ( (This)->lpVtbl -> IsPortGloballyOpen(This,usPort,Protocol,pvbPortIsOpen) ) 

#define INetFwV6Mgr_EnumerateGloballyOpenPorts(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumerateGloballyOpenPorts(This,ppEnum) ) 

#define INetFwV6Mgr_get_GloballyOpenPorts(This,pCollection)	\
    ( (This)->lpVtbl -> get_GloballyOpenPorts(This,pCollection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetFwV6Mgr_INTERFACE_DEFINED__ */


#ifndef __INetFwV6Connection_INTERFACE_DEFINED__
#define __INetFwV6Connection_INTERFACE_DEFINED__

/* interface INetFwV6Connection */
/* [helpstring][unique][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_INetFwV6Connection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1B664CB0-9403-4061-B356-B374C63B1241")
    INetFwV6Connection : public IDispatch
    {
    public:
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_Id( 
            /* [retval][out] */ BSTR *pbstrId) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnableFirewall( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE DisableFirewall( void) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IsFirewalled( 
            /* [retval][out] */ VARIANT_BOOL *pvbFirewalled) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenPort( 
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol,
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ClosePort( 
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsPortOpen( 
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol,
            /* [retval][out] */ VARIANT_BOOL *pvbPortIsOpen) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateOpenPorts( 
            /* [retval][out] */ IEnumNetFwV6Ports **ppEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_OpenPorts( 
            /* [retval][out] */ INetFwV6PortsCollection **pCollection) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IgnoreGlobalPort( 
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol,
            /* [in] */ BSTR bstrName) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE ObserveGlobalPort( 
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE IsGlobalPortIgnored( 
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol,
            /* [retval][out] */ VARIANT_BOOL *pvbGlobalPortIsIgnored) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE EnumerateIgnoredGlobalPorts( 
            /* [retval][out] */ IEnumNetFwV6Ports **ppEnum) = 0;
        
        virtual /* [helpstring][id][propget] */ HRESULT STDMETHODCALLTYPE get_IgnoredGlobalPorts( 
            /* [retval][out] */ INetFwV6PortsCollection **pCollection) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetFwV6ConnectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INetFwV6Connection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INetFwV6Connection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INetFwV6Connection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INetFwV6Connection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INetFwV6Connection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INetFwV6Connection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INetFwV6Connection * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            INetFwV6Connection * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Id )( 
            INetFwV6Connection * This,
            /* [retval][out] */ BSTR *pbstrId);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnableFirewall )( 
            INetFwV6Connection * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *DisableFirewall )( 
            INetFwV6Connection * This);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IsFirewalled )( 
            INetFwV6Connection * This,
            /* [retval][out] */ VARIANT_BOOL *pvbFirewalled);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenPort )( 
            INetFwV6Connection * This,
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ClosePort )( 
            INetFwV6Connection * This,
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsPortOpen )( 
            INetFwV6Connection * This,
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol,
            /* [retval][out] */ VARIANT_BOOL *pvbPortIsOpen);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateOpenPorts )( 
            INetFwV6Connection * This,
            /* [retval][out] */ IEnumNetFwV6Ports **ppEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_OpenPorts )( 
            INetFwV6Connection * This,
            /* [retval][out] */ INetFwV6PortsCollection **pCollection);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IgnoreGlobalPort )( 
            INetFwV6Connection * This,
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol,
            /* [in] */ BSTR bstrName);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *ObserveGlobalPort )( 
            INetFwV6Connection * This,
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *IsGlobalPortIgnored )( 
            INetFwV6Connection * This,
            /* [in] */ USHORT usPort,
            /* [in] */ PORT_PROTOCOL Protocol,
            /* [retval][out] */ VARIANT_BOOL *pvbGlobalPortIsIgnored);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *EnumerateIgnoredGlobalPorts )( 
            INetFwV6Connection * This,
            /* [retval][out] */ IEnumNetFwV6Ports **ppEnum);
        
        /* [helpstring][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_IgnoredGlobalPorts )( 
            INetFwV6Connection * This,
            /* [retval][out] */ INetFwV6PortsCollection **pCollection);
        
        END_INTERFACE
    } INetFwV6ConnectionVtbl;

    interface INetFwV6Connection
    {
        CONST_VTBL struct INetFwV6ConnectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetFwV6Connection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetFwV6Connection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetFwV6Connection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetFwV6Connection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INetFwV6Connection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INetFwV6Connection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INetFwV6Connection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INetFwV6Connection_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#define INetFwV6Connection_get_Id(This,pbstrId)	\
    ( (This)->lpVtbl -> get_Id(This,pbstrId) ) 

#define INetFwV6Connection_EnableFirewall(This)	\
    ( (This)->lpVtbl -> EnableFirewall(This) ) 

#define INetFwV6Connection_DisableFirewall(This)	\
    ( (This)->lpVtbl -> DisableFirewall(This) ) 

#define INetFwV6Connection_get_IsFirewalled(This,pvbFirewalled)	\
    ( (This)->lpVtbl -> get_IsFirewalled(This,pvbFirewalled) ) 

#define INetFwV6Connection_OpenPort(This,usPort,Protocol,bstrName)	\
    ( (This)->lpVtbl -> OpenPort(This,usPort,Protocol,bstrName) ) 

#define INetFwV6Connection_ClosePort(This,usPort,Protocol)	\
    ( (This)->lpVtbl -> ClosePort(This,usPort,Protocol) ) 

#define INetFwV6Connection_IsPortOpen(This,usPort,Protocol,pvbPortIsOpen)	\
    ( (This)->lpVtbl -> IsPortOpen(This,usPort,Protocol,pvbPortIsOpen) ) 

#define INetFwV6Connection_EnumerateOpenPorts(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumerateOpenPorts(This,ppEnum) ) 

#define INetFwV6Connection_get_OpenPorts(This,pCollection)	\
    ( (This)->lpVtbl -> get_OpenPorts(This,pCollection) ) 

#define INetFwV6Connection_IgnoreGlobalPort(This,usPort,Protocol,bstrName)	\
    ( (This)->lpVtbl -> IgnoreGlobalPort(This,usPort,Protocol,bstrName) ) 

#define INetFwV6Connection_ObserveGlobalPort(This,usPort,Protocol)	\
    ( (This)->lpVtbl -> ObserveGlobalPort(This,usPort,Protocol) ) 

#define INetFwV6Connection_IsGlobalPortIgnored(This,usPort,Protocol,pvbGlobalPortIsIgnored)	\
    ( (This)->lpVtbl -> IsGlobalPortIgnored(This,usPort,Protocol,pvbGlobalPortIsIgnored) ) 

#define INetFwV6Connection_EnumerateIgnoredGlobalPorts(This,ppEnum)	\
    ( (This)->lpVtbl -> EnumerateIgnoredGlobalPorts(This,ppEnum) ) 

#define INetFwV6Connection_get_IgnoredGlobalPorts(This,pCollection)	\
    ( (This)->lpVtbl -> get_IgnoredGlobalPorts(This,pCollection) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetFwV6Connection_INTERFACE_DEFINED__ */


#ifndef __INetFwV6Port_INTERFACE_DEFINED__
#define __INetFwV6Port_INTERFACE_DEFINED__

/* interface INetFwV6Port */
/* [helpstring][unique][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_INetFwV6Port;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("FD695182-B9FF-4224-B55F-6774CC4CDB38")
    INetFwV6Port : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Port( 
            /* [retval][out] */ USHORT *usPort) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Protocol( 
            /* [retval][out] */ PORT_PROTOCOL *pProtocol) = 0;
        
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Name( 
            /* [retval][out] */ BSTR *pbstrName) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetFwV6PortVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INetFwV6Port * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INetFwV6Port * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INetFwV6Port * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INetFwV6Port * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INetFwV6Port * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INetFwV6Port * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INetFwV6Port * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Port )( 
            INetFwV6Port * This,
            /* [retval][out] */ USHORT *usPort);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Protocol )( 
            INetFwV6Port * This,
            /* [retval][out] */ PORT_PROTOCOL *pProtocol);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Name )( 
            INetFwV6Port * This,
            /* [retval][out] */ BSTR *pbstrName);
        
        END_INTERFACE
    } INetFwV6PortVtbl;

    interface INetFwV6Port
    {
        CONST_VTBL struct INetFwV6PortVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetFwV6Port_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetFwV6Port_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetFwV6Port_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetFwV6Port_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INetFwV6Port_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INetFwV6Port_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INetFwV6Port_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INetFwV6Port_get_Port(This,usPort)	\
    ( (This)->lpVtbl -> get_Port(This,usPort) ) 

#define INetFwV6Port_get_Protocol(This,pProtocol)	\
    ( (This)->lpVtbl -> get_Protocol(This,pProtocol) ) 

#define INetFwV6Port_get_Name(This,pbstrName)	\
    ( (This)->lpVtbl -> get_Name(This,pbstrName) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetFwV6Port_INTERFACE_DEFINED__ */


#ifndef __IEnumNetFwV6Connections_INTERFACE_DEFINED__
#define __IEnumNetFwV6Connections_INTERFACE_DEFINED__

/* interface IEnumNetFwV6Connections */
/* [helpstring][unique][uuid][object][local] */ 


EXTERN_C const IID IID_IEnumNetFwV6Connections;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("05A800CA-317F-4608-9274-43D97D3924F5")
    IEnumNetFwV6Connections : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cElt,
            /* [length_is][size_is][out] */ INetFwV6Connection **rgElt,
            /* [out] */ ULONG *pcEltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cElt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumNetFwV6Connections **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumNetFwV6ConnectionsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumNetFwV6Connections * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumNetFwV6Connections * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumNetFwV6Connections * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumNetFwV6Connections * This,
            /* [in] */ ULONG cElt,
            /* [length_is][size_is][out] */ INetFwV6Connection **rgElt,
            /* [out] */ ULONG *pcEltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumNetFwV6Connections * This,
            /* [in] */ ULONG cElt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumNetFwV6Connections * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumNetFwV6Connections * This,
            /* [out] */ IEnumNetFwV6Connections **ppEnum);
        
        END_INTERFACE
    } IEnumNetFwV6ConnectionsVtbl;

    interface IEnumNetFwV6Connections
    {
        CONST_VTBL struct IEnumNetFwV6ConnectionsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumNetFwV6Connections_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumNetFwV6Connections_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumNetFwV6Connections_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumNetFwV6Connections_Next(This,cElt,rgElt,pcEltFetched)	\
    ( (This)->lpVtbl -> Next(This,cElt,rgElt,pcEltFetched) ) 

#define IEnumNetFwV6Connections_Skip(This,cElt)	\
    ( (This)->lpVtbl -> Skip(This,cElt) ) 

#define IEnumNetFwV6Connections_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumNetFwV6Connections_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumNetFwV6Connections_INTERFACE_DEFINED__ */


#ifndef __IEnumNetFwV6Ports_INTERFACE_DEFINED__
#define __IEnumNetFwV6Ports_INTERFACE_DEFINED__

/* interface IEnumNetFwV6Ports */
/* [helpstring][unique][uuid][object][local] */ 


EXTERN_C const IID IID_IEnumNetFwV6Ports;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("1901CCC7-A8CE-4207-BE51-E343419DEF19")
    IEnumNetFwV6Ports : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cElt,
            /* [length_is][size_is][out] */ INetFwV6Port **rgElt,
            /* [out] */ ULONG *pcEltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cElt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumNetFwV6Ports **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumNetFwV6PortsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumNetFwV6Ports * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumNetFwV6Ports * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumNetFwV6Ports * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumNetFwV6Ports * This,
            /* [in] */ ULONG cElt,
            /* [length_is][size_is][out] */ INetFwV6Port **rgElt,
            /* [out] */ ULONG *pcEltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumNetFwV6Ports * This,
            /* [in] */ ULONG cElt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumNetFwV6Ports * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumNetFwV6Ports * This,
            /* [out] */ IEnumNetFwV6Ports **ppEnum);
        
        END_INTERFACE
    } IEnumNetFwV6PortsVtbl;

    interface IEnumNetFwV6Ports
    {
        CONST_VTBL struct IEnumNetFwV6PortsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumNetFwV6Ports_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumNetFwV6Ports_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumNetFwV6Ports_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumNetFwV6Ports_Next(This,cElt,rgElt,pcEltFetched)	\
    ( (This)->lpVtbl -> Next(This,cElt,rgElt,pcEltFetched) ) 

#define IEnumNetFwV6Ports_Skip(This,cElt)	\
    ( (This)->lpVtbl -> Skip(This,cElt) ) 

#define IEnumNetFwV6Ports_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumNetFwV6Ports_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumNetFwV6Ports_INTERFACE_DEFINED__ */


#ifndef __INetFwV6ConnectionCollection_INTERFACE_DEFINED__
#define __INetFwV6ConnectionCollection_INTERFACE_DEFINED__

/* interface INetFwV6ConnectionCollection */
/* [helpstring][unique][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_INetFwV6ConnectionCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2A57D76E-94D7-484A-9D41-72CE289DED01")
    INetFwV6ConnectionCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetFwV6ConnectionCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INetFwV6ConnectionCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INetFwV6ConnectionCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INetFwV6ConnectionCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INetFwV6ConnectionCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INetFwV6ConnectionCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INetFwV6ConnectionCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INetFwV6ConnectionCollection * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            INetFwV6ConnectionCollection * This,
            /* [retval][out] */ long *plCount);
        
        /* [restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            INetFwV6ConnectionCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } INetFwV6ConnectionCollectionVtbl;

    interface INetFwV6ConnectionCollection
    {
        CONST_VTBL struct INetFwV6ConnectionCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetFwV6ConnectionCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetFwV6ConnectionCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetFwV6ConnectionCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetFwV6ConnectionCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INetFwV6ConnectionCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INetFwV6ConnectionCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INetFwV6ConnectionCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INetFwV6ConnectionCollection_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define INetFwV6ConnectionCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetFwV6ConnectionCollection_INTERFACE_DEFINED__ */


#ifndef __IEnumNetFwV6ConnectionsAsVariants_INTERFACE_DEFINED__
#define __IEnumNetFwV6ConnectionsAsVariants_INTERFACE_DEFINED__

/* interface IEnumNetFwV6ConnectionsAsVariants */
/* [helpstring][unique][uuid][object][local] */ 


EXTERN_C const IID IID_IEnumNetFwV6ConnectionsAsVariants;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("D3CE39F1-3EA1-4AB2-AB29-D37E46A62315")
    IEnumNetFwV6ConnectionsAsVariants : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cElt,
            /* [length_is][size_is][out] */ VARIANT *rgElt,
            /* [out] */ ULONG *pcEltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cElt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumNetFwV6ConnectionsAsVariants **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumNetFwV6ConnectionsAsVariantsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumNetFwV6ConnectionsAsVariants * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumNetFwV6ConnectionsAsVariants * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumNetFwV6ConnectionsAsVariants * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumNetFwV6ConnectionsAsVariants * This,
            /* [in] */ ULONG cElt,
            /* [length_is][size_is][out] */ VARIANT *rgElt,
            /* [out] */ ULONG *pcEltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumNetFwV6ConnectionsAsVariants * This,
            /* [in] */ ULONG cElt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumNetFwV6ConnectionsAsVariants * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumNetFwV6ConnectionsAsVariants * This,
            /* [out] */ IEnumNetFwV6ConnectionsAsVariants **ppEnum);
        
        END_INTERFACE
    } IEnumNetFwV6ConnectionsAsVariantsVtbl;

    interface IEnumNetFwV6ConnectionsAsVariants
    {
        CONST_VTBL struct IEnumNetFwV6ConnectionsAsVariantsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumNetFwV6ConnectionsAsVariants_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumNetFwV6ConnectionsAsVariants_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumNetFwV6ConnectionsAsVariants_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumNetFwV6ConnectionsAsVariants_Next(This,cElt,rgElt,pcEltFetched)	\
    ( (This)->lpVtbl -> Next(This,cElt,rgElt,pcEltFetched) ) 

#define IEnumNetFwV6ConnectionsAsVariants_Skip(This,cElt)	\
    ( (This)->lpVtbl -> Skip(This,cElt) ) 

#define IEnumNetFwV6ConnectionsAsVariants_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumNetFwV6ConnectionsAsVariants_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumNetFwV6ConnectionsAsVariants_INTERFACE_DEFINED__ */


#ifndef __INetFwV6PortsCollection_INTERFACE_DEFINED__
#define __INetFwV6PortsCollection_INTERFACE_DEFINED__

/* interface INetFwV6PortsCollection */
/* [helpstring][unique][oleautomation][dual][uuid][object][local] */ 


EXTERN_C const IID IID_INetFwV6PortsCollection;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("43287AC8-F5AB-498B-A455-74DC84750C49")
    INetFwV6PortsCollection : public IDispatch
    {
    public:
        virtual /* [id][propget] */ HRESULT STDMETHODCALLTYPE get_Count( 
            /* [retval][out] */ long *plCount) = 0;
        
        virtual /* [restricted][id][propget] */ HRESULT STDMETHODCALLTYPE get__NewEnum( 
            /* [retval][out] */ IUnknown **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct INetFwV6PortsCollectionVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            INetFwV6PortsCollection * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            INetFwV6PortsCollection * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            INetFwV6PortsCollection * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            INetFwV6PortsCollection * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            INetFwV6PortsCollection * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            INetFwV6PortsCollection * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            INetFwV6PortsCollection * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [id][propget] */ HRESULT ( STDMETHODCALLTYPE *get_Count )( 
            INetFwV6PortsCollection * This,
            /* [retval][out] */ long *plCount);
        
        /* [restricted][id][propget] */ HRESULT ( STDMETHODCALLTYPE *get__NewEnum )( 
            INetFwV6PortsCollection * This,
            /* [retval][out] */ IUnknown **ppEnum);
        
        END_INTERFACE
    } INetFwV6PortsCollectionVtbl;

    interface INetFwV6PortsCollection
    {
        CONST_VTBL struct INetFwV6PortsCollectionVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define INetFwV6PortsCollection_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define INetFwV6PortsCollection_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define INetFwV6PortsCollection_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define INetFwV6PortsCollection_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define INetFwV6PortsCollection_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define INetFwV6PortsCollection_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define INetFwV6PortsCollection_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define INetFwV6PortsCollection_get_Count(This,plCount)	\
    ( (This)->lpVtbl -> get_Count(This,plCount) ) 

#define INetFwV6PortsCollection_get__NewEnum(This,ppEnum)	\
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __INetFwV6PortsCollection_INTERFACE_DEFINED__ */


#ifndef __IEnumNetFwV6PortsAsVariants_INTERFACE_DEFINED__
#define __IEnumNetFwV6PortsAsVariants_INTERFACE_DEFINED__

/* interface IEnumNetFwV6PortsAsVariants */
/* [helpstring][unique][uuid][object][local] */ 


EXTERN_C const IID IID_IEnumNetFwV6PortsAsVariants;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("C8A4F5EF-8DC9-4806-90AF-DB5AD4A5307C")
    IEnumNetFwV6PortsAsVariants : public IUnknown
    {
    public:
        virtual HRESULT STDMETHODCALLTYPE Next( 
            /* [in] */ ULONG cElt,
            /* [length_is][size_is][out] */ VARIANT *rgElt,
            /* [out] */ ULONG *pcEltFetched) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Skip( 
            /* [in] */ ULONG cElt) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Reset( void) = 0;
        
        virtual HRESULT STDMETHODCALLTYPE Clone( 
            /* [out] */ IEnumNetFwV6PortsAsVariants **ppEnum) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IEnumNetFwV6PortsAsVariantsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IEnumNetFwV6PortsAsVariants * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IEnumNetFwV6PortsAsVariants * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IEnumNetFwV6PortsAsVariants * This);
        
        HRESULT ( STDMETHODCALLTYPE *Next )( 
            IEnumNetFwV6PortsAsVariants * This,
            /* [in] */ ULONG cElt,
            /* [length_is][size_is][out] */ VARIANT *rgElt,
            /* [out] */ ULONG *pcEltFetched);
        
        HRESULT ( STDMETHODCALLTYPE *Skip )( 
            IEnumNetFwV6PortsAsVariants * This,
            /* [in] */ ULONG cElt);
        
        HRESULT ( STDMETHODCALLTYPE *Reset )( 
            IEnumNetFwV6PortsAsVariants * This);
        
        HRESULT ( STDMETHODCALLTYPE *Clone )( 
            IEnumNetFwV6PortsAsVariants * This,
            /* [out] */ IEnumNetFwV6PortsAsVariants **ppEnum);
        
        END_INTERFACE
    } IEnumNetFwV6PortsAsVariantsVtbl;

    interface IEnumNetFwV6PortsAsVariants
    {
        CONST_VTBL struct IEnumNetFwV6PortsAsVariantsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IEnumNetFwV6PortsAsVariants_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IEnumNetFwV6PortsAsVariants_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IEnumNetFwV6PortsAsVariants_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IEnumNetFwV6PortsAsVariants_Next(This,cElt,rgElt,pcEltFetched)	\
    ( (This)->lpVtbl -> Next(This,cElt,rgElt,pcEltFetched) ) 

#define IEnumNetFwV6PortsAsVariants_Skip(This,cElt)	\
    ( (This)->lpVtbl -> Skip(This,cElt) ) 

#define IEnumNetFwV6PortsAsVariants_Reset(This)	\
    ( (This)->lpVtbl -> Reset(This) ) 

#define IEnumNetFwV6PortsAsVariants_Clone(This,ppEnum)	\
    ( (This)->lpVtbl -> Clone(This,ppEnum) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IEnumNetFwV6PortsAsVariants_INTERFACE_DEFINED__ */



#ifndef __NetFirewallV6Library_LIBRARY_DEFINED__
#define __NetFirewallV6Library_LIBRARY_DEFINED__

/* library NetFirewallV6Library */
/* [helpstring][version][uuid] */ 











EXTERN_C const IID LIBID_NetFirewallV6Library;

EXTERN_C const CLSID CLSID_NetFirewallV6Manager;

#ifdef __cplusplus

class DECLSPEC_UUID("03707315-53E9-4B84-82B2-F09025CAD207")
NetFirewallV6Manager;
#endif
#endif /* __NetFirewallV6Library_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


