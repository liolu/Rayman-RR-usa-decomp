
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
void *func_0205488c(s32);
void *func_02054084(s16 arg0, s16 arg1) {
    s16 var_r6;
    s32 temp_r5;
    void *temp_r4;
    var_r6 = arg1;
    if (var_r6 == 0) {
        var_r6 = 1;
    }
    temp_r5                                = arg0 * 6;
    temp_r4                                = func_0205488c(0x20);
    *((void **) (((s8 *) temp_r4) + 8))    = func_0205488c(arg0 * 6);
    *((void **) (((s8 *) temp_r4) + 0xC))  = func_0205488c(arg0 * 6);
    *((void **) (((s8 *) temp_r4) + 0x10)) = func_0205488c(arg0 * 0xC);
    *((void **) (((s8 *) temp_r4) + 0x14)) = func_0205488c(var_r6 * 8);
    *((s16 *) (((s8 *) temp_r4) + 6))      = var_r6;
    *((s16 *) (((s8 *) temp_r4) + 4))      = arg0;
    *((s16 *) (((s8 *) temp_r4) + 0x1C))   = 0;
    *((s32 *) (((s8 *) temp_r4) + 0x18))   = 0;
    *((s16 *) (((s8 *) temp_r4) + 0x1E))   = -1;
    return temp_r4;
}
