#include "m2c.h"

M2C_UNK func_020219c4();                            /* extern */
extern M2C_UNK data_020bc24c;

void func_02025d40(s32 arg0) {
    if (arg0 == 0) {
        M2C_FIELD(&data_020bc24c, s32 *, 0x2C) = 0;
    } else {
        M2C_FIELD(&data_020bc24c, s32 *, 0x2C) = 1;
    }
    func_020219c4(arg0);
}
