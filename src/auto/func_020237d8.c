#include "m2c.h"

M2C_UNK func_0201d3cc(M2C_UNK, void *);             /* extern */
M2C_UNK func_02021c8c(s32);                         /* extern */

void func_020237d8(void *arg0) {
    M2C_UNK (*temp_r1)(s32);

    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        func_02021c8c(M2C_FIELD(arg0, s32 *, 0));
    }
    temp_r1 = M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x10);
    if (temp_r1 != NULL) {
        temp_r1(M2C_FIELD(arg0, s32 *, 0x14));
    }
    func_0201d3cc(0, arg0);
}
