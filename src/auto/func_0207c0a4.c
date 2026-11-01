#include "m2c.h"

extern u16 data_020dfe60;
extern u16 data_020dfe70;

void func_0207be98(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, void *arg5);

void func_0207c0a4(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, u16 *arg5) {
    arg5[0]       = 0;
    data_020dfe60 = 0;
    data_020dfe70 = 0;
    if (arg0 == 0) {
        return;
    }
    func_0207be98(arg0[0], arg1, arg2, arg3, arg4, arg5);
}
