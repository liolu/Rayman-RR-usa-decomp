#include "engine.h"
#include "m2c.h"

s32 func_0205703c(s32);
void func_0205d0ec(s32 *, s32);

s32 *func_0205cfb8(void) {
    s32 *temp_r0;

    temp_r0                         = (s32 *) func_0205703c(0x14);
    M2C_FIELD(temp_r0, s32 *, 8)    = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = 0;
    M2C_FIELD(temp_r0, s32 *, 0x10) = 0;
    func_0205d0ec(temp_r0, 0);
    return temp_r0;
}
