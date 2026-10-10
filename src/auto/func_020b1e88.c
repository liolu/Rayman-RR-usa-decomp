#include "m2c.h"

extern M2C_UNK data_020e9010;
extern M2C_UNK data_020e9158;
extern M2C_UNK data_020e9164;

void func_020b1e88(s32 arg0, void *arg1, void *arg2) {
    M2C_FIELD(&data_020e9010, s32 *, 0x2C) = arg0;
    M2C_FIELD(&data_020e9164, s32 *, 0)    = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(&data_020e9164, s32 *, 4)    = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(&data_020e9164, s32 *, 8)    = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(&data_020e9158, s32 *, 0)    = (s32) M2C_FIELD(arg2, s32 *, 0);
    M2C_FIELD(&data_020e9158, s32 *, 4)    = (s32) M2C_FIELD(arg2, s32 *, 4);
    M2C_FIELD(&data_020e9158, s32 *, 8)    = (s32) M2C_FIELD(arg2, s32 *, 8);
}
