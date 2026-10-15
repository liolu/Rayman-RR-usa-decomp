/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 OS_DisableIrq();
M2C_UNK OS_RestoreIrq(s32);
s32 OS_DisableInterrupts();
M2C_UNK OS_RestoreInterrupts(s32);
s32 func_020181a8(s16, void *);

s32 func_0200c63c(s16 arg0, void *arg1, M2C_UNK (*arg2)(), s32 arg3) {
    s32 temp_r0;
    s32 var_r5;

    if (arg3 != 0) {
        var_r5 = OS_DisableInterrupts();
    } else {
        var_r5 = OS_DisableIrq();
    }
    temp_r0 = func_020181a8(arg0, arg1);
    if (temp_r0 == 0) {
        if (arg2 != NULL) {
            arg2();
        }
        M2C_FIELD(arg1, s16 *, 4) = arg0;
    }
    if (arg3 != 0) {
        OS_RestoreInterrupts(var_r5);
    } else {
        OS_RestoreIrq(var_r5);
    }
    return temp_r0;
}
