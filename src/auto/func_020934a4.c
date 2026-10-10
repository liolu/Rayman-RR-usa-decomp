#define M2C_SELF_func_020934a4
#include "m2c_protos.h"

s32 func_01ff8668(s32);                             /* extern */

s32 func_020934a4(void *arg0, void *arg1) {
    s32 *temp_r0;
    s32 temp_r0_2;

    temp_r0                     = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 **, 8);
    M2C_FIELD(arg1, s32 *, 0xC) = 8;
    if (temp_r0 != NULL) {
        temp_r0_2 = func_02067900(temp_r0);
        if (temp_r0_2 != 0) {
            M2C_FIELD(arg1, s32 *, 0) = func_01ff8668(temp_r0_2 + 0x3C);
            return 1;
        }
    }
    M2C_FIELD(arg1, s32 *, 0) = 0;
    return 1;
}
