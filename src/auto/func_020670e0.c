#include "m2c.h"

s32 func_02067060();
M2C_UNK func_020670a4(M2C_UNK, M2C_UNK, s32);

void func_020670e0(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    s16 temp_r4;
    s32 var_r2;

    temp_r4 = arg2 * 2;
    var_r2  = func_02067060();
    switch (arg3) {
        case 0:
            var_r2 &= ~(3 << temp_r4);
            break;
        case 1:
            var_r2 &= ~(3 << temp_r4);
            var_r2 |= 1 << temp_r4;
            break;
        case 2:
            var_r2 &= ~(3 << temp_r4);
            var_r2 |= 2 << temp_r4;
            break;
    }
    func_020670a4(arg0, arg1, var_r2);
}
