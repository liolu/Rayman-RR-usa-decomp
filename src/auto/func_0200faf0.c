/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200f764();                            /* extern */
s32 func_0200fb34(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020c1000;
extern M2C_UNK func_0200f77c;

s32 func_0200faf0(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0                               = func_0200fb34(arg0, &func_0200f77c, 0);
    M2C_FIELD(&data_020c1000, s32 *, 0xC) = temp_r0;
    if (temp_r0 == 0) {
        func_0200f764();
    }
    return M2C_FIELD(&data_020c1000, s32 *, 0xC);
}
