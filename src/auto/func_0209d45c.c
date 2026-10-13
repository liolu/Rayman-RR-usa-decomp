#include "m2c.h"

M2C_UNK func_02058bf4(s32, u16, M2C_UNK);           /* extern */
void *func_02084450(void *, void *, s32 *);         /* extern */

void *func_0209d45c(void *arg0, void *arg1) {
    s32 sp0[4];
    s32 temp_r4;
    void *var_r5;

    var_r5  = arg1;
    temp_r4 = M2C_FIELD(var_r5, s32 *, -8);
    if (temp_r4 != 0x87) {
        var_r5 = func_02084450(arg0, arg1, sp0);
    }
    switch (temp_r4) {                              /* irregular */
        case 0x40:
            func_02058bf4(M2C_FIELD(arg0, s32 *, 4), (u16) sp0[0], 1);
            return var_r5;
        case 0x41:
            func_02058bf4(M2C_FIELD(arg0, s32 *, 4), (u16) sp0[0], 0);
            return var_r5;
        case 0x87:
            func_02058bf4(M2C_FIELD(arg0, s32 *, 4), 0xFFFFU, 0);
            return var_r5;
        default:
            return var_r5;
    }
}
