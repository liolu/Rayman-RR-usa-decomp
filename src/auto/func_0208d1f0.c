#include "m2c.h"

void *func_02067900();
extern M2C_UNK data_020dd7a4;

s32 func_0208d1f0(void *arg0, s32 *arg1) {
    s32 temp_r1_2;
    void *temp_r0;
    void *temp_r1;

    if (arg1 != NULL) {
        *arg1 = 0;
    }
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8) == 0) {
        return 0;
    }
    temp_r0 = func_02067900();
    if (temp_r0 == NULL) {
        return 0;
    }
    temp_r1 = M2C_FIELD(temp_r0, void **, 0x168);
    if (temp_r1 == NULL) {
        return 0;
    }
    temp_r1_2 = M2C_FIELD(temp_r1, s32 *, 0x120);
    if (temp_r1_2 > (s32) M2C_FIELD(&data_020dd7a4, s32 *, 0x28)) {
        if (arg1 != NULL) {
            *arg1 = temp_r1_2;
        }
        return 1;
    }
    return 0;
}
