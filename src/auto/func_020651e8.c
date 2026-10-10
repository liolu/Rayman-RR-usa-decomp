#include "m2c.h"

u8 func_020651e8(void *arg0) {
    u8 var_r0;
    void *temp_r0;

    if (arg0 != NULL) {
        temp_r0 = *M2C_FIELD(arg0, void ***, 4);
        if (temp_r0 != NULL) {
            if (M2C_FIELD(temp_r0, s8 *, 0xF7) == 0) {
                var_r0 = 1;
            } else {
                var_r0 = 0;
            }
            return var_r0;
        }
    }
    return 1U;
}
