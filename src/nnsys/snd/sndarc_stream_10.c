/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b4d34(void *);
void NNSi_SndFaderSet(void *, s32, s32);

void StopStrm(void *arg0, s32 arg1) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1E) >> 0x1F) == 0) {
        func_020b4d34(arg0);
        return;
    }
    if (arg1 == 0) {
        func_020b4d34(arg0);
        return;
    }
    NNSi_SndFaderSet(arg0 + 0xE8, 0, arg1);
    M2C_FIELD(arg0, s32 *, 0x110) = (s32) (M2C_FIELD(arg0, s32 *, 0x110) | 8);
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
}
