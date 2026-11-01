#include "m2c.h"

extern M2C_UNK data_020cfa90;
void func_02042188(s32);

s32 func_0204202c(s32 arg0) {
    u8 *p;
    s32 i;

    p = (u8 *) &data_020cfa90;
    i = M2C_FIELD(p, s32 *, 0x1E0) - 1;
    p = (u8 *) &data_020cfa90 + (i * 0xC);
    while (i >= 0) {
        if (M2C_FIELD(p, s32 *, 0) == arg0) {
            M2C_FIELD(p, u16 *, 0xA) = 0;
            func_02042188(i);
            return 1;
        }
        i -= 1;
        p -= 0xC;
    }
    return 0;
}
