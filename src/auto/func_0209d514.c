#include "m2c.h"

M2C_UNK func_02058200(M2C_UNK);                     /* extern */
M2C_UNK func_020841dc(M2C_UNK);                     /* extern */

void *func_0209d514(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, -8) == 0x42) {
        func_02058200(2);
        func_020841dc(3);
    }
    return arg1;
}
