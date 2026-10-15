#include "m2c.h"

M2C_UNK SND_StopSeq(M2C_UNK);
s32 SND_GetPlayerStatus();
M2C_UNK SND_DestroyWaveArc();
M2C_UNK func_0201fc34();
extern M2C_UNK data_020c4a64;

void func_0201e444(s32 arg0) {
    if (SND_GetPlayerStatus() & 1) {
        SND_StopSeq(0);
        func_0201fc34();
    }
    if ((M2C_FIELD(&data_020c4a64, s32 *, 0x14) != 0) && (arg0 != 0)) {
        SND_DestroyWaveArc();
        func_0201fc34();
        M2C_FIELD(&data_020c4a64, s32 *, 0x14) = 0;
    }
    M2C_FIELD(&data_020c4a64, s32 *, 0x24) = 0;
}
