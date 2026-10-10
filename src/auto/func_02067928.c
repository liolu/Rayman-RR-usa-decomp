#include "engine.h"
#include "m2c.h"

s32 func_02067900(s32 *);

s32 func_02067928(void *arg0) {
    s32 *temp_r0_2;
    s32 var_r1;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 4);
    var_r1  = 0;
    if ((temp_r0 != NULL) && (temp_r0_2 = M2C_FIELD(temp_r0, s32 **, 8), (temp_r0_2 != NULL))) {
        var_r1 = func_02067900(temp_r0_2);
    }
    return var_r1;
}
