#include "m2c.h"

void *func_0201c2e8(void *arg0, s32 arg1) {
    s16 var_r2;
    void *var_r0;

    var_r0 = *(void **) ((s8 *) arg0 + 0x8);
    var_r2 = 0;
    if (arg1 <= 0) {
        return var_r0;
    }
    do {
        var_r2 = var_r2 + 1;
        var_r0 = *(void **) ((s8 *) var_r0 + 0x14);
    } while (arg1 > (s32) var_r2);
    return var_r0;
}
