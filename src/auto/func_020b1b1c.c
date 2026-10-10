#include "m2c.h"

M2C_UNK func_020503d4(s32, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_020e9010;
extern s32 data_020e9180;
extern s32 data_020e9184;
extern M2C_UNK data_020e9188;

void func_020b1b1c(M2C_UNK arg0) {
    if (M2C_FIELD(&data_020e9010, s32 *, 0x14) != 0) {
        func_020503d4(data_020e9184, &data_020e9188, 5, arg0, data_020e9180, 0x1000);
    }
    M2C_FIELD(&data_020e9010, s32 *, 0x14) = 0;
}
