#include "m2c.h"

M2C_UNK func_0200d6fc(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0200eb98();                            /* extern */
M2C_UNK func_02013ec8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02013f34(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02014060(M2C_UNK *);                   /* extern */
s32 func_020140a8(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_020143a0(M2C_UNK *);                   /* extern */

void func_02041ec4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    u8 sp0[72];

    func_020143a0(sp0);
    if (func_020140a8(sp0, arg0) == 0) {
        func_0200eb98();
    }
    func_02013ec8(sp0, arg1, 0);
    func_0200d6fc(arg3, arg2);
    func_02013f34(sp0, arg3, arg2);
    func_02014060(sp0);
}
