#include "m2c.h"

extern s32 data_020c49d8;

void func_0201c314(void) {
    s32 temp_r2;

    temp_r2       = data_020c49d8 + 1;
    data_020c49d8 = temp_r2;
    if (temp_r2 == -1) {
        data_020c49d8 = temp_r2 + 1;
    }
}
