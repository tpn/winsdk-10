;++
;
; Copyright (c) Microsoft Corporation.  All rights reserved.
;
;
; Module:
;
;   kxamd64.w
;
; Astract:
;
;   Contains AMD64 architecture constants and assembly macros.
;
;
;--

include macamd64.inc

;
; If this is an Xbox system and the actual CFG dispatch code is not being
; assembled, then declare the guard dispatch function as external.
;

ifdef XBOX_SYSTEMOS

ifndef XBOX_SYSTEMOS_CFG_ASM

        extern  _guard_dispatch_icall:proc

endif

endif

;
; IceCAP macros
;

ifdef _CAPKERN

;
; Define kernel icecap macros for tracing assembly routines.
;

        extern  __CAP_Start_DirectCall_Profiling_ASM:proc
        extern  __CAP_Start_IndirectCall_Profiling_ASM:proc
        extern  __CAP_Start_DirectCall_Tail_Profiling_ASM:proc
        extern  __CAP_Start_IndirectCall_Tail_Profiling_ASM:proc
        extern  __CAP_Start_DirectJmp_Profiling_ASM:proc
        extern  __CAP_Start_IndirectJmp_Profiling_ASM:proc
        extern  __CAP_End_Profiling:proc

endif ; _CAPKERN

;
; CAPDCALL - Perform an IceCAP instrumented direct function call.
;
;            Do NOT use this macro directly. Use CAPCALL instead.
;
;            Instrumenation is disabled on non-IceCAP builds.
;
; Arguments:
;
;   Callee - A function label.
;
;   NoRet - If set, the function does not return to the caller.
;
; Return value:
;
;   Returns the value of the function specified by Callee.
;

CAPDCALL macro Callee, NoRet

ifdef _CAPKERN

ifnb <NoRet>

        call    __CAP_Start_DirectCall_Tail_Profiling_ASM ; record profiling information

else

        call    __CAP_Start_DirectCall_Profiling_ASM ; record profiling information

endif

endif ; _CAPKERN

        call    Callee

ifdef _CAPKERN

ifb <NoRet>

        call    __CAP_End_Profiling       ; record profiling information

endif

endif ; _CAPKERN

        endm

;
; CAPICALL - Perform an IceCAP instrumented indirect function call.
;           
;            Do NOT use this macro directly. Use CAPCALL instead.
;
;            Instrumenation is disabled on non-IceCAP builds.
;
; Arguments:
;
;   Callee - A register or a memory location.
;
;   NoRet - If set, the function does not return to the caller.
;
; Return value:
;
;   Returns the value of the function specified by Callee.
;

CAPICALL macro Callee, NoRet

ifdef _CAPKERN

ifnb <NoRet>

        call    __CAP_Start_IndirectCall_Tail_Profiling_ASM ; record profiling information

else

        call    __CAP_Start_IndirectCall_Profiling_ASM ; record profiling information

endif

endif ; _CAPKERN

        call    Callee

ifdef _CAPKERN

ifb <NoRet>

        call    __CAP_End_Profiling       ; record profiling information

endif

endif ; _CAPKERN

        endm

;
; CAPXCALL - Perform a CFG IceCAP instrumented indirect function call.
;
;            This macro MUST be used to call CFG checked functions.
;
;            Instrumenation is disabled on non-IceCAP builds.
;
; Arguments:
;
;   Callee - A register or a memory location.
;
;   NoRet - If set, the function does not return to the caller.
;
; Return value:
;
;   Returns the value of the function specified by Callee.
;

CAPXCALL macro Callee, NoRet

ifdef XBOX_SYSTEMOS

ifdifi  <Callee>, <rax>

        mov     rax, Callee

endif
        
        CAPDCALL _guard_dispatch_icall, <NoRet>

else

        CAPICALL Callee, <NoRet>

endif

        endm

;
; CAPCALL - Perform an IceCAP instrumented function call.
;
;           Instrumenation is disabled on non-IceCAP builds.
;
; Arguments:
;
;   Callee - A function label, a register, or a memory location.
;
;   NoRet - If set, the function does not return to the caller.
;
; Return value:
;
;   Returns the value of the function specified by Callee.
;

CAPCALL macro Callee, NoRet

;
; The documentation surrounding the .type operator is very poor.
; Here is the significance of each of the bits.
;
; 0 - References a label in the code segment if set.
; 1 - References a memory variable or relocatable data object if set.
; 2 - Is an immediate (absolute/constant) value if set.
; 3 - Uses direct memory addressing if set.
; 4 - Is a register name, if set.
; 5 - References no undefined symbols and there is no error, if set.
; 6 - Is an SS: relative reference, if set.
; 7 - References an external name.
;

if (.type(Callee)) eq 000h ; direct via local label

        CAPDCALL Callee, NoRet

elseif (.type(Callee)) eq 022h ; register-direct call

        CAPICALL Callee, NoRet

elseif (.type(Callee)) eq 025h ; direct via extern proc

        CAPDCALL Callee, NoRet

elseif (.type(Callee)) eq 030h ; register-indirect call

        CAPICALL Callee, NoRet

elseif (.type(Callee)) eq 062h ; indirect via offset from register

        CAPICALL Callee, NoRet

elseif (.type(Callee)) eq 0A5h ; direct via extern proc

        CAPDCALL Callee, NoRet

elseif (.type(Callee)) eq 0AAh ; indirect via extern qword

        CAPICALL Callee, NoRet

else

        .err @catstr(<unknown expression type >, %(.type(Callee)))

endif

        endm

;
; CAPJMP - Perform an IceCAP instrumented tail jump.
;
;          Instrumenation is disabled on non-IceCAP builds.
;
; Arguments:
;
;   Callee - A function label, a memory address, or a register.
;
; Return value:
;
;   Never returns.
;

CAPJMP macro Callee

;
; Begin jump instrumentation
;

ifdef _CAPKERN

;
; The documentation surrounding the .type operator is very poor.
; See above for syntax explanation.
;

if (.type(Callee)) eq 000h ; direct via local label

        call    __CAP_Start_DirectJmp_Profiling_ASM ; record profiling information

elseif (.type(Callee)) eq 022h ; register-direct jump

        call    __CAP_Start_IndirectJmp_Profiling_ASM  ; record profiling information

elseif (.type(Callee)) eq 025h ; direct via extern proc

        call    __CAP_Start_DirectJmp_Profiling_ASM ; record profiling information

elseif (.type(Callee)) eq 030h ; register-indirect

        call    __CAP_Start_IndirectJmp_Profiling_ASM  ; record profiling information

elseif (.type(Callee)) eq 062h ; indirect via offset from register

        call    __CAP_Start_IndirectJmp_Profiling_ASM  ; record profiling information

elseif (.type(Callee)) eq 0A5h ; direct via extern proc

        call    __CAP_Start_DirectJmp_Profiling_ASM ; record profiling information

elseif (.type(Callee)) eq 0AAh ; indirect via extern qword

        call    __CAP_Start_IndirectJmp_Profiling_ASM  ; record profiling information

else

        .err @catstr(<unknown expression type >, %(.type(Callee)))

endif

endif ; _CAPKERN

;
; End jump instrumentation. Begin common code.
;

        jmp     Callee

        endm

;
; CAPEPILOGJMP - Logs a tail jump from an epilog.
;
;                Instrumenation is disabled on non-IceCAP builds.
;
; Arguments:
;
;   Callee - A function label, a memory address, or a register.
;
; Return value:
;
;   None
;

CAPEPILOGJMP macro Callee

        LOCAL Exit

ifdef _CAPKERN

        jmp Exit
Exit:
        CAPJMP Callee

else

        jmp Callee

endif ; _CAPKERN

        endm

;
; CAPREX_JMP_REG  - Perform an IceCAP instrumented indirect tail jump. 
;                   Use this when a function does not return to the caller
;                   and when a rex_jmp_reg would normally be specified.
;
;                   Instrumenation is disabled on non-IceCAP builds.
;
; Arguments:
;
;   Callee is a register or memory location.
;
; Return value:
;
;   None
;

CAPREX_JMP_REG macro Callee

ifdef _CAPKERN

        call    __CAP_Start_IndirectJmp_Profiling_ASM ; record profiling information

endif ; _CAPKERN

        rex_jmp_reg Callee                    ; make the jump
        endm

;
; Define macro to clear legacy floating exceptions.
;

clfpex  macro

        db      0dbh, 0e2h

        endm

