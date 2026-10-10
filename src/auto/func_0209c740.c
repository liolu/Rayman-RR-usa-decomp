#include "m2c.h"

extern s32 data_020e4c18;

void func_0209c740(s32 arg0, s32 arg1, s32 *arg2) {
    if (data_020e4c18 != 0) {
        if (arg0 == 0) {
            return;
        }
        *arg2         = data_020e4c18;
        data_020e4c18 = 0;
        return;
    }
    *arg2 = arg1;
}
