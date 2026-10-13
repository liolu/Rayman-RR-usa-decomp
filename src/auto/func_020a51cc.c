#include "m2c.h"

extern s32 data_020e4c1c[];
extern s32 data_020e4d30[];
extern s32 data_020e4df8[];

s32 func_020a51cc(s32 arg0, s32 arg1) {
    s32 idx;

    if (data_020e4c1c[0x11] == 0) {
        return arg1;
    }
    idx = data_020e4c1c[0x11] - 1;
    if (--data_020e4df8[idx] > 0) {
        return data_020e4d30[idx];
    }
    data_020e4c1c[0x11] = idx;
    return arg1;
}
