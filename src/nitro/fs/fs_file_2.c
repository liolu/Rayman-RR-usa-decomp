/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void OS_SleepThread(s32);
s32 FSi_ExecuteSyncCommand(void *);

s32 FS_WaitAsync(s32 arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r5;
    u32 temp_r4;

    var_r5  = 0;
    temp_r4 = OS_DisableIrq();
    if (M2C_FIELD(arg0, volatile s32 *, 0xC) & 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        if (!(M2C_FIELD(arg0, volatile s32 *, 0xC) & 0x44)) {
            var_r5 = 1;
        } else {
            var_r5 = 0;
        }
        if (var_r5 != 0) {
            M2C_FIELD(arg0, volatile s32 *, 0xC) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0xC) | 4);
            do {
                OS_SleepThread(arg0 + 0x18);
            } while (!(M2C_FIELD(arg0, volatile s32 *, 0xC) & 0x40));
        } else {
            do {
                OS_SleepThread(arg0 + 0x18);
                if (M2C_FIELD(arg0, volatile s32 *, 0xC) & 1) {
                    var_r0_2 = 1;
                } else {
                    var_r0_2 = 0;
                }
            } while (var_r0_2 != 0);
        }
    }
    OS_RestoreIrq(temp_r4);
    if (var_r5 != 0) {
        return FSi_ExecuteSyncCommand((void *) arg0);
    }
    if (M2C_FIELD(arg0, volatile s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
