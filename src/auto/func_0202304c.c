#include "m2c.h"

s32 func_02021c38(s32);                             /* extern */
M2C_UNK func_02022c60(s32);                         /* extern */
extern M2C_UNK data_020c5410;
extern M2C_UNK data_020c5414;
extern M2C_UNK data_020c5430;

s32 func_0202304c(s32 arg0) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = arg0 * 0x44;
    if (*((M2C_UNK *) ((s8 *) &data_020c5414 + temp_r4)) == 0) {
        var_r0 = 0;
    } else {
        var_r0 = func_02021c38(*((M2C_UNK *) ((s8 *) &data_020c5430 + temp_r4)));
    }
    if (var_r0 == 0) {
        *((M2C_UNK *) ((s8 *) &data_020c5430 + temp_r4)) = -1;
        func_02022c60(arg0);
    }
    return *((M2C_UNK *) ((s8 *) &data_020c5410 + temp_r4));
}
