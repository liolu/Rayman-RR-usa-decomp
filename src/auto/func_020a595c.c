#include "m2c.h"

M2C_UNK func_02073b04(s32);                         /* extern */
s32 func_02084450(M2C_UNK, M2C_UNK, s32 *);         /* extern */

s32 func_020a595c(M2C_UNK arg0, M2C_UNK arg1) {
    s32 buf[4];
    s32 temp_r4;

    temp_r4 = func_02084450(arg0, arg1, buf);
    func_02073b04(buf[0]);
    return temp_r4;
}