;
; Define macro to perform an enlightened yield.
;
; Arguments:
;
;   None.
;
; N.B. This macro is restricted to only freely using the register specified by
;      the 'Register' parameter and rcx. 'Register' should be nonvolatile.
;

EnlightenedYield macro Register

        local skip

ifndef XBOX_SYSTEMOS

ifnb <Register>

        inc     Register                ; increment counter and test
        test    HvlLongSpinCountMask, Register
        jnz     short skip              ; max count not hit, yield
        test    HvlEnlightenments, HV_KE_USE_HYPERCALL_FOR_LONG_SPIN_WAIT
        jz      short skip              ; long spin not enlightened, yield
        mov     ecx, Register           ; prepare argument
        CAPCALL HvlNotifyLongSpinWait   ; issue the hypercall

endif

endif

skip:   Yield

        endm

;
; Define macro to acquire spin lock.
;
; Arguments:
;
;   None.
;
; N.B. This macro is restricted to only freely using the register specified by
;      the 'Register' parameter and rcx. 'Register' should be nonvolatile.
;
; N.B. If 'Register' is specified, 'Address' must be nonvolatile or global.
;

AcquireSpinLock macro Address, Register

        local exit, spin

ifndef NT_UP

   lock bts     qword ptr Address, 0    ; attempt to acquire spin lock
        jnc     short exit              ; if nc, spin lock acquired

ifndef XBOX_SYSTEMOS

ifnb <Register>

        xor      Register, Register      ; initialize spin count

endif

endif

spin:   EnlightenedYield <Register>     ; yield execution
        test    qword ptr Address, 1    ; check if lock currently owned
        jnz     short spin              ; if nz, spin lock owned
   lock bts     qword ptr Address, 0    ; attempt to acquire spin lock
        jc      short spin              ; if c, spin lock owned

exit:                                   ; continue

endif

        endm

;
; Define macro to acquire spin lock and mask interrupts.
;
; Arguments:
;
;   None.
;
; Note:
;
;   rsp is assumed to point to pushed EFLAGS
;
; N.B. This macro uses no registers.
;

AcquireSpinLockDisable macro Address

        local exit, spin, spin1

        cli                             ; disable interrupts

ifndef NT_UP

   lock bts     qword ptr Address, 0    ; attempt to acquire spin lock
        jnc     short exit              ; if nc, spin lock acquired
spin:   test    dword ptr [rsp], EFLAGS_IF_MASK ; test if interrupts enabled
        jz      short spin1             ; if z, interrupts disabled
        sti                             ; enable interrupts

spin1:  Yield                           ; yield execution

        test    qword ptr Address, 1    ; check if lock currently owned
        jnz     short spin1             ; if nz, spin lock owned
        cli                             ; lock is (was) clear, disable ints
   lock bts     qword ptr Address, 0    ; attempt to acquire spin lock
        jc      short spin              ; if c, spin lock owned
exit:                                   ; continue

endif

        endm

;
; Define macro to release spin lock.
;
; Arguments:
;
;   None.
;
; N.B. This macro uses no registers.
;

ReleaseSpinLock macro Address

ifndef NT_UP

   lock and     qword ptr Address, 0    ; release spin lock

endif

        endm

;
; Define macro to release spin lock and restore the interrupt flag.
;
; Arguments:
;
;   None.
;
; Note:
;
;   rsp is assumed to point to pushd EFLAGS
;
; N.B. This macro uses no registers.
;

ReleaseSpinLockEnable macro Address

        local exit

ifndef NT_UP

   lock and     qword ptr Address, 0    ; release spin lock

endif

        test    dword ptr [rsp], EFLAGS_IF_MASK ; test if interrupts enabled
        jz      short exit              ; if z, interrupts not enabled
        sti                             ; enable interrupts
exit:                                   ; continue

        endm

;
; Define macro to try to acquire spin lock.
;
; Arguments:
;
;   None.
;
; N.B. This macro uses no registers.
;

TryToAcquireSpinLock macro Address

ifndef NT_UP

        lock bts qword ptr Address, 0   ; attempt to acquire spin lock

endif

        endm

;
; Define macro to perform the equivalent of reading cr8.
;
; Arguments:
;
;   None
;
; The equivalent of the contents of cr8 is returned in rax
;
; N.B. This macro is restricted to using only rax.
;

ReadCr8 macro

        mov     rax, cr8                ; read IRQL

        endm

;
; Define macro to perform the equivalent of writing cr8.
;
; Arguments:
;
;   rcx - The desired value of cr8.
;

WriteCr8 macro

        mov     cr8, rcx                ; write IRQL

        endm

;
; Define macro to get current IRQL.
;
; Arguments:
;
;   None.
;
; The previous IRQL is returned in rax.
;

CurrentIrql macro

        ReadCr8                         ; get current IRQL

        endm

;
; Define macro to lower IRQL.
;
; Arguments:
;
;   rcx - Supplies the new IRQL.
;
; N.B. The register rax is destroyed.
;
; N.B. This macro is restricted to using only rcx and rdx.
;

LowerIrql macro

        local   exit

if DBG

        mov     rdx, rax                ; preserve rax
        ReadCr8                         ; get current IRQL
        cmp     eax, ecx                ; check new IRQL
        jge     short exit              ; if ge, new IRQL okay
        int     3                       ; break into debugger
exit:   mov     rax, rdx

endif

        WriteCr8                        ; set new IRQL

        endm

;
; Define macro to raise IRQL.
;
; Arguments:
;
;   rcx - Supplies the new IRQL.
;
; The previous IRQL is returned in rax.
;
; N.B. This macro is restricted to using only rax and rcx.
;

RaiseIrql macro

        local   exit

        ReadCr8                         ; get current IRQL

if DBG

        cmp     eax, ecx                ; check new IRQL
        jle     short exit              ; if le, new IRQL okay
        int     3                       ; break into debugger

endif

exit:   WriteCr8                        ; set new IRQL

        endm

;
; Define macro to set IRQL.
;
; Arguments:
;
;   rcx - Supplies the new IRQL.
;
; N.B. This macro is restricted to using only rcx.
;

SetIrql macro

        WriteCr8                        ; set new IRQL

        endm

;
; Define macro to swap IRQL.
;
; Arguments:
;
;   rcx - Supplies the new IRQL.
;
; The previous IRQL is returned in rax.
;
; N.B. This macro is restricted to using only rax and rcx.
;

SwapIrql macro

        ReadCr8                         ; get current IRQL
        WriteCr8                        ; set new IRQL

        endm

;
; Define end system interrupt macro.
;
; Arguments:
;
;   None.
;
; Implicit arguments:
;
;   rsi - Supplies the address of the interrupt object.
;

EndSystemInterrupt macro

ifdef XBOX_SYSTEMOS

;
; N.B. All registers MUST be preserved by this code.
;
; N.B. WRMSR does not destroy any registers.
;

        push    rcx                     ; save volatile register
        mov     rcx, gs:[PcVirtualApicAssist] ; get assist page address
        btr     dword ptr HvApicFlags[rcx], HV_VIRTUAL_APIC_NO_EOI_REQUIRED ; check if EOI required
        jc      short @f                ; if c, no EOI is required
        mov     ecx, HV_X64_MSR_EOI     ; set EOI MSR
        wrmsr                           ; perform EOI
@@:     pop     rcx                     ;

else

        mov     rcx, rsi
        CAPCALL HalPerformEndOfInterrupt

endif

        endm

;
; Define restore exception state macro.
;
;   This macro restores the nonvolatile state.
;
; Arguments:
;
;   Flag - If blank, then nonvolatile floating and integer registers are
;       restored. If nonblank and identical to "Rbp", then rbp is restored
;       in addition to the nonvolatile floating and integer registers. If
;       nonblank and identical to "NoFp", then only the nonvolatile integer
;       registers are restored.
;
; Implicit arguments:
;
;   rsp - Supplies the address of the exception frame.
;

RESTORE_EXCEPTION_STATE macro Flag

        lea     rcx, 100h[rsp]          ; set frame display pointer

ifdif <Flag>, <NoFp>

        movaps  xmm6, ExXmm6[rsp]       ; restore nonvolatile xmm registers
        movaps  xmm7, ExXmm7[rsp]       ;
        movaps  xmm8, ExXmm8[rsp]       ;
        movaps  xmm9, ExXmm9[rsp]       ;
        movaps  xmm10, ExXmm10[rsp]     ;
        movaps  xmm11, (ExXmm11 - 100h)[rcx] ;
        movaps  xmm12, (ExXmm12 - 100h)[rcx] ;
        movaps  xmm13, (ExXmm13 - 100h)[rcx] ;
        movaps  xmm14, (ExXmm14 - 100h)[rcx] ;
        movaps  xmm15, (ExXmm15 - 100h)[rcx] ;

