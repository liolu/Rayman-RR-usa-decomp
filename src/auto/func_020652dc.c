#include "m2c.h"

M2C_UNK func_0201a62c(s32 *);

void func_020652dc(void *arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xA8);
    sp0     = temp_r0;
    if (temp_r0 != 0) {
        func_0201a62c(&sp0);
    }
    M2C_FIELD(arg0, s32 *, 0xA8) = 0;
    M2C_FIELD(arg0, s16 *, 0x8E) = 0;
}
