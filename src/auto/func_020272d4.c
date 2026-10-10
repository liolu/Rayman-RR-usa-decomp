#include "m2c.h"

M2C_UNK func_02021dd8();                            /* extern */
extern M2C_UNK data_020c5740;

void func_020272d4(void) {
    if (M2C_FIELD(&data_020c5740, s32 *, 0x40) == 0) {
        return;
    }
    func_02021dd8();
}
