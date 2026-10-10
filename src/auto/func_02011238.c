#include "m2c.h"

extern void *data_020c1100;

s32 func_02011238(void) {
    return M2C_FIELD(data_020c1100, s32 *, 0x1C);
}
