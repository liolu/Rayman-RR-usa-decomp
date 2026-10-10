#include "m2c.h"

M2C_UNK func_02084ea0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02093198(s32);                             /* extern */
M2C_UNK func_0209c740(s32, M2C_UNK, void **);       /* extern */

void *func_020989fc(M2C_UNK arg0, void *arg1, void *arg2) {
    void *sp0;
    s32 temp_r6;
    u8 var_r7;
    void *temp_r0;

    temp_r6 = M2C_FIELD(arg1, s32 *, -8);
    var_r7  = 0;
    func_0209c740(func_02093198(temp_r6), arg0, &sp0);
    temp_r0 = M2C_FIELD(M2C_FIELD(sp0, void **, 4), void **, 4);
    if (temp_r0 != NULL) {
        switch (temp_r6) {                          /* irregular */
            case 0xA3:
                var_r7 = M2C_FIELD(temp_r0, u8 *, 0x2F);
                break;
            case 0xA4:
                var_r7 = M2C_FIELD(temp_r0, u8 *, 0x26);
                break;
            case 0xA5:
                var_r7 = M2C_FIELD(temp_r0, u8 *, 0x27);
                break;
            default:
                func_02084ea0(0x27, 0);
                break;
        }
    }
    M2C_FIELD(arg2, s32 *, 0)   = (s32) var_r7;
    M2C_FIELD(arg2, s32 *, 0xC) = 6;
    return arg1;
}
