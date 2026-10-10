#include "m2c.h"

s32 func_0201bdd0(void *);                          /* extern */
M2C_UNK func_0201c0ac(void *);                      /* extern */
void *func_0201c2b8(void *);                        /* extern */
s32 func_0205772c(s32);                             /* extern */
M2C_UNK func_0205da34(s32, M2C_UNK);                /* extern */

void func_0205d89c(void *arg0) {
    s32 temp_r0;
    s32 var_r0;
    s32 var_r0_2;
    void *var_r4;
    void *var_r5;

    var_r5 = M2C_FIELD(arg0, void **, 8);
    var_r4 = func_0201c2b8(var_r5);
    if (func_0201bdd0(var_r5) != 0) {
        do {
            func_0205d89c(var_r5);
            var_r5 = var_r4;
            var_r4 = func_0201c2b8(var_r4);
        } while (func_0201bdd0(var_r5) != 0);
    }
    func_0201c0ac(arg0);
    temp_r0 = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r0 != 2) {
        return;
    }
    if (temp_r0 != 2) {
        var_r0 = 0;
    } else {
        var_r0 = M2C_FIELD(arg0, s32 *, 4);
    }
    if (func_0205772c(var_r0) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0) != 2) {
        var_r0_2 = 0;
    } else {
        var_r0_2 = M2C_FIELD(arg0, s32 *, 4);
    }
    func_0205da34(var_r0_2, 1);
}
