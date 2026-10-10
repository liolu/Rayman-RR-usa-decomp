#include "m2c.h"

s32 func_02067168();                                /* extern */

s32 func_02061a0c(s32 arg0, void *arg1) {
    if (M2C_FIELD(M2C_FIELD(arg1, void **, 4), s32 *, 0x14) == 0) {
        return 3;
    }
    return func_02067168(arg0);
}
