#include "m2c.h"

M2C_UNK func_0201fc70();                            /* extern */
M2C_UNK func_0201fc74();                            /* extern */
extern M2C_UNK data_020c4a64;

void func_0201faac(s32 arg0) {
    func_0201fc70();
    M2C_FIELD(&data_020c4a64, s32 *, 0x20) = arg0;
    func_0201fc74();
}
