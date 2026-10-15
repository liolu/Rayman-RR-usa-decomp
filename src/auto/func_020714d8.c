#include "m2c.h"

M2C_UNK func_02042364(s32, s32, M2C_UNK);
s32 func_02072874(M2C_UNK, M2C_UNK);
extern s32 data_020ddf70;
extern s32 data_020ddf9c;
extern s32 data_020ddfa0;
extern s32 data_020de094;

void func_020714d8(void) {
    s32 temp_r0;
    s32 temp_r2;

    temp_r0       = (0x34 * func_02072874(0, 1)) + data_020de094;
    data_020ddf70 = temp_r0;
    data_020ddf9c = data_020ddfa0;
    func_02042364(temp_r0, data_020ddfa0, 0x24);
    temp_r2       = data_020ddf9c + 0x24;
    data_020ddf9c = temp_r2;
    data_020ddfa0 = temp_r2;
}
