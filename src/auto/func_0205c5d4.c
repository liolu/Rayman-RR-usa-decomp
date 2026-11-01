#include "m2c.h"

s32 FX_Div(s32, s32);
void func_02035908(void *, s32);
s32 func_02035e20(s32);
s32 func_0205c488(void *);
void *func_02067900(s32);
s32 func_02067910(s32);
void func_02067920(s32, s32);
extern s32 data_020dc148;
extern s32 data_020dc19c;

void func_0205c5d4(void *arg0) {
    s32 temp_r4_2;
    s32 temp_r6;
    s32 temp_r0_2;
    void *temp_r0;
    s32 temp_r5;
    void *temp_r1;
    void *temp_r4;

    temp_r6 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8);
    if (temp_r6 == 0) {
        return;
    }
    temp_r0 = func_02067900(temp_r6);
    if (temp_r0 == NULL) {
        return;
    }
    temp_r0_2 = func_0205c488(arg0);
    if (M2C_FIELD(temp_r0, s32 *, 4) != temp_r0_2) {
        func_02035908(temp_r0, temp_r0_2);
    }
    if (temp_r0_2 == 0) {
        return;
    }
    temp_r4   = M2C_FIELD(arg0, void **, 4);
    temp_r5   = func_02035e20(temp_r0_2);
    temp_r4_2 = func_02067910(M2C_FIELD(temp_r4, s32 *, 8));
    ((void (*)(void *, void *, s32, s32, s32))(*(s32 *) ((u8 *) &data_020dc148 + temp_r5 * 4)))(
        temp_r0, arg0, temp_r4_2, temp_r0_2, FX_Div(M2C_FIELD(&data_020dc19c, s32 *, 0xBC) << 0xC, 0x3E8000));
    if (M2C_FIELD(temp_r0, s32 *, 0xC) & 0x4000) {
        temp_r1                      = M2C_FIELD(temp_r0, void **, 0x168);
        M2C_FIELD(temp_r1, s32 *, 0) = M2C_FIELD(temp_r1, s32 *, 4);
    }
    func_02067920(temp_r6, func_02035e20(temp_r0_2));
}
