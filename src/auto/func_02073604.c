#include "m2c.h"

extern M2C_UNK data_020bd564;
extern M2C_UNK data_020de1fc;
extern s32 data_020de20c;
extern s32 data_020de214;

void func_02073604(s32 arg0, s32 *arg1) {
    data_020de20c = 0;
    if (arg0 != 0) {
        return;
    }
    if ((arg1 != &data_020de1fc) && (arg1 != &data_020bd564)) {
        return;
    }
    data_020de214 = *arg1;
}
