#include "m2c.h"

M2C_UNK func_0201c438(void *);                      /* extern */
M2C_UNK func_0201c448();                            /* extern */
M2C_UNK func_0201cfec(M2C_UNK, void *, s32);        /* extern */
M2C_UNK func_0204a1b0(M2C_UNK, s32);                /* extern */
M2C_UNK func_0204a1f4(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0204a908(M2C_UNK);                     /* extern */
s32 func_02068a8c(void *);                          /* extern */

void func_0201a83c(M2C_UNK arg0, void *arg1, s32 arg2) {
    s32 temp_r0;
    void *var_r8;

    if ((u8) (M2C_FIELD(arg1, s32 *, 0x30) & 0x20)) {
        return;
    }
    func_0201c438(arg1);
    if ((u8) ((M2C_FIELD(arg1, u32 *, 0x30) & 0x20000) >> 0x10)) {
        func_0204a908(0);
    }
    temp_r0 = func_02068a8c(arg1);
    if (temp_r0 != 0) {
        func_0204a1b0(arg0, temp_r0);
    }
    arg2 = arg2 & M2C_FIELD(arg1, s32 *, 0x2C);
    if ((((arg2 & 0x800000) && (arg2 & 0x02000000)) || ((arg2 & 0x01000000) && !(arg2 & 0x02000000))) &&
        !(u8) (M2C_FIELD(arg1, s32 *, 0x30) & 2)) {
        func_0201cfec(arg0, arg1, arg2);
    }
    var_r8 = M2C_FIELD(arg1, void **, 8);
    if (var_r8 != NULL) {
        do {
            if (M2C_FIELD(var_r8, s32 *, 0) != 2) {
                func_0201a83c(arg0, var_r8, arg2);
            }
            var_r8 = M2C_FIELD(var_r8, void **, 0x14);
        } while (var_r8 != NULL);
    }
    if (temp_r0 != 0) {
        func_0204a1f4(arg0, 1);
    }
    if ((u8) ((M2C_FIELD(arg1, u32 *, 0x30) & 0x20000) >> 0x10)) {
        func_0204a908(1);
    }
    func_0201c448();
}
