
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
void *func_02067900();
s32 func_0208d2e4(void *arg0) {
    int new_var;
    void *temp_r0;
    if (arg0 == ((void *) 0)) {
        return 0;
    }
    if ((*((s32 *) (((s8 *) (*((void **) (((s8 *) arg0) + 4)))) + 8))) == 0) {
        return 0;
    }
    temp_r0 = func_02067900();
    if (temp_r0 == ((void *) 0)) {
        return 0;
    }
    new_var = !((*((s32 *) (((s8 *) temp_r0) + 0xC))) & 4);
    if (new_var) {
        return 0;
    }
    return *((s32 *) (((s8 *) temp_r0) + 0x29C));
}
