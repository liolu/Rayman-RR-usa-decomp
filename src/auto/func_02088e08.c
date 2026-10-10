#include "m2c.h"

void *func_02067900();                              /* extern */

s32 func_02088e08(void *arg0) {
    void *temp_r0;

    if (M2C_FIELD(M2C_FIELD(arg0, void **, 4), s32 *, 8) == 0) {
        return 0;
    }
    temp_r0 = func_02067900();
    if (temp_r0 == NULL) {
        return 0;
    }
    return M2C_FIELD(temp_r0, s32 *, 0x168);
}
