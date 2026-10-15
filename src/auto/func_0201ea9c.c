#include "m2c.h"

typedef struct {
    M2C_UNK *p;
} M2C_REF;

M2C_UNK SND_SetTrackMute(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK SND_SetPlayerVolume(M2C_UNK, s16);
M2C_UNK SND_StopSeq(M2C_UNK);
M2C_UNK SND_StartSeq(M2C_UNK, s32, M2C_UNK, s32);
s32 SND_GetPlayerStatus();
s32 func_0201ecb0(M2C_REF);
M2C_UNK func_0201fc34();
extern M2C_UNK data_020bb604;
extern M2C_UNK data_020c4a64;
extern s32 data_020c4a8c;

void func_0201ea9c(void) {
    M2C_REF sp0;

    if (SND_GetPlayerStatus() & 1) {
        return;
    }
    sp0.p = (M2C_UNK *) M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 **, 0x44);
    if (M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x10) != 0) {
        if (*sp0.p == M2C_FIELD(&data_020c4a64, s32 *, 0x18)) {
            if (SND_GetPlayerStatus() & 1) {
                SND_StopSeq(0);
                func_0201fc34();
            }
            M2C_FIELD(&data_020c4a64, void **, 0x24) = NULL;
        }
        M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x10) = 0;
    }
    if ((func_0201ecb0(sp0) != 0) && (data_020c4a8c != 0) && (M2C_FIELD(&data_020c4a64, s32 *, 0x14) != 0)) {
        SND_StartSeq(0, data_020c4a8c, 0, M2C_FIELD(&data_020c4a64, s32 *, 0x10));
        func_0201fc34();
        SND_SetPlayerVolume(
            0, ((s16 *) &data_020bb604)[((s16) M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s16 *, 0x3E) >> 8)]);
        SND_SetTrackMute(0, M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), u16 *, 0x40), 1);
        SND_SetTrackMute(0, ~M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), u16 *, 0x40), 0);
        M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x10) = 1;
        M2C_FIELD(&data_020c4a64, void **, 0x24)                         = (void *) M2C_FIELD(&data_020c4a64, void **, 0x20);
    }
    if (M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x4C) != 0) {
        return;
    }
    M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), M2C_UNK(**)(s32),
              0x24)(M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x28));
}
