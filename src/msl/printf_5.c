#include "m2c.h"

M2C_UNK vsnprintf(M2C_UNK, M2C_UNK, s32, s32);

void sprintf(M2C_UNK arg0, s32 arg1, ...) {
    vsnprintf(arg0, -1, arg1, ((s32) &arg1 & ~3) + 4);
}
