#include "m2c.h"

M2C_UNK func_02000f58(M2C_UNK *, M2C_UNK *, M2C_UNK *, s32); /* extern */
extern M2C_UNK data_020bcae0;
extern M2C_UNK data_020bcaf4;
extern M2C_UNK data_020bcb1c;
extern M2C_UNK data_020bcb24;
extern M2C_UNK data_020bcb44;
extern M2C_UNK data_020dbb38;

s32 func_020520d4(s32 arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= 1)) {
        func_02000f58(&data_020bcaf4, &data_020bcb1c, &data_020bcae0, 0x102);
    }
    if (*((M2C_UNK *) ((s8 *) &data_020dbb38 + (arg1 * 4))) == 0) {
        func_02000f58(&data_020bcb24, &data_020bcb44, &data_020bcae0, 0x103);
    }
    return 1;
}
