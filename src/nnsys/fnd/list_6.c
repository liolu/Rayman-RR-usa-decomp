#include "m2c.h"

void NNS_FndInitList(void *arg0, s16 arg1) {
    M2C_FIELD(arg0, s32 *, 0)   = 0;
    M2C_FIELD(arg0, s32 *, 4)   = 0;
    M2C_FIELD(arg0, s16 *, 8)   = 0;
    M2C_FIELD(arg0, s16 *, 0xA) = arg1;
}
