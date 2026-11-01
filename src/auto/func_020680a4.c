#include "m2c.h"

void func_0206808c(void *arg0, s32 *arg1);

void func_020680a4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 buf[4];

    buf[0] = arg1;
    buf[1] = arg2;
    buf[2] = arg3;
    buf[3] = arg4;
    func_0206808c(arg0, buf);
}
