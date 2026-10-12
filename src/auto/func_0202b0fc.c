
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
M2C_UNK func_0202fbf4(s32, u8, s32);
extern u8 data_020bc534;
extern M2C_UNK data_020cf6cc;
void func_0202b0fc(void *arg0, s32 arg1) {
    M2C_UNK *temp_r2;
    M2C_UNK *var_ip;
    M2C_UNK *var_r3;
    s8 *new_var;
    var_ip = *((M2C_UNK **) (((s8 *) arg0) + 0));
    var_r3 = (void *) 0;
    if (var_ip != ((void *) 0)) {
        do {
            if ((*((u8 *) (((s8 *) var_ip) + 0x12))) == arg1) {
                temp_r2 = *((M2C_UNK **) (((s8 *) var_ip) + 0));
                new_var = ((s8 *) var_ip) + 0;
                if (var_r3 != ((void *) 0)) {
                    *var_r3 = temp_r2;
                } else {
                    *((M2C_UNK **) (((s8 *) arg0) + 0)) = temp_r2;
                }
                if ((*((M2C_UNK **) new_var)) == ((void *) 0)) {
                    *((M2C_UNK **) (((s8 *) arg0) + 4)) = var_r3;
                }
            } else {
                var_r3 = var_ip;
            }
            var_ip = *((M2C_UNK **) (((s8 *) var_ip) + 0));
        } while (var_ip != ((void *) 0));
    }
    func_0202fbf4(arg1, data_020bc534, *((M2C_UNK *) (((s8 *) (&data_020cf6cc)) + (data_020bc534 * 4))));
}
