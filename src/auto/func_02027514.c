#include "m2c.h"

s32 func_0201d264(M2C_UNK, M2C_UNK);
M2C_UNK func_02027368();
s32 func_020b389c(M2C_UNK *, M2C_UNK *, s32, M2C_UNK);
s32 NNS_SndHeapCreate(M2C_UNK *, M2C_UNK);
s32 NNS_SndArcPlayerSetup(s32);
M2C_UNK func_020b5388(M2C_UNK *);
M2C_UNK func_020b5598(M2C_UNK, s32);
extern M2C_UNK data_020bc518;
extern M2C_UNK data_020c57b4;
extern M2C_UNK data_020c57d0;
extern s32 data_020c57d4;
extern M2C_UNK data_020c57d8;
extern M2C_UNK data_020c586c;

s32 func_02027514(void) {
    s32 temp_r0;
    s32 temp_r0_2;

    temp_r0                                = func_0201d264(2, 0x54);
    M2C_FIELD(&data_020c57b4, s32 *, 0xC)  = temp_r0;
    M2C_FIELD(&data_020c57b4, s32 *, 0x10) = temp_r0;
    func_02027368();
    temp_r0_2     = NNS_SndHeapCreate(&data_020c586c, 0x1800);
    data_020c57d4 = temp_r0_2;
    if (temp_r0_2 == 0) {
        return 2;
    }
    if (func_020b389c(&data_020c57d8, &data_020bc518, temp_r0_2, 0) == 0) {
        return 2;
    }
    if (NNS_SndArcPlayerSetup(data_020c57d4) == 0) {
        return 2;
    }
    func_020b5598(0xA, data_020c57d4);
    func_020b5388(&data_020c57d0);
    return 3;
}
