#include "m2c.h"

M2C_UNK func_02035e70(void *);                      /* extern */
void *func_0205488c(M2C_UNK);                       /* extern */

void *func_02048360(void) {
    void *temp_r0;

    temp_r0 = func_0205488c(0x10);
    if (temp_r0 == NULL) {
        return NULL;
    }
    func_02035e70(temp_r0 + 4);
    M2C_FIELD(temp_r0, s32 *, 0)   = 0;
    M2C_FIELD(temp_r0, s32 *, 8)   = -1;
    M2C_FIELD(temp_r0, s32 *, 0xC) = -1;
    return temp_r0;
}
