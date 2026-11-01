#include "m2c.h"

void func_01ff84a0(void *arg0, void *arg1);

void func_0206f95c(s32 *arg0) {
    s32 t[3];

    t[0] = arg0[0];
    t[1] = arg0[1];
    t[2] = arg0[2];
    func_01ff84a0(t, t);
    arg0[0] = t[0];
    arg0[1] = t[1];
    arg0[2] = t[2];
}
