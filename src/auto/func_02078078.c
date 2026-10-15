#include "m2c.h"

M2C_UNK func_02015158();
M2C_UNK GX_SetBankForSubOBJ();
M2C_UNK GX_SetBankForSubBG();

void func_02078078(void) {
    GX_SetBankForSubBG(0x80);
    GX_SetBankForSubOBJ(0x100);
    *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | 0x10;
    func_02015158(0);
    M2C_FIELD((void *) 0x04001008, u16 *, 0)    = (u16) (M2C_FIELD((void *) 0x04001008, u16 *, 0) & ~0x40);
    M2C_FIELD((void *) 0x04001008, u16 *, 0)    = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 0) & ~3) | 1);
    M2C_FIELD((void *) 0x04001008, u16 *, 2)    = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 2) & ~3) | 2);
    M2C_FIELD((void *) 0x04001008, s16 *, 0x48) = 0;
    M2C_FIELD((void *) 0x04001008, u16 *, 0)    = (u16) (M2C_FIELD((void *) 0x04001008, u16 *, 0) & ~0x40);
    M2C_FIELD((void *) 0x04001008, u16 *, 0x40) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 0x40) & ~0x3F) | 0x32);
    M2C_FIELD((void *) 0x04001008, u16 *, 0x42) = (u16) ((M2C_FIELD((void *) 0x04001008, u16 *, 0x42) & ~0x3F) | 0x31);
    *(M2C_UNK *) 0x04001000                     = (s32) ((*(M2C_UNK *) 0x04001000 & ~0x1F00) | 0x1300);
}
