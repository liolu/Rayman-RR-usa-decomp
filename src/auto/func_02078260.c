#include "m2c.h"

void DC_FlushRange(void *arg0, u32 arg1);
void func_020170dc(void *arg0, s32 arg1, u32 arg2);

void func_02078260(s32 *arg0, s32 arg1) {
    DC_FlushRange((void *) arg0[arg1 + 6], arg0[8]);
    func_020170dc((void *) arg0[arg1 + 6], 0, arg0[8]);
}
