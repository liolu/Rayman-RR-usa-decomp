#include "m2c.h"

extern s32 data_020c49d8;

u8 func_0201c984(void *arg0) {
    s32 t;
    t = M2C_FIELD(arg0, s32 *, 0x28);
    return (t == data_020c49d8) || (t == -1);
}