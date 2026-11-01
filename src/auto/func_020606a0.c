#include "m2c.h"

extern s32 *func_02066da0(void *arg0, s32 arg1);

s32 func_020606a0(void *arg0, s32 arg1, s32 arg2) {
    s32 *temp = func_02066da0(arg0, arg2);
    return ((s32 *) *temp)[arg1];
}
