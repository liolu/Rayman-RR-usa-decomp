
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
void *func_0206f4d0(s32, u32);
s32 func_02070b7c(u16);
extern s32 data_020de080;
extern s32 data_020de090;
inline u16 inline_fn(s8 *arg0) {
    return *((u16 *) arg0);
}

s32 func_020713b0(void *arg0, u32 arg1) {
    s32 new_var;
    u16 temp_r2;
    void *temp_r0;
    if (arg1 >= ((u32) (*((u16 *) (((s8 *) arg0) + 0))))) {
        return 0;
    }
    temp_r0 = func_0206f4d0(new_var = func_02070b7c(*((u16 *) (((s8 *) arg0) + 0x18))), arg1);
    temp_r2 =
        *((u16 *) (((s8 *) (((inline_fn(((s8 *) temp_r0) + 0x2C) + ((u16) (arg1 - (*((u16 *) (((s8 *) temp_r0) + 0x16)))))) *
                             0xA) +
                            data_020de080)) +
                   2));
    if (temp_r2 == 0xFFFF) {
        return 0;
    }
    return (temp_r2 * 0xC) + data_020de090;
}
