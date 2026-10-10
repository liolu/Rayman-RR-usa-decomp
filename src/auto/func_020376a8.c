#include "m2c.h"

M2C_UNK func_02001588(void *, s32, M2C_UNK);        /* extern */
void *func_02067928();                              /* extern */

void func_020376a8(void *arg0) {
    s32 temp_r0_2;
    s32 temp_r5;
    void *temp_r0;

    temp_r0 = func_02067928();
    if (temp_r0 == NULL) {
        return;
    }
    temp_r5 = M2C_FIELD(arg0, s32 *, 0x24);
    func_02001588(temp_r0 + 0xDC, temp_r5, 0x64);
    func_02001588(temp_r0 + 0x78, temp_r5, 0x64);
    M2C_FIELD(temp_r0, s32 *, 0x3C) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x40) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x44) = 0;
    temp_r0_2                       = M2C_FIELD(temp_r0, s32 *, 0xC) | 0x01000000;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = temp_r0_2;
    if (!(temp_r0_2 & 4)) {
        return;
    }
    func_02001588(temp_r0 + 0x2A0, temp_r5, 0x64);
    func_02001588(temp_r0 + 0x304, temp_r5, 0x64);
}
