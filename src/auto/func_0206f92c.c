#include "m2c.h"

void func_01ff8668(void *arg0);

void func_0206f92c(s32 *arg0) {
    s32 t[3];

    t[0] = arg0[0];
    t[1] = arg0[1];
    t[2] = arg0[2];
    func_01ff8668(&t[0]);
}
