#include "m2c.h"

s32 func_0201e508(M2C_UNK);
M2C_UNK func_02022930();
M2C_UNK func_020230b8(M2C_UNK *);
M2C_UNK func_02023ca0();
s32 func_02024a04(M2C_UNK);
M2C_UNK func_02024e00(M2C_UNK *);
s32 func_02027514(M2C_UNK);
M2C_UNK NNS_SndInit();
extern s32 data_020c4a4c;
extern s32 data_020c4bf8;
extern s32 data_020c4bfc;

typedef struct {
    u8 unk0[8];
    s32 unk8;
    u8 unkC[0xC];
    s32 unk18;
    u8 unk1C[4];
} T020c4c00;

extern T020c4c00 data_020c4c00[64];

s32 func_02021928(M2C_UNK arg0) {
    u8 sp0[8];
    s32 i;

    NNS_SndInit();
    for (i = 0; i < 0x40; i++) {
        data_020c4c00[i].unk8  = 1;
        data_020c4c00[i].unk18 = 0;
    }
    data_020c4bfc = func_02024a04(arg0);
    func_020230b8(sp0);
    func_02024e00(sp0);
    data_020c4bf8 = func_0201e508(arg0);
    data_020c4a4c = func_02027514(arg0);
    func_02022930();
    func_02023ca0();
    return 3;
}
