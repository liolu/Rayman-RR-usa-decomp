/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 OS_DisableIrq();
M2C_UNK OS_RestoreIrq(s32);
M2C_UNK OS_SleepThread(M2C_UNK);
M2C_UNK DC_InvalidateRange(s32 *, M2C_UNK);
M2C_UNK DC_FlushRange(s32 *, M2C_UNK);
M2C_UNK DC_WaitWriteBufferEmpty();
M2C_UNK OS_SpinWait(M2C_UNK);
s32 func_02018424(M2C_UNK, s32 *, M2C_UNK);
s32 PXI_IsCallbackReady(M2C_UNK, M2C_UNK);

s32 CARDi_Request(void *arg0, s32 *arg1, s32 arg2) {
    s32 *temp_r10;
    s32 temp_r0;
    s32 temp_r10_2;
    s32 var_r4;

    var_r4 = arg2;
    if (!(M2C_FIELD(arg0, volatile s32 *, 0x114) & 2)) {
        M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 2);
        if (PXI_IsCallbackReady(0xB, 1) == 0) {
            do {
                OS_SpinWait(0x64);
            } while (PXI_IsCallbackReady(0xB, 1) == 0);
        }
        CARDi_Request(arg0, NULL, 1);
    }
    DC_FlushRange(M2C_FIELD(arg0, s32 **, 0), 0x60);
    DC_WaitWriteBufferEmpty();
loop_6:
    M2C_FIELD(arg0, s32 **, 4)             = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x114) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x114) | 0x20);
    do {

    } while (func_02018424(0xB, arg1, 1) < 0);
    if (arg1 == NULL) {
        temp_r10 = M2C_FIELD(arg0, s32 **, 0);
        do {

        } while (func_02018424(0xB, temp_r10, 1) < 0);
    }
    temp_r10_2 = OS_DisableIrq();
    if (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20) {
        do {
            OS_SleepThread(0);
        } while (M2C_FIELD(arg0, volatile s32 *, 0x114) & 0x20);
    }
    OS_RestoreIrq(temp_r10_2);
    DC_InvalidateRange(M2C_FIELD(arg0, s32 **, 0), 0x60);
    temp_r0 = *M2C_FIELD(arg0, s32 **, 0);
    if (temp_r0 == 4) {
        var_r4 -= 1;
        if (var_r4 > 0) {
            goto loop_6;
        }
    }
    if (temp_r0 == 0) {
        return 1;
    }
    return 0;
}
