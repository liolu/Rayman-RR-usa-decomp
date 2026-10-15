#include "m2c.h"

M2C_UNK func_0201d3cc(M2C_UNK, void *);
s32 func_02021c38(s32);

s32 func_02023788(void *arg0) {
    M2C_UNK (*temp_r1)(s32);

    if ((M2C_FIELD(arg0, s32 *, 0x18) != 0) && (func_02021c38(M2C_FIELD(arg0, s32 *, 0)) != 0)) {
        return 1;
    }
    temp_r1 = M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x10);
    if (temp_r1 != NULL) {
        temp_r1(M2C_FIELD(arg0, s32 *, 0x14));
    }
    func_0201d3cc(0, arg0);
    return 0;
}
