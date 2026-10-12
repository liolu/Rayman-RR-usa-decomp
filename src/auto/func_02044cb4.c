
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
M2C_UNK func_02044cf4(s32);
extern M2C_UNK data_020cfc80;
void func_02044cb4(void) {
    s32 var_r5;
    char new_var;
    u32 var_r6;
    var_r6  = 0;
    var_r5  = *((s32 *) (((s8 *) (&data_020cfc80)) + 0x358));
    new_var = 0U;
    if (((u32) (*((u32 *) (((s8 *) (&data_020cfc80)) + 0x354)))) <= new_var) {
        return;
    }
    do {
        func_02044cf4(var_r5);
        var_r6 += 1;
        var_r5 += 0x34;
    } while (var_r6 < ((u32) (*((u32 *) (((s8 *) (&data_020cfc80)) + 0x354)))));
}
