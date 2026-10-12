
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
M2C_UNK func_02042364(s32, s32, s32);
u16 func_02072874(M2C_UNK, u16);
extern u16 data_020dde80;
extern s32 data_020ddf64;
extern void *data_020ddf70;
extern s32 data_020ddf90;
extern s32 data_020ddfa0;
extern s32 data_020de088;
void func_020716e4(void) {
    s32 temp_r0_2;
    u16 temp_r0;
    u16 temp_r4;
    void *new_var;
    temp_r4 = *((u16 *) (((s8 *) data_020ddf70) + 6));
    temp_r0 = func_02072874(3, temp_r4);
    temp_r0++;
    temp_r0--;
    *((u16 *) (((s8 *) data_020ddf70) + 0x28)) = temp_r0;
    temp_r0_2                                  = data_020de088 + (temp_r0 * 4);
    data_020dde80                              = *((u16 *) (((s8 *) (new_var = data_020ddf70)) + 0x28));
    data_020ddf64                              = temp_r0_2;
    data_020ddf90                              = data_020ddfa0;
    func_02042364(temp_r0_2, data_020ddfa0, temp_r4 * ((unsigned long long) 4));
    data_020ddfa0 = data_020ddf90 + (temp_r4 * 4);
    data_020ddf64 += temp_r4 * 4;
}
