#include "m2c.h"

M2C_UNK func_02029f58(s32);                         /* extern */
M2C_UNK func_0202a144();                            /* extern */
M2C_UNK func_02067fb4();                            /* extern */

void func_0206a7a8(void *arg0) {
    func_02029f58(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 4), void **, 0x20), s32 *, 4));
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 0x1C) == 0) {
        return;
    }
    func_02067fb4();
    func_0202a144();
}
