/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 OS_DisableIrq();
M2C_UNK OS_RestoreIrq(s32);
s32 OS_DisableInterrupts();
M2C_UNK OS_RestoreInterrupts(s32);

s32 func_0200c6cc(s32 arg0, void *arg1, M2C_UNK (*arg2)(), s32 arg3) {
    s32 var_r4;

    if (arg0 != M2C_FIELD(arg1, u16 *, 4)) {
        return -2;
    }
    if (arg3 != 0) {
        var_r4 = OS_DisableInterrupts();
    } else {
        var_r4 = OS_DisableIrq();
    }
    M2C_FIELD(arg1, u16 *, 4) = 0U;
    if (arg2 != NULL) {
        arg2();
    }
    M2C_FIELD(arg1, s32 *, 0) = 0;
    if (arg3 != 0) {
        OS_RestoreInterrupts(var_r4);
    } else {
        OS_RestoreIrq(var_r4);
    }
    return 0;
}
