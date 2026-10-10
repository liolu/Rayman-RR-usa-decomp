#include "m2c.h"

s32 func_0206e028(s32);                             /* extern */
s32 func_0206e040(s32);                             /* extern */
M2C_UNK func_02084ea0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02093198(s32);                             /* extern */
M2C_UNK func_0209c740(s32, M2C_UNK, s32 *);         /* extern */

void *func_020962fc(M2C_UNK arg0, void *arg1, void *arg2) {
    s32 sp0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg1, s32 *, -8);
    func_0209c740(func_02093198(temp_r4), arg0, &sp0);
    switch (temp_r4) {                              /* irregular */
        case 0x60:
            M2C_FIELD(arg2, s32 *, 0)   = func_0206e028(sp0);
            M2C_FIELD(arg2, s32 *, 0xC) = 6;
            return arg1;
        case 0x61:
            M2C_FIELD(arg2, s32 *, 0)   = func_0206e040(sp0);
            M2C_FIELD(arg2, s32 *, 0xC) = 6;
            return arg1;
        default:
            func_02084ea0(0x27, 0);
            return arg1;
    }
}
