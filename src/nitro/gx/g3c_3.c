/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02016228(M2C_UNK, M2C_UNK);
void G3CS_Direct2(void *, s8, s32, s32);

void G3C_Vtx(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    G3CS_Direct2((void *) arg0, 0x23, (u16) arg1 | ((u16) arg2 << 0x10), (s32) (u16) arg3);
    func_02016228(arg0, 2);
}
