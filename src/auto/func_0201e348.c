
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
M2C_UNK func_0201fc70();
M2C_UNK func_0201fc74();
M2C_UNK func_02020e28(s32, M2C_UNK);
u32 func_02042084();
s32 func_0204217c(M2C_UNK);
extern M2C_UNK data_020c4a64;
extern u32 data_020c4b30;
void func_0201e348(void) {
    u32 temp_r0;
    func_0201fc70();
    temp_r0                                    = func_02042084();
    data_020c4b30                              = temp_r0;
    *((s32 *) (((s8 *) (&data_020c4a64)) + 8)) = (*((s32 *) (((s8 *) (&data_020c4a64)) + 4)) = 0);
    if (temp_r0 < 0x1E400U) {
        *((s32 *) (((s8 *) (&data_020c4a64)) + 0)) = 0;
        func_0201fc74();
        func_02020e28(0, 0);
        return;
    }
    *((s32 *) (((s8 *) (&data_020c4a64)) + 0)) = func_0204217c(0x1E000);
    func_0201fc74();
    func_02020e28(*((s32 *) (((s8 *) (&data_020c4a64)) + 0)), 0x1E000);
}
