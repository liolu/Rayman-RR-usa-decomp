#include "m2c.h"

s32 VEC_DotProduct(void *, s32);
M2C_UNK func_0202dc64(s32, M2C_UNK *, s32 *, M2C_UNK *);

void func_02032220(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    M2C_UNK sp8;
    s32 sp4;
    M2C_UNK sp0;
    s32 temp_r0;
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;
    s32 var_r6;
    void *temp_r3;
    void *var_r9;

    var_r9 = arg1;
    var_r6 = 0;
    if (arg0 <= 0) {
        return;
    }
    do {
        if (M2C_FIELD(var_r9, s16 *, 0x2E) != 0x63) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if (var_r0 & 0xFF) {
            func_0202dc64(arg2 + 0xDC, &sp8, &sp4, &sp0);
            temp_r0 = VEC_DotProduct(var_r9 + 4, sp4);
            var_r2  = 0;
            temp_r3 = M2C_FIELD(M2C_FIELD(var_r9, void **, 0x20), void **, 0xC);
            if ((temp_r3 != (void *) -1) && ((M2C_FIELD(temp_r3, u16 *, 2) & 0x40) == 0x40)) {
                var_r2 = 1;
            }
            if (var_r2 & 0xFF) {
                if ((temp_r3 != (void *) -1) && ((M2C_FIELD(temp_r3, u16 *, 2) & 0x8000) == 0x8000)) {
                    var_r1 = 1;
                } else {
                    var_r1 = 0;
                }
                if (!(var_r1 & 0xFF)) {
                    if (temp_r0 < -0xB50) {
                        M2C_FIELD(var_r9, s16 *, 0x2E) = 0x63;
                    }
                } else {
                    goto block_19;
                }
            } else {
            block_19:
                if (temp_r0 < -3891) {
                    M2C_FIELD(var_r9, s16 *, 0x2E) = 0x63;
                } else if (VEC_DotProduct(var_r9 + 4, arg3) > 4) {
                    M2C_FIELD(var_r9, s16 *, 0x2E) = 0x63;
                }
            }
        }
        var_r9 += 0x68;
        var_r6 += 1;
    } while (var_r6 < arg0);
}
