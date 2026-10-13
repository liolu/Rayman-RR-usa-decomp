#include "m2c.h"

s32 func_0206b3c4(s32);                             /* extern */
void *func_02084450(M2C_UNK, void *, u8 **);        /* extern */
s32 func_020848c4(u8 *, s32);                       /* extern */

void *func_02090fac(M2C_UNK arg0, void *arg1, s32 *arg2) {
    u8 *sp[8];
    s32 temp_r3;
    s32 var_r1;
    void *temp_r0;
    void *temp_r5;

    temp_r3 = M2C_FIELD(arg1, s32 *, -8);
    switch (temp_r3) {                              /* irregular */
        case 24:
            temp_r5 = func_02084450(arg0, func_02084450(arg0, arg1, &sp[4]), &sp[0]);
            *arg2   = func_020848c4(sp[4], func_0206b3c4(M2C_FIELD(sp[0], s32 *, 4)));
            return temp_r5;
        case 25:
            temp_r0 = func_02084450(arg0, arg1, &sp[4]);
            if (*sp[4] == 0) {
                var_r1 = 1;
            } else {
                var_r1 = 0;
            }
            *arg2 = var_r1;
            return temp_r0;
        default:
            *arg2 = 0;
            return arg1;
    }
}
