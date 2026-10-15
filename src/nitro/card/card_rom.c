#include "m2c.h"

extern M2C_UNK func_02011824;
M2C_UNK func_02010ab4();

M2C_UNK *CARDi_GetRomAccessor(void) {
    return &func_02011824;
}

void CARD_WaitRomAsync(void) {
    func_02010ab4();
}
