#include "m2c.h"
void func_0207c2ec(s32 *arg0, s32 *arg1, s32 *arg2, s32 arg3, s32 *arg4, s32 *arg5) {
    s32 v;

    v = arg2[0] - arg3;
    if (v >= arg4[0]) {
        v = arg4[0];
    }
    arg0[0] = v;
    v       = arg2[1] - arg3;
    if (v >= arg4[1]) {
        v = arg4[1];
    }
    arg0[1] = v;
    v       = arg2[2] - arg3;
    if (v >= arg4[2]) {
        v = arg4[2];
    }
    arg0[2] = v;
    v       = arg2[0] + arg3;
    if (v <= arg5[0]) {
        v = arg5[0];
    }
    arg1[0] = v;
    v       = arg2[1] + arg3;
    if (v <= arg5[1]) {
        v = arg5[1];
    }
    arg1[1] = v;
    v       = arg2[2] + arg3;
    if (v <= arg5[2]) {
        v = arg5[2];
    }
    arg1[2] = v;
}
