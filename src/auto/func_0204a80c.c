#include "m2c.h"

M2C_UNK func_02016508(M2C_UNK *);
M2C_UNK G3X_SetFog(M2C_UNK, M2C_UNK, s32, s32);
M2C_UNK MI_WaitDma(M2C_UNK);
extern M2C_UNK data_020db928;
extern u16 data_020db954;
extern M2C_UNK data_020db958;
extern s32 data_020db978;
extern s32 data_020db97c;
extern s32 data_020db980;

void func_0204a80c(void) {
    if (M2C_FIELD(&data_020db928, s32 *, 8) == 0) {
        return;
    }
    MI_WaitDma(0);
    G3X_SetFog(1, 0, data_020db97c, data_020db978);
    func_02016508(&data_020db958);
    *(s32 *) 0x04000358                 = data_020db954 | (data_020db980 << 0x10);
    M2C_FIELD(&data_020db928, s32 *, 8) = 0;
}
