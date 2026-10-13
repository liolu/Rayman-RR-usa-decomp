#include "m2c.h"

M2C_UNK func_0201e28c();                            /* extern */
M2C_UNK func_0201e444(M2C_UNK);                     /* extern */
M2C_UNK func_0201fc70();                            /* extern */
M2C_UNK func_0201fc74();                            /* extern */
M2C_UNK func_02021140();                            /* extern */
M2C_UNK func_0204202c(s32);                         /* extern */
extern M2C_UNK data_020c4a64;

void func_0201e3bc(void) {
    s32 var_r6;
    void *var_r0;
    s32 var_r5;

    func_02021140();
    func_0201fc70();
    var_r0 = M2C_FIELD(&data_020c4a64, void **, 0x1C);
    if (var_r0 != NULL) {
        M2C_FIELD(&data_020c4a64, void **, 0x20) = var_r0;
        var_r6                                   = 0;
        do {
            if (M2C_FIELD(var_r0, s32 *, 0x10) != 0) {
                func_0201e444(1);
            }
            func_0201e28c();
            var_r6 += 1;
            var_r0                                   = M2C_FIELD(&data_020c4a64, void **, 0x20) + 0x54;
            M2C_FIELD(&data_020c4a64, void **, 0x20) = var_r0;
        } while (var_r6 < 2);
    }
    var_r5 = M2C_FIELD(&data_020c4a64, s32 *, 0);
    if (var_r5 != 0) {
        M2C_FIELD(&data_020c4a64, s32 *, 0) = 0;
        M2C_FIELD(&data_020c4a64, s32 *, 4) = 0;
        M2C_FIELD(&data_020c4a64, s32 *, 8) = 0;
        func_0204202c(var_r5);
    }
    func_0201fc74();
}
