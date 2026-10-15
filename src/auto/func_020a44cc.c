#include "m2c.h"

M2C_UNK func_02026844(s32);
M2C_UNK func_020272b4();
M2C_UNK func_020272d4();
extern s32 data_020dcee4;

void *func_020a44cc(s32 arg0, void *arg1) {
    s32 temp_r2;

    temp_r2 = M2C_FIELD(arg1, s32 *, -8);
    switch (temp_r2) {
        case 0x10D:
            func_020272b4();
            break;
        case 0x10E:
            func_020272d4();
            break;
        case 0x10F:
            func_02026844(data_020dcee4);
            break;
    }
    return arg1;
}
