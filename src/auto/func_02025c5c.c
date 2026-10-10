#include "m2c.h"

extern M2C_UNK data_020c5740;
extern M2C_UNK data_020c5798;
extern M2C_UNK func_02025c44;
extern M2C_UNK func_02025c4c;
extern M2C_UNK func_02025c54;

void func_02025c5c(void) {
    M2C_FIELD(&data_020c5798, s32 *, 0)         = 0;
    M2C_FIELD(&data_020c5798, s32 *, 4)         = 0;
    M2C_FIELD(&data_020c5798, s32 *, 8)         = 0;
    M2C_FIELD(&data_020c5740, s32 *, 0)         = 0;
    M2C_FIELD(&data_020c5740, M2C_UNK **, 0xC)  = &func_02025c44;
    M2C_FIELD(&data_020c5740, M2C_UNK **, 0x10) = &func_02025c44;
    M2C_FIELD(&data_020c5740, M2C_UNK **, 0x14) = &func_02025c44;
    M2C_FIELD(&data_020c5740, M2C_UNK **, 0x18) = &func_02025c44;
    M2C_FIELD(&data_020c5740, M2C_UNK **, 0x1C) = &func_02025c44;
    M2C_FIELD(&data_020c5740, M2C_UNK **, 0x20) = &func_02025c44;
    M2C_FIELD(&data_020c5740, M2C_UNK **, 0x30) = &func_02025c4c;
    M2C_FIELD(&data_020c5740, M2C_UNK **, 0x34) = &func_02025c44;
    M2C_FIELD(&data_020c5740, M2C_UNK **, 0x38) = &func_02025c44;
    M2C_FIELD(&data_020c5740, M2C_UNK **, 0x24) = &func_02025c44;
    M2C_FIELD(&data_020c5740, M2C_UNK **, 0x28) = &func_02025c44;
    M2C_FIELD(&data_020c5740, M2C_UNK **, 0x2C) = &func_02025c4c;
    M2C_FIELD(&data_020c5740, M2C_UNK **, 0x3C) = &func_02025c54;
}
