#include "m2c.h"

extern u8 data_020de118;
extern u8 data_020de119;

void *func_02092260(s32 arg0, void *arg1, s32 *arg2) {
    s32 temp_r0;
    s32 var_r3;

    temp_r0 = M2C_FIELD(arg1, s32 *, -8);
    var_r3  = 0;
    *arg2   = 0;
    switch (temp_r0) {                              /* irregular */
        case 42:
            if (data_020de119 != 0) {
                var_r3 = 1;
            }
            *arg2 = var_r3;
            break;
        case 41:
            if (data_020de119 == 1) {
                var_r3 = 1;
            }
            *arg2 = var_r3;
            break;
        case 43:
            if (data_020de118 == 1) {
                var_r3 = 1;
            }
            *arg2 = var_r3;
            break;
    }
    return arg1;
}
