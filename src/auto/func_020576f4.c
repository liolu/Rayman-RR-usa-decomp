#include "m2c.h"

M2C_UNK func_0205d930(s32, M2C_UNK);
extern M2C_UNK data_020dc098;

void func_020576f4(M2C_UNK arg0) {
    void *var_r4;

    var_r4 = M2C_FIELD(&data_020dc098, void **, 4);
    if (var_r4 == NULL) {
        return;
    }
    do {
        func_0205d930(M2C_FIELD(var_r4, s32 *, 0x10), arg0);
        var_r4 = M2C_FIELD(var_r4, void **, 0);
    } while (var_r4 != NULL);
}
