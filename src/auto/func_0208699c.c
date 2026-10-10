#include "m2c.h"

void *func_0201a588(M2C_UNK);                       /* extern */
s32 func_02085a30();                                /* extern */

void *func_0208699c(s32 arg0, s32 arg1) {
    void *var_r4;

    var_r4 = NULL;
    if (arg0 != 0) {
        var_r4 = func_0201a588(0x1C);
        if (var_r4 != NULL) {
            M2C_FIELD(var_r4, s32 *, 0)    = 0;
            M2C_FIELD(var_r4, s32 *, 4)    = 0;
            M2C_FIELD(var_r4, s32 *, 8)    = 0;
            M2C_FIELD(var_r4, s32 *, 0xC)  = arg0;
            M2C_FIELD(var_r4, s32 *, 0x10) = arg1;
            M2C_FIELD(var_r4, s32 *, 0x14) = arg1;
            M2C_FIELD(var_r4, s32 *, 0x18) = func_02085a30();
        }
    }
    return var_r4;
}
