#include "m2c.h"

void *func_0205488c(M2C_UNK);

void *func_020481c8(void) {
    void *temp_r0;

    temp_r0 = func_0205488c(4);
    if (temp_r0 == NULL) {
        return NULL;
    }
    M2C_FIELD(temp_r0, s16 *, 0) = -1;
    M2C_FIELD(temp_r0, s16 *, 2) = 0;
    return temp_r0;
}
