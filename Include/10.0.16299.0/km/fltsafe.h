#if (NTDDI_VERSION >= NTDDI_WINXP)
// fltsafe.h
//
//      Copyright (c) Microsoft Corporation. All rights reserved.
//

// FLOATSAFE
//
// Saves floating point state on construction and restores on destruction.
//
struct FLOATSAFE
{
    KFLOATING_SAVE     FloatSave;
    NTSTATUS           ntStatus;

    FLOATSAFE(void)
    {
        ntStatus = KeSaveFloatingPointState(&FloatSave);
    }

    ~FLOATSAFE(void)
    {
        if (NT_SUCCESS(ntStatus))
        {
            KeRestoreFloatingPointState(&FloatSave);
        }
    }
};
#endif
