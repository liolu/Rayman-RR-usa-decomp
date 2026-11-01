#include "m2c.h"

extern void func_0204202c(s32 arg0);

void func_0202fd1c(s32 arg0, s32 arg1, u8 *arg2) {
    s32 *temp = (s32 *) (arg2 + arg0 * 0x10);
    func_0204202c(*temp);
    *temp = -1;
}
