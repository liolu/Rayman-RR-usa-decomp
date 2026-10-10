#include "m2c.h"

extern s32 data_020d02ec;
extern M2C_UNK data_020d030c;

void func_02047bc0(void *arg0) {
    if (data_020d02ec == 0) {
        data_020d02ec = 3;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD(&data_020d030c, s32 *, 0);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(&data_020d030c, s32 *, 4);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD(&data_020d030c, s32 *, 8);
}
