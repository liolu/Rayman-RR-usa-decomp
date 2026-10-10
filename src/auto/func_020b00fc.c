#include "m2c.h"

extern M2C_UNK data_020e4f10;
extern M2C_UNK data_020e5958;

void func_020b00fc(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(&data_020e5958, s32 *, 0)    = 0xF000;
    M2C_FIELD(&data_020e5958, s32 *, 4)    = 0x14000;
    M2C_FIELD(&data_020e5958, s32 *, 8)    = 0x55000;
    M2C_FIELD(&data_020e5958, s32 *, 0xC)  = 0x3C000;
    M2C_FIELD(&data_020e4f10, s32 *, 0x30) = arg2;
}
