#include "m2c.h"

M2C_UNK func_02001588(void *, void *, M2C_UNK);     /* extern */
M2C_UNK func_0201c454(void *);                      /* extern */
M2C_UNK func_0202e19c(void *, M2C_UNK);             /* extern */

void func_020375f0(void *arg0, void *arg1, M2C_UNK arg2) {
    void *temp_r5;

    if (M2C_FIELD(arg0, s32 *, 0xC) & 0x80) {
        func_0202e19c(M2C_FIELD(arg1, void **, 0x24), arg2);
    } else {
        temp_r5 = M2C_FIELD(arg1, void **, 0x24);
        func_0202e19c(arg0 + 0xDC, arg2);
        func_0202e19c(arg0 + 0x78, arg2);
        func_02001588(temp_r5, arg0 + 0xDC, 0x64);
        if (M2C_FIELD(arg0, s32 *, 0xC) & 4) {
            func_0202e19c(arg0 + 0x2A0, arg2);
            func_0202e19c(arg0 + 0x304, arg2);
        }
    }
    func_0201c454(arg1);
    M2C_FIELD(arg0, s32 *, 0x3C) = 0;
    M2C_FIELD(arg0, s32 *, 0x40) = 0;
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x6C) = 0;
    M2C_FIELD(arg0, s32 *, 0x70) = 0;
    M2C_FIELD(arg0, s32 *, 0x74) = 0;
    if (M2C_FIELD(arg0, s32 *, 0xC) & 2) {
        M2C_FIELD(arg0, s32 *, 0x1CC) = 0;
        M2C_FIELD(arg0, s32 *, 0x1D0) = 0;
        M2C_FIELD(arg0, s32 *, 0x1D4) = 0;
    }
}
