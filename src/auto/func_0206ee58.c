#include "m2c.h"

s32 func_0206ee4c(s32);                             /* extern */
extern s32 data_020ddcf0;
extern s32 data_020ddcf4;
extern s32 data_020ddd18;
extern s32 data_020ddd1c;
extern s32 data_020ddd20;
extern s32 data_020ddd24;
extern s32 data_020ddd2c;
extern s32 data_020ddd30;
extern s32 data_020ddd34;
extern s32 data_020dddd4;
extern s32 data_020de064;

void func_0206ee58(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;
    s32 temp_r0_5;
    s32 temp_r0_6;

    temp_r0       = func_0206ee4c(data_020ddd24);
    data_020ddd20 = temp_r0;
    temp_r0_2     = func_0206ee4c((data_020ddcf4 * 0xC) + temp_r0);
    data_020ddd30 = temp_r0_2;
    temp_r0_3     = func_0206ee4c(temp_r0_2 + ((data_020ddd34 + 1) * 4));
    data_020dddd4 = temp_r0_3;
    temp_r0_4     = func_0206ee4c(temp_r0_3 + data_020ddd2c);
    data_020ddd1c = temp_r0_4;
    temp_r0_5     = func_0206ee4c(temp_r0_4 + (data_020ddd34 * 4));
    data_020ddcf0 = temp_r0_5;
    temp_r0_6     = func_0206ee4c(temp_r0_5 + (data_020ddd34 * 2));
    data_020de064 = temp_r0_6;
    data_020ddd18 = func_0206ee4c((data_020ddd34 * 0xC) + temp_r0_6);
}