endif

        mov     rbx, (ExRbx - 100h)[rcx] ; restore nonvolatile integer registers
        mov     rdi, (ExRdi - 100h)[rcx] ;
        mov     rsi, (ExRsi - 100h)[rcx] ;
        mov     r12, (ExR12 - 100h)[rcx] ;
        mov     r13, (ExR13 - 100h)[rcx] ;
        mov     r14, (ExR14 - 100h)[rcx] ;
        mov     r15, (ExR15 - 100h)[rcx] ;

ifdif <Flag>, <NoPop>

ifidn <Flag>, <Rbp>

        mov     rbp, (ExRbp - 100h)[rcx]  ; restore nonvolatile integer register

endif

        add     rsp, KEXCEPTION_FRAME_LENGTH - (1 * 8) ; deallocate frame

ifdif <Flag>, <Rbp>

        BEGIN_EPILOGUE

endif

endif

        endm

;
; Define generate exception frame macro.
;
;   This macro allocates an exception frame and saves the nonvolatile state.
;
; Arguments:
;
;   Flag - If blank, then nonvolatile floating and integer registers are
;       saved. If nonblank and identical to "Rbp", then rbp is saved in
;       addition to the nonvolatile floating and integer registers. If
;       nonblank and identical to "NoFp", then only the nonvolatile integer
;       registers are saved. If nonblank and identical to "NoPop", then
;       allocate an exception record in addition to an exception frame. If
;       nonblank and identical to "NoFrame", then rbp is saved in addition to
;       the other registers but is not established as a frame pointer.
;
; Implicit arguments:
;
;   The top of the stack is assumed to contain a return address.
;

GENERATE_EXCEPTION_FRAME macro Flag


ifidn <Flag>, <NoPop>

        alloc_stack (EXCEPTION_RECORD_LENGTH + KEXCEPTION_FRAME_LENGTH - (1 * 8)) ; allocate frame

else

        alloc_stack (KEXCEPTION_FRAME_LENGTH - (1 * 8)) ; allocate frame

endif

        lea     rax, 100h[rsp]          ; set frame display pointer

ifdif <Flag>, <NoFp>

        save_xmm128 xmm6, ExXmm6        ; save xmm nonvolatile registers
        save_xmm128 xmm7, ExXmm7        ;
        save_xmm128 xmm8, ExXmm8        ;
        save_xmm128 xmm9, ExXmm9        ;
        save_xmm128 xmm10, ExXmm10      ;

        movaps  (ExXmm11 - 100h)[rax], xmm11 ;
        .savexmm128 xmm11, ExXmm11      ;

        movaps  (ExXmm12 - 100h)[rax], xmm12 ;
        .savexmm128 xmm12, ExXmm12      ;

        movaps  (ExXmm13 - 100h)[rax], xmm13 ;
        .savexmm128 xmm13, ExXmm13      ;

        movaps  (ExXmm14 - 100h)[rax], xmm14 ;
        .savexmm128 xmm14, ExXmm14      ;

        movaps  (ExXmm15 - 100h)[rax], xmm15 ;
        .savexmm128 xmm15, ExXmm15      ;

endif

ifidn <Flag>, <Rbp>

        mov     (ExRbp - 100h)[rax], rbp  ; save nonvolatile integer register
        .savereg rbp, ExRbp             ;
        set_frame rbp, 0                ; set frame pointer

endif

ifidn <Flag>, <NoFrame>

        mov     (ExRbp - 100h)[rax], rbp  ; save nonvolatile integer register
        .savereg rbp, ExRbp             ;

endif

        mov     (ExRbx - 100h)[rax], rbx  ;
        .savereg rbx, ExRbx             ;

        mov     (ExRdi - 100h)[rax], rdi  ;
        .savereg rdi, ExRdi             ;

        mov     (ExRsi - 100h)[rax], rsi  ;
        .savereg rsi, ExRsi             ;

        mov     (ExR12 - 100h)[rax], r12  ;
        .savereg r12, ExR12             ;

        mov     (ExR13 - 100h)[rax], r13  ;
        .savereg r13, ExR13             ;

        mov     (ExR14 - 100h)[rax], r14  ;
        .savereg r14, ExR14             ;

        mov     (ExR15 - 100h)[rax], r15  ;
        .savereg r15, ExR15             ;

        END_PROLOGUE

        endm

;
; Define the instrumentation return macro.
;
;   This macro determines whether an instrumentation callback is enabled for this
;   thread's process.  If it is, then the return address in the trap frame is
;   replaced with the instrumentation callback address, and r10 is used to
;   indicate the actual return address.
;
; Arguments:
;
;   None
;
; Implicit arguments:
;
;   rbp - Supplies the address of the trap frame
;

SETUP_FOR_INSTRUMENTATION_RETURN macro

        local   exit

        mov     rax, gs:[PcCurrentThread]           ; get current thread address
        mov     rax, ThApcState + AsProcess[rax]    ; get current process
        mov     rax, PrInstrumentationCallback[rax] ; get callback address
        or      rax, rax                            ; check if non-null
        jz      exit                                ; if z, it is null

        cmp     word ptr TrSegCs[rbp], (KGDT64_R3_CODE or RPL_MASK) ; check for 64-bit mode
        jne     exit

        mov     r10, TrRip[rbp]                     ; r10 = original address
        mov     TrRip[rbp], rax                     ; return to callback address
exit:

        endm

;
; Define restore set context state macro.
;
;   This macro restores the set context state and restores the trap if the set
;   context state is active.
;
; Arguments:
;
;   State - (Passed from RESTORE_TRAP_STATE)
;
; Implicit arguments:
;
;   rbp - Supplies the address of the trap frame.
;

RESTORE_SET_CONTEXT_STATE macro State

        local   exit

ifndef XBOX_SYSTEMOS

        mov     rcx, gs:[PcCurrentThread] ; get current thread address
        test    dword ptr ThLock[rcx], DEBUG_ACTIVE_SET_CONTEXT_STATE_LOCK
        jz      short exit                ; if z, set context state is not active

ifidn <State>, <Service>

        mov     TrRax[rbp], rax         ; save service status
        xor     eax, eax                ; scrub volatile integer registers in the trap frame
        mov     TrRcx[rbp], rax         ;
        mov     TrRdx[rbp], rax         ;
        mov     TrR8[rbp], rax          ;
        mov     TrR9[rbp], rax          ;
        mov     TrR10[rbp], rax         ;
        mov     TrR11[rbp], rax         ;
        pxor    xmm0, xmm0              ; scrub volatile floating registers in the trap frame
        movaps  TrXmm0[rbp], xmm0       ;
        movaps  TrXmm1[rbp], xmm0       ;
        movaps  TrXmm2[rbp], xmm0       ;
        movaps  TrXmm3[rbp], xmm0       ;
        movaps  TrXmm4[rbp], xmm0       ;
        movaps  TrXmm5[rbp], xmm0       ;

endif
        
        CAPCALL KiRestoreSetContextState
exit:

endif

        endm

;
; Define restore trap state macro.
;
;   This macro restores the volatile state, and if necessary, restores the
;   user debug state, deallocats the trap frame, and exits the trap.
;
;   N.B. This macro must preserve eax in case it is not reloaded from the
;        trap frame.
;
; Arguments:
;
;   State - Determines what state is restored and what tests are made. Valid
;       values are:
;
;           Service - restore state for a service executed from user mode.
;           Kernel - restore state for a service executed from kernel mode.
;           Volatile - restore state for a trap or interrupt.
;           Pico - restore state for a service executed from a pico thread.
;
;   NoDisable - If blank, then disable interrupts.
;
;   NmiFlag - Determines Nmi restore flags.  Valid values are:
;           Nmi - restore state from NMI.
;           NmiAlternateReturn - restore state from machine check.
;
;   LBranch - This argument is deprecated and not used.
;
;   SkipUmsExit - If not blank, skips UMS Exit processing.
;
;   SkipSetCtxState - If not blank, skips set context state processing
;
; Implicit arguments:
;
;   rbp - Supplies the address of the trap frame.
;

