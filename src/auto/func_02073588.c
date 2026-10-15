#include "m2c.h"

M2C_UNK PM_GetBackLight(M2C_UNK *, M2C_UNK *);
extern s32 data_020de20c;
extern s32 data_020de210;
extern M2C_UNK data_020de214;
extern M2C_UNK data_020de218;

void func_02073588(void) {
    PM_GetBackLight(&data_020de218, &data_020de214);
    data_020de210 = 0;
    data_020de20c = 0;
}
