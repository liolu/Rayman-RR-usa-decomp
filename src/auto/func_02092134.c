#include "m2c.h"

extern M2C_UNK data_020dc19c;

s32 func_02092134(s32 arg0, s32 arg1, s32 *arg2) {
    *arg2 = (s32) M2C_FIELD(&data_020dc19c, u8 *, 0xC7B);
    return arg1;
}
