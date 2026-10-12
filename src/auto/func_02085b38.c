
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
M2C_UNK *func_02085d64(s32, s32, s32);
void func_02085b38(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK *temp_r0;
    M2C_UNK *temp_r2;
    M2C_UNK *temp_r2_2;
    s32 var_ip;
    void *temp_r2_3;
    void *temp_r2_4;
    M2C_UNK *var_lr;
    void *temp_r2_5;
    var_ip = 0;
    if (arg0 == ((void *) 0)) {
        return;
    }
    var_lr = *((M2C_UNK **) (((s8 *) arg0) + 0));
    if (var_lr != ((void *) 0)) {
    loop_3:
        if ((*((s32 *) (((s8 *) var_lr) + 0xC))) == arg1) {
            *((s32 *) (((s8 *) var_lr) + 0x14)) = arg3;
            *((s32 *) (((s8 *) var_lr) + 0x10)) = arg3;
            *((s32 *) (((s8 *) var_lr) + 0x1C)) = arg2;
            *((s32 *) (((s8 *) var_lr) + 0x18)) = arg2;
            var_ip                              = 1;
        } else {
            var_lr = *((M2C_UNK **) (((s8 *) var_lr) + 0));
            if (var_lr != ((void *) 0)) {
                goto loop_3;
            }
        }
    }
    if (var_ip != 0) {
        return;
    }
    temp_r0 = func_02085d64(arg1, arg2, arg3);
    if (temp_r0 == ((void *) 0)) {
        return;
    }
    temp_r2 = *((M2C_UNK **) (((s8 *) temp_r0) + 0));
    if (temp_r2 != ((void *) 0)) {
        *((M2C_UNK **) (((s8 *) temp_r2) + 4)) = (M2C_UNK *) (*((M2C_UNK **) (((s8 *) temp_r0) + 4)));
    }
    temp_r2_2 = *((M2C_UNK **) (((s8 *) temp_r0) + 4));
    if (temp_r2_2 != ((void *) 0)) {
        *temp_r2_2 = *((M2C_UNK **) (((s8 *) temp_r0) + 0));
    }
    temp_r2_3 = *((void **) (((s8 *) temp_r0) + 8));
    if (temp_r2_3 != ((void *) 0)) {
        *((s32 *) (((s8 *) temp_r2_3) + 8)) = (s32) ((*((s32 *) (((s8 *) temp_r2_3) + 8))) - 1);
        temp_r2_4                           = *((void **) (((s8 *) temp_r0) + 8));
        if ((*((M2C_UNK **) (((s8 *) temp_r2_4) + 0))) == temp_r0) {
            *((M2C_UNK **) (((s8 *) temp_r2_4) + 0)) = (M2C_UNK *) (*((M2C_UNK **) (((s8 *) temp_r0) + 0)));
        }
        temp_r2_5 = *((void **) (((s8 *) temp_r0) + 8));
        if ((*((M2C_UNK **) (((s8 *) temp_r2_5) + 4))) == temp_r0) {
            *((M2C_UNK **) (((s8 *) temp_r2_5) + 4)) = (M2C_UNK *) (*((M2C_UNK **) (((s8 *) temp_r0) + 4)));
        }
    }
    *((M2C_UNK **) (((s8 *) temp_r0) + 0)) = (void *) 0;
    *((M2C_UNK **) (((s8 *) temp_r0) + 4)) = (void *) 0;
    *((void **) (((s8 *) temp_r0) + 8))    = (void *) 0;
    *((M2C_UNK **) (((s8 *) temp_r0) + 0)) = (void *) 0;
    *((M2C_UNK **) (((s8 *) temp_r0) + 4)) = (M2C_UNK *) (*((M2C_UNK **) (((s8 *) arg0) + 4)));
    *((void **) (((s8 *) temp_r0) + 8))    = arg0;
    if ((*((M2C_UNK **) (((s8 *) arg0) + 0))) == ((void *) 0)) {
        *((M2C_UNK **) (((s8 *) arg0) + 0)) = temp_r0;
    } else {
        *(*((M2C_UNK **) (((s8 *) arg0) + 4))) = temp_r0;
    }
    *((M2C_UNK **) (((s8 *) arg0) + 4)) = temp_r0;
    *((s32 *) (((s8 *) arg0) + 8))      = (s32) ((*((s32 *) (((s8 *) arg0) + 8))) + 1);
}
