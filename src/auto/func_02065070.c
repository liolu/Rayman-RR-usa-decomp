#include "m2c.h"

M2C_UNK func_02001588(void *, s32, s32);            /* extern */
s32 func_02065038();                                /* extern */

void func_02065070(void **arg0, s32 *arg1) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    s32 temp_r7;
    u16 temp_r8;
    void *temp_r0;

    temp_r0 = *arg0;
    temp_r4 = M2C_FIELD(temp_r0, s32 *, 0x9C);
    temp_r5 = M2C_FIELD(temp_r0, s32 *, 0xA8);
    temp_r6 = M2C_FIELD(temp_r0, s32 *, 0xA4);
    temp_r7 = M2C_FIELD(temp_r0, s32 *, 0xBC);
    temp_r8 = M2C_FIELD(temp_r0, u16 *, 0x8E);
    func_02001588(*arg0, *arg1, func_02065038());
    M2C_FIELD(*arg0, s32 *, 0x9C) = temp_r4;
    M2C_FIELD(*arg0, s32 *, 0xA8) = temp_r5;
    M2C_FIELD(*arg0, s32 *, 0xA4) = temp_r6;
    M2C_FIELD(*arg0, s32 *, 0xBC) = temp_r7;
    M2C_FIELD(*arg0, u16 *, 0x8E) = temp_r8;
}
