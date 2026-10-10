#include "m2c.h"

M2C_UNK func_02001588(M2C_UNK, s32, M2C_UNK);       /* extern */
extern M2C_UNK data_020dbb38;

s32 func_02052590(s32 arg0, M2C_UNK arg1) {
    func_02001588(arg1, *((M2C_UNK *) ((s8 *) &data_020dbb38 + (arg0 * 4))), 0x38);
    return 1;
}
