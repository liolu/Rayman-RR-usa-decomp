#include "m2c.h"

extern M2C_UNK data_020bd564;
extern M2C_UNK data_020de1fc;
extern s32 data_020de210;
extern s32 data_020de218;

void func_020735c0(s32 arg0, s32 *arg1) {
    data_020de210 = 0;
    if (arg0 != 0) {
        return;
    }
    if ((arg1 != &data_020de1fc) && (arg1 != &data_020bd564)) {
        return;
    }
    data_020de218 = *arg1;
}
