#include "m2c.h"

void func_0205cb5c(void *arg0) {
    void *var_r4;

    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) | ~0x10000000);
    var_r4                       = M2C_FIELD(arg0, void **, 8);
    if (var_r4 == NULL) {
        return;
    }
    do {
        func_0205cb5c(var_r4);
        var_r4 = M2C_FIELD(var_r4, void **, 0x14);
    } while (var_r4 != NULL);
}
