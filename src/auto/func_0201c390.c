#include "m2c.h"

extern s32 data_020c49d8;

void func_0201c390(s32 arg0) {
    if (arg0 != -1) {
        data_020c49d8 = arg0;
    } else {
        data_020c49d8 = arg0 + 1;
    }
}
