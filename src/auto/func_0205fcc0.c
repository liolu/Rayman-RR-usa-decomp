#include "m2c.h"

extern M2C_UNK data_020dc19c;

s32 func_0205fcc0(s32 arg0) {
    if ((arg0 > 2) || (arg0 == 0)) {
        return 0;
    }
    return M2C_FIELD(&data_020dc19c, s32 *, 0x208) + ((arg0 - 1) * 0x10);
}
