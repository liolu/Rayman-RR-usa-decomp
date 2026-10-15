#include "m2c.h"

M2C_UNK __rounddec(void *, s32);
M2C_UNK func_0200862c(void *);

void __num2dec(void *arg0, s32 arg1, s32 arg2, void *arg3) {
    s16 var_r5;
    s32 var_r2;
    u8 var_r0;
    u8 temp_r0;
    void *temp_r1;

    var_r5 = M2C_FIELD(arg0, s16 *, 2);
    func_0200862c(arg3);
    if ((u32) M2C_FIELD(arg3, u8 *, 5) > 9U) {
        return;
    }
    if ((s32) var_r5 > 0x20) {
        var_r5 = 0x20;
    }
    __rounddec(arg3, (s32) var_r5);
    var_r0 = M2C_FIELD(arg3, u8 *, 4);
    if ((s32) var_r0 < (s32) var_r5) {
        do {
            M2C_FIELD(arg3, u8 *, 4)++;
            M2C_FIELD((arg3 + var_r0), u8 *, 5) = 0;
            var_r0                              = M2C_FIELD(arg3, u8 *, 4);
        } while ((s32) var_r0 < (s32) var_r5);
    }
    var_r2                    = 0;
    M2C_FIELD(arg3, s16 *, 2) = (s16) (M2C_FIELD(arg3, s16 *, 2) - (M2C_FIELD(arg3, u8 *, 4) - 1));
    if ((s32) M2C_FIELD(arg3, u8 *, 4) <= 0) {
        return;
    }
    do {
        temp_r1 = arg3 + var_r2;
        temp_r0 = M2C_FIELD(temp_r1, u8 *, 5);
        var_r2 += 1;
        M2C_FIELD(temp_r1, s8 *, 5) = (s8) (temp_r0 + 0x30);
    } while (var_r2 < (s32) M2C_FIELD(arg3, u8 *, 4));
}
