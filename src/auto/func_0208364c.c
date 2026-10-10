#include "engine.h"
#include "m2c.h"

s32 func_02048284(s32);

u8 func_0208364c(s32 *arg0, s32 arg1, void *arg2) {
    s32 temp_r0;
    u8 var_r0;

    temp_r0                     = *arg0;
    M2C_FIELD(arg2, s32 *, 0)   = temp_r0;
    M2C_FIELD(arg2, s32 *, 0xC) = 0x26;
    if (func_02048284(temp_r0) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
