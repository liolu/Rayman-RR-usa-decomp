
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
M2C_UNK func_0201b250(s32);
M2C_UNK func_0202d1e8(s32, s32, s32);
extern s32 data_020c3f94;
extern M2C_UNK data_020c47d0;
extern s32 data_020c49d8;
void func_0201c3b0(void *arg0) {
    s32 temp_r2;
    s32 var_r0;
    temp_r2 = *((s32 *) (((s8 *) arg0) + 0x28));
    if (((temp_r2 != data_020c49d8) && (temp_r2 != (-1))) != 0) {
        var_r0 = 0;
    } else {
        var_r0 = 1;
    }
    if ((var_r0 & 0xFF) != 0) {
        func_0201b250(*((s32 *) (((s8 *) arg0) + 0x24)));
        return;
    }
    func_0202d1e8(*((s32 *) (((s8 *) arg0) + 0x24)), *((M2C_UNK *) (((s8 *) (&data_020c47d0)) + (data_020c3f94 * 4))),
                  *((s32 *) (((s8 *) arg0) + 0x20)));
    func_0201b250(*((s32 *) (((s8 *) arg0) + 0x24)));
    *((s32 *) (((s8 *) arg0) + 0x28)) = (s32) data_020c49d8;
}
