#include "m2c.h"

M2C_UNK MIC_StopAutoSampling();
extern M2C_UNK data_020de26c;

void func_02073b54(void) {
    MIC_StopAutoSampling();
    M2C_FIELD(&data_020de26c, s32 *, 8) = 0;
}
