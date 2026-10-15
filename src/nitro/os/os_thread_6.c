#include "m2c.h"

extern M2C_UNK OSi_ThreadInfo;

s32 OS_SelectThread(void) {
    void *var_r0;

    var_r0 = M2C_FIELD(&OSi_ThreadInfo, void **, 8);
    goto test;
body:
    var_r0 = M2C_FIELD(var_r0, void **, 0x68);
test:
    if (var_r0 == NULL) {
        return (s32) var_r0;
    }
    if (M2C_FIELD(var_r0, s32 *, 0x64) == 1) {
        return (s32) var_r0;
    }
    goto body;
}
