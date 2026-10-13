#include "m2c.h"

extern s32 data_020e4c18;

void func_0209c724(s32 arg0, s32 arg1) {
    if (arg0 == arg1) {
        data_020e4c18 = 0;
    } else {
        data_020e4c18 = arg1;
    }
}