RESTORE_TRAP_STATE macro State, NoDisable, NmiFlag, LBranch, SkipUmsExit, SkipSetCtxState

        local   first, second, third, fourth, fifth, noalternate

ifdef XBOX_SYSTEMOS

        extern   _guard_icall_bugcheck:proc

endif

ifb <NoDisable>

        cli                             ; disable interrupts

endif

ifdif <State>, <Kernel>
ifdif <State>, <Pico>

;
; State is either <Volatile> or <Service>
;

ifidn <State>, <Volatile>

        test    byte ptr TrSegCs[rbp], MODE_MASK ; test if previous mode user
        jz      fourth                  ; if z, previous mode not user

endif

ifb <SkipSetCtxState>

ifb <NmiFlag>

        mov     rcx, gs:[PcCurrentThread] ; get current thread address
        cmp     byte ptr ThApcState + AsUserApcPending[rcx], 0 ; APC pending?
        je      short first             ; if e, no user APC pending

endif

ifidn <State>, <Service>

        mov     TrRax[rbp], rax         ; save service status
        xor     eax, eax                ; scrub volatile integer registers in the trap frame
        mov     TrRcx[rbp], rax         ;
        mov     TrRdx[rbp], rax         ;
        mov     TrR8[rbp], rax          ;
        mov     TrR9[rbp], rax          ;
        mov     TrR10[rbp], rax         ;
        mov     TrR11[rbp], rax         ;
        pxor    xmm0, xmm0              ; scrub volatile floating registers in the trap frame
        movaps  TrXmm0[rbp], xmm0       ;
        movaps  TrXmm1[rbp], xmm0       ;
        movaps  TrXmm2[rbp], xmm0       ;
        movaps  TrXmm3[rbp], xmm0       ;
        movaps  TrXmm4[rbp], xmm0       ;
        movaps  TrXmm5[rbp], xmm0       ;

endif

ifb <NmiFlag>

        mov     ecx, APC_LEVEL          ; get APC level

        SetIrql                         ; set IRQL to APC level

        sti                             ; allow interrupts
        CAPCALL KiInitiateUserApc       ; initiate APC execution
        cli                             ; disable interrupts
        mov     ecx, PASSIVE_LEVEL      ; get PASSIVE level

        SetIrql                         ; set IRQL to PASSIVE level

endif

ifidn <State>, <Service>

        mov     rax, TrRax[rbp]         ; restore service status

endif

first:

        RESTORE_SET_CONTEXT_STATE <State>

endif ; ifb <SkipSetCtxState>

;
; Check if the thread is a Scheduled UMS Thread or profiling is active.
;

        mov     rcx, gs:[PcCurrentThread] ; get current thread address
        test    dword ptr ThLock[rcx], DEBUG_ACTIVE_SCHEDULED_THREAD_LOCK or THREAD_FLAGS_CYCLE_PROFILING_LOCK
        jz      short second            ; if z, profiling and UMS are not enabled

ifidn <State>, <Service>

        mov     TrRax[rbp], rax         ; save service status

endif

        test    byte ptr ThThreadControlFlags[rcx], THREAD_FLAGS_CYCLE_PROFILING ; check for profiling
        jz      short @f                ; if z, profiling is not enabled
        CAPCALL KiCopyCounters
        mov     rcx, gs:[PcCurrentThread] ; reload current thread address
@@:

ifb <NmiFlag>

ifndef XBOX_SYSTEMOS

ifb <SkipUmsExit>

        test    byte ptr ThDebugActive[rcx], DEBUG_ACTIVE_SCHEDULED_THREAD    ; Is thread a KT/UMS thread?
        jz      short @f                ; if z, thread is not ums scheduled thread.
        lea     rsp, (-128)[rbp]        ; set the stack to top of returning trap frame

ifidn <State>, <Service>

        xor     ecx, ecx

else

        .errnz  (KUMS_UCH_VOLATILE_MASK AND 0FFFFFFFFFFFFFF00h)

        mov     cl, KUMS_UCH_VOLATILE_MASK

endif ; ifidn <State>, <Service>

        CAPCALL KiUmsExit
@@:

endif ; ifb <SkipUmsExit>

endif ; ifndef XBOX_SYSTEMOS

endif ; ifb <NmiFlag>

ifidn <State>, <Service>

        mov     rax, TrRax[rbp]         ; restore service status

endif

second:

        ldmxcsr TrMxCsr[rbp]            ; restore XMM control/status

ifidn <State>, <Service>

        xor     r10, r10                ; scrub volatile integer register

endif

        cmp     word ptr TrDr7[rbp],  0 ; test if debug active
        jz      short third             ; if z, debug not active

ifidn <State>, <Service>

        mov     TrRax[rbp], rax         ; save service status

endif

        CAPCALL KiRestoreDebugRegisterState ; restore user debug register state

ifidn <State>, <Service>

        SETUP_FOR_INSTRUMENTATION_RETURN

        mov     rax, TrRax[rbp]         ; restore service status
endif

third:                                  ;

;
; At this point it is known that the return will be to user mode.
;

ifidn <State>, <Volatile>

        movaps  xmm0, TrXmm0[rbp]       ; restore volatile XMM registers
        movaps  xmm1, TrXmm1[rbp]       ;
        movaps  xmm2, TrXmm2[rbp]       ;
        movaps  xmm3, TrXmm3[rbp]       ;
        movaps  xmm4, TrXmm4[rbp]       ;
        movaps  xmm5, TrXmm5[rbp]       ;

        mov     r11, TrR11[rbp]         ; restore volatile integer state
        mov     r10, TrR10[rbp]         ;
        mov     r9, TrR9[rbp]           ;
        mov     r8, TrR8[rbp]           ;

ifndef XBOX_SYSTEMOS

ifidn <NmiFlag>, <NmiAlternateReturn>

;
; Test if return to alternate context has been requested.
;

        cmp     byte ptr TrExceptionActive[rbp], 0 ; check exception active
        je      noalternate                     ; if e, no alternate return
        mov     rdx, gs:[PcCurrentThread]
        mov     rcx, ThInitialStack[rdx]        ; get initial kernel stack

;
; Copy the MCE machine frame onto the current thread's kernel stack to
; simulate the state after a user mode trap into the alternate context
; handler.
;

        sub     rcx, (KTRAP_FRAME_LENGTH - (TrRip + 128)) ; compute machine frame address
        mov     rax, TrRip[rbp]                 ; get return address
        mov     MfRip[rcx], rax                 ; write return address
        movzx   rax, word ptr TrSegCs[rbp]      ; get SegCs
        mov     MfSegCs[rcx], rax               ; write SegCs
        mov     eax, TrEFlags[rbp]              ; get user eflags
        mov     MfEFlags[rcx], rax              ; write user eflags
        mov     rax, TrRsp[rbp]                 ; get user stack pointer
        mov     MfRsp[rcx], rax                 ; write user stack pointer
        movzx   rax, word ptr TrSegSs[rbp]      ; get user stack segment
        mov     MfSegSs[rcx], rax               ; write user stack segment

;
; Modify the current trap frame to simulate a trap entry to the
; passive level alternate context handler upon trap return.
;

        lea     rax, KxMcheckAlternateReturn    ; compute handler address
        mov     TrRip[rbp], rax                 ; write handler address
        mov     word ptr TrSegCs[rbp], KGDT64_R0_CODE ; set kernel SegCs
        and     dword ptr TrEFlags[rbp], NOT EFLAGS_IF_MASK
        mov     TrRsp[rbp], rcx                 ; set stack pointer to fake
                                                ; trap entry machine frame
        mov     word ptr TrSegSs[rbp], KGDT64_R0_DATA ; set kernel SegSs

noalternate:

endif ; ifidn <NmiFlag>, <NmiAlternateReturn>

endif ; ifndef XBOX_SYSTEMOS

        mov     rdx, TrRdx[rbp]         ;
        mov     rcx, TrRcx[rbp]         ;
        mov     rax, TrRax[rbp]         ;
        mov     rsp, rbp                ; trim stack to frame offset
        mov     rbp, TrRbp[rbp]         ; restore RBP
        add     rsp, (KTRAP_FRAME_LENGTH - (5 * 8) - 128) ; deallocate stack
        swapgs                          ; swap GS base to user mode TEB

        BEGIN_EPILOGUE

        iretq                           ;

