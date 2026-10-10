#include "m2c.h"

M2C_UNK func_02077f20(s32);                         /* extern */
M2C_UNK func_020782f4();                            /* extern */

s32 func_0207916c(void *arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0x14);
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_02077f20(temp_r4 + 0x64);
    }
    if (M2C_FIELD(temp_r4, s32 *, 0x34) != 0) {
        func_020782f4();
        M2C_FIELD(temp_r4, s32 *, 0x34) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0xA4) = 0;
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    return 1;
}
