
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
M2C_UNK func_020230b8(void *);
void *func_020414ac(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02041da8(void *);
void *func_02068b88();
void *func_02064808(M2C_UNK arg0) {
    s32 temp_r1;
    void *new_var2[2];
    void *temp_r4;
    temp_r4     = func_02068b88();
    new_var2[0] = func_020414ac(0x4A, arg0, 8);
    temp_r1     = *((s32 *) (((s8 *) new_var2[0]) + 0));
    new_var2[1] = new_var2[0];
    if ((temp_r1 != 0) && ((*((s32 *) (((s8 *) new_var2[1]) + 4))) != 0)) {
        *((s32 *) (((s8 *) temp_r4) + 0)) = temp_r1;
        *((s32 *) (((s8 *) temp_r4) + 4)) = (s32) (*((s32 *) (((s8 *) new_var2[1]) + 4)));
    } else {
        func_020230b8(temp_r4);
    }
    func_02041da8(new_var2[1]);
    return temp_r4;
}
