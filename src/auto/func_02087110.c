#include "m2c.h"
void *func_020414ac(s32, void *, s32);
void func_02041da8(void *);
s32 func_02085040(s32);
void func_02087184(u16, s32);

s32 func_02087110(void *arg0, s32 arg1) {
    s32 temp_r5;
    s16 temp_r0;
    s32 var_r6;
    u16 *temp_r7;
    s16 var_r8;
    temp_r5 = func_02085040(arg1);
    temp_r7 = func_020414ac(0x4E, arg0, arg1 * 2);
    var_r6  = temp_r5;
    var_r8  = 0;
    if (arg1 > 0) {
        do {
            func_02087184(temp_r7[var_r8], var_r6);
            temp_r0 = var_r8 + 1;
            var_r8  = temp_r0;
            var_r6 += 0xC;
        } while (arg1 > (s32) var_r8);
    }
    func_02041da8(temp_r7);
    return temp_r5;
}
