#include "m2c.h"

s32 func_0206b3f4();                                /* extern */
M2C_UNK func_0206dc04(void *);                      /* extern */

void func_0206dbd0(void *arg0) {
    void *var_r4;

    if (func_0206b3f4() & 2) {
        var_r4 = M2C_FIELD(arg0, void **, 8);
        if (var_r4 != NULL) {
            do {
                func_0206dc04(var_r4);
                var_r4 = M2C_FIELD(var_r4, void **, 0x14);
            } while (var_r4 != NULL);
        }
    }
}
