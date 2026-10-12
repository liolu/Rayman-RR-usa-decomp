
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
typedef s32 M2C_UNK;
void *func_02084248(s32);
extern M2C_UNK data_020c0430;
void *func_0209b348(s32 arg0, void *arg1, void *arg2) {
    s32 temp_r1;
    s32 temp_r2;
    u16 temp_r0;
    void *var_r0;
    void *var_r5;
    var_r5 = arg1;
    if (((*((s32 *) (((s8 *) var_r5) + (-8)))) == 7) && ((*((s8 *) (((s8 *) (&data_020c0430)) + 1))) != 0)) {
        temp_r0 = *((u16 *) (((s8 *) var_r5) + (-4)));
        temp_r1 = var_r5 - 8;
        temp_r0 = *((u16 *) (((s8 *) var_r5) + (-4)));
        if (temp_r0 != 0) {
            var_r0 = temp_r1 + (temp_r0 * 8);
        } else {
            var_r0                              = func_02084248(temp_r1 + 8);
            temp_r2                             = var_r0 - (var_r5 - 8);
            *((u16 *) (((s8 *) var_r5) + (-4))) = (u16) (((s32) (temp_r2 + (((u32) (temp_r2 >> 2)) >> 0x1D))) >> 3);
        }
        var_r5 = var_r0;
    }
    *((s32 *) (((s8 *) arg2) + 0))   = 0;
    *((s32 *) (((s8 *) arg2) + 0xC)) = 0x14;
    return var_r5;
}
