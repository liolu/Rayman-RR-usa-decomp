#include "m2c.h"

M2C_UNK func_02027368();                            /* extern */
extern M2C_UNK data_020c57b4;

void func_020275e4(void) {
    s32 temp_r4;
    M2C_UNK (*temp_r5)(s32);

    temp_r5 = M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), M2C_UNK(**)(s32), 0x24);
    if (temp_r5 != NULL) {
        temp_r4 = M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x2C);
        func_02027368();
        temp_r5(temp_r4);
        return;
    }
    func_02027368();
}
