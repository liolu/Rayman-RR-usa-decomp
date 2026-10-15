#include "m2c.h"

extern M2C_UNK micWork;

void MicGetResultCallback(s32 arg0) {
    M2C_FIELD(&micWork, s32 *, 0xC) = arg0;
}
