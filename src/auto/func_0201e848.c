#include "m2c.h"

M2C_UNK func_0201e28c();
extern M2C_UNK data_020c4a64;

void func_0201e848(void) {
    s32 temp_r4;
    M2C_UNK (*temp_r5)(s32);

    temp_r5 = M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), M2C_UNK(**)(s32), 0x24);
    if (temp_r5 != NULL) {
        temp_r4 = M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x2C);
        func_0201e28c();
        temp_r5(temp_r4);
        return;
    }
    func_0201e28c();
}
