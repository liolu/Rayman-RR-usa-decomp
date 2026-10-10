/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK func_02013dbc;
extern M2C_UNK func_02013de8;

s32 func_0201375c(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, M2C_UNK *arg6, M2C_UNK *arg7) {
    M2C_UNK *var_r1;
    M2C_UNK *var_r2;

    M2C_FIELD(arg0, s32 *, 0x28) = arg1;
    M2C_FIELD(arg0, s32 *, 0x30) = arg3;
    M2C_FIELD(arg0, s32 *, 0x3C) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x38) = arg5;
    var_r2                       = arg6;
    M2C_FIELD(arg0, s32 *, 0x40) = arg4;
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 0x40);
    if (var_r2 == NULL) {
        var_r2 = &func_02013de8;
    }
    var_r1                            = arg7;
    M2C_FIELD(arg0, M2C_UNK **, 0x48) = var_r2;
    if (var_r1 == NULL) {
        var_r1 = &func_02013dbc;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = var_r1;
    M2C_FIELD(arg0, M2C_UNK **, 0x50) = (M2C_UNK *) M2C_FIELD(arg0, M2C_UNK **, 0x48);
    M2C_FIELD(arg0, s32 *, 0x44)      = 0;
    M2C_FIELD(arg0, s32 *, 0x1C)      = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) | 2);
    return 1;
}