else  ; ifidn <State>, <Volatile>

        mov     r8, TrRsp[rbp]          ; get previous RSP value
        mov     r9, TrRbp[rbp]          ; get previous RBP value
        xor     edx, edx                ; scrub volatile integer registers
        pxor    xmm0, xmm0              ; scrub volatile floating registers
        pxor    xmm1, xmm1              ;
        pxor    xmm2, xmm2              ;
        pxor    xmm3, xmm3              ;
        pxor    xmm4, xmm4              ;
        pxor    xmm5, xmm5              ;
        mov     rcx, TrRip[rbp]         ; get return address
        mov     r11, TrEFlags[rbp]      ; get previous EFLAGS
        mov     rbp, r9                 ; restore RBP
        mov     rsp, r8                 ; restore RSP
        swapgs                          ; swap GS base to user mode TEB
        sysretq                         ; return from system call to user mode

endif ; ifidn <State>, <Volatile>

ifidn <State>, <Volatile>

fourth: ldmxcsr TrMxCsr[rbp]            ; restore XMM control/status
        movaps  xmm0, TrXmm0[rbp]       ; restore volatile XMM registers
        movaps  xmm1, TrXmm1[rbp]       ;
        movaps  xmm2, TrXmm2[rbp]       ;
        movaps  xmm3, TrXmm3[rbp]       ;
        movaps  xmm4, TrXmm4[rbp]       ;
        movaps  xmm5, TrXmm5[rbp]       ;

ifnb <NmiFlag>

        mov     eax, TrGsBase[rbp]      ; restore GS base MSR
        mov     edx, TrGsBase + 4[rbp]  ;
        mov     ecx, MSR_GS_BASE        ;
        wrmsr                           ;
        mov     rax, TrFaultAddress[rbp] ; restore CR2
        mov     cr2, rax                ;

endif

ifdef XBOX_SYSTEMOS

        mov     rcx, TrRip[rbp]         ; get return address
        test    rcx, rcx                ; test if user mode address
        jl      short @f                ; if l, not user mode address
        CAPCALL _guard_icall_bugcheck, <NoRet> ; bugcheck the system
@@:                                     ;

endif

fifth:  mov     r11, TrR11[rbp]         ; restore volatile integer state
        mov     r10, TrR10[rbp]         ;
        mov     r9, TrR9[rbp]           ;
        mov     r8, TrR8[rbp]           ;
        mov     rdx, TrRdx[rbp]         ;
        mov     rcx, TrRcx[rbp]         ;
        mov     rax, TrRax[rbp]         ;
        mov     rsp, rbp                ; trim stack to frame offset
        mov     rbp, TrRbp[rbp]         ; restore RBP
        add     rsp, (KTRAP_FRAME_LENGTH - (5 * 8) - 128) ; deallocate stack

        BEGIN_EPILOGUE

        iretq                           ;

endif ; ifidn <State>, <Volatile>

;
; State is pico.
;

else ; ifdif <State>, <Pico>

        mov     TrRax[rbp], rax         ; save service status

;
; Check for pending APC before restoring from the trap frame to allow for
; modification of the user state.
;

        mov     rcx, gs:[PcCurrentThread] ; get current thread address
        cmp     byte ptr ThApcState + AsUserApcPending[rcx], 0 ; APC pending?
        je      short @f                ; if e, no user APC pending

        mov     ecx, APC_LEVEL          ; get APC level

        SetIrql                         ; set IRQL to APC level

        sti                             ; allow interrupts
        CAPCALL KiInitiateUserApc       ; initiate APC execution
        mov     ecx, PASSIVE_LEVEL      ; get PASSIVE level

        SetIrql                         ; set IRQL to PASSIVE level

        cli                             ; disable interrupts

@@:     RESTORE_SET_CONTEXT_STATE <State>       ; restore set context state if needed and return

        mov     rcx, gs:[PcCurrentThread] ; reload current thread address
        test    byte ptr ThThreadControlFlags[rcx], THREAD_FLAGS_CYCLE_PROFILING ; check for profiling
        jz      short @f                ; if z, profiling is not enabled
        CAPCALL KiCopyCounters
        mov     rcx, gs:[PcCurrentThread] ; reload current thread address

@@:     cmp     word ptr TrDr7[rbp],  0 ; test if debug active
        jz      short @f               ; if z, debug not active
        CAPCALL KiRestoreDebugRegisterState ; restore user debug register state

;
; Restore all state from the trap frame.
;

@@:     ldmxcsr TrMxCsr[rbp]            ; restore XMM control/status
        movaps  xmm0, TrXmm0[rbp]       ; restore volatile XMM registers
        movaps  xmm1, TrXmm1[rbp]       ;
        movaps  xmm2, TrXmm2[rbp]       ;
        movaps  xmm3, TrXmm3[rbp]       ;
        movaps  xmm4, TrXmm4[rbp]       ;
        movaps  xmm5, TrXmm5[rbp]       ;
        mov     r11, TrR11[rbp]         ; restore volatile integer state
        mov     r10, TrR10[rbp]         ;
        mov     r9, TrR9[rbp]           ;
        mov     r8, TrR8[rbp]           ;
        mov     rdx, TrRdx[rbp]         ;
        mov     rcx, TrRcx[rbp]         ;
        mov     rax, TrRax[rbp]         ;
        mov     rsi, TrRsi[rbp]         ; restore non-volatile integer state
        mov     rdi, TrRdi[rbp]         ;
        mov     rbx, TrRbx[rbp]         ;
        mov     rsp, rbp                ; trim stack to frame offset
        mov     rbp, TrRbp[rbp]         ; restore RBP
        add     rsp, (KTRAP_FRAME_LENGTH - (5 * 8) - 128) ; deallocate stack
        swapgs                          ; swap GS base to user mode TEB

        BEGIN_EPILOGUE

;
; TODO_PICO: sysretq could be used conditionally when all registers do not
;            need to be preserved (i.e. no signals) to improve syscall exit.
;

        iretq                           ;

endif ; ifdif <State>, <Pico>

;
; State is kernel mode.
;

else ; ifdif <State>, <Kernel>

        mov     rsp, rbp                ; trim stack to frame offset
        mov     rbp, TrRbp[rbp]         ; restore RBP
        mov     rsp, TrRsp[rsp]         ; restore RSP
        sti                             ; enable interrupts

        BEGIN_EPILOGUE

        ret                             ; return from system call to kernel mode

endif ; ifdif <State>, <Kernel>

        endm

;
; Define User Mode Scheduling information generation macro.
;
;   This macro detects whether the current thread participates in User Mode
;   scheduling and has entered the kernel on behalf of another user mode
;   thread.
;
;   Registers RAX, RCX, and RDX should be available for consumption by this
;   macro.
;
; Arguments:
;
;   SaveGSSwap - If non-blank, then the GS Swap MSR contents are available in
;       EAX:EDX.
;
;   Thread - Supplies the register containing the current thread.
;
;   SkipLabel - Supplies a skip label if the indicated thread is not a primary.
;

ifndef XBOX_SYSTEMOS

PREPARE_UMS_DIRECTED_SWITCH macro SaveGSSwap, Thread, SkipLabel

        local   first

        test    byte ptr ThDebugActive[Thread], DEBUG_ACTIVE_PRIMARY_THREAD

ifnb <SkipLabel>

        jz      short SkipLabel         ; not a primary, jump to target

else

        jz      short first             ; not a primary, exit

endif

;
; If GS swap save is set, the EAX:EDX pair contains the TEB.
;

ifb <SaveGSSwap>

        mov     ecx, MSR_GS_SWAP        ; set GS swap MSR number
        rdmsr                           ; read MSR

endif

        shl     rdx, 32                 ; shift high bits
        or      rax, rdx                ; merge value to form full TEB value
        cmp     qword ptr ThTeb[Thread], rax ; check if TEB matches

ifnb <SkipLabel>

        jz      short SkipLabel         ; match, not a directed switch

else

        jz      short first             ; match, not a directed switch

endif

;
; This thread will attempt to perform a directed switch. Until it reaches the
; control transfer point disable all kernel apcs as the backing UMS KT may
; attempt to synchronize with this thread.
;

        mov     rdx, ThUcb[Thread]      ; load UMS control block
        bts     dword ptr ThMiscFlags[Thread], KTHREAD_UMS_DIRECTED_SWITCH_ENABLE_BIT
        dec     word ptr ThSpecialApcDisable[Thread] ; disable all APCs
        mov     UcbUmsTeb[rdx], rax     ; save into UCB storage slot

first:

        endm

endif

