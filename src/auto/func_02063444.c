#include "m2c.h"

M2C_UNK func_0201bde4(s32, void *, M2C_UNK);        /* extern */
s32 func_0201c198();                                /* extern */
void *func_02062634();                              /* extern */
s32 func_0206b3c4(s32);                             /* extern */
M2C_UNK func_0206b3d4(s32, s32);                    /* extern */

void *func_02063444(void) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = func_02062634();
    if (func_0206b3c4(M2C_FIELD(temp_r0, s32 *, 4)) == 0) {
        temp_r0_2 = func_0201c198();
        func_0201bde4(temp_r0_2, temp_r0, 2);
        func_0206b3d4(M2C_FIELD(temp_r0, s32 *, 4), temp_r0_2);
    }
    return temp_r0;
}
