/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b5708(void *, s32, s32);

void func_020b5394(void **arg0, s32 arg1, s32 arg2) {
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 == NULL) {
        return;
    }
    if (((s32) (M2C_FIELD(temp_r3, s32 *, 0x110) << 0x1C) >> 0x1F) != 0) {
        return;
    }
    func_020b5708(temp_r3 + 0xE8, arg1 << 8, arg2);
}
