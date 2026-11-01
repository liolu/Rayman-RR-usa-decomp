#include "m2c.h"

extern s32 data_020bc96c;
extern s32 data_020bc970;
extern M2C_UNK data_020dba6c;

void func_02050e7c(s32 arg0) {
    if (arg0 != 0) {
        data_020bc96c = 0x2000;
        data_020bc970 = 0x400000;
    } else {
        data_020bc96c = 0x1000;
        data_020bc970 = 0x100000;
    }
    M2C_FIELD(&data_020dba6c, s32 *, 0x18) = 1;
}
