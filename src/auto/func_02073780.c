#include "m2c.h"

s32 PM_SetBackLightAsync(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *);
extern M2C_UNK data_020bd564;
extern M2C_UNK data_020de1fc;
extern s32 data_020de20c;
extern s32 data_020de214;
extern M2C_UNK func_02073604;

void func_02073780(void) {
    if (data_020de20c != 0) {
        return;
    }
    if (data_020de214 == 1) {
        data_020de20c = 1;
        if (PM_SetBackLightAsync(1, 0, &func_02073604, &data_020de1fc) == 0) {
            return;
        }
        data_020de20c = 0;
        return;
    }
    data_020de20c = 1;
    if (PM_SetBackLightAsync(1, 1, &func_02073604, &data_020bd564) != 0) {
        data_020de20c = 0;
    }
}
