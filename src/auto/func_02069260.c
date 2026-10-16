#include "m2c.h"

s32 func_02069260(void *arg0, s32 arg1) {
    s32 temp_r4;
    s32 var_r1;
    void *temp_r2;

    var_r1 = arg1;
    if (arg0 != NULL) {
        temp_r2 = M2C_FIELD(arg0, void **, 0);
        if (temp_r2 != NULL) {
            temp_r4 = M2C_FIELD(temp_r2, s32 *, 8);
            if (M2C_FIELD(arg0, s8 *, 8) != 0) {
                var_r1 = var_r1 % temp_r4;
                if (var_r1 < 0) {
                    var_r1 += temp_r4;
                }
            }
            if (var_r1 >= temp_r4) {
                var_r1 = temp_r4 - 1;
            }
            if (var_r1 < 0) {
                var_r1 = 0;
            }
            M2C_FIELD(arg0, s32 *, 4) = var_r1;
            return var_r1;
        }
    }
    return -1;
}
