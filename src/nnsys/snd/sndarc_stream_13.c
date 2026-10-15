#include "m2c.h"

void NNS_SndArcStrmStartPrepared(void **arg0) {
    void *temp_r1;

    temp_r1 = *arg0;
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 0x110) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x110) | 4);
    }
}
