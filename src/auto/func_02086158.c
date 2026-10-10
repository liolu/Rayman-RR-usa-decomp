#include "m2c.h"

void func_02086158(void **arg0) {
    void *var_r1;
    void *var_r2;

    if (arg0 != NULL) {
        var_r1 = *arg0;
        if (var_r1 != NULL) {
            do {
                M2C_FIELD(var_r1, s32 *, 0x10) = (s32) M2C_FIELD(var_r1, s32 *, 0x14);
                var_r2                         = *M2C_FIELD(var_r1, void ***, 0x18);
                if (var_r2 != NULL) {
                    do {
                        M2C_FIELD(var_r2, s32 *, 0x10) = (s32) M2C_FIELD(var_r2, s32 *, 0x14);
                        M2C_FIELD(var_r2, s32 *, 0x18) = (s32) M2C_FIELD(var_r2, s32 *, 0x1C);
                        var_r2                         = M2C_FIELD(var_r2, void **, 0);
                    } while (var_r2 != NULL);
                }
                var_r1 = M2C_FIELD(var_r1, void **, 0);
            } while (var_r1 != NULL);
        }
    }
}
