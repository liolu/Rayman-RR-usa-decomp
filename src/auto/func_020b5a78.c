/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void *func_020b5bec(void *, M2C_UNK, s32);

void *func_020b5a78(s32 arg0, s32 arg1, s32 arg2) {
    u32 temp_r0;
    u32 temp_r1;

    temp_r1 = (arg1 + arg0) & ~3;
    temp_r0 = (arg0 + 3) & ~3;
    if ((temp_r0 > temp_r1) || ((u32) (temp_r1 - temp_r0) < 0x30U)) {
        return NULL;
    }
    return func_020b5bec((void *) temp_r0, (s32) temp_r1, arg2);
}
