#include "m2c.h"

M2C_UNK OS_DisableIrqMask(M2C_UNK);
s32 PM_GetLCDPower();
M2C_UNK func_02052c7c(M2C_UNK, u8, s16);
extern M2C_UNK data_020dc19c;
extern M2C_UNK data_020dc29c;
extern s32 data_020de204;

s32 func_02047840(void) {
    OS_DisableIrqMask(1);
    if ((data_020de204 == 1) || (PM_GetLCDPower() == 0)) {
        return 1;
    }
    func_02052c7c(1, M2C_FIELD(&data_020dc19c, u8 *, 0xC7C), M2C_FIELD(&data_020dc29c, s16 *, 0x38));
    return 1;
}
