#include "m2c.h"

void *func_0201c2b8(void *arg0) {
    s32 var_r1;
    void *var_r0;

    var_r0 = arg0;
    if (var_r0 != NULL) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 & 0xFF) {
        var_r0 = M2C_FIELD(var_r0, void **, 0x14);
    }
    return var_r0;
}
