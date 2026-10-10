#include "m2c.h"

s32 *func_0205488c(M2C_UNK);                        /* extern */

s32 *func_02035e28(s32 arg0) {
    s32 *temp_r0;
    s32 *temp_r0_2;

    switch (arg0) {                                 /* irregular */
        case 0:
            temp_r0  = func_0205488c(0x10);
            *temp_r0 = 0;
            return temp_r0;
        case 1:
            temp_r0_2  = func_0205488c(0x3C);
            *temp_r0_2 = 1;
            return temp_r0_2;
        default:
            return NULL;
    }
}
