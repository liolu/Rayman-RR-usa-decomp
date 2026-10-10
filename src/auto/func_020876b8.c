#include "m2c.h"

s32 func_0200a3b8();                                /* extern */
M2C_UNK func_0200a4bc(s32, s32);                    /* extern */
s32 *func_020414ac(M2C_UNK, u16, M2C_UNK);          /* extern */
M2C_UNK func_02041da8(s32 *);                       /* extern */

void func_020876b8(void *arg0, s32 *arg1) {
    s32 *temp_r0;

    temp_r0 = func_020414ac(0x64, M2C_FIELD(arg0, u16 *, 2), 4);
    func_0200a4bc(0x45800000, *temp_r0);
    *arg1 = func_0200a3b8();
    func_02041da8(temp_r0);
}
