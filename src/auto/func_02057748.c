#include "m2c.h"

extern M2C_UNK data_020dc098;

s32 func_02057748(void *arg0) {
    void *var_r1;
    s32 temp_r2;

    temp_r2 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4);
    if (temp_r2 >= 0x10000) {
        return 1;
    }
    var_r1 = M2C_FIELD(&data_020dc098, void **, 4);
    if (var_r1 != NULL) {
        do {
            if (temp_r2 == M2C_FIELD(M2C_FIELD(M2C_FIELD(var_r1, void **, 0x10), void **, 4), s32 *, 4)) {
                return 1;
            }
            var_r1 = M2C_FIELD(var_r1, void **, 0);
        } while (var_r1 != NULL);
    }
    return 0;
}
