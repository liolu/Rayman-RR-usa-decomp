#include "m2c.h"

s32 func_020482a0(void *);
M2C_UNK func_0204c670(s32 *, s32);

void func_0204839c(void *arg0, void *arg1) {
    s32 sp0;

    func_0204c670(&sp0, func_020482a0(arg1));
    M2C_FIELD(arg0, s32 *, 0)   = sp0;
    M2C_FIELD(arg0, s32 *, 8)   = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) M2C_FIELD(arg1, s32 *, 0xC);
    M2C_FIELD(arg0, s32 *, 4)   = (s32) M2C_FIELD(arg1, s32 *, 4);
}
