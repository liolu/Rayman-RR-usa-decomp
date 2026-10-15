#include "m2c.h"

M2C_UNK func_02000f58(M2C_UNK *, M2C_UNK *, M2C_UNK *, s32);
extern M2C_UNK data_020bcb4c;
extern M2C_UNK data_020bcb60;
extern M2C_UNK data_020bcb88;
extern M2C_UNK data_020bcb90;
extern M2C_UNK data_020bcbb0;
extern M2C_UNK data_020dbb38;

s32 func_02052148(s32 arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= 1)) {
        func_02000f58(&data_020bcb60, &data_020bcb88, &data_020bcb4c, 0x13A);
    }
    if (*((M2C_UNK *) ((s8 *) &data_020dbb38 + (arg1 * 4))) == 0) {
        func_02000f58(&data_020bcb90, &data_020bcbb0, &data_020bcb4c, 0x13B);
    }
    return 1;
}
