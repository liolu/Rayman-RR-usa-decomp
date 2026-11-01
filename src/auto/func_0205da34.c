/* compiler: 2.0/sp1p5 -O2,p */
/* near start: 7 diffs with profile "2.0/sp1p5 -O2,p" */
#include "m2c.h"

void func_0207ac90(s32);
void func_0207ad9c(s32, u8, s32, s32, s32, s32, s32, s32);
extern s32 data_020bd160;
extern u8 data_020bd280;

void func_0205da34(u8 *arg0, s32 arg1) {
    u32 var_r6;
    u8 *var_r7;

    if (*(s32 *) arg0 != 0 && *(s32 *) (arg0 + 4) != 0) {
    } else {
        func_0207ac90(0);
        func_0207ad9c(0x30, data_020bd280, 0, 0xC, -1, 0xFF, 0xFF, 0);
    }
    if (**(s32 **) (arg0 + 4) == -1) {
        func_0207ad9c(0x30, data_020bd280, 0, 0x47, -1, 0, 0, 0);
        func_0207ac90(0);
    }
    var_r7 = (u8 *) &data_020bd160;
    var_r6 = 0;
    do {
        if (*(s32 *) (arg0 + var_r6 * 4) != 0) {
            (*(void (**)(void *, s32))(var_r7 + 0x14))(arg0, arg1);
        }
        var_r6 += 1;
        var_r7 += 0x18;
    } while (var_r6 < 0xB);
}
