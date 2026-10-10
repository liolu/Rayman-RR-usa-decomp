#include "m2c.h"

M2C_UNK func_02041e90();                            /* extern */
extern void *data_020cf9c0;

void func_02040d90(s32 arg0, s16 arg1, s16 arg2) {
    data_020cf9c0 -= 8;
    func_02041e90();
    M2C_FIELD(data_020cf9c0, s32 *, 0) = arg0;
    M2C_FIELD(data_020cf9c0, s16 *, 6) = arg1;
    M2C_FIELD(data_020cf9c0, s16 *, 4) = arg2;
}
