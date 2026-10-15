
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
M2C_UNK memset(s32, M2C_UNK, M2C_UNK);
s32 func_0202fd3c(M2C_UNK, M2C_UNK);
M2C_UNK func_02030ac0(u8, u8, M2C_UNK);
M2C_UNK func_0207ac90(M2C_UNK);
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern u8 data_020bd364;
s32 func_0206b488(u8 arg0, M2C_UNK arg1) {
    s32 temp_r0;
    func_02030ac0(data_020bd364, arg0 & 0xFFFFFFFFFFFFFFFFu, 0);
    temp_r0 = func_0202fd3c(arg1 & 0xFFFFFFFFFFFFFFFFu, 0);
    if (temp_r0 == 0) {
        func_0207ac90(0);
        func_0207ad9c(9, data_020bd364, 0, 5, -1, 0xFF, 0xFF, 0);
    }
    memset(temp_r0, 0, arg1);
    return temp_r0;
}
