/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02014240(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020143a0(void *);

s32 func_02014174(s32 arg0, s32 arg1) {
    u8 sp0[76];

    func_020143a0(sp0);
    if (func_02014240((s32) sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
