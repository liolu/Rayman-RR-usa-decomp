#include "m2c.h"

void *func_0206b3c4(s32);                           /* extern */
M2C_UNK func_020836b8(u8, u8, s32, void **);        /* extern */
s32 *func_02084450(void *, s32 *, void **);         /* extern */

s32 *func_0209bb40(void *arg0, s32 *arg1, void **arg2) {
    void *sp0[4];
    s32 *temp_r5;
    s32 *var_r6;
    u8 temp_r6;
    void *var_r5;

    var_r6 = arg1;
    var_r5 = arg0;
    if (M2C_FIELD(var_r6, u8 *, 7) == 2) {
        var_r6 = func_02084450(arg0, (s32 *) ((u8 *) var_r6 + 8), sp0);
        var_r5 = func_0206b3c4(M2C_FIELD(sp0[0], s32 *, 4));
    }
    temp_r6 = (u8) *var_r6;
    temp_r5 = func_02084450(arg0, (s32 *) ((u8 *) var_r6 + 8), arg2);
    func_020836b8(temp_r6, (u8) *arg2, *M2C_FIELD(M2C_FIELD(var_r5, void **, 4), s32 **, 0xC), arg2);
    return temp_r5;
}
