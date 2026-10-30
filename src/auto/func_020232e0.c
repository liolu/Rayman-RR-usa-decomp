/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

s32 func_020223fc(M2C_UNK, s32);                    /* extern */
extern s32 data_020bc23c;

void func_020232e0(s32 arg0) {
    if (arg0 == 0) {
        data_020bc23c = 0;
        return;
    }
    data_020bc23c = func_020223fc(0x012C0000, arg0) >> 0x10;
}
