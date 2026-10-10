#include "m2c.h"

extern M2C_UNK data_020c0fc4;

s32 func_0200ebac(s32 arg0) {
    return M2C_FIELD(&data_020c0fc4, u16 *, 0x34) & arg0;
}