;
; Define save trap state macro.
;
;   This macro saves the volatile state, and if necessary, saves the user
;   debug state and loads the kernel debug state.
;
; Arguments:
;
;   SaveGSSwap - If non-blank, then save the GS swap register if the previous
;       mode is user.
;
; Implicit arguments:
;
;    rbp - Supplies the address of the trap frame.
;

SAVE_TRAP_STATE macro Service, SaveGSSwap, NmiFlag, LBranch, PrepareUms

        local   first, second, third, fourth, fifth

        mov     TrRax[rbp], rax         ; save volatile integer registers
        mov     TrRcx[rbp], rcx         ;
        mov     TrRdx[rbp], rdx         ;
        mov     TrR8[rbp], r8           ;
        mov     TrR9[rbp], r9           ;
        mov     TrR10[rbp], r10         ;
        mov     TrR11[rbp], r11         ;

ifnb <NmiFlag>

        test    byte ptr TrSegCs[rbp], MODE_MASK ; test if previous mode user
        jnz     second                  ; if nz, previous mode user

;
; Preserve the current GS base in the trap frame.
;

        mov     ecx, MSR_GS_BASE        ; save GS base MSR in trap frame
        rdmsr                           ;
        mov     TrGsBase[rbp], eax      ;
        mov     TrGsBase + 4[rbp], edx  ;

;
; Attempt to retrieve the processor number by decoding the compatibility mode
; TEB segment limit.  If this fails (e.g. descriptor tables are truncated),
; then extract the processor number via rdtscp, which is guaranteed to be
; available should descriptor tables be truncated except in the case of an RFG
; process, in which case the IDT is examined.
;
; N.B.  The IDT examination code path will not function should the system be
;       handling a hypervisor (or secure kernel) initiated bugcheck on the root
;       partition as SIDT is intercepted and not fully supported by the
;       hypervisor minimal dispatch loop.  All processors that are supported by
;       Hyper-V support RDTSCP (at least on the root partition), however.
;


ifdef XBOX_SYSTEMOS

        rdtscp                          ; read processor number
        mov     eax, ecx                ; set processor number

else

        mov     eax, KGDT64_R3_CMTEB    ; set selector number
        lsl     eax, eax                ; load segment limit
        jz      short third             ; if z, processor number encoded

        mov     rax, USER_SHARED_DATA   ; get kernel shared user data mapping
        test    byte ptr [rax + PF_RDTSCP_INSTRUCTION_AVAILABLE + UsProcessorFeatures], 0ffh ; test for rdtscp support
        jnz     short @f                ; if nz, rdtscp supported

;
; Retrieve the correct kernel GS base by reading the proper offset from the GDT
; base to the kernel GS base value.
;

        sgdt    TrXmm0[rbp]             ; save GDT pseudo-descriptor to scratch
        mov     rdx, qword ptr (TrXmm0 + 2)[rbp] ; get GDT base
        mov     rdx, qword ptr (PdaKernelGsBase - PdaGdt)[rdx] ; get new GS base

        jmp     short fifth             ; rejoin common code and load MSR

@@:
        rdtscp                          ; get processor number
        movzx   eax, cl                 ; get group relative processor number
        shr     ecx, 8                  ; shift off processor number
        shl     ecx, 6                  ; shift the group number by 6 bits
        mov     r8d, ecx                ; get group number
        jmp     short fourth            ; rejoin common code

third:

        mov     r8d, eax                ; make a copy of segment limit
        and     r8d, 3ffh               ; get group number
        shl     r8d, 6                  ; shift the group number by 6 bits
        shr     eax, 14                 ; extract processor number

fourth:

endif

;
; Load the correct kernel GS base.
;

        lea     rcx, KiProcessorBlock   ; get processor block array address

ifndef XBOX_SYSTEMOS

        lea     rdx, KiProcessorNumberToIndexMappingTable ; get mapping table
        or      eax, r8d                ; get the index to the mapping table
        mov     eax, [rdx + rax * 4]    ; processor index

endif

        mov     rdx, [rcx + rax * 8]    ; get current PRCB address
        sub     rdx, PcPrcb             ; compute current PCR address

fifth:  mov     eax, edx                ; set current GS base MSR
        shr     rdx, 32                 ;
        mov     ecx, MSR_GS_BASE        ;
        wrmsr                           ;

;
; Preserve CR2 in the trap frame.
;

        mov     rax, cr2                ; save CR2 in trap frame
        mov     TrFaultAddress[rbp], rax ;
        jmp     first                   ;

second:

else ; ifnb <NmiFlag>

        test    byte ptr TrSegCs[rbp], MODE_MASK ; test if previous mode user
        jz      first                   ; if z, previous mode kernel

endif ; ifnb <NmiFlag>

        swapgs                          ; swap GS base to kernel mode PCR
        mov     r10, gs:[PcCurrentThread] ; get current thread address

if DBG

        test    dword ptr ThLock[r10], DEBUG_ACTIVE_SET_CONTEXT_STATE_LOCK ; verify set context state is not active
        jz      short @f                ; if z, not active as expected
        int     3                       ; break into debugger

@@:

endif ; if DBG

ifnb <SaveGSSwap>

        cmp     word ptr TrSegCs[rbp], (KGDT64_R3_CODE or RPL_MASK) ; check for 64-bit mode
        jne     short @f                ; if ne, not running in 64-bit mode
        mov     ecx, MSR_GS_SWAP        ; set GS swap MSR number
        rdmsr                           ; read GS swap MSR
        mov     TrGsSwap[rbp], eax      ; save GS swap MSR
        mov     TrGsSwap + 4[rbp], edx  ;

endif

ifndef XBOX_SYSTEMOS

ifnb <PrepareUms>

        PREPARE_UMS_DIRECTED_SWITCH <SaveGSSwap>, r10

endif

endif ; ifndef XBOX_SYSTEMOS

@@:     test    byte ptr ThDebugActive[r10], DEBUG_ACTIVE_DBG_INSTRUMENTED ; test if debug enabled
        mov     word ptr TrDr7[rbp], 0  ; assume debug not enabled
        jz      short first             ; if e, debug/instrumentation not enabled
        CAPCALL KiSaveDebugRegisterState ; save debug register state
first:  cld                             ; clear direction flag
        stmxcsr TrMxCsr[rbp]            ; save XMM control/status
        ldmxcsr dword ptr gs:[PcMxCsr]  ; set default XMM control/status
        movaps  TrXmm0[rbp], xmm0       ; save volatile xmm registers
        movaps  TrXmm1[rbp], xmm1       ;
        movaps  TrXmm2[rbp], xmm2       ;
        movaps  TrXmm3[rbp], xmm3       ;
        movaps  TrXmm4[rbp], xmm4       ;
        movaps  TrXmm5[rbp], xmm5       ;

        endm

;
; Define interrupt frame generation macro.
;
;   This macro generates an interrupt frame.
;
; Arguments:
;
;   Vector - If non-blank, then the vector number is on the stack.
;
;   Direct - If non-blank, then the interrupt is directly connected (i.e. a
;            special interrupt that has no associated KINTERRUPT object).
;
; Return value:
;
;   If Vector is non-blank, then the value of the vector is returned in eax.
;
;   RSI will be set to the interrupt object or, if Direct is non-blank, NULL.
;
; Note: Trap and interrupt frames are exempt from the "first instruction must
;       be two bytes" rule.
;

GENERATE_INTERRUPT_FRAME macro Vector, Direct, NmiFlag, LBranch

ifndef XBOX_SYSTEMOS

        extern  KeWakeProcessor:proc

endif

;
; At this point the hardware frame has been pushed onto an aligned stack. The
; vector number (or a dummy vector number) and rbp have also been pushed on the
; stack.
;

        push_reg rsi                    ; save nonvolatile register before clobbering it
        alloc_stack (KTRAP_FRAME_LENGTH - (8 * 8)) ; allocate fixed frame

        set_frame rbp, 128              ; set frame pointer

        END_PROLOGUE

        mov     byte ptr TrExceptionActive[rbp], 0 ; set interrupt active

        SAVE_TRAP_STATE <>, <>, <NmiFlag>, <LBranch> ; save trap state

;
; Check if a kernel-mode SLIST pop operation is being interrupted and reset
; RIP as necessary.
;

ifdifi <Direct>, <DirectNoSListCheck>

ifndef XBOX_SYSTEMOS

        cmp     byte ptr gs:[PcDeepSleep], 0 ; check if in deep sleep
        je      short not_asleep        ; if e, not in deep sleep
        CAPCALL KeWakeProcessor         ; wake the current processor
