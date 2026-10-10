#include "m2c.h"

s32 func_020414ac(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02041da8(s32);                         /* extern */
M2C_UNK func_02058360();                            /* extern */

void func_0206260c(void) {
    s32 temp_r4;

    temp_r4 = func_020414ac(0x8D, 0, 0x20);
    func_02058360();
    func_02041da8(temp_r4);
}
