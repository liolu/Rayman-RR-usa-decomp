#include "m2c.h"

M2C_UNK func_0202e93c(void *, s16);

void func_0206bf70(void *arg0) {
    s16 var_r5;
    void *temp_r0;
    void *temp_r1;

    temp_r1 = *M2C_FIELD(arg0, void ***, 4);
    temp_r0 = *M2C_FIELD(temp_r1, void ***, 4);
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, s32 *, 0x14) != 0) && (M2C_FIELD(temp_r1, s32 *, 0xA8) != 0)) {
        var_r5 = 0;
        do {
            func_0202e93c(arg0, var_r5);
            var_r5 += 1;
        } while ((s32) var_r5 < 0x100);
    }
}