not_asleep:                             ;

endif

        lea     rax, ExpInterlockedPopEntrySListResume ; get SLIST resume address
        cmp     rax, TrRip[rbp]         ; check resume address is above RIP
        jae     short not_slist         ; if ae, resume address above RIP
        lea     rax, ExpInterlockedPopEntrySListEnd ; get SLIST end address
        cmp     rax, TrRip[rbp]         ; check end address is below RIP
        jb      short not_slist         ; if b, end address below RIP
        lea     rcx, (-128)[rbp]        ; set trap frame address
        CAPCALL KiCheckForSListAddress  ; check RIP and reset if necessary
not_slist:                              ;

endif

ifb <Direct>

        movzx   eax, byte ptr TrErrorCode[rbp] ; get vector number
        mov     rsi, gs:[PcCurrentPrcb] ; get interrupt object address
        mov     rsi, PbInterruptObject[rsi + rax * 8] ;

else

        xor     esi, esi                ; no interrupt object

endif

        inc     dword ptr gs:[PcInterruptCount] ; increment interrupt count

        endm

;
; Define enter interrupt macro.
;
;   This macro raises IRQL, sets the interrupt flag, records the previous
;   IRQL in the trap frame, and invokes the HAL to perform an EOI.
;
; Arguments:
;
;   NoEOI - If blank, then generate end of interrupt.
;
;   CycleCount - There are three possible values:
;
;       <NoCount> - Do not collect thread cycle counts or entropy.
;
;       <NoEntropy> - Collect thread cycle counts by not entropy.
;
;       Otherwise collect both cycle counts and entropy.
;
;   NmiFlag - If not blank, do not re-enable interrupts.
;
; Implicit arguments:
;
;   rcx - Supplies the interrupt IRQL.
;
;   rbp - Supplies the address of the trap frame.
;
;   rsi - Supplies the address of the interrupt object.
;
;   Interrupt flag is clear.
;
; Return Value:
;
;   None.
;

ENTER_INTERRUPT macro NoEOI, CycleCount, NmiFlag

        local   exit, skip_entropy

;
; N.B. It is possible for a interrupt to occur at an IRQL that is lower
;      than the current IRQL. This happens when the IRQL raised and at
;      the same time an interrupt request is granted.
;
;
; N.B. Raise IRQL cannot be used below since this macro is used in the NMI
;      handler and would trigger a false assert.
;

        SwapIrql                        ; raise IRQL to interrupt level
        mov     TrPreviousIrql[rbp], al ; save previous IRQL

ifdif <CycleCount>, <NoCount>

ifdif <CycleCount>, <NoEntropy>

        mov     dword ptr TrP5[rbp], 0  ; initialize entropy collection flag

endif

        mov     rcx, gs:[PcCurrentPrcb] ; get current PRCB address
        inc     byte ptr PbNestingLevel[rcx] ; increment nesting level
        cmp     byte ptr PbNestingLevel[rcx], 1 ; check if thread time
        jne     exit                    ; if ne, not thread time

        rdtsc                           ; read timestamp counter
        shl     rdx, 32                 ; combine low and high parts
        or      rax, rdx                ;

ifdif <CycleCount>, <NoEntropy>

;
; Store the current timestamp counter in the entropy collection buffer,
; mixing it with the timestamps collected by adjacent interrupts.
;
; Each interrupt timestamp is mixed with the adjacent 32 timestamps to
; ensure that every bit of the timestamp contributes to the result.
;

        mov     edx, PbEntropyCount[rcx] ; get current entropy interrupt count
        mov     r11d, edx               ; copy interrupt count
        and     edx, KENTROPY_TIMING_BUFFER_MASK ; compute bit index of the current interrupt
        shr     edx, 5                  ; divide interrupt count by 32 to obtain dword index
        lea     r10, PbEntropyBuffer[rcx + 4 * rdx] ; compute timestamp location
        mov     edx, [r10]              ; read existing entropy data
        ror     edx, 5                  ; rotate existing entropy data
        xor     edx, eax                ; combine with current timestamp
        mov     [r10], edx              ; store combined entropy

if KENTROPY_TIMING_ANALYSIS

        mov     r10, PbEntropyRawTimestamps[rcx] ; get raw timestamp buffer pointer
        test    r10, r10                ; check if buffer exists
        jz      @f                      ; if z, analysis not enabled

        mov     edx, r11d               ; copy interrupt count

.errnz (KENTROPY_TIMING_DATA_COUNT AND (KENTROPY_TIMING_DATA_COUNT - 1))

        and     edx, (KENTROPY_TIMING_DATA_COUNT - 1) ; compute buffer index
        mov     [r10 + 4 * rdx], eax    ; store timestamp for analysis

@@:

endif

;
; Update the entropy collection count and determine whether enough
; entropy has built up to trigger an entropy delivery.
;

        add     r11d, 1                 ; update entropy collection count
        mov     PbEntropyCount[rcx], r11d ; store new entropy collection count
        and     r11d, (KENTROPY_TIMING_INTERRUPTS_PER_BUFFER - 1) ; compute modulus
        jnz     short @f                ; if nz, do not trigger delivery

        mov     dword ptr TrP5[rbp], 1  ; set entropy delivery flag

@@:

endif ; ifdif <CycleCount>, <NoEntropy>

        mov     r8, PbCurrentThread[rcx] ; get current thread address
        sub     rax, PbStartCycles[rcx] ; compute total cycles for period
        add     ThCycleTime[r8], rax    ; accumulate cycles
        mov     edx, dword ptr ThCurrentRunTime[r8] ; load run time
        add     PbStartCycles[rcx], rax ; compute start of next period
        add     rdx, rax                ; new total run time
        mov     ecx, edx                ; save low run time
        shr     rdx, 32                 ; check if overflow
        jz      short @f                ; no overflow
        or      ecx, -1                 ; saturate value
@@:     mov     dword ptr ThCurrentRunTime[r8], ecx ; store new runtime

        test    byte ptr ThThreadControlFlags[r8], THREAD_FLAGS_ACCOUNTING_ANY ;
        jz      short exit              ; if z, thread accounting is not active
        mov     rdx, r8                 ; set current thread address
        mov     r8, rax                 ; load cycle accumulation
        mov     rcx, gs:[PcCurrentPrcb] ; load current PRCB
        CAPCALL KiEndThreadAccountingPeriod ;

exit:                                   ;

endif ; ifdif <CycleCount>, <NoCount>

ifb <NoEOI>

        EndSystemInterrupt              ; perform EOI

endif

ifb <NmiFlag>

        sti                             ; enable interrupts

endif

ifdif <CycleCount>, <NoCount>
ifdif <CycleCount>, <NoEntropy>

;
; Deliver entropy if the delivery count is an even multiple of the buffer size.
;

        cmp     dword ptr TrP5[rbp], 0  ; check entropy delivery flag
        je      short @f                ; if e, do not collect entropy
        mov     rcx, gs:[PcCurrentPrcb] ; get current PRCB address
        CAPCALL KiEntropyQueueDpc

@@:

endif
endif

        endm

;
; Define exit interrupt macro.
;
;   This macro exits an interrupt.
;
; Arguments:
;
;   NoEOI - If blank, then generate end of interrupt.
;
;   NoCycleCount - If blank, then decrement nesting level.
;
;   Direct - If non-blank, then the interrupt is directly connected.
;            This argument is currently unused.
;
;   NmiFlag - (Passed to RESTORE_TRAP_STATE)
;
;   LBranch - (Passed to RESTORE_TRAP_STATE)
;
;   UmsExit - If not blank, process UMS Exit.
;
;   NoDisable - If blank, then disable interrupts.
;
; Implicit arguments:
;
;   rbp - Supplies the address of the trap frame.
;
;   rsi - Supplies the address of the interrupt object.
;
; Return Value:
;
;   None.
;

EXIT_INTERRUPT macro NoEOI, NoCycleCount, Direct, NmiFlag, LBranch, UmsExit, NoDisable

        local   decrement, exit, request

ifb <NoDisable>

        cli                             ; disable interrupts

endif

ifb <NoEOI>

        EndSystemInterrupt              ; perform EOI

endif

