#include "m2c.h"

M2C_UNK func_02024eb8();
extern M2C_UNK data_020c5720;
extern M2C_UNK data_020c572c;
extern s32 data_020c5738;

void func_02024a04(s32 arg0) {
    M2C_FIELD(&data_020c572c, s32 *, 0) = 0;
    data_020c5738                       = 0;
    M2C_FIELD(&data_020c572c, s32 *, 4) = 0;
    M2C_FIELD(&data_020c572c, s32 *, 8) = 0;
    M2C_FIELD(&data_020c5720, s32 *, 0) = 0;
    M2C_FIELD(&data_020c5720, s32 *, 4) = 0;
    M2C_FIELD(&data_020c5720, s32 *, 8) = 0;
    func_02024eb8(arg0);
}
