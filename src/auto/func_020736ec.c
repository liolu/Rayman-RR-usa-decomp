#include "m2c.h"

s32 PM_SetBackLightAsync(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *);
extern M2C_UNK data_020bd564;
extern M2C_UNK data_020de1fc;
extern s32 data_020de210;
extern s32 data_020de218;
extern M2C_UNK func_020735c0;

void func_020736ec(void) {
    if (data_020de210 != 0) {
        return;
    }
    if (data_020de218 == 1) {
        data_020de210 = 1;
        if (PM_SetBackLightAsync(0, 0, &func_020735c0, &data_020de1fc) == 0) {
            return;
        }
        data_020de210 = 0;
        return;
    }
    data_020de210 = 1;
    if (PM_SetBackLightAsync(0, 1, &func_020735c0, &data_020bd564) != 0) {
        data_020de210 = 0;
    }
}
