#include "m2c.h"

extern u8 data_020bc0f0[];

s32 func_02022294(u32 *param_1) {
    if (param_1[5] == 0) {
        return -2;
    }
    return ((s32(*)(u32))(*(void **) (data_020bc0f0 + ((u32 *) param_1[1])[1] * 0x18)))(param_1[0]);
}
