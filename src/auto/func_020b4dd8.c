/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b4d34(void *);
void func_020b5708(void *, s32, s32);

void func_020b4dd8(void *arg0, s32 arg1) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) == 0) {
        func_020b4d34(arg0);
        return;
    }
    if (arg1 == 0) {
        func_020b4d34(arg0);
        return;
    }
    func_020b5708(arg0 + 0xE8, 0, arg1);
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) (M2C_FIELD(arg0, s32 *, 0x110) | 8);
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
}
