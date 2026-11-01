#include "m2c.h"

extern u8 data_020de21c;
extern s32 data_020b6468;

s32 func_0207394c(void) {
    s32 ret;

    ret = 0;
    switch (data_020de21c) {
        case 0:
            break;
        case 1:
            return 0;
        case 2:
            ret = 1;
            break;
        case 5:
            ret = 2;
            break;
        case 4:
            if (data_020b6468 == 1) {
                ret = 3;
            }
            break;
        case 3:
            if (data_020b6468 == 1) {
                ret = 4;
            }
            break;
        default:
            break;
    }
    return ret;
}
