#include "m2c.h"

extern s32 func_02084450(s32 arg0, s32 arg1, s32 *arg2);
extern void func_02073810(s32 arg0, s32 arg1);

s32 func_020a5854(s32 arg0, s32 arg1) {
    s32 temp[4];
    s32 old;
    s32 ret;
    s32 x;

    x   = func_02084450(arg0, arg1, &temp[0]);
    old = temp[0];
    ret = func_02084450(arg0, x, &temp[0]);
    func_02073810(old, temp[0]);
    return ret;
}
