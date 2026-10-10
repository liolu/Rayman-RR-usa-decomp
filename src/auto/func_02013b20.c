/* compiler: 1.2/sp2p3  */
#define M2C_SELF_func_02013b20
#include "m2c_protos.h"

M2C_UNK func_0200cc3c(void *);                      /* extern */
s32 func_02012ab0(void *, s32);                     /* extern */
void *func_02013bc4(s32);                           /* extern */

void func_02013b20(void *arg0) {
    s32 temp_r5;
    s32 var_r0;
    u32 temp_r4;
    void *var_r6;

    var_r6  = arg0;
    temp_r5 = M2C_FIELD(var_r6, volatile s32 *, 8);
    if (var_r6 == NULL) {
        return;
    }
loop_3:
    temp_r4                                = OS_DisableIrq();
    M2C_FIELD(var_r6, volatile s32 *, 0xC) = (s32) (M2C_FIELD(var_r6, volatile s32 *, 0xC) | 0x40);
    if (M2C_FIELD(var_r6, volatile s32 *, 0xC) & 4) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        func_0200cc3c(var_r6 + 0x18);
        OS_RestoreIrq(temp_r4);
        return;
    }
    M2C_FIELD(var_r6, volatile s32 *, 0xC) = (s32) (M2C_FIELD(var_r6, volatile s32 *, 0xC) | 8);
    OS_RestoreIrq(temp_r4);
    if (func_02012ab0(var_r6, M2C_FIELD(var_r6, volatile s32 *, 0x10)) == 6) {
        return;
    }
    var_r6 = func_02013bc4(temp_r5);
    if (var_r6 == NULL) {
        return;
    }
    goto loop_3;
}