ifb <NoCycleCount>

        mov     rcx, gs:[PcCurrentPrcb] ; get current PRCB address
        cmp     byte ptr PbNestingLevel[rcx], 1 ; check if ending processor time
        ja      decrement               ; if nz, more interrupts nested

        rdtsc                           ; read time stamp counter
        shl     rdx, 32                 ; combine low and high parts
        or      rax, rdx                ;        
        sub     rax, PbStartCycles[rcx] ; compute total cycles for period
        add     PbCycleTime[rcx], rax   ; accumulate cycles
        add     PbStartCycles[rcx], rax ; compute start of next period

        mov     r8, rax                 ; get net cycles
        mov     rax, PbCurrentThread[rcx] ; get current thread address
        test    byte ptr ThThreadControlFlags[rax], THREAD_FLAGS_ACCOUNTING_INTERRUPT ; check for accounting
        jz      short @f                ; if z, accounting is not enabled
        xor     edx, edx                ; set thread to NULL
        CAPCALL KiBeginThreadAccountingPeriod ; decrements nesting level
        mov     rcx, gs:[PcCurrentPrcb] ; reload rcx
        inc     byte ptr PbNestingLevel[rcx] ; restore nesting level

@@:     mov     dl, PbInterruptRequest[rcx] ; get interrupt request value
        and     byte ptr PbInterruptRequest[rcx], 0 ; clear interrupt request
        cmp     byte ptr PbIdleHalt[rcx], 0 ; check for idle halt interrupt
        jne     short decrement         ; if ne, interrupt from idle halt
        test    dl, dl                  ; test if dispatch interrupt request
        jz      short decrement         ; if z, no dispatch interrupt request
        cmp     byte ptr TrPreviousIrql[rbp], DISPATCH_LEVEL ; check for bypass
        jae     short request           ; if ae, bypass not possible
        and     byte ptr PbNestingLevel[rcx], 0 ; clear nesting level
        CAPCALL KiDpcInterruptBypass    ; bypass dispatch interrupt
        jmp     short exit              ; finish in common code

request:                                ;
        mov     ecx, DISPATCH_LEVEL     ; request dispatch interrupt
        CAPCALL __imp_HalRequestSoftwareInterrupt ;
        mov     rcx, gs:[PcCurrentPrcb] ; reload rcx

decrement:
        dec     byte ptr PbNestingLevel[rcx] ; decrement nesting level                                ;

exit:

endif

        movzx   ecx, byte ptr TrPreviousIrql[rbp] ; get previous IRQL

        SetIrql                         ; set IRQL to previous level

        mov     rsi, TrRsi[rbp]         ; restore extra register saved by GENERATE_INTERRUPT_FRAME

ifb <UmsExit>

        RESTORE_TRAP_STATE <Volatile>, <NoDisable>, <NmiFlag>, <LBranch>, <SkipUmsExit>

else

        RESTORE_TRAP_STATE <Volatile>, <NoDisable>, <NmiFlag>, <LBranch>

endif

        endm

;
; Define trap frame generation macro.
;
;   This macro generates a trap frame.
;
; Arguments:
;
;   ErrorCode - There are four possible values:
;
;       Blank - No error code is present. A dummy error code is allocated.
;
;       ErrorCode - An error code is present. It is returned in eax.
;
;       MxCsr - No error code is present. A dummy error code is allocated and
;           the value of MxCsr is returned in ax.
;
;       Virtual - An error code is present and a virtual address is present in
;           CR2. The error code is returned in eax and the virtual address is
;           returned in rcx.
;
;       Secure - An error code is present and the PRCB secure fault mailbox is
;                loaded with secure fault data.  The fault mailbox contents are
;                transferred to rcx (FaultCode) and rdx (FaultVa) and then the
;                mailbox is zeroed if the error code indicated a secure fault.
;                A secure fault is indicated by the LDT_MASK field being set in
;                the error code.
;
;   DisableInt - If equal to Disable, do not enable interrupts.
;
;   SaveGSSwap - If non-blank, then save the GS swap register if the previous
;       mode is user.
;
;   PrepareUms - If non-blank, then this trap entry point supports user mode
;       scheduling (UMS). Function must either always call KiExceptionDispatch
;       at some point or explicitly call KiUmsTrapEntry upfront if
;       KTHREAD_UMS_DIRECTED_SWITCH_ENABLE_BIT is set.
;
; Return value:
;
;   If ErrorCode is non-blank, then the value of the error code is returned
;   in eax.
;
; Note: Trap and interrupt frames are exempt from the "first instruction must
;       be two bytes" rule.
;

GENERATE_TRAP_FRAME macro ErrorCode, DisableInt, SaveGSSwap, PrepareUms

        local   exit, gtf10

ifb <ErrorCode>

        push_frame                      ; mark machine frame without error code
        alloc_stack 8                   ; allocate dummy error code

else

ifidn <ErrorCode>, <MxCsr>

        push_frame                      ; mark machine frame without error code
        alloc_stack 8                   ; allocate dummy error code

else

        push_frame code                 ; mark machine frame with error code

endif

endif

        push_reg rbp                    ; save nonvolatile register
        alloc_stack (KTRAP_FRAME_LENGTH - (7 * 8)) ; allocate fixed frame
        set_frame rbp, 128              ; set frame pointer

        END_PROLOGUE

        mov     byte ptr TrExceptionActive[rbp], 1 ; set exception active

        SAVE_TRAP_STATE <>, <SaveGSSwap>, <>, <>, <PrepareUms> ; save trap state

ifnb <ErrorCode>

ifidn <ErrorCode>, <MxCsr>

        mov     ax, TrMxCsr[rbp]        ; return saved MXCSR

else

        mov     eax, TrErrorCode[rbp]   ; return error code

ifidn <ErrorCode>, <Virtual>

        mov     rcx, cr2                ; return virtual address

endif

ifndef XBOX_SYSTEMOS

ifidn <ErrorCode>, <Secure>

        test    ax, LDT_MASK            ; is fault a secure fault?
        jz      short gtf10             ; if z, not secure fault

        xor     ecx, ecx                ; zero register
        mov     rdx, qword ptr gs:[PcSfVa] ; get secure fault VA
        xchg    rcx, qword ptr gs:[PcSfCode] ; get and clear secure fault code

gtf10:                                  ; rejoin common code

endif

endif

endif

endif

ifdif <DisableInt>, <Disable>

;
; Enable interrupts if and only if they were enabled before the trap occurred.
; If the exception is not handled by the kernel debugger and interrupts were
; previously disabled, then a bug check will occur.
;

        test    dword ptr TrEFlags[rbp], EFLAGS_IF_MASK ; test if interrupt enabled
        jz      short exit              ; if z, interrupts not enabled
        sti                             ; enable interrupts
exit:                                   ; reference label

endif

        endm

;
; Define switch to ISR stack macro.
;
;   This macro performs a switch to ISR stack, if needed, and then
;   calls the interrupt sub dispatch through a dummy machine frame
;   independently of the stack switch being performed or not.
;   This ensures that the stack can be unwound / walked through the
;   potential stack discontinuity.
;
;   N.B. This macro must be called with interrupts disabled and the
;        sub dispatcher must also return with interrupts disabled.
;
;   N.B. Sub dispatchers are called with RSP pointing to a machine
;        frame with no error code, so they must have ".pushframe"
;        as the first line of their prolog.
;
;   N.B. Sub dispatchers must return with ret (after cli). They cannot
;        use iret.
;
; Arguments:
;
;   _SubDispatcher - Provides the name of the sub dispatcher routine.
;

SWITCH_TO_ISR_STACK macro _SubDispatcher

        local   not_isr, dont_switch

        .errnz MfRip

        mov     rdx, rsp                ; save current RSP
        mov     rcx, qword ptr gs:[PcPrcb + PbIsrStack] ; get ISR stack base
        lea     rax, [rcx - ISR_STACK_SIZE] ; compute ISR stack limit
        cmp     rax, rsp                ;
        ja      short not_isr           ; (IsrStackLimit > CurrentStack)

        cmp     rsp, rcx                ;
        jb      short dont_switch       ; (CurrentStack < IsrStackBase)

not_isr:
        cmp     dword ptr KiBugCheckActive, 0 ; check if bug check active
        jnz     short dont_switch       ; if nz, bug check active

        mov     rsp, rcx                ; switch stack

dont_switch:
        sub     rsp, MachineFrameLength - 8 ; allocate machine frame minus return
        mov     (MfRsp - 8)[rsp], rdx   ; save previous RSP in machine frame
        CAPCALL _SubDispatcher          ; call sub dispatcher/complete machine frame
        mov     rsp, (MfRsp - 8)[rsp]   ; restore previous RSP from machine frame

        endm
