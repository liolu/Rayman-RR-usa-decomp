#include "m2c.h"

extern u16 data_020dfe60;
extern u16 data_020dfe70;

void func_0207bccc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, void *arg4);

void func_0207be58(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u16 *arg4) {
    arg4[0]       = 0;
    data_020dfe60 = 0;
    data_020dfe70 = 0;
    if (arg0 == 0) {
        return;
    }
    func_0207bccc(*(s32 *) arg0, arg1, arg2, arg3, arg4);
}
