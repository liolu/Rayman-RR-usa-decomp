#include "m2c.h"

s32 func_020110f0(s32);                             /* extern */
M2C_UNK func_02052e64(M2C_UNK, u8, s16);            /* extern */
extern M2C_UNK data_020dc19c;
extern M2C_UNK data_020dc29c;

void func_020478b0(void) {
    if (func_020110f0(0x901) != 0) {
        return;
    }
    func_02052e64(0, M2C_FIELD(&data_020dc19c, u8 *, 0xC7C), M2C_FIELD(&data_020dc29c, s16 *, 0x38));
}
