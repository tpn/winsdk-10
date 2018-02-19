/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    kcom.h

Abstract:

    Kernel COM

--*/

#if !defined(_KS_)
#error KS.H must be included before KCOM.H
#endif // !defined(_KS_)

#if !defined(_KCOM_)
#define _KCOM_

#if defined(__cplusplus)
extern "C" {
#endif // defined(__cplusplus)

#define STATIC_KoCreateObject \
    0x72CF721CL, 0x525A, 0x11D1, 0x9A, 0xA1, 0x00, 0xa0, 0xc9, 0x22, 0x31, 0x96
DEFINE_GUIDSTRUCT("72CF721C-525A-11D1-9AA1-00A0C9223196", KoCreateObject);

#define KOSTRING_CreateObject L"{72CF721C-525A-11D1-9AA1-00A0C9223196}"

#ifndef CLSCTX_KERNEL_SERVER
#define CLSCTX_KERNEL_SERVER    0x00000200
#endif

typedef
NTSTATUS
(*KoCreateObjectHandler)(
    _In_ REFCLSID ClassId,
    _In_opt_ IUnknown* UnkOuter,
    _In_ REFIID InterfaceId,
    _Outptr_ PVOID* Interface
    );

#undef INTERFACE
#define INTERFACE INonDelegatedUnknown
DECLARE_INTERFACE(INonDelegatedUnknown) {
    STDMETHOD(NonDelegatedQueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Outptr_result_maybenull_ PVOID* Interface
        ) PURE;

    STDMETHOD_(ULONG,NonDelegatedAddRef)(
        THIS
        ) PURE;

    STDMETHOD_(ULONG,NonDelegatedRelease)(
        THIS
        ) PURE;
};

#undef INTERFACE
#define INTERFACE IIndirectedUnknown
DECLARE_INTERFACE(IIndirectedUnknown) {
    STDMETHOD(IndirectedQueryInterface)(
        THIS_
        _In_ REFIID InterfaceId,
        _Outptr_result_maybenull_ PVOID* Interface
        ) PURE;

    STDMETHOD_(ULONG,IndirectedAddRef)(
        THIS
        ) PURE;

    STDMETHOD_(ULONG,IndirectedRelease)(
        THIS
        ) PURE;
};

#if !defined(__cplusplus) || _MSC_VER < 1100
#define STATIC_IID_IKoInitializeParentDeviceObject\
    0x21B36996L, 0x8DE3, 0x11D1, 0x8A, 0xE0, 0x00, 0xA0, 0xC9, 0x22, 0x31, 0x96
DEFINE_GUIDEX(IID_IKoInitializeParentDeviceObject);
#else
interface __declspec(uuid("21B36996-8DE3-11D1-8AE0-00A0C9223196")) IKoInitializeParentDeviceObject;
#endif
#undef INTERFACE
#define INTERFACE IKoInitializeParentDeviceObject
DECLARE_INTERFACE_(IKoInitializeParentDeviceObject, IUnknown) {
    STDMETHOD(SetParentDeviceObject)(
        THIS_
        _In_ PDEVICE_OBJECT ParentDeviceObject
        ) PURE;
};

#ifndef COMDDKMETHOD
#ifdef _COMDDK_
#define COMDDKMETHOD
#else // !_COMDDK_
#define COMDDKMETHOD DECLSPEC_IMPORT
#endif // _COMDDK_
#endif // !COMDDKMETHOD

#ifdef _COMDDK_
#define COMDDKAPI
#else // !_COMDDK_
#define COMDDKAPI DECLSPEC_IMPORT
#endif // _COMDDK_

#if defined(__cplusplus)
class CBaseUnknown : public INonDelegatedUnknown, public IIndirectedUnknown {

protected:
    LONG m_RefCount;

private:
    BOOLEAN m_UsingClassId;
    CLSID m_ClassId;

protected:
    IUnknown* m_UnknownOuter;

public:
    COMDDKMETHOD CBaseUnknown(
        _In_ REFCLSID ClassId,
        _In_opt_ IUnknown* UnknownOuter = NULL
        );
    COMDDKMETHOD CBaseUnknown(
        _In_opt_ IUnknown* UnknownOuter = NULL
        );
    COMDDKMETHOD virtual ~CBaseUnknown();

    // INonDelegatedUnknown
    COMDDKMETHOD STDMETHODIMP_(ULONG) NonDelegatedAddRef();
    COMDDKMETHOD STDMETHODIMP_(ULONG) NonDelegatedRelease();
    COMDDKMETHOD STDMETHODIMP NonDelegatedQueryInterface(
        _In_ REFIID InterfaceId,
        _Outptr_result_maybenull_ PVOID* Interface
        );

    //IIndirectedUnknown
    COMDDKMETHOD STDMETHODIMP_(ULONG) IndirectedAddRef();
    COMDDKMETHOD STDMETHODIMP_(ULONG) IndirectedRelease();
    COMDDKMETHOD STDMETHODIMP IndirectedQueryInterface(
        _In_ REFIID InterfaceId,
        _Outptr_result_maybenull_ PVOID* Interface
        );
};

#if !defined(DEFINE_ABSTRACT_UNKNOWN)

#define DEFINE_ABSTRACT_UNKNOWN()                               \
    STDMETHOD(QueryInterface)(THIS_                             \
        _In_         REFIID InterfaceId,                        \
        _COM_Outptr_ PVOID* Interface                           \
        ) PURE;                                                 \
    STDMETHOD_(ULONG,AddRef)(THIS) PURE;                        \
    STDMETHOD_(ULONG,Release)(THIS) PURE;

#endif //!defined(DEFINE_ABSTRACT_UNKNOWN)

#define DEFINE_STD_UNKNOWN()                                    \
    STDMETHODIMP NonDelegatedQueryInterface(                    \
        _In_ REFIID InterfaceId,                                     \
        _Outptr_result_maybenull_ PVOID* Interface                                        \
    );                                                          \
    STDMETHODIMP QueryInterface(                                \
        _In_ REFIID InterfaceId,                                     \
        _Outptr_result_maybenull_ PVOID* Interface                                        \
        );                                                      \
    STDMETHODIMP_(ULONG) AddRef();                              \
    STDMETHODIMP_(ULONG) Release();

#define IMPLEMENT_STD_UNKNOWN(Class)                            \
    STDMETHODIMP Class::QueryInterface(                         \
        _In_ REFIID InterfaceId,                                     \
        _Outptr_result_maybenull_ PVOID* Interface                                        \
        )                                                       \
    {                                                           \
        return m_UnknownOuter->QueryInterface(InterfaceId, Interface);\
    }                                                           \
    STDMETHODIMP_(ULONG) Class::AddRef()                        \
    {                                                           \
        return m_UnknownOuter->AddRef();                        \
    }                                                           \
    STDMETHODIMP_(ULONG) Class::Release()                       \
    {                                                           \
        return m_UnknownOuter->Release();                       \
    }
#else // !__cplusplus

_IRQL_requires_max_(PASSIVE_LEVEL)
COMDDKAPI
void
NTAPI
KoRelease(
    _In_ REFCLSID ClassId
    );
#endif // !__cplusplus

_IRQL_requires_max_(PASSIVE_LEVEL)
COMDDKAPI
NTSTATUS
NTAPI
KoCreateInstance(
    _In_ REFCLSID ClassId,
    _In_opt_ IUnknown* UnkOuter,
    _In_ ULONG ClsContext,
    _In_ REFIID InterfaceId,
    _Outptr_ PVOID* Interface
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
COMDDKAPI
NTSTATUS
NTAPI
KoDriverInitialize(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PUNICODE_STRING RegistryPathName,
    _In_ KoCreateObjectHandler CreateObjectHandler
    );

_IRQL_requires_max_(PASSIVE_LEVEL)
COMDDKAPI
NTSTATUS
NTAPI
KoDeviceInitialize(
    _In_ PDEVICE_OBJECT DeviceObject
    );

#if defined(__cplusplus)
}
#endif // defined(__cplusplus)

#ifdef __cplusplus

#ifndef _NEW_DELETE_OPERATORS_
#define _NEW_DELETE_OPERATORS_

// Note: Since VS2015 Update 2 overloaded operator new and operator delete may not 
// be declared inline (Level 1 (/W1) on-by-default, warning C4595).
// See https://msdn.microsoft.com/en-us/library/mt656697.aspx
//
// To mitigate this issue, add "#define _NEW_DELETE_OPERATORS_" before "#include <kcom.h>"
// and implement non-inline operator new and operator delete locally.

#pragma message(__FILE__ " WARNING: operator new and operator delete will be removed soon")

inline PVOID operator new
(
    size_t          iSize,
    _When_((poolType & NonPagedPoolMustSucceed) != 0,
       __drv_reportError("Must succeed pool allocations are forbidden. "
			 "Allocation failures cause a system crash"))
    POOL_TYPE       poolType
)
{
    PVOID result = ExAllocatePoolWithTag(poolType,iSize,'wNCK');

    if (result) {
        RtlZeroMemory(result,iSize);
    }

    return result;
}

inline PVOID operator new
(
    size_t          iSize,
    _When_((poolType & NonPagedPoolMustSucceed) != 0,
       __drv_reportError("Must succeed pool allocations are forbidden. "
			 "Allocation failures cause a system crash"))
    POOL_TYPE       poolType,
    ULONG           tag
)
{
    PVOID result = ExAllocatePoolWithTag(poolType,iSize,tag);

    if (result) {
        RtlZeroMemory(result,iSize);
    }

    return result;
}

inline void __cdecl operator delete
(
    PVOID pVoid
)
{
    if (pVoid) {
        ExFreePool(pVoid);
    }
}

#endif //!_NEW_DELETE_OPERATORS_

#if defined(_SYS_GUID_OPERATOR_EQ_)
// Define _SYS_GUID_OPERATOR_EQ_ before including guiddef.h to get the aligned guid test.
#define _GUID_OPERATORS_
#pragma message("WARNING: Using system operator==/!= for GUIDs")
#endif

#ifndef _GUID_OPERATORS_
#define _GUID_OPERATORS_

__inline BOOL operator==(const GUID& guidOne, const GUID& guidOther)
{
    return IsEqualGUIDAligned(guidOne,guidOther);
}
__inline BOOL operator!=(const GUID& guidOne, const GUID& guidOther)
{
    return !(guidOne == guidOther);
}

#endif // _GUID_OPERATORS_

#endif // __cplusplus

#endif // !_KCOM_
