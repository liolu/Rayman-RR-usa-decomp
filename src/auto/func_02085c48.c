#include "m2c.h"
s32 func_02085c48(void **arg0, s32 arg1, s32 arg2, u32 arg3) {
    void *var_ip;

    if (arg0 != NULL && arg1 != 0) {
        var_ip = *arg0;
        if (var_ip != NULL) {
            do {
                if (M2C_FIELD(var_ip, s32 *, 0xC) == arg1) {
                    switch (arg3) {
                        case 0:
                        case 2:
                            M2C_FIELD(var_ip, s32 *, 0x10) = (s32) (M2C_FIELD(var_ip, s32 *, 0x10) | arg2);
                            break;
                        case 1:
                        case 3:
                            M2C_FIELD(var_ip, s32 *, 0x10) = arg2;
                            break;
                        case 4:
                            M2C_FIELD(var_ip, s32 *, 0x10) = (s32) (M2C_FIELD(var_ip, s32 *, 0x10) & ~arg2);
                            break;
                        case 5:
                            M2C_FIELD(var_ip, s32 *, 0x10) = 0;
                            break;
                        default:
                            break;
                    }
                    return 0;
                }
                var_ip = M2C_FIELD(var_ip, void **, 0);
            } while (var_ip != NULL);
        }
    }
    return -1;
}
