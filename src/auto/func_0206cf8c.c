#include "m2c.h"

M2C_UNK func_020015f4(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern s32 data_020dd8d4;
extern s32 data_020dd8d8;
extern s32 data_020dd8dc;
extern M2C_UNK data_020dd8e0;
extern void *data_020ddce0;

void func_0206cf8c(void) {
    s32 var_r4;
    void *temp_r0;
    void *var_r5;

    var_r5 = data_020ddce0;
    var_r4 = data_020dd8d4;
    func_020015f4(&data_020dd8e0, 0, 0x400);
    temp_r0 = var_r5 + 0x783C;
    if (var_r5 != temp_r0) {
        do {
            M2C_FIELD(var_r5, s32 *, 0x20) = var_r4;
            var_r5 += 0x3C;
            var_r4 += 0x64;
        } while (var_r5 != temp_r0);
    }
    data_020dd8dc = 0;
    data_020dd8d8 = 0;
}
