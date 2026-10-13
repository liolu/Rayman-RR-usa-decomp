#include "m2c.h"

M2C_UNK func_0205e1f8(s32, s32);                    /* extern */
s32 func_0206b3c4(s32);                             /* extern */
void *func_02084450(M2C_UNK, void *, void **);      /* extern */

void *func_0209cdd0(M2C_UNK arg0, void *arg1) {
    u8 sp10[16];
    u8 sp0[16];
    s32 temp_r4;
    s32 var_r0;
    s32 var_r4;
    void *temp_r0;
    void *temp_r5;

    temp_r4 = M2C_FIELD(arg1, s32 *, -8);
    temp_r0 = func_02084450(arg0, func_02084450(arg0, arg1, (void **) sp10), (void **) sp0);
    temp_r5 = temp_r0;
    if (temp_r4 != 0x3E) {
        return temp_r0;
    }
    if (M2C_FIELD(sp0, void **, 0) == NULL) {
        var_r4 = 0;
    } else {
        var_r4 = func_0206b3c4(M2C_FIELD(M2C_FIELD(sp0, void **, 0), s32 *, 4));
    }
    if (M2C_FIELD(sp10, void **, 0) == NULL) {
        var_r0 = 0;
    } else {
        var_r0 = func_0206b3c4(M2C_FIELD(M2C_FIELD(sp10, void **, 0), s32 *, 4));
    }
    func_0205e1f8(var_r0, var_r4);
    return temp_r5;
}
