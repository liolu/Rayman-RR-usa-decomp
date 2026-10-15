#include "m2c.h"

s32 func_01ff83a8(s32);
M2C_UNK func_01ff84a0(void *, void *);
s32 func_01ff87ec(s32, s32, s32, s32);

void *func_02035a48(void *arg0, void *arg1, void *arg2) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r0_3;
    s32 var_r0_4;
    s32 var_r0_5;
    s32 var_r0_6;
    void *temp_r0;

    M2C_FIELD(arg0, s32 *, 4) = func_01ff87ec(M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg2, s32 *, 8), M2C_FIELD(arg1, s32 *, 8),
                                              M2C_FIELD(arg2, s32 *, 4));
    M2C_FIELD(arg0, s32 *, 8) = func_01ff87ec(M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg2, s32 *, 0), M2C_FIELD(arg1, s32 *, 0),
                                              M2C_FIELD(arg2, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0xC) = func_01ff87ec(M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg2, s32 *, 4),
                                                M2C_FIELD(arg1, s32 *, 4), M2C_FIELD(arg2, s32 *, 0));
    var_r0                      = M2C_FIELD(arg0, s32 *, 4);
    if (var_r0 < 0) {
        var_r0 = 0 - var_r0;
    }
    if (var_r0 < 8) {
        var_r0_2 = M2C_FIELD(arg0, s32 *, 8);
        if (var_r0_2 < 0) {
            var_r0_2 = 0 - var_r0_2;
        }
        if (var_r0_2 < 8) {
            var_r0_3 = M2C_FIELD(arg0, s32 *, 0xC);
            if (var_r0_3 < 0) {
                var_r0_3 = 0 - var_r0_3;
            }
            if (var_r0_3 < 8) {
                var_r0_4 = M2C_FIELD(arg1, s32 *, 0) - M2C_FIELD(arg2, s32 *, 0);
                if (var_r0_4 < 0) {
                    var_r0_4 = 0 - var_r0_4;
                }
                if (var_r0_4 < 8) {
                    var_r0_5 = M2C_FIELD(arg1, s32 *, 4) - M2C_FIELD(arg2, s32 *, 4);
                    if (var_r0_5 < 0) {
                        var_r0_5 = 0 - var_r0_5;
                    }
                    if (var_r0_5 < 8) {
                        var_r0_6 = M2C_FIELD(arg1, s32 *, 8) - M2C_FIELD(arg2, s32 *, 8);
                        if (var_r0_6 < 0) {
                            var_r0_6 = 0 - var_r0_6;
                        }
                        if (var_r0_6 < 8) {
                            M2C_FIELD(arg0, s32 *, 0)   = 0;
                            M2C_FIELD(arg0, s32 *, 4)   = 0;
                            M2C_FIELD(arg0, s32 *, 8)   = 0;
                            M2C_FIELD(arg0, s32 *, 0xC) = 0;
                        } else {
                            goto block_19;
                        }
                    } else {
                        goto block_19;
                    }
                } else {
                block_19:
                    M2C_FIELD(arg0, s32 *, 0) = 0x3244;
                }
            } else {
                goto block_20;
            }
        } else {
            goto block_20;
        }
    } else {
    block_20:
        M2C_FIELD(arg0, s32 *, 4)   = (s32) ((M2C_FIELD(arg1, s32 *, 4) * M2C_FIELD(arg2, s32 *, 8)) -
                                           (M2C_FIELD(arg1, s32 *, 8) * M2C_FIELD(arg2, s32 *, 4)));
        M2C_FIELD(arg0, s32 *, 8)   = (s32) ((M2C_FIELD(arg1, s32 *, 8) * M2C_FIELD(arg2, s32 *, 0)) -
                                           (M2C_FIELD(arg1, s32 *, 0) * M2C_FIELD(arg2, s32 *, 8)));
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) ((M2C_FIELD(arg1, s32 *, 0) * M2C_FIELD(arg2, s32 *, 4)) -
                                             (M2C_FIELD(arg1, s32 *, 4) * M2C_FIELD(arg2, s32 *, 0)));
        temp_r0                     = arg0 + 4;
        func_01ff84a0(temp_r0, temp_r0);
        M2C_FIELD(arg0, s32 *, 0) =
            (s32) ((s32) (func_01ff83a8((s32) ((M2C_FIELD(arg1, s32 *, 8) * M2C_FIELD(arg2, s32 *, 8)) +
                                               ((M2C_FIELD(arg1, s32 *, 0) * M2C_FIELD(arg2, s32 *, 0)) +
                                                (M2C_FIELD(arg1, s32 *, 4) * M2C_FIELD(arg2, s32 *, 4))) +
                                               8) >>
                                        4) +
                          0x80) >>
                   8);
    }
    return arg0;
}
