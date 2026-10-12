
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
M2C_UNK func_0202c664(s32);
extern s32 data_020dd8d4;
inline int inline_fn(s32 arg0) {
    return data_020dd8d4 + arg0;
}

void func_0206cf30(void) {
    u32 var_r6;
    s32 var_r7;
    var_r6 = 0;
    var_r7 = 0;
    do {
        func_0202c664(inline_fn(var_r7));
        var_r6 += 1;
        var_r7 += 0x64;
    } while (var_r6 < 0x201U);
}
