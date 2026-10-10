#include "m2c.h"

M2C_UNK func_02022184(s32);                         /* extern */
extern s32 data_020c56c0;

void func_02024084(void *arg0) {
    M2C_UNK (*temp_r1)(s32);

    data_020c56c0 = 1;
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_02022184(M2C_FIELD(arg0, s32 *, 0x24));
    }
    temp_r1 = M2C_FIELD(arg0, M2C_UNK(**)(s32), 0x3C);
    if (temp_r1 != NULL) {
        temp_r1(M2C_FIELD(arg0, s32 *, 0x40));
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    data_020c56c0             = 0;
}
