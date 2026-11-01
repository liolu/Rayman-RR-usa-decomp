#include "m2c.h"

extern s32 func_02084450(s32 arg0, s32 arg1, s32 *arg2);
extern void func_0204a024(s32 arg0, s32 arg1);

s32 func_020a38f4(s32 arg0, s32 arg1) {
    s32 temp[4];
    s32 kind;
    s32 t1;
    s32 ret;

    kind = *(s32 *) (arg1 - 8);
    ret  = func_02084450(arg0, arg1, &temp[0]);
    t1   = temp[0];
    if (kind != 0xF6) {
        return ret;
    }
    ret = func_02084450(arg0, ret, &temp[0]);
    func_0204a024(t1, temp[0] & 0xFF);
    return ret;
}
