#include "m2c.h"

M2C_UNK func_0202e1e0(s32, s32 *);
void *func_0206984c();
void *func_0206b3c4(s32);

s32 func_020698b4(void) {
    s32 vals[3];

    func_0202e1e0(*(s32 *) ((u8 *) func_0206b3c4(*(s32 *) ((u8 *) func_0206984c() + 4)) + 0x24), vals);
    return vals[1] * 0x10;
}
