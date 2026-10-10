#include "m2c.h"

M2C_UNK func_0200c304(M2C_UNK);                     /* extern */
s32 func_0200fe68();                                /* extern */
M2C_UNK func_02052c7c(M2C_UNK, u8, s16);            /* extern */
extern M2C_UNK data_020dc19c;
extern M2C_UNK data_020dc29c;
extern s32 data_020de204;

s32 func_02047840(void) {
    func_0200c304(1);
    if ((data_020de204 == 1) || (func_0200fe68() == 0)) {
        return 1;
    }
    func_02052c7c(1, M2C_FIELD(&data_020dc19c, u8 *, 0xC7C), M2C_FIELD(&data_020dc29c, s16 *, 0x38));
    return 1;
}
