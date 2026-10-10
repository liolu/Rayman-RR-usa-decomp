#define M2C_SELF_func_02048300
#include "m2c_protos.h"

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
