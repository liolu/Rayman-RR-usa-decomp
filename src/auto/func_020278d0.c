#include "m2c.h"

M2C_UNK func_0201fc34();
M2C_UNK NNS_SndArcStrmStart(M2C_UNK *, s32, s32);
extern M2C_UNK data_020c57b4;
extern s32 data_020c57cc;
extern M2C_UNK data_020c57d0;

void func_020278d0(void) {
    if (M2C_FIELD(&data_020c57b4, s32 *, 0) == 0) {
        return;
    }
    NNS_SndArcStrmStart(&data_020c57d0, data_020c57cc, M2C_FIELD(&data_020c57b4, s32 *, 4));
    func_0201fc34();
    M2C_FIELD(&data_020c57b4, s32 *, 0)                             = 0;
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0xC) = 0;
    M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x18) =
        (s32) M2C_FIELD(M2C_FIELD(&data_020c57b4, void **, 0x10), s32 *, 0x1C);
}
