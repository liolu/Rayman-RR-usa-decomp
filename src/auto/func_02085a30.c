#include "m2c.h"

void *func_0201a588(M2C_UNK);

void func_02085a30(void) {
    void *temp_r0;

    temp_r0 = func_0201a588(0xC);
    if (temp_r0 == NULL) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0) = 0;
    M2C_FIELD(temp_r0, s32 *, 4) = 0;
    M2C_FIELD(temp_r0, s32 *, 8) = 0;
}
