#include "m2c.h"

void *func_020413b4(s32, void *);
void *func_0204141c(s32, void *, void *, s32);
void *func_020414ac(s32, u16, s32);
void func_02041da8(void *);
s16 *func_0205703c(s32);
void *func_020606cc();

void *func_02063cec(void *arg0) {
    s32 temp_r1_2;
    void *temp_r0_3;
    s16 *var_r0;
    void *temp_r5;
    void *temp_r0;
    s16 var_r3;
    void *temp_r0_2;
    s16 temp_r1_3;

    temp_r0_2 = func_020413b4(0xB, arg0);
    if (temp_r0_2 != NULL) {
        return temp_r0_2;
    }
    temp_r0   = func_020606cc();
    temp_r0_3 = func_0204141c(0xB, arg0, temp_r0, 4);
    if (M2C_FIELD(temp_r0_3, u16 *, 0) != 0xFFFF) {
        temp_r5 = func_020414ac(0x59, M2C_FIELD(temp_r0_3, u16 *, 0), M2C_FIELD(temp_r0_3, u16 *, 2) * 2);
        var_r0  = func_0205703c(M2C_FIELD(temp_r0_3, u16 *, 2) * 2);
        M2C_FIELD(temp_r0, s16 **, 0) = var_r0;
        M2C_FIELD(temp_r0, s32 *, 4)  = (s32) M2C_FIELD(temp_r0_3, u16 *, 2);
        var_r3                        = 0;
        if ((s32) M2C_FIELD(temp_r0_3, u16 *, 2) > 0) {
            do {
                *var_r0 = *((s16 *) temp_r5 + var_r3);
                var_r0++;
                var_r3++;
            } while ((s32) M2C_FIELD(temp_r0_3, u16 *, 2) > (s32) var_r3);
        }
        func_02041da8(temp_r5);
    }
    func_02041da8(temp_r0_3);
    return temp_r0;
}
