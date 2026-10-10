#include "m2c.h"

M2C_UNK func_02072dac(s32);                         /* extern */
M2C_UNK func_02072dbc(s32);                         /* extern */
M2C_UNK func_02072dec(s32);                         /* extern */
extern M2C_UNK data_020de0b4;

void func_02072d7c(void) {
    func_02072dac(M2C_FIELD(&data_020de0b4, s32 *, 0x48));
    func_02072dbc(M2C_FIELD(&data_020de0b4, s32 *, 0x54));
    func_02072dec(M2C_FIELD(&data_020de0b4, s32 *, 0x50));
}
