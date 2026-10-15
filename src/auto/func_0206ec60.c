#include "m2c.h"

M2C_UNK DC_FlushRange(M2C_UNK *, M2C_UNK);
M2C_UNK func_0200eb98();
M2C_UNK FS_ReadFile(M2C_UNK *, M2C_UNK *, M2C_UNK);
s32 FS_OpenFile(M2C_UNK *, M2C_UNK *);
M2C_UNK FS_InitFile(M2C_UNK *);
extern M2C_UNK data_020bd464;
extern M2C_UNK data_020bd470;
extern s32 data_020ddd38;
extern M2C_UNK data_020ddd3c;
extern M2C_UNK data_020ddd40;
extern M2C_UNK data_020ddd88;

void func_0206ec60(void) {
    FS_InitFile(&data_020ddd88);
    if (FS_OpenFile(&data_020ddd88, &data_020bd464) == 0) {
        func_0200eb98();
    }
    FS_InitFile(&data_020ddd40);
    if (FS_OpenFile(&data_020ddd40, &data_020bd470) != 0) {
        data_020ddd38 = M2C_FIELD(&data_020ddd88, s32 *, 0x28) - M2C_FIELD(&data_020ddd88, s32 *, 0x24);
    }
    DC_FlushRange(&data_020ddd3c, 4);
    FS_ReadFile(&data_020ddd88, &data_020ddd3c, 4);
}
