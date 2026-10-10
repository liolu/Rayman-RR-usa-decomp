#include "m2c.h"

s32 func_0207c4d0(void *arg0, void *arg1, void *arg2, void *arg3) {
    if (((s32) M2C_FIELD(arg2, s32 *, 0) > (s32) M2C_FIELD(arg1, s32 *, 0)) &&
        ((s32) M2C_FIELD(arg3, s32 *, 0) < (s32) M2C_FIELD(arg0, s32 *, 0)) &&
        ((s32) M2C_FIELD(arg2, s32 *, 4) > (s32) M2C_FIELD(arg1, s32 *, 4)) &&
        ((s32) M2C_FIELD(arg3, s32 *, 4) < (s32) M2C_FIELD(arg0, s32 *, 4)) &&
        ((s32) M2C_FIELD(arg2, s32 *, 8) > (s32) M2C_FIELD(arg1, s32 *, 8)) &&
        ((s32) M2C_FIELD(arg3, s32 *, 8) < (s32) M2C_FIELD(arg0, s32 *, 8))) {
        return 1;
    }
    return 0;
}
