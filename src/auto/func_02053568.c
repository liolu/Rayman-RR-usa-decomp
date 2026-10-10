#include "m2c.h"

s32 func_020148f4();                                /* extern */
extern M2C_UNK data_020bcf8c;

void func_02053568(s32 arg0) {
    M2C_FIELD(&data_020bcf8c, s32 *, 0) = arg0;
    if (arg0 == 0) {
        return;
    }
    M2C_FIELD(&data_020bcf8c, s32 *, 4) = func_020148f4();
}
