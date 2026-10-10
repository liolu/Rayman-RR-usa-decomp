#include "m2c.h"

M2C_UNK func_0206be74(s32);                         /* extern */
M2C_UNK func_0206be98(s32);                         /* extern */
M2C_UNK func_02084ea0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020931d8(s32);                             /* extern */
M2C_UNK func_0209c740(s32, M2C_UNK, s32 *);         /* extern */

void *func_020a4230(M2C_UNK arg0, void *arg1) {
    s32 sp0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg1, s32 *, -8);
    func_0209c740(func_020931d8(temp_r4), arg0, &sp0);
    switch (temp_r4) {                              /* irregular */
        case 0xFF:
            func_0206be74(sp0);
            return arg1;
        case 0x100:
            func_0206be98(sp0);
            return arg1;
        default:
            func_02084ea0(0x27, 0);
            return arg1;
    }
}
