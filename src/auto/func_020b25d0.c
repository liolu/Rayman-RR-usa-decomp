#include "m2c.h"

extern s32 data_020e9274;

void func_020b25d0(s32 arg0) {
    data_020e9274 &= ~(1 << arg0);
}
