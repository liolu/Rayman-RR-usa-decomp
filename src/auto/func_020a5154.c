#include "m2c.h"

s32 func_02084450(M2C_UNK, s32, s32 *);             /* extern */
s32 func_020a50d0(s32);                             /* extern */
extern M2C_UNK data_020e4c1c;
extern M2C_UNK data_020e4c68;
extern M2C_UNK data_020e4df8;
extern M2C_UNK data_020e4d30;

s32 func_020a5154(M2C_UNK arg0, s32 arg1) {
    s32 sp0[4];
    s32 r4;
    s32 ret;
    s32 idx;

    idx                           = M2C_FIELD(&data_020e4c1c, s32 *, 0x44);
    r4                            = arg1 - 8;
    ((s32 *) &data_020e4c68)[idx] = r4;
    ret                           = func_02084450(arg0, arg1, &sp0[0]);
    idx                           = M2C_FIELD(&data_020e4c1c, s32 *, 0x44);
    ((s32 *) &data_020e4df8)[idx] = sp0[0];
    if (sp0[0] == 0) {
        return func_020a50d0(r4);
    }
    ((s32 *) &data_020e4d30)[idx]          = ret;
    M2C_FIELD(&data_020e4c1c, s32 *, 0x44) = idx + 1;
    return ret;
}
