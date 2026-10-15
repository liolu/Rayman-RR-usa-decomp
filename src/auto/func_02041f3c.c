#include "m2c.h"

M2C_UNK memset(M2C_UNK *, M2C_UNK, M2C_UNK);
s32 func_0200d798(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK OS_SetArenaLo(M2C_UNK, s32);
s32 OS_GetArenaLo(M2C_UNK);
s32 OS_GetArenaHi(M2C_UNK);
s32 func_0200dc04(M2C_UNK, s32, s32);
s32 func_0200dca4(M2C_UNK, s32, s32, M2C_UNK);
M2C_UNK func_0200dd60(M2C_UNK, s32);
extern s32 data_020cfa84;
extern s32 data_020cfa88;
extern s32 data_020cfa8c;
extern M2C_UNK data_020cfa90;

void func_02041f3c(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r5;

    temp_r4 = OS_GetArenaLo(0);
    OS_SetArenaLo(0, func_0200dca4(0, temp_r4, OS_GetArenaHi(0), 2));
    temp_r0       = func_0200d798(0, 0x3A000, 8);
    data_020cfa8c = func_0200dc04(0, temp_r0, temp_r0 + 0x3A000);
    temp_r5       = OS_GetArenaLo(0);
    temp_r0_2     = OS_GetArenaHi(0);
    data_020cfa88 = func_0200dc04(0, temp_r5, temp_r0_2);
    func_0200dd60(0, data_020cfa8c);
    memset(&data_020cfa90, 0, 0x1E4);
    M2C_FIELD(&data_020cfa90, s32 *, 0)     = temp_r5;
    M2C_FIELD(&data_020cfa90, s32 *, 4)     = (s32) (temp_r5 + 0xFF);
    M2C_FIELD(&data_020cfa90, s16 *, 8)     = 6;
    M2C_FIELD(&data_020cfa90, s16 *, 0xA)   = 1;
    M2C_FIELD(&data_020cfa90, s32 *, 0x1E0) = 1;
    data_020cfa84                           = temp_r0_2;
}
