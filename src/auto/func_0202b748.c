#include "m2c.h"

M2C_UNK func_0202b664(void *);

s32 func_0202b748(void **arg0, s32 arg1) {
    void *var_r4;

    var_r4 = *arg0;
    if (var_r4 != NULL) {
        do {
            if (arg1 == (arg1 & M2C_FIELD(var_r4, u16 *, 0x10))) {
                func_0202b664(var_r4);
            }
            var_r4 = M2C_FIELD(var_r4, void **, 0);
        } while (var_r4 != NULL);
    }
    return 1;
}
