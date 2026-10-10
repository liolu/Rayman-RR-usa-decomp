#include "m2c.h"

extern M2C_UNK data_020c5740;

void func_02025184(M2C_UNK arg0, void *arg1) {
    M2C_FIELD(arg1, s32 *, 0)    = M2C_FIELD(&data_020c5740, s32(**)(), 0xC)(arg0);
    M2C_FIELD(arg1, s32 *, 4)    = M2C_FIELD(&data_020c5740, s32(**)(M2C_UNK), 0x10)(arg0);
    M2C_FIELD(arg1, s32 *, 8)    = M2C_FIELD(&data_020c5740, s32(**)(M2C_UNK), 0x14)(arg0);
    M2C_FIELD(arg1, s32 *, 0xC)  = M2C_FIELD(&data_020c5740, s32(**)(M2C_UNK), 0x18)(arg0);
    M2C_FIELD(arg1, s32 *, 0x10) = M2C_FIELD(&data_020c5740, s32(**)(M2C_UNK), 0x1C)(arg0);
    M2C_FIELD(arg1, s32 *, 0x14) = M2C_FIELD(&data_020c5740, s32(**)(M2C_UNK), 0x20)(arg0);
    M2C_FIELD(arg1, s32 *, 0x18) = M2C_FIELD(&data_020c5740, s32(**)(M2C_UNK), 0x24)(arg0);
    M2C_FIELD(arg1, s32 *, 0x1C) = M2C_FIELD(&data_020c5740, s32(**)(M2C_UNK), 0x28)(arg0);
    M2C_FIELD(arg1, s32 *, 0x20) = M2C_FIELD(&data_020c5740, s32(**)(M2C_UNK), 0x2C)(arg0);
    M2C_FIELD(arg1, s32 *, 0x24) = M2C_FIELD(&data_020c5740, s32(**)(M2C_UNK), 0x30)(arg0);
    M2C_FIELD(arg1, s32 *, 0x28) = M2C_FIELD(&data_020c5740, s32(**)(M2C_UNK), 0x34)(arg0);
    M2C_FIELD(arg1, s32 *, 0x2C) = M2C_FIELD(&data_020c5740, s32(**)(M2C_UNK), 0x38)(arg0);
    if ((M2C_FIELD(arg1, s32 *, 0x18) == 0) && (M2C_FIELD(arg1, s32 *, 0x1C) == 0) && (M2C_FIELD(arg1, s32 *, 0x20) == 0)) {
        M2C_FIELD(arg1, s32 *, 0x18) = 0x10000;
    }
    if ((M2C_FIELD(arg1, s32 *, 0x24) == 0) && (M2C_FIELD(arg1, s32 *, 0x28) == 0) && (M2C_FIELD(arg1, s32 *, 0x2C) == 0)) {
        M2C_FIELD(arg1, s32 *, 0x28) = 0x10000;
    }
}
