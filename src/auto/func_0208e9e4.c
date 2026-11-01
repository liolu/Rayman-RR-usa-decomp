#include "m2c.h"

extern s32 func_01ff8668(s32 *);
extern s32 func_0208d56c(s32 *, u8 *, s32);
extern s32 func_0208ff30(u8 *, s32 *);
extern s32 data_020dd7a4[];

s32 func_0208e9e4(u8 *arg0, s32 *arg1, s32 arg2, s32 arg3, s8 arg4) {
    s32 v[3];
    s32 temp_r4;
    s32 temp_r5;

    v[0]    = arg1[0] + *(s32 *) (arg0 + 0x44);
    temp_r4 = arg4;
    temp_r5 = temp_r4 & 8;
    v[1]    = arg1[1] + *(s32 *) (arg0 + 0x48);
    v[2]    = arg1[2] + *(s32 *) (arg0 + 0x4C);
    if (temp_r5 != 0) {
        if (arg2 >= arg3) {
            return 0;
        }
        if ((arg3 - arg2) < 0xCC) {
            return 0;
        }
        if (func_0208ff30(arg0, v) == 0) {
            return 0;
        }
    }
    if (func_01ff8668(arg1) < (*(s32 *) (*(u8 **) (arg0 + 0xC) + 0x20) + data_020dd7a4[14])) {
        return 0;
    }
    temp_r4 = temp_r4 & 4;
    if ((temp_r4 == 0) && (func_0208d56c(v, arg0 + 0x2C, data_020dd7a4[13]) != 0)) {
        return 0;
    }
    if (((temp_r4 == 0) || (temp_r5 != 0)) && (func_0208d56c(v, arg0 + 0x20, data_020dd7a4[13]) != 0)) {
        return 0;
    }
    return 1;
}
