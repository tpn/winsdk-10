/*++

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    zwapi.h

Abstract:

    This module contains the ZwXxx prototypes.

--*/

#if _MSC_VER > 1000
#pragma once
#endif

#ifdef __cplusplus
extern "C" {
#endif

NTSYSAPI
NTSTATUS
NTAPI
ZwDelayExecution (
    _In_ BOOLEAN Alertable,
    _In_ PLARGE_INTEGER DelayInterval
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQuerySystemEnvironmentValue (
    _In_ PUNICODE_STRING VariableName,
    _Out_writes_bytes_(ValueLength) PWSTR VariableValue,
    _In_ USHORT ValueLength,
    _Out_opt_ PUSHORT ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetSystemEnvironmentValue (
    _In_ PUNICODE_STRING VariableName,
    _In_ PUNICODE_STRING VariableValue
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQuerySystemEnvironmentValueEx (
    _In_ PUNICODE_STRING VariableName,
    _In_ LPGUID VendorGuid,
    _Out_writes_bytes_opt_(*ValueLength) PVOID Value,
    _Inout_ PULONG ValueLength,
    _Out_opt_ PULONG Attributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetSystemEnvironmentValueEx (
    _In_ PUNICODE_STRING VariableName,
    _In_ LPGUID VendorGuid,
    _In_reads_bytes_opt_(ValueLength) PVOID Value,
    _In_ ULONG ValueLength,
    _In_ ULONG Attributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwEnumerateSystemEnvironmentValuesEx (
    _In_ ULONG InformationClass,
    _Out_ PVOID Buffer,
    _Inout_ PULONG BufferLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAddBootEntry (
    _In_ PBOOT_ENTRY BootEntry,
    _Out_opt_ PULONG Id
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwDeleteBootEntry (
    _In_ ULONG Id
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwModifyBootEntry (
    _In_ PBOOT_ENTRY BootEntry
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwEnumerateBootEntries (
    _Out_writes_bytes_opt_(*BufferLength) PVOID Buffer,
    _Inout_ PULONG BufferLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryBootEntryOrder (
    _Out_writes_opt_(*Count) PULONG Ids,
    _Inout_ PULONG Count
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetBootEntryOrder (
    _In_reads_(Count) PULONG Ids,
    _In_ ULONG Count
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryBootOptions (
    _Out_writes_bytes_opt_(*BootOptionsLength) PBOOT_OPTIONS BootOptions,
    _Inout_ PULONG BootOptionsLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetBootOptions (
    _In_ PBOOT_OPTIONS BootOptions,
    _In_ ULONG FieldsToChange
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwTranslateFilePath (
    _In_ PFILE_PATH InputFilePath,
    _In_ ULONG OutputType,
    _Out_writes_bytes_opt_(*OutputFilePathLength) PFILE_PATH OutputFilePath,
    _Inout_opt_ PULONG OutputFilePathLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAddDriverEntry (
    _In_ PEFI_DRIVER_ENTRY DriverEntry,
    _Out_opt_ PULONG Id
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwDeleteDriverEntry (
    _In_ ULONG Id
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwModifyDriverEntry (
    _In_ PEFI_DRIVER_ENTRY DriverEntry
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwEnumerateDriverEntries (
    _Out_writes_bytes_opt_(*BufferLength) PVOID Buffer,
    _Inout_ PULONG BufferLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryDriverEntryOrder (
    _Out_writes_opt_(*Count) PULONG Ids,
    _Inout_ PULONG Count
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetDriverEntryOrder (
    _In_reads_(Count) PULONG Ids,
    _In_ ULONG Count
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwClearEvent (
    _In_ HANDLE EventHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateEvent (
    _Out_ PHANDLE EventHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ EVENT_TYPE EventType,
    _In_ BOOLEAN InitialState
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenEvent (
    _Out_ PHANDLE EventHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwPulseEvent (
    _In_ HANDLE EventHandle,
    _Out_opt_ PLONG PreviousState
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryEvent (
    _In_ HANDLE EventHandle,
    _In_ EVENT_INFORMATION_CLASS EventInformationClass,
    _Out_writes_bytes_(EventInformationLength) PVOID EventInformation,
    _In_ ULONG EventInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwResetEvent (
    _In_ HANDLE EventHandle,
    _Out_opt_ PLONG PreviousState
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetEvent (
    _In_ HANDLE EventHandle,
    _Out_opt_ PLONG PreviousState
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetEventBoostPriority (
    _In_ HANDLE EventHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateEventPair (
    _Out_ PHANDLE EventPairHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenEventPair (
    _Out_ PHANDLE EventPairHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwWaitLowEventPair (
    _In_ HANDLE EventPairHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwWaitHighEventPair (
    _In_ HANDLE EventPairHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetLowWaitHighEventPair (
    _In_ HANDLE EventPairHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetHighWaitLowEventPair (
    _In_ HANDLE EventPairHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetLowEventPair (
    _In_ HANDLE EventPairHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetHighEventPair (
    _In_ HANDLE EventPairHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateMutant (
    _Out_ PHANDLE MutantHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ BOOLEAN InitialOwner
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenMutant (
    _Out_ PHANDLE MutantHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryMutant (
    _In_ HANDLE MutantHandle,
    _In_ MUTANT_INFORMATION_CLASS MutantInformationClass,
    _Out_writes_bytes_(MutantInformationLength) PVOID MutantInformation,
    _In_ ULONG MutantInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwReleaseMutant (
    _In_ HANDLE MutantHandle,
    _Out_opt_ PLONG PreviousCount
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateSemaphore (
    _Out_ PHANDLE SemaphoreHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ LONG InitialCount,
    _In_ LONG MaximumCount
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenSemaphore(
    _Out_ PHANDLE SemaphoreHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQuerySemaphore (
    _In_ HANDLE SemaphoreHandle,
    _In_ SEMAPHORE_INFORMATION_CLASS SemaphoreInformationClass,
    _Out_writes_bytes_(SemaphoreInformationLength) PVOID SemaphoreInformation,
    _In_ ULONG SemaphoreInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwReleaseSemaphore(
    _In_ HANDLE SemaphoreHandle,
    _In_ LONG ReleaseCount,
    _Out_opt_ PLONG PreviousCount
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateTimer (
    _Out_ PHANDLE TimerHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ TIMER_TYPE TimerType
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenTimer (
    _Out_ PHANDLE TimerHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCancelTimer (
    _In_ HANDLE TimerHandle,
    _Out_opt_ PBOOLEAN CurrentState
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryTimer (
    _In_ HANDLE TimerHandle,
    _In_ TIMER_INFORMATION_CLASS TimerInformationClass,
    _Out_writes_bytes_(TimerInformationLength) PVOID TimerInformation,
    _In_ ULONG TimerInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetTimer (
    _In_ HANDLE TimerHandle,
    _In_ PLARGE_INTEGER DueTime,
    _In_opt_ PTIMER_APC_ROUTINE TimerApcRoutine,
    _In_opt_ PVOID TimerContext,
    _In_ BOOLEAN ResumeTimer,
    _In_opt_ LONG Period,
    _Out_opt_ PBOOLEAN PreviousState
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetTimerEx (
    _In_ HANDLE TimerHandle,
    _In_ TIMER_SET_INFORMATION_CLASS TimerSetInformationClass,
    _Inout_updates_bytes_opt_(TimerSetInformationLength) PVOID TimerSetInformation,
    _In_ ULONG TimerSetInformationLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateIRTimer (
    _Out_ PHANDLE TimerHandle,
    _In_ ACCESS_MASK DesiredAccess
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetIRTimer (
    _In_ HANDLE TimerHandle,
    _In_opt_ PLARGE_INTEGER DueTime
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateTimer2 (
    _Out_ PHANDLE TimerHandle,
    _In_opt_ PVOID Reserved1,
    _In_opt_ PVOID Reserved2,
    _In_ ULONG Attributes,
    _In_ ACCESS_MASK DesiredAccess
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetTimer2 (
    _In_ HANDLE TimerHandle,
    _In_ PLARGE_INTEGER DueTime,
    _In_opt_ PLARGE_INTEGER Period,
    _In_ PT2_SET_PARAMETERS Parameters
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCancelTimer2 (
    _In_ HANDLE TimerHandle,
    _In_ PT2_CANCEL_PARAMETERS Parameters
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQuerySystemTime (
    _Out_ PLARGE_INTEGER SystemTime
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetSystemTime (
    _In_opt_ PLARGE_INTEGER SystemTime,
    _Out_opt_ PLARGE_INTEGER PreviousTime
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryTimerResolution (
    _Out_ PULONG MaximumTime,
    _Out_ PULONG MinimumTime,
    _Out_ PULONG CurrentTime
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetTimerResolution (
    _In_ ULONG DesiredTime,
    _In_ BOOLEAN SetResolution,
    _Out_ PULONG ActualTime
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAllocateLocallyUniqueId (
    _Out_ PLUID Luid
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetUuidSeed (
    _In_reads_bytes_(6) PCHAR Seed
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAllocateUuids (
    _Out_ PULARGE_INTEGER Time,
    _Out_ PULONG Range,
    _Out_ PULONG Sequence,
    _Out_writes_bytes_(6) PCHAR Seed
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateProfile (
    _Out_ PHANDLE ProfileHandle,
    _In_ HANDLE Process OPTIONAL,
    _In_ PVOID ProfileBase,
    _In_ SIZE_T ProfileSize,
    _In_ ULONG BucketSize,
    _In_reads_bytes_(BufferSize) PULONG Buffer,
    _In_ ULONG BufferSize,
    _In_ KPROFILE_SOURCE ProfileSource,
    _In_ KAFFINITY Affinity
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateProfileEx (
    _Out_ PHANDLE ProfileHandle,
    _In_ HANDLE Process OPTIONAL,
    _In_ PVOID ProfileBase,
    _In_ SIZE_T ProfileSize,
    _In_ ULONG BucketSize,
    _In_reads_bytes_(BufferSize) PULONG Buffer,
    _In_ ULONG BufferSize,
    _In_ KPROFILE_SOURCE ProfileSource,
    _In_ USHORT GroupCount,
    _In_reads_(GroupCount) PGROUP_AFFINITY AffinityArray
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwStartProfile (
    _In_ HANDLE ProfileHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwStopProfile (
    _In_ HANDLE ProfileHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetIntervalProfile (
    _In_ ULONG Interval,
    _In_ KPROFILE_SOURCE Source
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryIntervalProfile (
    _In_ KPROFILE_SOURCE ProfileSource,
    _Out_ PULONG Interval
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryPerformanceCounter (
    _Out_ PLARGE_INTEGER PerformanceCounter,
    _Out_opt_ PLARGE_INTEGER PerformanceFrequency
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateKeyedEvent (
    _Out_ PHANDLE KeyedEventHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ ULONG Flags
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenKeyedEvent (
    _Out_ PHANDLE KeyedEventHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwReleaseKeyedEvent (
    _In_ HANDLE KeyedEventHandle,
    _In_ PVOID KeyValue,
    _In_ BOOLEAN Alertable,
    _In_opt_ PLARGE_INTEGER Timeout
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwWaitForKeyedEvent (
    _In_ HANDLE KeyedEventHandle,
    _In_ PVOID KeyValue,
    _In_ BOOLEAN Alertable,
    _In_opt_ PLARGE_INTEGER Timeout
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQuerySystemInformation (
    _In_ SYSTEM_INFORMATION_CLASS SystemInformationClass,
    _Out_writes_bytes_to_opt_(SystemInformationLength, *ReturnLength) PVOID SystemInformation,
    _In_ ULONG SystemInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQuerySystemInformationEx (
    _In_ SYSTEM_INFORMATION_CLASS SystemInformationClass,
    _In_reads_bytes_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(SystemInformationLength) PVOID SystemInformation,
    _In_ ULONG SystemInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetSystemInformation (
    _In_ SYSTEM_INFORMATION_CLASS SystemInformationClass,
    _In_reads_bytes_opt_(SystemInformationLength) PVOID SystemInformation,
    _In_ ULONG SystemInformationLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSystemDebugControl (
    _In_ SYSDBG_COMMAND Command,
    _Inout_updates_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength,
    _Out_opt_ PULONG ReturnLength
    );
__analysis_noreturn
NTSYSAPI
NTSTATUS
NTAPI
ZwRaiseHardError (
    _In_ NTSTATUS ErrorStatus,
    _In_ ULONG NumberOfParameters,
    _In_ ULONG UnicodeStringParameterMask,
    _In_reads_(NumberOfParameters) PULONG_PTR Parameters,
    _In_ ULONG ValidResponseOptions,
    _Out_ PULONG Response
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryDefaultLocale (
    _In_ BOOLEAN UserProfile,
    _Out_ PLCID DefaultLocaleId
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetDefaultLocale (
    _In_ BOOLEAN UserProfile,
    _In_ LCID DefaultLocaleId
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInstallUILanguage (
    _Out_ LANGID *InstallUILanguageId
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryDefaultUILanguage (
    _Out_ LANGID *DefaultUILanguageId
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetDefaultUILanguage (
    _In_ LANGID DefaultUILanguageId
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetDefaultHardErrorPort(
    _In_ HANDLE DefaultHardErrorPort
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwShutdownSystem (
    _In_ SHUTDOWN_ACTION Action
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwDisplayString (
    _In_ PUNICODE_STRING String
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwDrawText (
    _In_ PUNICODE_STRING String
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAddAtom (
    _In_reads_bytes_opt_(Length) PWSTR AtomName,
    _In_ ULONG Length,
    _Out_opt_ PRTL_ATOM Atom
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwFindAtom (
    _In_reads_bytes_opt_(Length) PWSTR AtomName,
    _In_ ULONG Length,
    _Out_opt_ PRTL_ATOM Atom
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwDeleteAtom (
    _In_ RTL_ATOM Atom
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationAtom (
    _In_ RTL_ATOM Atom,
    _In_ ATOM_INFORMATION_CLASS AtomInformationClass,
    _Out_writes_bytes_(AtomInformationLength) PVOID AtomInformation,
    _In_ ULONG AtomInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwInitializeNlsFiles (
    _Outptr_result_bytebuffer_(sizeof(NLS_MAIN_TABLE_OFFSET)) PVOID *BaseAddress,
    _Out_ PLCID DefaultLocaleId,
    _Out_ PLARGE_INTEGER DefaultCasingTableSize
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwMapCMFModule (
    _In_ ULONG What,
    _In_ ULONG Index,
    _Out_opt_ ULONG *CacheIndexOut,
    _Out_opt_ ULONG *CacheFlagsOut,
    _Out_opt_ ULONG *ViewSizeOut,
    _Out_opt_ PVOID *BaseAddress
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwGetMUIRegistryInfo (
    _In_ ULONG Flags,
    _Inout_opt_ ULONG *DataSize,
    _Inout_updates_bytes_opt_(*DataSize) PVOID Data
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwIsUILanguageComitted (
    VOID
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwFlushInstallUILanguage (
    _In_ ULONG InstallUILanguage,
    _In_ ULONG SetComittedFlag
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwGetNlsSectionPtr (
    _In_ ULONG SectionType,
    _In_ ULONG SectionData,
    _In_opt_ PVOID ContextData,
    _Out_ PVOID *SectionPointer,
    _Out_ PSIZE_T SectionSize
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryLicenseValue (
    _In_ PUNICODE_STRING ValueName,
    _Out_opt_ PULONG Type,
    _Out_writes_bytes_to_opt_(DataSize, *ResultDataSize) PVOID Data,
    _In_ ULONG DataSize,
    _Out_ PULONG ResultDataSize
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwUmsThreadYield (
    _In_ PVOID SchedulerParam
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateWnfStateName(
    _Out_ PWNF_STATE_NAME StateName,
    _In_ WNF_STATE_NAME_LIFETIME NameLifetime,
    _In_ WNF_DATA_SCOPE DataScope,
    _In_ BOOLEAN PersistData,
    _In_opt_ PCWNF_TYPE_ID TypeId,
    _In_ ULONG MaximumStateSize,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDeleteWnfStateName(
    _In_ PCWNF_STATE_NAME StateName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwUpdateWnfStateData(
    _In_ PCWNF_STATE_NAME StateName,
    _In_reads_bytes_opt_(Length) const VOID* Buffer,
    _In_opt_ ULONG Length,
    _In_opt_ PCWNF_TYPE_ID TypeId,
    _In_opt_ const PVOID ExplicitScope,
    _In_ WNF_CHANGE_STAMP MatchingChangeStamp,
    _In_ LOGICAL CheckStamp
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDeleteWnfStateData(
    _In_ PCWNF_STATE_NAME StateName,
    _In_opt_ const PVOID ExplicitScope
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryWnfStateData(
    _In_ PCWNF_STATE_NAME StateName,
    _In_opt_ PCWNF_TYPE_ID TypeId,
    _In_opt_ const VOID* ExplicitScope,
    _Out_ PWNF_CHANGE_STAMP ChangeStamp,
    _Out_writes_bytes_to_opt_(*BufferSize, *BufferSize) PVOID Buffer,
    _Inout_ PULONG BufferSize
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryWnfStateNameInformation(
    _In_ PCWNF_STATE_NAME StateName,
    _In_ WNF_STATE_NAME_INFORMATION NameInfoClass,
    _In_opt_ const PVOID ExplicitScope,
    _Out_writes_bytes_(InfoBufferSize) PVOID InfoBuffer,
    _In_ ULONG InfoBufferSize
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSubscribeWnfStateChange(
    _In_ PCWNF_STATE_NAME StateName,
    _In_opt_ WNF_CHANGE_STAMP ChangeStamp,
    _In_ ULONG EventMask,
    _Out_opt_ PULONG64 SubscriptionId
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwUnsubscribeWnfStateChange(
    _In_ PCWNF_STATE_NAME StateName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwGetCompleteWnfStateSubscription (
    _In_opt_ PWNF_STATE_NAME OldDescriptorStateName,
    _In_opt_ ULONG64 *OldSubscriptionId,
    _In_opt_ ULONG OldDescriptorEventMask,
    _In_opt_ ULONG OldDescriptorStatus,
    _Out_writes_bytes_(DescriptorSize) PWNF_DELIVERY_DESCRIPTOR NewDeliveryDescriptor,
    _In_ ULONG DescriptorSize
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetWnfProcessNotificationEvent(
    _In_ HANDLE NotificationEvent
        );
NTSYSAPI
NTSTATUS
NTAPI
ZwCancelIoFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCancelIoFileEx(
    _In_ HANDLE FileHandle,
    _In_opt_ PIO_STATUS_BLOCK  IoRequestToCancel,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCancelSynchronousIoFile(
    _In_ HANDLE ThreadHandle,
    _In_opt_ PIO_STATUS_BLOCK  IoRequestToCancel,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateNamedPipeFile(
     _Out_ PHANDLE FileHandle,
     _In_ ULONG DesiredAccess,
     _In_ POBJECT_ATTRIBUTES ObjectAttributes,
     _Out_ PIO_STATUS_BLOCK IoStatusBlock,
     _In_ ULONG ShareAccess,
     _In_ ULONG CreateDisposition,
     _In_ ULONG CreateOptions,
     _In_ ULONG NamedPipeType,
     _In_ ULONG ReadMode,
     _In_ ULONG CompletionMode,
     _In_ ULONG MaximumInstances,
     _In_ ULONG InboundQuota,
     _In_ ULONG OutboundQuota,
     _In_opt_ PLARGE_INTEGER DefaultTimeout
     );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateMailslotFile (
     _Out_ PHANDLE FileHandle,
     _In_ ULONG DesiredAccess,
     _In_ POBJECT_ATTRIBUTES ObjectAttributes,
     _Out_ PIO_STATUS_BLOCK IoStatusBlock,
     _In_ ULONG CreateOptions,
     _In_ ULONG MailslotQuota,
     _In_ ULONG MaximumMessageSize,
     _In_ PLARGE_INTEGER ReadTimeout
     );
NTSYSAPI
NTSTATUS
NTAPI
ZwDeleteFile (
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwFlushBuffersFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwNotifyChangeDirectoryFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ ULONG CompletionFilter,
    _In_ BOOLEAN WatchTree
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwNotifyChangeSession (
    _In_ HANDLE SessionHandle,
    _In_ ULONG ChangeSequenceNumber,
    _In_ PLARGE_INTEGER ChangeTimeStamp,
    _In_ IO_SESSION_EVENT Event,
    _In_ IO_SESSION_STATE NewState,
    _In_ IO_SESSION_STATE PreviousState,
    _In_reads_bytes_opt_(PayloadSize) PVOID Payload,
    _In_ ULONG PayloadSize
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryAttributesFile (
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PFILE_BASIC_INFORMATION FileInformation
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryFullAttributesFile(
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PFILE_NETWORK_OPEN_INFORMATION FileInformation
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryEaFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_reads_bytes_opt_(EaListLength) PVOID EaList,
    _In_ ULONG EaListLength,
    _In_opt_ PULONG EaIndex,
    _In_ BOOLEAN RestartScan
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwReadFileScatter (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PFILE_SEGMENT_ELEMENT SegmentArray,
    _In_ ULONG Length,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_opt_ PULONG Key
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetEaFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwWriteFileGather (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PFILE_SEGMENT_ELEMENT SegmentArray,
    _In_ ULONG Length,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_opt_ PULONG Key
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwLoadDriver (
    _In_ PUNICODE_STRING DriverServiceName
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwUnloadDriver (
    _In_ PUNICODE_STRING DriverServiceName
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateIoCompletion (
    _Out_ PHANDLE IoCompletionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ ULONG Count
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenIoCompletion (
    _Out_ PHANDLE IoCompletionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryIoCompletion (
    _In_ HANDLE IoCompletionHandle,
    _In_ IO_COMPLETION_INFORMATION_CLASS IoCompletionInformationClass,
    _Out_writes_bytes_(IoCompletionInformationLength) PVOID IoCompletionInformation,
    _In_ ULONG IoCompletionInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetIoCompletion (
    _In_ HANDLE IoCompletionHandle,
    _In_opt_ PVOID KeyContext,
    _In_opt_ PVOID ApcContext,
    _In_ NTSTATUS IoStatus,
    _In_ ULONG_PTR IoStatusInformation
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetIoCompletionEx (
    _In_ HANDLE IoCompletionHandle,
    _In_ HANDLE IoCompletionPacketHandle,
    _In_opt_ PVOID KeyContext,
    _In_opt_ PVOID ApcContext,
    _In_ NTSTATUS IoStatus,
    _In_ ULONG_PTR IoStatusInformation
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRemoveIoCompletion (
    _In_ HANDLE IoCompletionHandle,
    _Out_ PVOID *KeyContext,
    _Out_ PVOID *ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_opt_ PLARGE_INTEGER Timeout
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRemoveIoCompletionEx (
    _In_ HANDLE IoCompletionHandle,
    _Out_writes_to_(Count, *NumEntriesRemoved) PFILE_IO_COMPLETION_INFORMATION IoCompletionInformation,
    _In_ ULONG Count,
    _Out_ PULONG NumEntriesRemoved,
    _In_opt_ PLARGE_INTEGER Timeout,
    _In_ BOOLEAN Alertable
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateWaitCompletionPacket (
    _Out_ PHANDLE WaitCompletionPacketHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAssociateWaitCompletionPacket (
    _In_ HANDLE WaitCompletionPacketHandle,
    _In_ HANDLE IoCompletionHandle,
    _In_ HANDLE TargetObjectHandle,
    _In_opt_ PVOID KeyContext,
    _In_opt_ PVOID ApcContext,
    _In_ NTSTATUS IoStatus,
    _In_ ULONG_PTR IoStatusInformation,
    _Out_opt_ PBOOLEAN AlreadySignaled
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCancelWaitCompletionPacket (
    _In_ HANDLE WaitCompletionPacketHandle,
    _In_ BOOLEAN RemoveSignaledPacket
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateFile (
    _Out_ PHANDLE FileHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_opt_ PLARGE_INTEGER AllocationSize,
    _In_ ULONG FileAttributes,
    _In_ ULONG ShareAccess,
    _In_ ULONG CreateDisposition,
    _In_ ULONG CreateOptions,
    _In_reads_bytes_opt_(EaLength) PVOID EaBuffer,
    _In_ ULONG EaLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwDeviceIoControlFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG IoControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwFsControlFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG FsControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwLockFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PLARGE_INTEGER ByteOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key,
    _In_ BOOLEAN FailImmediately,
    _In_ BOOLEAN ExclusiveLock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenFile (
    _Out_ PHANDLE FileHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG ShareAccess,
    _In_ ULONG OpenOptions
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryDirectoryFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_opt_ PUNICODE_STRING FileName,
    _In_ BOOLEAN RestartScan
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryQuotaInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_reads_bytes_opt_(SidListLength) PVOID SidList,
    _In_ ULONG SidListLength,
    _In_reads_bytes_opt_((8 + (4 * ((SID *)StartSid)->SubAuthorityCount))) // SeLengthSid()
        PSID StartSid,
    _In_ BOOLEAN RestartScan
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryVolumeInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwReadFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_opt_ PULONG Key
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetQuotaInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetVolumeInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwWriteFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_opt_ PULONG Key
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwUnlockFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PLARGE_INTEGER ByteOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwFlushBuffersFileEx (
    _In_ HANDLE FileHandle,
    _In_ ULONG Flags,
    _In_reads_bytes_(ParametersSize) PVOID Parameters,
    _In_ ULONG ParametersSize,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
_IRQL_requires_(PASSIVE_LEVEL)
_IRQL_requires_same_
NTSYSAPI
NTSTATUS
NTAPI
ZwCallbackReturn (
    _In_reads_bytes_opt_(OutputLength) PVOID OutputBuffer,
    _In_ ULONG OutputLength,
    _In_ NTSTATUS Status
    );
_IRQL_requires_(PASSIVE_LEVEL)
_IRQL_requires_same_
NTSYSAPI
NTSTATUS
NTAPI
ZwFlushProcessWriteBuffers (
    VOID
    );
_IRQL_requires_same_
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryDebugFilterState (
    _In_ ULONG ComponentId,
    _In_ ULONG Level
    );
_IRQL_requires_(PASSIVE_LEVEL)
_IRQL_requires_same_
NTSYSAPI
NTSTATUS
NTAPI
ZwSetDebugFilterState (
    _In_ ULONG ComponentId,
    _In_ ULONG Level,
    _In_ BOOLEAN State
    );
_IRQL_requires_max_(APC_LEVEL)
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_same_
NTSYSAPI
NTSTATUS
NTAPI
ZwYieldExecution (
    VOID
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCreatePort(
    _Out_ PHANDLE PortHandle,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ ULONG MaxConnectionInfoLength,
    _In_ ULONG MaxMessageLength,
    _In_opt_ ULONG MaxPoolUsage
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateWaitablePort(
    _Out_ PHANDLE PortHandle,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ ULONG MaxConnectionInfoLength,
    _In_ ULONG MaxMessageLength,
    _In_opt_ ULONG MaxPoolUsage
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwConnectPort(
    _Out_ PHANDLE PortHandle,
    _In_ PUNICODE_STRING PortName,
    _In_ PSECURITY_QUALITY_OF_SERVICE SecurityQos,
    _Inout_opt_ PPORT_VIEW ClientView,
    _Inout_opt_ PREMOTE_PORT_VIEW ServerView,
    _Out_opt_ PULONG MaxMessageLength,
    _Inout_updates_bytes_to_opt_(*ConnectionInformationLength, *ConnectionInformationLength) PVOID ConnectionInformation,
    _Inout_opt_ PULONG ConnectionInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSecureConnectPort(
    _Out_ PHANDLE PortHandle,
    _In_ PUNICODE_STRING PortName,
    _In_ PSECURITY_QUALITY_OF_SERVICE SecurityQos,
    _Inout_opt_ PPORT_VIEW ClientView,
    _In_opt_ PSID RequiredServerSid,
    _Inout_opt_ PREMOTE_PORT_VIEW ServerView,
    _Out_opt_ PULONG MaxMessageLength,
    _Inout_updates_bytes_to_opt_(*ConnectionInformationLength, *ConnectionInformationLength) PVOID ConnectionInformation,
    _Inout_opt_ PULONG ConnectionInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwListenPort(
    _In_ HANDLE PortHandle,
    _Out_ PPORT_MESSAGE ConnectionRequest
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAcceptConnectPort(
    _Out_ PHANDLE PortHandle,
    _In_opt_ PVOID PortContext,
    _In_ PPORT_MESSAGE ConnectionRequest,
    _In_ BOOLEAN AcceptConnection,
    _Inout_opt_ PPORT_VIEW ServerView,
    _Out_opt_ PREMOTE_PORT_VIEW ClientView
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCompleteConnectPort(
    _In_ HANDLE PortHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwRequestPort(
    _In_ HANDLE PortHandle,
    _In_reads_bytes_(RequestMessage->u1.s1.TotalLength) PPORT_MESSAGE RequestMessage
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwRequestWaitReplyPort(
    _In_ HANDLE PortHandle,
    _In_reads_bytes_(RequestMessage->u1.s1.TotalLength) PPORT_MESSAGE RequestMessage,
    _Out_ PPORT_MESSAGE ReplyMessage
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwReplyPort(
    _In_ HANDLE PortHandle,
    _In_reads_bytes_(ReplyMessage->u1.s1.TotalLength) PPORT_MESSAGE ReplyMessage
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwReplyWaitReplyPort(
    _In_ HANDLE PortHandle,
    _Inout_ PPORT_MESSAGE ReplyMessage
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwReplyWaitReceivePort(
    _In_ HANDLE PortHandle,
    _Out_opt_ PVOID *PortContext,
    _In_reads_bytes_opt_(ReplyMessage->u1.s1.TotalLength) PPORT_MESSAGE ReplyMessage,
    _Out_ PPORT_MESSAGE ReceiveMessage
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Success_(return == 0)
NTSYSAPI
NTSTATUS
NTAPI
ZwReplyWaitReceivePortEx(
    _In_ HANDLE PortHandle,
    _Out_opt_ PVOID *PortContext,
    _In_reads_bytes_opt_(ReplyMessage->u1.s1.TotalLength) PPORT_MESSAGE ReplyMessage,
    _Out_ PPORT_MESSAGE ReceiveMessage,
    _In_opt_ PLARGE_INTEGER Timeout
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwImpersonateClientOfPort(
    _In_ HANDLE PortHandle,
    _In_ PPORT_MESSAGE Message
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwReadRequestData(
    _In_ HANDLE PortHandle,
    _In_ PPORT_MESSAGE Message,
    _In_ ULONG DataEntryIndex,
    _Out_writes_bytes_to_(BufferSize, *NumberOfBytesRead) PVOID Buffer,
    _In_ SIZE_T BufferSize,
    _Out_opt_ PSIZE_T NumberOfBytesRead
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwWriteRequestData(
    _In_ HANDLE PortHandle,
    _In_ PPORT_MESSAGE Message,
    _In_ ULONG DataEntryIndex,
    _In_reads_bytes_(BufferSize) PVOID Buffer,
    _In_ SIZE_T BufferSize,
    _Out_opt_ PSIZE_T NumberOfBytesWritten
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationPort(
    _In_opt_ HANDLE PortHandle,
    _In_ __drv_strictTypeMatch(__drv_typeConst) PORT_INFORMATION_CLASS PortInformationClass,
    _Out_writes_bytes_to_(Length, *ReturnLength) PVOID PortInformation,
    _In_ ULONG Length,
    _Out_opt_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcCreatePort(
    _Out_ PHANDLE PortHandle,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PALPC_PORT_ATTRIBUTES PortAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Success_(return == 0)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcConnectPort (
    _Out_ PHANDLE PortHandle,
    _In_ PUNICODE_STRING PortName,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PALPC_PORT_ATTRIBUTES PortAttributes,
    _In_ ULONG Flags,
    _In_opt_ PSID RequiredServerSid,
    _Inout_updates_bytes_to_opt_(*BufferLength, *BufferLength) PPORT_MESSAGE ConnectionMessage,
    _Inout_opt_ PSIZE_T BufferLength,
    _Inout_opt_ PALPC_MESSAGE_ATTRIBUTES OutMessageAttributes,
    _Inout_opt_ PALPC_MESSAGE_ATTRIBUTES InMessageAttributes,
    _In_opt_ PLARGE_INTEGER Timeout
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Success_(return == 0)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcConnectPortEx (
    _Out_ PHANDLE PortHandle,
    _In_ POBJECT_ATTRIBUTES ConnectionPortObjectAttributes,
    _In_opt_ POBJECT_ATTRIBUTES ClientPortObjectAttributes,
    _In_opt_ PALPC_PORT_ATTRIBUTES PortAttributes,
    _In_ ULONG Flags,
    _In_opt_ PSECURITY_DESCRIPTOR ServerSecurityRequirements,
    _Inout_updates_bytes_to_opt_(*BufferLength, *BufferLength) PPORT_MESSAGE ConnectionMessage,
    _Inout_opt_ PSIZE_T BufferLength,
    _Inout_opt_ PALPC_MESSAGE_ATTRIBUTES OutMessageAttributes,
    _Inout_opt_ PALPC_MESSAGE_ATTRIBUTES InMessageAttributes,
    _In_opt_ PLARGE_INTEGER Timeout
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcAcceptConnectPort (
    _Out_ PHANDLE PortHandle,
    _In_ HANDLE ConnectionPortHandle,
    _In_ ULONG Flags,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PALPC_PORT_ATTRIBUTES PortAttributes,
    _In_opt_ PVOID PortContext,
    _In_reads_bytes_(ConnectionRequest->u1.s1.TotalLength) PPORT_MESSAGE ConnectionRequest,
    _Inout_opt_ PALPC_MESSAGE_ATTRIBUTES ConnectionMessageAttributes,
    _In_ BOOLEAN AcceptConnection
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcDisconnectPort (
    _In_ HANDLE PortHandle,
    _In_ ULONG Flags
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcSendWaitReceivePort(
    _In_ HANDLE PortHandle,
    _In_ ULONG Flags,
    _In_reads_bytes_opt_(SendMessage->u1.s1.TotalLength) PPORT_MESSAGE SendMessage,
    _Inout_opt_ PALPC_MESSAGE_ATTRIBUTES SendMessageAttributes,
    _Out_writes_bytes_to_opt_(*BufferLength, *BufferLength) PPORT_MESSAGE ReceiveMessage,
    _Inout_opt_ PSIZE_T BufferLength,
    _Inout_opt_ PALPC_MESSAGE_ATTRIBUTES ReceiveMessageAttributes,
    _In_opt_ PLARGE_INTEGER Timeout
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcCancelMessage (
    _In_ HANDLE PortHandle,
    _In_ ULONG Flags,
    _In_ PALPC_CONTEXT_ATTR MessageContext
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcCreateSecurityContext (
    _In_ HANDLE PortHandle,
    _Reserved_ ULONG Flags,
    _Inout_ PALPC_SECURITY_ATTR SecurityAttr
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcDeleteSecurityContext (
    _In_ HANDLE PortHandle,
    _Reserved_ ULONG Flags,
    _In_ ALPC_HANDLE ContextHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcRevokeSecurityContext(
    _In_ HANDLE PortHandle,
    _Reserved_ ULONG Flags,
    _In_ ALPC_HANDLE ContextHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcImpersonateClientOfPort (
    _In_ HANDLE PortHandle,
    _In_ PPORT_MESSAGE Message,
    _In_ PVOID Flags
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcImpersonateClientContainerOfPort (
    _In_ HANDLE PortHandle,
    _In_ PPORT_MESSAGE Message,
    _In_ ULONG Flags
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcCreatePortSection (
    _In_ HANDLE PortHandle,
    _In_ ULONG Flags,
    _In_opt_ HANDLE SectionHandle,
    _In_ SIZE_T SectionSize,
    _Out_ PALPC_HANDLE AlpcSectionHandle,
    _Out_ PSIZE_T ActualSectionSize
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcDeletePortSection (
    _In_ HANDLE PortHandle,
    _Reserved_ ULONG Flags,
    _In_ ALPC_HANDLE SectionHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcCreateSectionView (
    _In_ HANDLE PortHandle,
    _Reserved_ ULONG Flags,
    _Inout_ PALPC_DATA_VIEW_ATTR ViewAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcDeleteSectionView (
    _In_ HANDLE PortHandle,
    _Reserved_ ULONG Flags,
    _In_ PVOID ViewBase
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcCreateResourceReserve (
    _In_ HANDLE PortHandle,
    _Reserved_ ULONG Flags,
    _In_ SIZE_T MessageSize,
    _Out_ PULONG ResourceId
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcDeleteResourceReserve (
    _In_ HANDLE PortHandle,
    _Reserved_ ULONG Flags,
    _In_ ULONG ResourceId
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcSetInformation(
    _In_ HANDLE PortHandle,
    _In_ __drv_strictTypeMatch(__drv_typeConst) ALPC_PORT_INFORMATION_CLASS PortInformationClass,
    _In_reads_bytes_opt_(Length) PVOID PortInformation,
    _In_ ULONG Length
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcQueryInformation(
    _In_opt_ HANDLE PortHandle,
    _In_ __drv_strictTypeMatch(__drv_typeConst) ALPC_PORT_INFORMATION_CLASS PortInformationClass,
    _Inout_updates_bytes_to_(Length, *ReturnLength) PVOID PortInformation,
    _In_ ULONG Length,
    _Out_opt_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcQueryInformationMessage(
    _In_ HANDLE PortHandle,
    _In_ PPORT_MESSAGE PortMessage,
    _In_ __drv_strictTypeMatch(__drv_typeConst) ALPC_MESSAGE_INFORMATION_CLASS MessageInformationClass,
    _Out_writes_bytes_to_opt_(Length, *ReturnLength) PVOID MessageInformation,
    _In_ ULONG Length,
    _Out_opt_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcOpenSenderProcess(
    _Out_ PHANDLE ProcessHandle,
    _In_ HANDLE PortHandle,
    _In_ PPORT_MESSAGE PortMessage,
    _In_ ULONG Flags,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwAlpcOpenSenderThread(
    _Out_ PHANDLE ThreadHandle,
    _In_ HANDLE PortHandle,
    _In_ PPORT_MESSAGE PortMessage,
    _In_ ULONG Flags,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenSection (
    _Out_ PHANDLE SectionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwManagePartition (
    _In_ HANDLE TargetHandle,
    _In_opt_ HANDLE SourceHandle,
    _In_ MEMORY_PARTITION_INFORMATION_CLASS PartitionInformationClass,
    _In_ PVOID PartitionInformation,
    _In_ ULONG PartitionInformationLength
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwCreatePartition (
    _In_opt_ HANDLE ParentPartitionHandle,
    _Out_ PHANDLE PartitionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ ULONG PreferredNode
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenPartition (
    _Out_ PHANDLE PartitionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenSession (
    _Out_ PHANDLE SessionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_Must_inspect_result_
_Post_satisfies_(*ViewSize >= _Old_(*ViewSize))
NTSYSAPI
NTSTATUS
NTAPI
ZwMapViewOfSection (
    _In_ HANDLE SectionHandle,
    _In_ HANDLE ProcessHandle,
    _Inout_ _At_ (*BaseAddress, _Readable_bytes_ (*ViewSize) _Writable_bytes_ (*ViewSize) _Post_readable_byte_size_ (*ViewSize)) PVOID *BaseAddress,
    _In_ ULONG_PTR ZeroBits,
    _In_ SIZE_T CommitSize,
    _Inout_opt_ PLARGE_INTEGER SectionOffset,
    _Inout_ PSIZE_T ViewSize,
    _In_ SECTION_INHERIT InheritDisposition,
    _In_ ULONG AllocationType,
    _In_ ULONG Win32Protect
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwUnmapViewOfSection (
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID BaseAddress
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwUnmapViewOfSectionEx (
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID BaseAddress,
    _In_ ULONG Flags
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwExtendSection (
    _In_ HANDLE SectionHandle,
    _Inout_ PLARGE_INTEGER NewSectionSize
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwAreMappedFilesTheSame (
    _In_ PVOID File1MappedAsAnImage,
    _In_ PVOID File2MappedAsFile
    );
_Must_inspect_result_ 
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _In_ VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
    _In_ ULONG_PTR NumberOfEntries,
    _In_reads_ (NumberOfEntries) PMEMORY_RANGE_ENTRY VirtualAddresses,
    _In_reads_bytes_ (VmInformationLength) PVOID VmInformation,
    _In_ ULONG VmInformationLength
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwReadVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID BaseAddress,
    _Out_writes_bytes_ (BufferSize) PVOID Buffer,
    _In_ SIZE_T BufferSize,
    _Out_opt_ PSIZE_T NumberOfBytesRead
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwWriteVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID BaseAddress,
    _In_reads_bytes_(BufferSize) CONST VOID *Buffer,
    _In_ SIZE_T BufferSize,
    _Out_opt_ PSIZE_T NumberOfBytesWritten
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwFlushVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _Inout_ PVOID *BaseAddress,
    _Inout_ PSIZE_T RegionSize,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwLockVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _Inout_ PVOID *BaseAddress,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG MapType
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwUnlockVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _Inout_ PVOID *BaseAddress,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG MapType
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwProtectVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _Inout_ PVOID *BaseAddress,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG NewProtect,
    _Out_ PULONG OldProtect
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwQuerySection (
    _In_ HANDLE SectionHandle,
    _In_ SECTION_INFORMATION_CLASS SectionInformationClass,
    _Out_writes_bytes_(SectionInformationLength) PVOID SectionInformation,
    _In_ SIZE_T SectionInformationLength,
    _Out_opt_ PSIZE_T ReturnLength
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwMapUserPhysicalPages (
    _In_ PVOID VirtualAddress,
    _In_ ULONG_PTR NumberOfPages,
    _In_reads_opt_(NumberOfPages) PULONG_PTR UserPfnArray
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwMapUserPhysicalPagesScatter (
    _In_reads_(NumberOfPages) PVOID *VirtualAddresses,
    _In_ ULONG_PTR NumberOfPages,
    _In_reads_opt_(NumberOfPages) PULONG_PTR UserPfnArray
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwAllocateUserPhysicalPages (
    _In_ HANDLE ProcessHandle,
    _Inout_ PULONG_PTR NumberOfPages,
    _Out_writes_(*NumberOfPages) PULONG_PTR UserPfnArray
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwFreeUserPhysicalPages (
    _In_ HANDLE ProcessHandle,
    _Inout_ PULONG_PTR NumberOfPages,
    _In_reads_(*NumberOfPages) PULONG_PTR UserPfnArray
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwGetWriteWatch (
    _In_ HANDLE ProcessHandle,
    _In_ ULONG Flags,
    _In_ PVOID BaseAddress,
    _In_ SIZE_T RegionSize,
    _Out_writes_opt_(*EntriesInUserAddressArray) PVOID *UserAddressArray,
    _Inout_opt_ PULONG_PTR EntriesInUserAddressArray,
    _Out_opt_ PULONG Granularity
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwResetWriteWatch (
    _In_ HANDLE ProcessHandle,
    _In_ PVOID BaseAddress,
    _In_ SIZE_T RegionSize
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreatePagingFile (
    _In_ PUNICODE_STRING PageFileName,
    _In_ PLARGE_INTEGER MinimumSize,
    _In_ PLARGE_INTEGER MaximumSize,
    _In_ ULONG Flags
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwFlushInstructionCache (
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID BaseAddress,
    _In_ SIZE_T Length
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwFlushWriteBuffer (
    VOID
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateSection (
    _Out_ PHANDLE SectionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PLARGE_INTEGER MaximumSize,
    _In_ ULONG SectionPageProtection,
    _In_ ULONG AllocationAttributes,
    _In_opt_ HANDLE FileHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAllocateVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _Inout_ _At_ (*BaseAddress, _Readable_bytes_ (*RegionSize) _Writable_bytes_ (*RegionSize) _Post_readable_byte_size_ (*RegionSize)) PVOID *BaseAddress,
    _In_ ULONG_PTR ZeroBits,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG AllocationType,
    _In_ ULONG Protect
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwFreeVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _Inout_ __drv_freesMem(Mem) PVOID *BaseAddress,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG FreeType
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID BaseAddress,
    _In_ MEMORY_INFORMATION_CLASS MemoryInformationClass,
    _Out_writes_bytes_(MemoryInformationLength) PVOID MemoryInformation,
    _In_ SIZE_T MemoryInformationLength,
    _Out_opt_ PSIZE_T ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationObject (
    _In_ HANDLE Handle,
    _In_ OBJECT_INFORMATION_CLASS ObjectInformationClass,
    _In_reads_bytes_(ObjectInformationLength) PVOID ObjectInformation,
    _In_ ULONG ObjectInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCompareObjects (
    _In_ HANDLE FirstObjectHandle,
    _In_ HANDLE SecondObjectHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDuplicateObject (
    _In_ HANDLE SourceProcessHandle,
    _In_ HANDLE SourceHandle,
    _In_opt_ HANDLE TargetProcessHandle,
    _Out_opt_ PHANDLE TargetHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG HandleAttributes,
    _In_ ULONG Options
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwMakeTemporaryObject (
    _In_ HANDLE Handle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwMakePermanentObject (
    _In_ HANDLE Handle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSignalAndWaitForSingleObject (
    _In_ HANDLE SignalHandle,
    _In_ HANDLE WaitHandle,
    _In_ BOOLEAN Alertable,
    _In_opt_ PLARGE_INTEGER Timeout
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwWaitForSingleObject (
    _In_ HANDLE Handle,
    _In_ BOOLEAN Alertable,
    _In_opt_ PLARGE_INTEGER Timeout
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwWaitForMultipleObjects (
    _In_ ULONG Count,
    _In_reads_(Count) HANDLE Handles[],
    _In_ WAIT_TYPE WaitType,
    _In_ BOOLEAN Alertable,
    _In_opt_ PLARGE_INTEGER Timeout
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwWaitForMultipleObjects32 (
    _In_ ULONG Count,
    _In_reads_(Count) LONG Handles[],
    _In_ WAIT_TYPE WaitType,
    _In_ BOOLEAN Alertable,
    _In_opt_ PLARGE_INTEGER Timeout
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateDirectoryObject (
    _Out_ PHANDLE DirectoryHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateDirectoryObjectEx (
    _Out_ PHANDLE DirectoryHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ HANDLE ShadowDirectoryHandle,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenDirectoryObject (
    _Out_ PHANDLE DirectoryHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryDirectoryObject (
    _In_ HANDLE DirectoryHandle,
    _Out_writes_bytes_opt_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_ BOOLEAN RestartScan,
    _Inout_ PULONG Context,
    _Out_opt_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateSymbolicLinkObject (
    _Out_ PHANDLE LinkHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ PUNICODE_STRING LinkTarget
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenSymbolicLinkObject (
    _Out_ PHANDLE LinkHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_At_(LinkTarget->MaximumLength, _Const_)
_At_(LinkTarget->Buffer, _Const_)
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQuerySymbolicLinkObject (
    _In_ HANDLE LinkHandle,
    _Inout_ PUNICODE_STRING LinkTarget,
    _Out_opt_ PULONG ReturnedLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationSymbolicLink (
    __in HANDLE LinkHandle,
    __in SYMBOLIC_LINK_INFO_CLASS SymbolicLinkClass,
    __in_bcount_opt(SymbolicLinkInformationLength) PVOID SymbolicLinkInformation,
    __in ULONG SymbolicLinkInformationLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreatePrivateNamespace (
    _Out_ PHANDLE NamespaceHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ PVOID BoundaryDescriptor
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenPrivateNamespace (
    _Out_ PHANDLE NamespaceHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ PVOID BoundaryDescriptor
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDeletePrivateNamespace (
    _In_ HANDLE NamespaceHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryObject (
    _In_opt_ HANDLE Handle,
    _In_ OBJECT_INFORMATION_CLASS ObjectInformationClass,
    _Out_writes_bytes_opt_(ObjectInformationLength) PVOID ObjectInformation,
    _In_ ULONG ObjectInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetSecurityObject (
    _In_ HANDLE Handle,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQuerySecurityObject (
    _In_ HANDLE Handle,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Out_writes_bytes_opt_(Length) PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ ULONG Length,
    _Out_ PULONG LengthNeeded
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwClose (
    _In_ HANDLE Handle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwPlugPlayControl(
    _In_ PLUGPLAY_CONTROL_CLASS PnPControlClass,
    _Inout_updates_bytes_(PnPControlDataLength) PVOID PnPControlData,
    _In_ ULONG PnPControlDataLength
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwReplacePartitionUnit (
    _In_ PUNICODE_STRING TargetInstancePath,
    _In_ PUNICODE_STRING SpareInstancePath,
    _In_ ULONG Flags
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSerializeBoot(
    VOID
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDisableLastKnownGood (
    VOID
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwEnableLastKnownGood (
    VOID
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwPowerInformation(
    _In_ POWER_INFORMATION_LEVEL InformationLevel,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetThreadExecutionState(
    _In_ EXECUTION_STATE NewFlags,               // ES_xxx flags
    _Out_ PEXECUTION_STATE PreviousFlags
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwInitiatePowerAction(
    _In_ POWER_ACTION SystemAction,
    _In_ SYSTEM_POWER_STATE LightestSystemState,
    _In_ ULONG Flags,                 // POWER_ACTION_xxx flags
    _In_ BOOLEAN Asynchronous
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetSystemPowerState (
    _In_ POWER_ACTION SystemAction,
    _In_ SYSTEM_POWER_STATE LightestSystemState,
    _In_ ULONG Flags                  // POWER_ACTION_xxx flags
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwGetDevicePowerState(
    _In_ HANDLE Device,
    _Out_ PDEVICE_POWER_STATE State
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateProcess (
    _Out_ PHANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ HANDLE ParentProcess,
    _In_ BOOLEAN InheritObjectTable,
    _In_opt_ HANDLE SectionHandle,
    _In_opt_ HANDLE DebugPort,
    _In_opt_ HANDLE TokenHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateProcessEx (
    _Out_ PHANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ HANDLE ParentProcess,
    _In_ ULONG Flags,
    _In_opt_ HANDLE SectionHandle,
    _In_opt_ HANDLE DebugPort,
    _In_opt_ HANDLE TokenHandle,
    _In_ ULONG JobMemberLevel
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateUserProcess (
    _Out_ PHANDLE ProcessHandle,
    _Out_ PHANDLE ThreadHandle,
    _In_ ACCESS_MASK ProcessDesiredAccess,
    _In_ ACCESS_MASK ThreadDesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ProcessObjectAttributes,
    _In_opt_ POBJECT_ATTRIBUTES ThreadObjectAttributes,
    _In_ ULONG ProcessFlags,
    _In_ ULONG ThreadFlags,
    _In_opt_ PVOID /* PRTL_USER_PROCESS_PARAMETERS */ ProcessParameters,
    _Inout_ PPS_CREATE_INFO CreateInfo,
    _In_opt_ PPS_ATTRIBUTE_LIST AttributeList
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwTerminateProcess (
    _In_opt_ HANDLE ProcessHandle,
    _In_ NTSTATUS ExitStatus
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwGetNextProcess (
    _In_opt_ HANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG HandleAttributes,
    _In_ ULONG Flags,
    _Out_ PHANDLE NewProcessHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwGetNextThread (
    _In_ HANDLE ProcessHandle,
    _In_opt_ HANDLE ThreadHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG HandleAttributes,
    _In_ ULONG Flags,
    _Out_ PHANDLE NewThreadHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryPortInformationProcess (
    VOID
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwGetCurrentProcessorNumberEx (
    _Out_ PPROCESSOR_NUMBER ProcNumber
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationProcess (
    _In_ HANDLE ProcessHandle,
    _In_ PROCESSINFOCLASS ProcessInformationClass,
    _In_reads_bytes_opt_(ProcessInformationLength) PVOID ProcessInformation,
    _In_ ULONG ProcessInformationLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateThread (
    _Out_ PHANDLE ThreadHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ HANDLE ProcessHandle,
    _Out_ PCLIENT_ID ClientId,
    _In_ PCONTEXT ThreadContext,
    _In_ PINITIAL_TEB InitialTeb,
    _In_ BOOLEAN CreateSuspended
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateThreadEx (
    _Out_ PHANDLE ThreadHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ HANDLE ProcessHandle,
    _In_ PVOID /* PUSER_THREAD_START_ROUTINE */ StartRoutine,
    _In_opt_ PVOID Argument,
    _In_ ULONG CreateFlags,
    _In_ SIZE_T ZeroBits,
    _In_ SIZE_T StackSize,
    _In_ SIZE_T MaximumStackSize,
    _In_opt_ PPS_ATTRIBUTE_LIST AttributeList
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenThread (
    _Out_ PHANDLE ThreadHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PCLIENT_ID ClientId
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwTerminateThread (
    _In_opt_ HANDLE ThreadHandle,
    _In_ NTSTATUS ExitStatus
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSuspendThread (
    _In_ HANDLE ThreadHandle,
    _Out_opt_ PULONG PreviousSuspendCount
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwResumeThread (
    _In_ HANDLE ThreadHandle,
    _Out_opt_ PULONG PreviousSuspendCount
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSuspendProcess (
    _In_ HANDLE ProcessHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwResumeProcess (
    _In_ HANDLE ProcessHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwGetContextThread (
    _In_ HANDLE ThreadHandle,
    _Inout_ PCONTEXT ThreadContext
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetContextThread (
    _In_ HANDLE ThreadHandle,
    _In_ PCONTEXT ThreadContext
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationThread (
    _In_ HANDLE ThreadHandle,
    _In_ THREADINFOCLASS ThreadInformationClass,
    _Out_writes_bytes_(ThreadInformationLength) PVOID ThreadInformation,
    _In_ ULONG ThreadInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAlertThread (
    _In_ HANDLE ThreadHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAlertResumeThread (
    _In_ HANDLE ThreadHandle,
    _Out_opt_ PULONG PreviousSuspendCount
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwImpersonateThread (
    _In_ HANDLE ServerThreadHandle,
    _In_ HANDLE ClientThreadHandle,
    _In_ PSECURITY_QUALITY_OF_SERVICE SecurityQos
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwTestAlert (
    VOID
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRegisterThreadTerminatePort (
    _In_ HANDLE PortHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetLdtEntries (
    _In_ ULONG Selector0,
    _In_ ULONG Entry0Low,
    _In_ ULONG Entry0Hi,
    _In_ ULONG Selector1,
    _In_ ULONG Entry1Low,
    _In_ ULONG Entry1Hi
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueueApcThread (
    _In_ HANDLE ThreadHandle,
    _In_ PPS_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcArgument1,
    _In_opt_ PVOID ApcArgument2,
    _In_opt_ PVOID ApcArgument3
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueueApcThreadEx (
    _In_ HANDLE ThreadHandle,
    _In_opt_ HANDLE UserApcReserveHandle,
    _In_ PPS_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcArgument1,
    _In_opt_ PVOID ApcArgument2,
    _In_opt_ PVOID ApcArgument3
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateJobObject (
    _Out_ PHANDLE JobHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenJobObject (
    _Out_ PHANDLE JobHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAssignProcessToJobObject (
    _In_ HANDLE JobHandle,
    _In_ HANDLE ProcessHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwTerminateJobObject (
    _In_ HANDLE JobHandle,
    _In_ NTSTATUS ExitStatus
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwIsProcessInJob (
    _In_ HANDLE ProcessHandle,
    _In_opt_ HANDLE JobHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateJobSet (
    _In_ ULONG NumJob,
    _In_reads_(NumJob) PJOB_SET_ARRAY UserJobSet,
    _In_ ULONG Flags
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationJobObject (
    _In_opt_ HANDLE JobHandle,
    _In_ JOBOBJECTINFOCLASS JobObjectInformationClass,
    _Out_writes_bytes_(JobObjectInformationLength) PVOID JobObjectInformation,
    _In_ ULONG JobObjectInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationJobObject (
    _In_ HANDLE JobHandle,
    _In_ JOBOBJECTINFOCLASS JobObjectInformationClass,
    _In_reads_bytes_(JobObjectInformationLength) PVOID JobObjectInformation,
    _In_ ULONG JobObjectInformationLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRevertContainerImpersonation (
    VOID
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAllocateReserveObject (
    _Out_ PHANDLE MemoryReserveHandle,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ MEMORY_RESERVE_TYPE Type
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenProcess (
    _Out_ PHANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PCLIENT_ID ClientId
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationProcess (
    _In_ HANDLE ProcessHandle,
    _In_ PROCESSINFOCLASS ProcessInformationClass,
    _Out_writes_bytes_opt_(ProcessInformationLength) PVOID ProcessInformation,
    _In_ ULONG ProcessInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationThread (
    _In_ HANDLE ThreadHandle,
    _In_ THREADINFOCLASS ThreadInformationClass,
    _In_reads_bytes_(ThreadInformationLength) PVOID ThreadInformation,
    _In_ ULONG ThreadInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateKey (
    _Out_ PHANDLE KeyHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Reserved_ ULONG TitleIndex,
    _In_opt_ PUNICODE_STRING Class,
    _In_ ULONG CreateOptions,
    _Out_opt_ PULONG Disposition
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateKeyTransacted (
    _Out_ PHANDLE KeyHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Reserved_ ULONG TitleIndex,
    _In_opt_ PUNICODE_STRING Class,
    _In_ ULONG CreateOptions,
    _In_ HANDLE TransactionHandle,
    _Out_opt_ PULONG Disposition
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDeleteKey (
    _In_ HANDLE KeyHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwDeleteValueKey (
    _In_ HANDLE KeyHandle,
    _In_ PUNICODE_STRING ValueName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwEnumerateKey (
    _In_ HANDLE KeyHandle,
    _In_ ULONG Index,
    _In_ __drv_strictTypeMatch(__drv_typeConst)
	KEY_INFORMATION_CLASS KeyInformationClass,
    _Out_writes_bytes_opt_(Length) PVOID KeyInformation,
    _In_ ULONG Length,
    _Out_ PULONG ResultLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwEnumerateValueKey (
    _In_ HANDLE KeyHandle,
    _In_ ULONG Index,
    _In_ __drv_strictTypeMatch(__drv_typeConst)
	KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
    _Out_writes_bytes_opt_(Length) PVOID KeyValueInformation,
    _In_ ULONG Length,
    _Out_ PULONG ResultLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwFlushKey (
    _In_ HANDLE KeyHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwInitializeRegistry (
    _In_ USHORT BootCondition
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwNotifyChangeKey (
    _In_ HANDLE KeyHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG CompletionFilter,
    _In_ BOOLEAN WatchTree,
    _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
    _In_ ULONG BufferSize,
    _In_ BOOLEAN Asynchronous
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwNotifyChangeMultipleKeys (
    _In_ HANDLE MasterKeyHandle,
    _In_opt_ ULONG Count,
    _In_reads_opt_(Count) OBJECT_ATTRIBUTES SubordinateObjects[],
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG CompletionFilter,
    _In_ BOOLEAN WatchTree,
    _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
    _In_ ULONG BufferSize,
    _In_ BOOLEAN Asynchronous
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwLoadKey (
    _In_ POBJECT_ATTRIBUTES TargetKey,
    _In_ POBJECT_ATTRIBUTES SourceFile
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwLoadKey2 (
    _In_ POBJECT_ATTRIBUTES   TargetKey,
    _In_ POBJECT_ATTRIBUTES   SourceFile,
    _In_ ULONG                Flags
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwLoadKeyEx (
    _In_ POBJECT_ATTRIBUTES     TargetKey,
    _In_ POBJECT_ATTRIBUTES     SourceFile,
    _In_ ULONG                  Flags,
    _In_opt_ HANDLE             TrustClassKey,
    _In_opt_ HANDLE             Event,
    _In_opt_ ACCESS_MASK        DesiredAccess,
    _Out_opt_ PHANDLE           RootHandle,
    _Out_opt_ PIO_STATUS_BLOCK  IoStatus
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenKey (
    _Out_ PHANDLE KeyHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenKeyTransacted (
    _Out_ PHANDLE KeyHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ HANDLE TransactionHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenKeyEx (
    _Out_ PHANDLE KeyHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ ULONG OpenOptions
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenKeyTransactedEx (
    _Out_ PHANDLE KeyHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ ULONG OpenOptions,
    _In_ HANDLE TransactionHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryKey (
    _In_ HANDLE KeyHandle,
    _In_ __drv_strictTypeMatch(__drv_typeConst)
	KEY_INFORMATION_CLASS KeyInformationClass,
    _Out_writes_bytes_opt_(Length) PVOID KeyInformation,
    _In_ ULONG Length,
    _Out_ PULONG ResultLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(KeyValueInformationClass == KeyValueBasicInformation,
   _At_((PKEY_VALUE_BASIC_INFORMATION)KeyValueInformation, _Out_opt_))
_When_(KeyValueInformationClass == KeyValueFullInformation,
   _At_((PKEY_VALUE_FULL_INFORMATION)KeyValueInformation, _Out_opt_))
_When_(KeyValueInformationClass == KeyValuePartialInformation,
   _At_((PKEY_VALUE_PARTIAL_INFORMATION)KeyValueInformation, _Out_opt_))
_When_(KeyValueInformationClass == KeyValueFullInformationAlign64,
   _At_((PKEY_VALUE_FULL_INFORMATION)KeyValueInformation, _Out_opt_))
_When_(KeyValueInformationClass == KeyValuePartialInformationAlign64,
   _At_((PKEY_VALUE_PARTIAL_INFORMATION_ALIGN64)KeyValueInformation, _Out_opt_))
_When_(return == STATUS_BUFFER_TOO_SMALL, _At_(ResultLength, _Post_valid_))
_When_(return == STATUS_BUFFER_OVERFLOW, _At_(ResultLength, _Post_valid_))
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryValueKey (
    _In_ HANDLE KeyHandle,
    _In_ PUNICODE_STRING ValueName,
    _In_ __drv_strictTypeMatch(__drv_typeConst)
	KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
    _Out_writes_bytes_opt_(Length) PVOID KeyValueInformation,
    _In_ ULONG Length,
    _Deref_out_range_(<=,Length) PULONG ResultLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryMultipleValueKey (
    _In_ HANDLE KeyHandle,
    _Inout_updates_(EntryCount) PKEY_VALUE_ENTRY ValueEntries,
    _In_ ULONG EntryCount,
    _Out_writes_bytes_(*BufferLength) PVOID ValueBuffer,
    _Inout_ PULONG BufferLength,
    _Out_opt_ PULONG RequiredBufferLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwReplaceKey (
    _In_ POBJECT_ATTRIBUTES NewFile,
    _In_ HANDLE             TargetHandle,
    _In_ POBJECT_ATTRIBUTES OldFile
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwRenameKey (
    _In_ HANDLE           KeyHandle,
    _In_ PUNICODE_STRING  NewName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCompactKeys (
    _In_ ULONG Count,
    _In_reads_(Count) HANDLE KeyArray[]
            );
NTSYSAPI
NTSTATUS
NTAPI
ZwCompressKey (
    _In_ HANDLE Key
            );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwRestoreKey (
    _In_ HANDLE KeyHandle,
    _In_opt_ HANDLE FileHandle,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSaveKey (
    _In_ HANDLE KeyHandle,
    _In_ HANDLE FileHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSaveKeyEx (
    _In_ HANDLE KeyHandle,
    _In_ HANDLE FileHandle,
    _In_ ULONG  Format
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSaveMergedKeys (
    _In_ HANDLE HighPrecedenceKeyHandle,
    _In_ HANDLE LowPrecedenceKeyHandle,
    _In_ HANDLE FileHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetValueKey (
    _In_ HANDLE KeyHandle,
    _In_opt_ PUNICODE_STRING ValueName,
    _In_opt_ ULONG TitleIndex,
    _In_ ULONG Type,
    _In_reads_bytes_opt_(DataSize) PVOID Data,
    _In_ ULONG DataSize
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwUnloadKey (
    _In_ POBJECT_ATTRIBUTES TargetKey
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwUnloadKey2 (
    _In_ POBJECT_ATTRIBUTES   TargetKey,
    _In_ ULONG                Flags
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwUnloadKeyEx(
    _In_ POBJECT_ATTRIBUTES TargetKey,
    _In_opt_ HANDLE Event
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationKey (
    _In_ HANDLE KeyHandle,
    _In_ __drv_strictTypeMatch(__drv_typeConst)
	KEY_SET_INFORMATION_CLASS KeySetInformationClass,
    _In_reads_bytes_(KeySetInformationLength) PVOID KeySetInformation,
    _In_ ULONG KeySetInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryOpenSubKeys (
    _In_ POBJECT_ATTRIBUTES TargetKey,
    _Out_ PULONG  HandleCount
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryOpenSubKeysEx (
    _In_ POBJECT_ATTRIBUTES   TargetKey,
    _In_ ULONG                BufferLength,
    _Out_writes_bytes_(BufferLength) PVOID               Buffer,
    _Out_ PULONG              RequiredSize
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwLockRegistryKey (
    _In_ HANDLE           KeyHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwLockProductActivationKeys (
    _Inout_opt_ ULONG   *pPrivateVer,
    _Out_opt_ ULONG   *pSafeMode
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwFreezeRegistry(_In_ ULONG    TimeOutInSeconds );

_IRQL_requires_max_(PASSIVE_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtThawRegistry( void );
NTSYSAPI
NTSTATUS
NTAPI
ZwAccessCheck (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ HANDLE ClientToken,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ PGENERIC_MAPPING GenericMapping,
    _Out_writes_bytes_(*PrivilegeSetLength) PPRIVILEGE_SET PrivilegeSet,
    _Inout_ PULONG PrivilegeSetLength,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAccessCheckByType (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ HANDLE ClientToken,
    _In_ ACCESS_MASK DesiredAccess,
    _In_reads_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ ULONG ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _Out_writes_bytes_(*PrivilegeSetLength) PPRIVILEGE_SET PrivilegeSet,
    _Inout_ PULONG PrivilegeSetLength,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAccessCheckByTypeResultList (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ HANDLE ClientToken,
    _In_ ACCESS_MASK DesiredAccess,
    _In_reads_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ ULONG ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _Out_writes_bytes_(*PrivilegeSetLength) PPRIVILEGE_SET PrivilegeSet,
    _Inout_ PULONG PrivilegeSetLength,
    _Out_writes_(ObjectTypeListLength) PACCESS_MASK GrantedAccess,
    _Out_writes_(ObjectTypeListLength) PNTSTATUS AccessStatus
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetCachedSigningLevel(
    _In_ ULONG Flags, 
    _In_ SE_SIGNING_LEVEL InputSigningLevel,
    _In_reads_(SourceFileCount) PHANDLE SourceFiles,
    _In_ ULONG SourceFileCount,
    _In_opt_ HANDLE TargetFile);
NTSYSAPI
NTSTATUS
NTAPI
ZwGetCachedSigningLevel(
    _In_ HANDLE File,
    _Out_ PULONG Flags,
    _Out_ PSE_SIGNING_LEVEL SigningLevel,
    _Out_writes_bytes_to_opt_(*ThumbprintSize, *ThumbprintSize) PUCHAR Thumbprint,
    _Inout_opt_ PULONG ThumbprintSize,
    _Out_opt_ PULONG ThumbprintAlgorithm);
NTSYSAPI
NTSTATUS
NTAPI
ZwFilterBootOption (
    _In_ FILTER_BOOT_OPTION_OPERATION FilterOperation,
    _In_ ULONG ObjectType,
    _In_ ULONG ElementType,
    _In_reads_bytes_opt_(DataSize) PVOID Data,
    _In_ ULONG DataSize
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateToken(
    _Out_ PHANDLE TokenHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ TOKEN_TYPE TokenType,
    _In_ PLUID AuthenticationId,
    _In_ PLARGE_INTEGER ExpirationTime,
    _In_ PTOKEN_USER User,
    _In_ PTOKEN_GROUPS Groups,
    _In_ PTOKEN_PRIVILEGES Privileges,
    _In_opt_ PTOKEN_OWNER Owner,
    _In_ PTOKEN_PRIMARY_GROUP PrimaryGroup,
    _In_opt_ PTOKEN_DEFAULT_DACL DefaultDacl,
    _In_ PTOKEN_SOURCE TokenSource
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateLowBoxToken(
    _Out_ PHANDLE TokenHandle,
    _In_ HANDLE ExistingTokenHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ PSID PackageSid,
    _In_ ULONG CapabilityCount,
    _In_reads_opt_(CapabilityCount) PSID_AND_ATTRIBUTES Capabilities,
    _In_ ULONG HandleCount,
    _In_reads_opt_(HandleCount) HANDLE* Handles
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCompareTokens(
    _In_ HANDLE FirstTokenHandle,
    _In_ HANDLE SecondTokenHandle,
    _Out_ PBOOLEAN Equal
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwFilterTokenEx (
    _In_       HANDLE                                 ExistingTokenHandle,
    _In_       ULONG                                  Flags,
    _In_opt_   PTOKEN_GROUPS                          SidsToDisable,
    _In_opt_   PTOKEN_PRIVILEGES                      PrivilegesToDelete,
    _In_opt_   PTOKEN_GROUPS                          RestrictedSids,
    _In_       ULONG                                  DisableUserClaimsCount,
    _In_opt_   PUNICODE_STRING                        UserClaimsToDisable,
    _In_       ULONG                                  DisableDeviceClaimsCount,
    _In_opt_   PUNICODE_STRING                        DeviceClaimsToDisable,
    _In_opt_   PTOKEN_GROUPS                          DeviceGroupsToDisable,
    _In_opt_   PTOKEN_SECURITY_ATTRIBUTES_INFORMATION RestrictedUserAttributes,
    _In_opt_   PTOKEN_SECURITY_ATTRIBUTES_INFORMATION RestrictedDeviceAttributes,
    _In_opt_   PTOKEN_GROUPS                          RestrictedDeviceGroups,
    _Out_      PHANDLE                                NewTokenHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateTokenEx(
    _Out_     PHANDLE                                 TokenHandle,
    _In_      ACCESS_MASK                             DesiredAccess,
    _In_opt_  POBJECT_ATTRIBUTES                      ObjectAttributes,
    _In_      TOKEN_TYPE                              TokenType,
    _In_      PLUID                                   AuthenticationId,
    _In_      PLARGE_INTEGER                          ExpirationTime,
    _In_      PTOKEN_USER                             User,
    _In_      PTOKEN_GROUPS                           Groups,
    _In_      PTOKEN_PRIVILEGES                       Privileges,
    _In_opt_  PTOKEN_SECURITY_ATTRIBUTES_INFORMATION  UserAttributes,
    _In_opt_  PTOKEN_SECURITY_ATTRIBUTES_INFORMATION  DeviceAttributes,
    _In_opt_  PTOKEN_GROUPS                           DeviceGroups,
    _In_opt_  PTOKEN_MANDATORY_POLICY                 TokenMandatoryPolicy,
    _In_opt_  PTOKEN_OWNER                            Owner,
    _In_      PTOKEN_PRIMARY_GROUP                    PrimaryGroup,
    _In_opt_  PTOKEN_DEFAULT_DACL                     DefaultDacl,
    _In_      PTOKEN_SOURCE                           TokenSource
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwAdjustTokenClaimsAndDeviceGroups (
    _In_      HANDLE                                  TokenHandle,
    _In_      BOOLEAN                                 UserResetToDefault,
    _In_      BOOLEAN                                 DeviceResetToDefault,
    _In_      BOOLEAN                                 DeviceGroupsResetToDefault,
    _In_opt_  PTOKEN_SECURITY_ATTRIBUTES_INFORMATION  NewUserState,
    _In_opt_  PTOKEN_SECURITY_ATTRIBUTES_INFORMATION  NewDeviceState,
    _In_opt_  PTOKEN_GROUPS                           NewDeviceGroupsState,
    _In_      ULONG                                   UserBufferLength,
    _Out_writes_bytes_to_opt_(UserBufferLength, *UserReturnLength)
              PTOKEN_SECURITY_ATTRIBUTES_INFORMATION  PreviousUserState,
    _In_      ULONG                                   DeviceBufferLength,
    _Out_writes_bytes_to_opt_(DeviceBufferLength, *DeviceReturnLength)
              PTOKEN_SECURITY_ATTRIBUTES_INFORMATION  PreviousDeviceState,
    _In_      ULONG                                   DeviceGroupsBufferLength,
    _Out_writes_bytes_to_opt_(DeviceGroupsBufferLength, *DeviceGroupsReturnBufferLength)
              PTOKEN_GROUPS                           PreviousDeviceGroups,
    _Out_opt_ PULONG                                  UserReturnLength,
    _Out_opt_ PULONG                                  DeviceReturnLength,
    _Out_opt_ PULONG                                  DeviceGroupsReturnBufferLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenThreadToken(
    _In_ HANDLE ThreadHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ BOOLEAN OpenAsSelf,
    _Out_ PHANDLE TokenHandle
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenThreadTokenEx(
    _In_ HANDLE ThreadHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ BOOLEAN OpenAsSelf,
    _In_ ULONG HandleAttributes,
    _Out_ PHANDLE TokenHandle
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenProcessToken(
    _In_ HANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE TokenHandle
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenProcessTokenEx(
    _In_ HANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG HandleAttributes,
    _Out_ PHANDLE TokenHandle
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenJobObjectToken(
    _In_ HANDLE JobHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE TokenHandle
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwDuplicateToken(
    _In_ HANDLE ExistingTokenHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ BOOLEAN EffectiveOnly,
    _In_ TOKEN_TYPE TokenType,
    _Out_ PHANDLE NewTokenHandle
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwFilterToken (
    _In_ HANDLE ExistingTokenHandle,
    _In_ ULONG Flags,
    _In_opt_ PTOKEN_GROUPS SidsToDisable,
    _In_opt_ PTOKEN_PRIVILEGES PrivilegesToDelete,
    _In_opt_ PTOKEN_GROUPS RestrictedSids,
    _Out_ PHANDLE NewTokenHandle
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwImpersonateAnonymousToken(
    _In_ HANDLE ThreadHandle
    );
_When_(TokenInformationClass == TokenAccessInformation,
       _At_(TokenInformationLength,
            _In_range_(>=, sizeof(TOKEN_ACCESS_INFORMATION))))
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationToken (
    _In_ HANDLE TokenHandle,
    _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
    _Out_writes_bytes_to_opt_(TokenInformationLength, *ReturnLength) PVOID TokenInformation,
    _In_ ULONG TokenInformationLength,
    _Out_ PULONG ReturnLength
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationToken (
    _In_ HANDLE TokenHandle,
    _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
    _In_reads_bytes_(TokenInformationLength) PVOID TokenInformation,
    _In_ ULONG TokenInformationLength
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwAdjustPrivilegesToken (
    _In_ HANDLE TokenHandle,
    _In_ BOOLEAN DisableAllPrivileges,
    _In_opt_ PTOKEN_PRIVILEGES NewState,
    _In_ ULONG BufferLength,
    _Out_writes_bytes_to_opt_(BufferLength, *ReturnLength) PTOKEN_PRIVILEGES PreviousState,
    _Out_ _When_(PreviousState == NULL, _Out_opt_) PULONG ReturnLength
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwAdjustGroupsToken (
    _In_ HANDLE TokenHandle,
    _In_ BOOLEAN ResetToDefault,
    _In_opt_ PTOKEN_GROUPS NewState,
    _In_opt_ ULONG BufferLength,
    _Out_writes_bytes_to_opt_(BufferLength, *ReturnLength) PTOKEN_GROUPS PreviousState,
    _Out_ PULONG ReturnLength
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwPrivilegeCheck (
    _In_ HANDLE ClientToken,
    _Inout_ PPRIVILEGE_SET RequiredPrivileges,
    _Out_ PBOOLEAN Result
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwAccessCheckAndAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOLEAN ObjectCreation,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus,
    _Out_ PBOOLEAN GenerateOnClose
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwAccessCheckByTypeAndAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ AUDIT_EVENT_TYPE AuditType,
    _In_ ULONG Flags,
    _In_reads_opt_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ ULONG ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOLEAN ObjectCreation,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus,
    _Out_ PBOOLEAN GenerateOnClose
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwAccessCheckByTypeResultListAndAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ AUDIT_EVENT_TYPE AuditType,
    _In_ ULONG Flags,
    _In_reads_opt_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ ULONG ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOLEAN ObjectCreation,
    _Out_writes_(ObjectTypeListLength) PACCESS_MASK GrantedAccess,
    _Out_writes_(ObjectTypeListLength) PNTSTATUS AccessStatus,
    _Out_ PBOOLEAN GenerateOnClose
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwAccessCheckByTypeResultListAndAuditAlarmByHandle (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ HANDLE ClientToken,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ AUDIT_EVENT_TYPE AuditType,
    _In_ ULONG Flags,
    _In_reads_opt_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ ULONG ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOLEAN ObjectCreation,
    _Out_writes_(ObjectTypeListLength) PACCESS_MASK GrantedAccess,
    _Out_writes_(ObjectTypeListLength) PNTSTATUS AccessStatus,
    _Out_ PBOOLEAN GenerateOnClose
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenObjectAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_opt_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ HANDLE ClientToken,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ACCESS_MASK GrantedAccess,
    _In_opt_ PPRIVILEGE_SET Privileges,
    _In_ BOOLEAN ObjectCreation,
    _In_ BOOLEAN AccessGranted,
    _Out_ PBOOLEAN GenerateOnClose
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwPrivilegeObjectAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ HANDLE ClientToken,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ PPRIVILEGE_SET Privileges,
    _In_ BOOLEAN AccessGranted
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCloseObjectAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ BOOLEAN GenerateOnClose
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwDeleteObjectAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ BOOLEAN GenerateOnClose
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwPrivilegedServiceAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_ PUNICODE_STRING ServiceName,
    _In_ HANDLE ClientToken,
    _In_ PPRIVILEGE_SET Privileges,
    _In_ BOOLEAN AccessGranted
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateTransactionManager (
    _Out_ PHANDLE TmHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PUNICODE_STRING LogFileName,
    _In_opt_ ULONG CreateOptions,
    _In_opt_ ULONG CommitStrength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenTransactionManager (
    _Out_ PHANDLE TmHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PUNICODE_STRING LogFileName,
    _In_opt_ LPGUID TmIdentity,
    _In_opt_ ULONG OpenOptions
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRenameTransactionManager (
    _In_ PUNICODE_STRING LogFileName,
    _In_ LPGUID ExistingTransactionManagerGuid
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRollforwardTransactionManager (
    _In_ HANDLE TransactionManagerHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRecoverTransactionManager (
    _In_ HANDLE TransactionManagerHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationTransactionManager (
    _In_ HANDLE TransactionManagerHandle,
    _In_ TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
    _Out_writes_bytes_(TransactionManagerInformationLength) PVOID TransactionManagerInformation,
    _In_ ULONG TransactionManagerInformationLength,
    _Out_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationTransactionManager (
    _In_opt_ HANDLE TmHandle,
    _In_ TRANSACTIONMANAGER_INFORMATION_CLASS TransactionManagerInformationClass,
    _In_reads_bytes_(TransactionManagerInformationLength) PVOID TransactionManagerInformation,
    _In_ ULONG TransactionManagerInformationLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwEnumerateTransactionObject (
    _In_opt_ HANDLE RootObjectHandle,
    _In_ KTMOBJECT_TYPE QueryType,
    _Inout_updates_bytes_(ObjectCursorLength) PKTMOBJECT_CURSOR ObjectCursor,
    _In_ ULONG ObjectCursorLength,
    _Out_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateTransaction (
    _Out_ PHANDLE TransactionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ LPGUID Uow,
    _In_opt_ HANDLE TmHandle,
    _In_opt_ ULONG CreateOptions,
    _In_opt_ ULONG IsolationLevel,
    _In_opt_ ULONG IsolationFlags,
    _In_opt_ PLARGE_INTEGER Timeout,
    _In_opt_ PUNICODE_STRING Description
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenTransaction (
    _Out_ PHANDLE TransactionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ LPGUID Uow,
    _In_opt_ HANDLE TmHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
    _Out_writes_bytes_(TransactionInformationLength) PVOID TransactionInformation,
    _In_ ULONG TransactionInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ TRANSACTION_INFORMATION_CLASS TransactionInformationClass,
    _In_reads_bytes_(TransactionInformationLength) PVOID TransactionInformation,
    _In_ ULONG TransactionInformationLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCommitTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ BOOLEAN Wait
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRollbackTransaction (
    _In_ HANDLE TransactionHandle,
    _In_ BOOLEAN Wait
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateEnlistment (
    _Out_ PHANDLE EnlistmentHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ HANDLE ResourceManagerHandle,
    _In_ HANDLE TransactionHandle,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ ULONG CreateOptions,
    _In_ NOTIFICATION_MASK NotificationMask,
    _In_opt_ PVOID EnlistmentKey
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenEnlistment (
    _Out_ PHANDLE EnlistmentHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ HANDLE ResourceManagerHandle,
    _In_ LPGUID EnlistmentGuid,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_ ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
    _Out_writes_bytes_(EnlistmentInformationLength) PVOID EnlistmentInformation,
    _In_ ULONG EnlistmentInformationLength,
    _Out_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationEnlistment (
    _In_opt_ HANDLE EnlistmentHandle,
    _In_ ENLISTMENT_INFORMATION_CLASS EnlistmentInformationClass,
    _In_reads_bytes_(EnlistmentInformationLength) PVOID EnlistmentInformation,
    _In_ ULONG EnlistmentInformationLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRecoverEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PVOID EnlistmentKey
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwPrePrepareEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwPrepareEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCommitEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRollbackEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwPrePrepareComplete (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwPrepareComplete (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCommitComplete (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwReadOnlyEnlistment (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRollbackComplete (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSinglePhaseReject (
    _In_ HANDLE EnlistmentHandle,
    _In_opt_ PLARGE_INTEGER TmVirtualClock
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateResourceManager (
    _Out_ PHANDLE ResourceManagerHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ HANDLE TmHandle,
    _In_ LPGUID RmGuid,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ ULONG CreateOptions,
    _In_opt_ PUNICODE_STRING Description
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenResourceManager (
    _Out_ PHANDLE ResourceManagerHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ HANDLE TmHandle,
    _In_opt_ LPGUID ResourceManagerGuid,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRecoverResourceManager (
    _In_ HANDLE ResourceManagerHandle
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwGetNotificationResourceManager (
    _In_ HANDLE ResourceManagerHandle,
    _Out_ PTRANSACTION_NOTIFICATION TransactionNotification,
    _In_ ULONG NotificationLength,
    _In_opt_ PLARGE_INTEGER Timeout,
    _Out_opt_ PULONG ReturnLength,
    _In_ ULONG Asynchronous,
    _In_opt_ ULONG_PTR AsynchronousContext
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationResourceManager (
    _In_ HANDLE ResourceManagerHandle,
    _In_ RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
    _Out_writes_bytes_(ResourceManagerInformationLength) PVOID ResourceManagerInformation,
    _In_ ULONG ResourceManagerInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationResourceManager (
    _In_ HANDLE ResourceManagerHandle,
    _In_ RESOURCEMANAGER_INFORMATION_CLASS ResourceManagerInformationClass,
    _In_reads_bytes_(ResourceManagerInformationLength) PVOID ResourceManagerInformation,
    _In_ ULONG ResourceManagerInformationLength
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRegisterProtocolAddressInformation(
    _In_ HANDLE ResourceManager,
    _In_ PCRM_PROTOCOL_ID ProtocolId,
    _In_ ULONG ProtocolInformationSize,
    _In_ PVOID ProtocolInformation,
    _In_opt_ ULONG CreateOptions
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwPropagationComplete(
    _In_ HANDLE ResourceManagerHandle,
    _In_ ULONG RequestCookie,
    _In_ ULONG BufferLength,
    _In_ PVOID Buffer
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwPropagationFailed(
    _In_ HANDLE ResourceManagerHandle,
    _In_ ULONG RequestCookie,
    _In_ NTSTATUS PropStatus
    );
_Must_inspect_result_ 
_IRQL_requires_max_ (APC_LEVEL) 
NTSYSAPI
NTSTATUS
NTAPI
ZwFreezeTransactions (
    _In_opt_ PLARGE_INTEGER FreezeTimeout,
    _In_opt_ PLARGE_INTEGER ThawTimeout
    );
_Must_inspect_result_ 
_IRQL_requires_max_ (APC_LEVEL) 
NTSYSAPI
NTSTATUS
NTAPI
ZwThawTransactions (
    void
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwTraceEvent(
    _In_opt_ HANDLE TraceHandle,
    _In_ ULONG Flags,
    _In_ ULONG FieldSize,
    _In_ PVOID Fields
    );
_When_(FunctionCode == EtwFlushLoggerCode,
       _At_(OutBufferLen, _In_range_(>=, sizeof(WMI_LOGGER_INFORMATION))))
_When_(FunctionCode == EtwQueryLoggerCode,
       _At_((PWMI_LOGGER_INFORMATION)OutBuffer, _Out_))
_When_(FunctionCode == EtwQueryLoggerCode,
       _At_(((PWMI_LOGGER_INFORMATION)OutBuffer)->LogFileName.Length,
            _Out_range_(<, ((DOS_MAX_PATH_LENGTH + 1) * sizeof(WCHAR)))))
NTSYSAPI
NTSTATUS
NTAPI
ZwTraceControl(
    _In_  ULONG  FunctionCode,
    _In_reads_bytes_opt_(InBufferLen) PVOID InBuffer,
    _In_ ULONG InBufferLen,
    _Out_writes_bytes_opt_(OutBufferLen) PVOID OutBuffer,
    _In_  ULONG  OutBufferLen,
    _Out_ PULONG ReturnSize
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwContinue (
    _In_ PCONTEXT ContextRecord,
    _In_ BOOLEAN TestAlert
    );
NTSYSAPI
NTSTATUS
NTAPI
ZwRaiseException (
    _In_ PEXCEPTION_RECORD ExceptionRecord,
    _In_ PCONTEXT ContextRecord,
    _In_ BOOLEAN FirstChance
    );

#ifdef __cplusplus
}
#endif

