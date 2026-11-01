#include "m2c.h"

extern u8 data_020bc0e4[];

void func_02021d10(u32 *arg0) {
    void (*fn)(u32);
    fn = *(void (**)(u32))(data_020bc0e4 + *(s32 *) ((u8 *) arg0[1] + 4) * 0x18);
    fn(*arg0);
}
