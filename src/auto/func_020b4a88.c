/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0200e908();                                /* extern */
M2C_UNK func_0200e91c(s32);                         /* extern */
M2C_UNK func_020b57f0(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_020e9cac;

void func_020b4a88(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_0200e908();
    func_020b57f0(&data_020e9cac, arg0);
    func_0200e91c(temp_r4);
}
