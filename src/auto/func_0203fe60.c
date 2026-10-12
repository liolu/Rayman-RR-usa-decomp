
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
s32 func_02035e20();
M2C_UNK func_020401fc(void *, void *, M2C_UNK, M2C_UNK, s32);
void *func_02067928(void *);
void func_0203fe60(s32 arg0, void *arg1, M2C_UNK arg2, M2C_UNK arg3) {
    void *temp_r0;
    long long new_var;
    void *var_r6;
    var_r6  = *((void **) (((s8 *) arg1) + 8));
    new_var = arg0 + 0xDC;
    if (var_r6 == ((void *) 0)) {
        return;
    }
    do {
        if ((*((s32 *) (((s8 *) var_r6) + 0))) == 2) {
            temp_r0 = func_02067928(var_r6);
            if ((temp_r0 != ((void *) 0)) && ((*((s32 *) (((s8 *) temp_r0) + 4))) != 0)) {
                if (func_02035e20() == 1) {
                    func_020401fc(temp_r0, var_r6, arg2, arg3, new_var);
                }
            }
        }
        var_r6 = *((void **) (((s8 *) var_r6) + 0x14));
    } while (var_r6 != ((void *) 0));
}
