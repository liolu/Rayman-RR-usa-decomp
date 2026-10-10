/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02016228(M2C_UNK, M2C_UNK);
void func_0201628c(void *, s8, s32, s32);

void func_02016178(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_0201628c((void *) arg0, 0x23, (u16) arg1 | ((u16) arg2 << 0x10), (s32) (u16) arg3);
    func_02016228(arg0, 2);
}
