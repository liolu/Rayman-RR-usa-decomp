#include "engine.h"
#include "m2c.h"

void SND_SetTrackMute(M2C_UNK, M2C_UNK, s32);
void SND_SetPlayerVolume(M2C_UNK, M2C_UNK);
void SND_StartSeq(M2C_UNK, M2C_UNK, M2C_UNK, s32);
void func_0201fc34(void);

extern M2C_UNK data_020bb604;
extern M2C_UNK data_020c4a64;
extern s32 data_020c4a8c;
extern M2C_UNK func_0201e880;

void func_0201e748(void) {
    if ((data_020c4a8c != 0) && (M2C_FIELD(&data_020c4a64, s32 *, 0x14) != 0)) {
        SND_StartSeq(0, data_020c4a8c, 0, M2C_FIELD(&data_020c4a64, s32 *, 0x10));
        func_0201fc34();
        SND_SetPlayerVolume(
            0, (s32) ((s16 *) &data_020bb604)[((s16) M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s16 *, 0x3E) >> 8)]);
        SND_SetTrackMute(0, (s32) M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), u16 *, 0x40), 1);
        SND_SetTrackMute(0, (s32) ~M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), u16 *, 0x40), 0);
        M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), s32 *, 0x10) = 1;
        M2C_FIELD(&data_020c4a64, void **, 0x24)                         = (void *) M2C_FIELD(&data_020c4a64, void **, 0x20);
    }
    M2C_FIELD(M2C_FIELD(&data_020c4a64, void **, 0x20), M2C_UNK **, 0x18) = &func_0201e880;
}
