#include "m2c.h"

M2C_UNK func_0201d43c(M2C_UNK, M2C_UNK *);
M2C_UNK func_0201faac(s32);
M2C_UNK func_02024dd4(s32);
extern M2C_UNK data_020bc22c;

void func_02022248(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4);
    switch (temp_r1) {
        case 1:
            func_02024dd4(M2C_FIELD(arg0, s32 *, 0));
            return;
        case 2:
            func_0201faac(M2C_FIELD(arg0, s32 *, 0));
            return;
        default:
            func_0201d43c(0x15, &data_020bc22c);
            return;
    }
}
