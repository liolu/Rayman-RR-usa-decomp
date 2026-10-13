#include "m2c.h"

void *func_0205c3f8(s32);                           /* extern */
M2C_UNK func_0206b3c4(s32);                         /* extern */
void *func_02084450(M2C_UNK, void *, void **);      /* extern */
M2C_UNK func_02084ea0(M2C_UNK, M2C_UNK);            /* extern */

void *func_02097668(M2C_UNK arg0, void *arg1, void *arg2) {
    s32 sp0[4];
    s32 var_r0;
    void *temp_r0;

    if (M2C_FIELD(arg1, s32 *, -8) == 0x8A) {
        arg1    = func_02084450(arg0, arg1, (void **) sp0);
        temp_r0 = func_0205c3f8(func_0206b3c4(M2C_FIELD(M2C_FIELD(sp0, void **, 0), s32 *, 4)));
        if (temp_r0 == NULL) {
            var_r0 = 0;
        } else if (M2C_FIELD(temp_r0, s32 *, 0) != 2) {
            var_r0 = 0;
        } else {
            var_r0 = M2C_FIELD(temp_r0, s32 *, 4);
        }
        M2C_FIELD(arg2, s32 *, 0)   = var_r0;
        M2C_FIELD(arg2, s32 *, 0xC) = 0xB;
        return arg1;
    }
    func_02084ea0(0x27, 0);
    return arg1;
}
