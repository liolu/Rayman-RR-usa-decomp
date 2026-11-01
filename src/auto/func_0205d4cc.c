#include "m2c.h"

s32 func_0205d0cc();
void func_0205d0d4();
void *func_0206984c(s32);
void *func_0206a7dc(s32);
void *func_0206b3c4(s32);

s32 func_0205d4cc(u8 *arg0, s32 arg1) {
    u8 *temp_r5;
    u8 *temp_r4;
    u8 *temp_r0;
    u8 *temp_r0_2;
    s32 var_r1;
    u8 *var_r2;

    temp_r5 = func_0206a7dc(*(s32 *) (*(u8 **) (arg0 + 4) + 0x20));
    temp_r4 = func_0206b3c4(*(s32 *) (func_0206984c(arg1) + 4));
    func_0205d0d4();
    if (arg0 == (u8 *) func_0205d0cc()) {
        return 1;
    }
    temp_r0 = func_0206a7dc(*(s32 *) (*(u8 **) (temp_r4 + 4) + 0x20));
    if (temp_r5 == temp_r0) {
        return 1;
    }
    temp_r0_2 = *(u8 **) (temp_r0 + 4);
    var_r1    = *(s32 *) (temp_r0_2 + 0x3C);
    var_r2    = *(u8 **) (temp_r0_2 + 0x38);
    if (var_r1 != 0) {
        do {
            if (*(u8 **) var_r2 == temp_r5) {
                return *(s32 *) (var_r2 + 4) != 0;
            }
            var_r1 -= 1;
            var_r2 += 8;
        } while (var_r1 != 0);
    }
    return 1;
}
