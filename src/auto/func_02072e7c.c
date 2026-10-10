#include "m2c.h"

s32 func_0202b9a4(M2C_UNK *);                       /* extern */
extern u8 data_020bd49c;
extern M2C_UNK data_020bd49d;

u8 func_02072e7c(void) {
    u8 var_r0;

    if (data_020bd49c == 0xFF) {
        return 0U;
    }
    if (func_0202b9a4(&data_020bd49d) != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    return var_r0;
}
