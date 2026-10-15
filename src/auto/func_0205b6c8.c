#include "m2c.h"

s32 func_0201bdd0(s32 *);
s32 *func_0201c2b8(s32 *);
M2C_UNK func_0201c488(s32 *, void *, M2C_UNK);

void func_0205b6c8(void *arg0) {
    s32 *var_r4;
    s32 *var_r5;
    s32 *var_r5_2;
    s32 *var_r8;

    var_r5 = M2C_FIELD(arg0, s32 **, 8);
    var_r4 = func_0201c2b8(var_r5);
    if (func_0201bdd0(var_r5) == 0) {
        return;
    }
loop_3:
    if (M2C_FIELD(var_r5, s32 *, 0) == 2) {
        if (M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r5, void **, 4), void **, 4), u8 *, 0x24) == 0) {
            return;
        }
        var_r8   = M2C_FIELD(var_r5, s32 **, 8);
        var_r5_2 = func_0201c2b8(var_r8);
        if (func_0201bdd0(var_r8) != 0) {
            do {
                if (*var_r8 == 2) {
                    func_0201c488(var_r8, arg0, 0);
                }
                var_r8   = var_r5_2;
                var_r5_2 = func_0201c2b8(var_r5_2);
            } while (func_0201bdd0(var_r8) != 0);
        }
        goto block_10;
    }
block_10:
    var_r5 = var_r4;
    var_r4 = func_0201c2b8(var_r4);
    if (func_0201bdd0(var_r5) == 0) {
        return;
    }
    goto loop_3;
}
