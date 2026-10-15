#include "m2c.h"

M2C_UNK TP_CheckError(M2C_UNK);
M2C_UNK TP_WaitBusy(M2C_UNK);
M2C_UNK func_0200f10c(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK);
M2C_UNK func_0200f220(M2C_UNK *);
s32 func_0200f368(M2C_UNK *);
M2C_UNK TP_Init();
extern M2C_UNK data_020de110;
extern s32 data_020de128;
extern s32 data_020de12c;
extern M2C_UNK data_020de130;
extern M2C_UNK data_020de138;
extern M2C_UNK data_020de140;
extern s32 data_020de150;
extern M2C_UNK data_020de174;

void func_02073100(void) {
    u8 sp0[8];

    data_020de150 = 0;
    TP_Init();
    if (func_0200f368(sp0) != 0) {
        func_0200f220(sp0);
    }
    M2C_FIELD(&data_020de140, s32 *, 0) = 0;
    M2C_FIELD(&data_020de140, s32 *, 4) = 0;
    M2C_FIELD(&data_020de130, s32 *, 0) = 0x40;
    M2C_FIELD(&data_020de130, s32 *, 4) = 0x60;
    M2C_FIELD(&data_020de138, s32 *, 0) = 0;
    M2C_FIELD(&data_020de138, s32 *, 4) = 0;
    data_020de128                       = 0;
    data_020de12c                       = 0x20;
    func_0200f10c(0x60, 4, &data_020de174, 0x10);
    TP_WaitBusy(2);
    TP_CheckError(2);
    M2C_FIELD(&data_020de110, s32 *, 0) = 0;
    M2C_FIELD(&data_020de110, s32 *, 4) = 0;
}
