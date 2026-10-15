#include "m2c.h"

s32 func_020689f0(void *, s32, s32, s32);

s32 func_02068a30(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_lr;

    var_lr = 0;
    if (M2C_FIELD(arg0, s32 *, 0) == 2) {
        var_lr = func_020689f0(M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x1C), arg1, arg2, arg3);
    }
    return var_lr;
}
