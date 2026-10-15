#include "m2c.h"

M2C_UNK func_020826fc();

s32 func_02084f6c(void *arg0, void *arg1) {
    s32 *temp_r0;
    s32 var_r0;

    M2C_FIELD(arg0, void **, 0xC) = (void *) M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(arg0, void **, 8)   = arg1;
    func_020826fc(arg0);
    temp_r0 = M2C_FIELD(arg1, s32 **, 4);
    if (temp_r0 == NULL) {
        var_r0 = 0;
    } else {
        var_r0 = *temp_r0;
    }
    M2C_FIELD(arg0, s32 *, 4) = var_r0;
    return 1;
}
