#include "m2c.h"

M2C_UNK func_0201f5f0();
M2C_UNK func_02023d48();
M2C_UNK func_020249c0();

void func_020218e0(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r1) {
        case 1:
            func_020249c0(arg0);
            break;
        case 2:
            func_0201f5f0(arg0);
            break;
        case 11:
            func_02023d48(arg0);
            break;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
