#include "m2c.h"

void *func_0204a06c(s32, s32 *);
s32 func_0204a1a8(s32);
void func_02052900(s32, s32);

void func_0205b2a8(void *arg0) {
    s32 sp[4];
    s64 p2;
    s16 var_r4;
    s64 p1;
    s64 p0;
    void *temp_r5;
    s32 *var_r6;

    temp_r5 = M2C_FIELD(arg0, void **, 4);
    var_r4  = 0;
    var_r6  = M2C_FIELD(temp_r5, s32 **, 0xC);
    if (M2C_FIELD(temp_r5, s32 *, 0x10) <= 0) {
        return;
    }
    do {
        if (func_0204a1a8(*var_r6) == 6) {
            func_0204a06c(*var_r6, sp);
            p2 = (s64) sp[2] * 0xFF000 + 0x800;
            p1 = (s64) sp[1] * 0xFF000 + 0x800;
            p0 = (s64) sp[0] * 0xFF000 + 0x800;
            func_02052900(0, (u8) (s8) ((s32) (p0 >> 12) >> 12) | ((u8) (s8) ((s32) (p1 >> 12) >> 12) << 8) |
                                 ((u8) (s8) ((s32) (p2 >> 12) >> 12) << 16));
            return;
        }
        var_r4++;
        var_r6 += 1;
    } while ((s32) M2C_FIELD(temp_r5, s32 *, 0x10) > (s32) var_r4);
}
