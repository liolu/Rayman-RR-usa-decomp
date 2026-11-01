#include "m2c.h"

extern s32 func_02084450(s32 arg0, s32 arg1, s32 *arg2);
extern s32 func_0206b3c4(s32 arg0);

s32 func_0209bb0c(s32 arg0, s32 arg1, s32 *arg2) {
    s32 temp[4];
    s32 ret;

    ret   = func_02084450(arg0, arg1, &temp[0]);
    *arg2 = func_0206b3c4(((s32 *) temp[0])[1]);
    return ret;
}
