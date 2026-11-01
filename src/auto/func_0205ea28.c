#include "m2c.h"

s32 func_0205ea10(void *);                          /* extern */

void *func_0205ea28(void *arg0, s32 arg1) {
    s32 var_r4;
    void *var_r5;
    s32 temp_r0;

    var_r5 = M2C_FIELD(arg0, void **, 4);
    var_r4 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) > 0) {
        do {
            temp_r0 = func_0205ea10(var_r5);
            if (temp_r0 == arg1) {
                return var_r5;
            }
            var_r4 += 1;
            var_r5 = (u8 *) var_r5 + 0xC;
        } while (var_r4 < M2C_FIELD(arg0, s32 *, 8));
    }
    return NULL;
}
