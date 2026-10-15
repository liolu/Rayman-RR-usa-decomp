#include "m2c.h"

s32 PM_SetLCDPower(M2C_UNK);
M2C_UNK func_0200ff94(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0205332c(M2C_UNK);
extern M2C_UNK data_020de1fc;

void func_02073648(void) {
    if (((s32) (*(u16 *) 0x027FFFA8 & 0x8000) >> 0xF) != 0) {
        if (M2C_FIELD(&data_020de1fc, s32 *, 0xC) != 0) {
            func_0200ff94(0xC, 0, 0);
            return;
        }
        if (M2C_FIELD(&data_020de1fc, s32 *, 8) == 1) {
            return;
        }
        PM_SetLCDPower(0);
        M2C_FIELD(&data_020de1fc, s32 *, 8) = 1;
        return;
    }
    if (M2C_FIELD(&data_020de1fc, s32 *, 8) != 1) {
        return;
    }
    do {

    } while (PM_SetLCDPower(1) == 0);
    M2C_FIELD(&data_020de1fc, s32 *, 8) = 0;
    func_0205332c(1);
}
