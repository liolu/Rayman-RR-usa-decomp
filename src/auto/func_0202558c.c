#include "m2c.h"

extern void *data_020c57a4;

void *func_0202558c(s32 arg0, s32 arg1, s32 arg2) {
    void *var_ip;

    if (arg2 == 0) {
        var_ip = data_020c57a4;
        if (var_ip != NULL) {
        loop_2:
            if ((M2C_FIELD(var_ip, s32 *, 0x18) != 0) && (M2C_FIELD(var_ip, s32 *, 0) == arg0) &&
                (M2C_FIELD(var_ip, s32 *, 4) == arg1)) {

            } else {
                var_ip = M2C_FIELD(var_ip, void **, 0x2C);
                if (var_ip == NULL) {

                } else {
                    goto loop_2;
                }
            }
        }
    } else {
        var_ip = data_020c57a4;
        if (var_ip != NULL) {
        loop_9:
            if ((M2C_FIELD(var_ip, s32 *, 0x18) != 0) && (M2C_FIELD(var_ip, s32 *, 0) == arg0) &&
                (M2C_FIELD(var_ip, s32 *, 8) == arg2) && (M2C_FIELD(var_ip, s32 *, 4) == arg1)) {

            } else {
                var_ip = M2C_FIELD(var_ip, void **, 0x2C);
                if (var_ip != NULL) {
                    goto loop_9;
                }
            }
        }
    }
    return var_ip;
}
