#include "m2c.h"

extern s32 func_02084450(s32 arg0, s32 arg1, s32 *arg2);
extern void func_0205eaf0(s32 arg0, s32 arg1, s32 arg2);

s32 func_020a2f54(s32 arg0, s32 arg1) {
    s32 temp[4];
    s32 x1;
    s32 x2;
    s32 t1;
    s32 t2;
    s32 ret;

    x1  = func_02084450(arg0, arg1, &temp[0]);
    t1  = temp[0];
    x2  = func_02084450(arg0, x1, &temp[0]);
    t2  = temp[0];
    ret = func_02084450(arg0, x2, &temp[0]);
    func_0205eaf0(t1, t2, temp[0]);
    return ret;
}
