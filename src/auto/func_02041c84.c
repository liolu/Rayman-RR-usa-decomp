#include "m2c.h"

s32 func_02040f2c(s32, s32, u16, u16);              /* extern */
void func_02041024(u16 *, u16 *);                   /* extern */
extern M2C_UNK data_020cf9ac;
extern s32 data_020cf9c4;

s32 func_02041c84(u16 arg0, u16 arg1, s32 arg2) {
    s32 *var_r0;
    s32 temp_r0;

    func_02041024(&arg0, &arg1);
    temp_r0 = func_02040f2c(M2C_FIELD(&data_020cf9ac, s32 *, 0xC), data_020cf9c4, arg0, arg1);
    if (M2C_FIELD(&data_020cf9ac, s32 *, 0xC) == M2C_FIELD(&data_020cf9ac, s32 *, 4)) {
        var_r0 = (s32 *) (M2C_FIELD(&data_020cf9ac, s32 *, 4) + (temp_r0 * 4));
    } else {
        var_r0 = (s32 *) (M2C_FIELD(&data_020cf9ac, s32 *, 0xC) + (temp_r0 * 8));
    }
    *var_r0 = arg2;
    return (s32) var_r0;
}
