#include "m2c.h"

extern s32 data_020db928;
extern s32 data_020db984;
extern M2C_UNK data_020db988;

void func_0204a1b0(s32 arg0, s32 arg1) {
    s32 temp_ip;

    temp_ip = data_020db984;
    if (temp_ip == 0x14) {
        data_020db928 += 1;
        return;
    }
    data_020db984                                          = temp_ip + 1;
    *((M2C_UNK *) ((s8 *) &data_020db988 + (temp_ip * 4))) = arg1;
}
