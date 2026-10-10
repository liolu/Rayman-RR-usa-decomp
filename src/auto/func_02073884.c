#include "m2c.h"

extern s32 data_020de214;
extern s32 data_020de218;

s32 func_02073884(s32 arg0) {
    s32 var_r0;

    if (arg0 == 0) {
        if (data_020de218 == 1) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if (data_020de214 == 1) {
        return 1;
    }
    return 0;
}
