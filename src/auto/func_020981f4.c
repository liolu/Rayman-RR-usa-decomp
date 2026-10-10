#include "m2c.h"

s32 func_0201bdd0(void *);                          /* extern */
M2C_UNK func_02067900();                            /* extern */
M2C_UNK func_02084ea0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02093198(s32);                             /* extern */
M2C_UNK func_0209c740(s32, M2C_UNK, void **);       /* extern */

void *func_020981f4(M2C_UNK arg0, void *arg1, void *arg2) {
    void *sp0;
    s32 temp_r6;
    s32 var_r0;
    void *var_r6;

    temp_r6 = M2C_FIELD(arg1, s32 *, -8);
    func_0209c740(func_02093198(temp_r6), arg0, &sp0);
    if (M2C_FIELD(M2C_FIELD(sp0, void **, 4), s32 *, 8) == 0) {
        return arg1;
    }
    func_02067900();
    if (temp_r6 == 0x97) {
        var_r6 = sp0;
    loop_4:
        var_r6 = M2C_FIELD(var_r6, void **, 0x1C);
        if ((func_0201bdd0(var_r6) != 0) && (M2C_FIELD(var_r6, s32 *, 0) != 2)) {
            goto loop_4;
        }
        if (var_r6 == NULL) {
            var_r0 = 0;
        } else if (M2C_FIELD(var_r6, s32 *, 0) != 2) {
            var_r0 = 0;
        } else {
            var_r0 = M2C_FIELD(var_r6, s32 *, 4);
        }
        M2C_FIELD(arg2, s32 *, 0)   = var_r0;
        M2C_FIELD(arg2, s32 *, 0xC) = 0xB;
        return arg1;
    }
    func_02084ea0(0x27, 0);
    return arg1;
}
