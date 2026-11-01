#include "m2c.h"

extern u32 data_020dc19c[];
extern s32 func_020823f0(s32 arg0, s32 arg1);

u8 func_020889d4(s32 arg0) {
    u32 a;

    a = func_020823f0(0, arg0);
    return *(u32 *) ((u8 *) data_020dc19c + 0x74) < a ? 1 : 4;
}
