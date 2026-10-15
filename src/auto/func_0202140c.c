#include "m2c.h"

M2C_UNK func_0201fc78();

void func_0202140c(void *arg0) {
    s32 temp_r1;

    M2C_FIELD(arg0, s32 *, 0)   = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~4);
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    temp_r1                     = M2C_FIELD(arg0, s32 *, 0);
    if (temp_r1 & 1) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) (temp_r1 | 8);
        return;
    }
    func_0201fc78();
}
