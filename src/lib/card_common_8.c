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
s32 func_020482c0();
void *func_02067900();

s32 func_0205d3f8(void *arg0, s32 arg1) {
    s32 temp_r0_2;
    s32 temp_r2;
    void *temp_r0;
    void *temp_r1;
    void *new_var2;
    s32 *new_var;
    switch (arg1) {
        case 1:
            if ((*((s32 *) (((s8 *) (*((void **) (((s8 *) arg0) + 4)))) + 8))) != 0) {
                temp_r0 = (new_var2 = func_02067900());
                if (temp_r0 == ((void *) 0)) {
                    return 0;
                }
                temp_r1   = *((void **) (((s8 *) temp_r0) + 0x168));
                temp_r2   = *((s32 *) (((s8 *) temp_r0) + 8));
                new_var   = (s32 *) (((s8 *) temp_r1) + 4);
                temp_r0_2 = *new_var;
                if (((*((s32 *) (((s8 *) temp_r0) + 8))) & 0x10) && (temp_r0_2 & 0x10)) {
                    if ((*((s32 *) (((s8 *) temp_r1) + 0xF0))) == 0) {
                        return 0;
                    }
                    return func_020482c0();
                }
                if ((temp_r2 & 0x40) && (temp_r0_2 & 4)) {
                    if ((*((s32 *) (((s8 *) temp_r1) + 0x78))) == 0) {
                        return 0;
                    }
                    return func_020482c0();
                }
                if (temp_r0_2 & 1) {
                    if ((*((s32 *) (((s8 *) temp_r1) + 0x50))) == 0) {
                        return 0;
                    }
                    return func_020482c0();
                }
                return 0;
            }
            return 0;

        case 2:
            return 0;

        default:
            return 0;
    }
}
