#include "engine.h"
#include "m2c.h"

s32 func_0208d264(s32, VecFx32 *);
void func_02089088(void *, VecFx32 *);
void func_0208d32c(VecFx32 *, VecFx32 *, VecFx32 *);
s32 func_0208d3e8(VecFx32 *, VecFx32 *, void *);

s32 func_020899ec(void *arg0, VecFx32 *arg1) {
    VecFx32 sp24;
    VecFx32 sp18;
    VecFx32 spC;
    VecFx32 sp0;
    s32 temp_r4;
    s32 temp_r0;
    s32 temp_r2;
    s32 var_r3;
    s32 var_r0_2;
    s32 var_q;
    void *var_r0;

    if (func_0208d264(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x68), &sp0) == 0) {
        return 0;
    }
    func_02089088(arg0, &spC);
    func_0208d32c(&sp24, &spC, &sp0);
    func_01ff84a0(&sp24, &sp24);
    sp18.z  = 0x1000;
    sp18.x  = 0;
    sp18.y  = 0;
    temp_r4 = func_0208d3e8(&sp18, &sp24, NULL);
    sp18.x  = M2C_FIELD(arg0, s32 *, 0x50) - arg1->x;
    sp18.y  = M2C_FIELD(arg0, s32 *, 0x54) - arg1->y;
    sp18.z  = M2C_FIELD(arg0, s32 *, 0x58) - arg1->z;
    func_01ff84a0(&sp18, &sp18);
    temp_r0 = VEC_DotProduct(&sp18, &sp24);
    temp_r4 = (s32) ((((s64) (temp_r4 - 6434)) * temp_r0 + 0x800) >> 12);
    var_r3  = temp_r4;
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 8), u8 *, 0x75) & 2) {
        var_r0 = M2C_FIELD(arg0, void **, 0x18);
    } else {
        var_r0 = M2C_FIELD(arg0, void **, 0xC);
    }
    temp_r2 = M2C_FIELD(var_r0, s32 *, 0x30);
    var_q   = (s32) ((((s64) temp_r2) * temp_r4 + 0x800) >> 12);
    if (var_q >= 0) {
        if (temp_r4 < 0) {
            temp_r4 = -temp_r4;
        }
        if (temp_r2 >= 0) {
            var_r0_2 = temp_r2;
        } else {
            var_r0_2 = -temp_r2;
        }
        if (var_r0_2 <= temp_r4) {
            var_r3 -= temp_r2;
        } else {
            return 0;
        }
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0x30) = temp_r2 + var_r3;
    return 1;
}
