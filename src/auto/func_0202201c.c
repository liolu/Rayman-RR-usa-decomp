#include "m2c.h"

M2C_UNK func_0201d43c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0201f8d8(s32);                             /* extern */
s32 func_02027f80(s32);                             /* extern */
extern M2C_UNK data_020bc218;

s32 func_0202201c(void *arg0) {
    s32 *temp_r2;
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 4);
    switch (temp_r0) {                              /* irregular */
        case 1:
            var_r0 = func_02027f80(M2C_FIELD(arg0, s32 *, 0));
            break;
        case 2:
            var_r0 = func_0201f8d8(M2C_FIELD(arg0, s32 *, 0));
            break;
        default:
            func_0201d43c(0x15, &data_020bc218);
            var_r0 = 0;
            break;
    }
    if (var_r0 == 0) {
        temp_r2 = M2C_FIELD(arg0, s32 **, 0x18);
        if (temp_r2 != NULL) {
            *temp_r2                      = 0;
            M2C_FIELD(arg0, s32 **, 0x18) = NULL;
        }
        M2C_FIELD(arg0, s32 *, 8) = 1;
    }
    return var_r0;
}
