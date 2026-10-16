#include "m2c.h"

void func_020796a4(void *arg0) {
    s16 var_r1;
    s16 var_r1_2;
    s16 var_r1_3;
    s16 var_r1_4;
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    void *temp_r4;
    void *temp_r5;

    temp_r5                         = M2C_FIELD(arg0, void **, 0xC);
    temp_r4                         = M2C_FIELD(arg0, void **, 0x14);
    M2C_FIELD(temp_r4, s16 *, 0x20) = (s16) ((s16) M2C_FIELD(temp_r5, s16 *, 0x10) >> M2C_FIELD(temp_r4, s8 *, 0xC1));
    M2C_FIELD(temp_r4, s16 *, 0x24) = (s16) ((s16) M2C_FIELD(temp_r5, s16 *, 0x14) >> M2C_FIELD(temp_r4, s8 *, 0xC2));
    M2C_FIELD(temp_r4, s16 *, 0x22) = (s16) ((s16) M2C_FIELD(temp_r5, s16 *, 0x12) >> M2C_FIELD(temp_r4, s8 *, 0xC1));
    M2C_FIELD(temp_r4, s16 *, 0x26) = (s16) ((s16) M2C_FIELD(temp_r5, s16 *, 0x16) >> M2C_FIELD(temp_r4, s8 *, 0xC2));
    if (((s16) M2C_FIELD(temp_r5, s16 *, 0x12) % (s16) M2C_FIELD(temp_r4, s16 *, 4)) == 0) {
        M2C_FIELD(temp_r4, s16 *, 0x22) = (s16) (M2C_FIELD(temp_r4, s16 *, 0x22) - 1);
    }
    if (((s16) M2C_FIELD(temp_r5, s16 *, 0x16) % (s16) M2C_FIELD(temp_r4, s16 *, 6)) == 0) {
        M2C_FIELD(temp_r4, s16 *, 0x26) = (s16) (M2C_FIELD(temp_r4, s16 *, 0x26) - 1);
    }
    var_r1 = M2C_FIELD(temp_r4, s16 *, 0x20);
    var_r0 = M2C_FIELD(temp_r4, s16 *, 0) - 1;
    if ((s32) var_r1 <= var_r0) {
        if ((s32) var_r1 < 0) {
            var_r1 = 0;
        }
        var_r0 = (s32) var_r1;
    }
    M2C_FIELD(temp_r4, s16 *, 0x20) = (s16) var_r0;
    var_r1_2                        = M2C_FIELD(temp_r4, s16 *, 0x22);
    var_r0_2                        = M2C_FIELD(temp_r4, s16 *, 0) - 1;
    if ((s32) var_r1_2 <= var_r0_2) {
        if ((s32) var_r1_2 < 0) {
            var_r1_2 = 0;
        }
        var_r0_2 = (s32) var_r1_2;
    }
    M2C_FIELD(temp_r4, s16 *, 0x22) = (s16) var_r0_2;
    var_r1_3                        = M2C_FIELD(temp_r4, s16 *, 0x24);
    var_r0_3                        = M2C_FIELD(temp_r4, s16 *, 2) - 1;
    if ((s32) var_r1_3 <= var_r0_3) {
        if ((s32) var_r1_3 < 0) {
            var_r1_3 = 0;
        }
        var_r0_3 = (s32) var_r1_3;
    }
    M2C_FIELD(temp_r4, s16 *, 0x24) = (s16) var_r0_3;
    var_r1_4                        = M2C_FIELD(temp_r4, s16 *, 0x26);
    var_r0_4                        = M2C_FIELD(temp_r4, s16 *, 2) - 1;
    if ((s32) var_r1_4 <= var_r0_4) {
        if ((s32) var_r1_4 < 0) {
            var_r1_4 = 0;
        }
        var_r0_4 = (s32) var_r1_4;
    }
    M2C_FIELD(temp_r4, s16 *, 0x26) = (s16) var_r0_4;
}
