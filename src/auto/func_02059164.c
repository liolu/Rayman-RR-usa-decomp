#include "m2c.h"

M2C_UNK func_0201973c();                            /* extern */
s16 func_0201981c(M2C_UNK);                         /* extern */
extern M2C_UNK data_020dc19c;

void func_02059164(void) {
    func_0201973c();
    M2C_FIELD(&data_020dc19c, s16 *, 0x70) = func_0201981c(0);
}
