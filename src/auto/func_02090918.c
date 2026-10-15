#include "m2c.h"

s32 func_02061248(s32, u8, u8, s32);
s32 func_02061294(s32, s32);
s32 func_0206b3c4(s32);
void *func_02084450(M2C_UNK, void *, s32 *);

/* Type handler accessor.
   func_02084450() is the object's type handler: it fills the 4-word local buffer
   (value, ?, ?, code) and returns the next node of the chain. The value's field at
   +0x4 is resolved through func_0206b3c4(); case 9 sets it (4-argument
   func_02061248) and case 10 reads it (func_02061294). func_02061294 also receives
   the queried value as its second argument, which is why the call result is
   materialised in r1 right after func_0206b3c4() and compared from there. */
void *func_02090918(M2C_UNK arg0, void *arg1, s32 *arg2) {
    s32 sp0[4];
    s32 temp_r1;
    s32 temp_r3;
    s32 temp_r4;
    s32 temp_r8_2;
    s32 var_r0;
    u8 var_r8;
    u8 var_r7;
    void *temp_r0;
    void *temp_r5;
    void *temp_r5_2;
    void *temp_r8;

    temp_r8_2 = M2C_FIELD(arg1, s32 *, -8);
    temp_r5_2 = func_02084450(arg0, arg1, sp0);
    temp_r4   = func_0206b3c4(M2C_FIELD(sp0[0], s32 *, 4));
    temp_r0   = func_02084450(arg0, temp_r5_2, sp0);
    temp_r5   = temp_r0;
    switch (temp_r8_2) {
        case 9:
            if (temp_r8_2 != 9) {
                var_r8 = 1;
            } else {
                var_r8 = 0;
            }
            var_r7  = (u8) sp0[0];
            temp_r8 = func_02084450(arg0, temp_r5, sp0);
            temp_r3 = func_0206b3c4(M2C_FIELD(sp0[0], s32 *, 4));
            if (temp_r4 == 0) {
                var_r0 = 0;
            } else {
                var_r0 = func_02061248(temp_r4, var_r8, var_r7, temp_r3);
            }
            *arg2 = var_r0;
            return temp_r8;
        case 10:
            temp_r1 = func_0206b3c4(M2C_FIELD(sp0[0], s32 *, 4));
            if ((temp_r4 != 0) && (temp_r1 != 0)) {
                *arg2 = func_02061294(temp_r4, temp_r1);
            } else {
                *arg2 = 0;
            }
            return temp_r5;
        default:
            *arg2 = 0;
            return temp_r0;
    }
}
