#include "m2c.h"

M2C_UNK func_020490e0();
M2C_UNK func_02049158();

void *func_020a469c(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, -8) == 0x11A) {
        func_020490e0();
    } else {
        func_02049158();
    }
    return arg1;
}
