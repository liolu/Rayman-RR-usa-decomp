#include "engine.h"
#include "m2c.h"

u8 func_02048234(void *, s32);

u8 func_02048300(void *arg0, s32 arg1) {
    void *temp_r0;

    if (arg1 == 0) {
        return 1U;
    }
    temp_r0 = M2C_FIELD(arg0, void **, 0xC);
    if ((temp_r0 != NULL) && (temp_r0 != (void *) -1)) {
        return func_02048234(temp_r0, arg1);
    }
    return 0U;
}
