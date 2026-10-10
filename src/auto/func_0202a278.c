#include "m2c.h"

M2C_UNK func_0202a2a0(void *);                      /* extern */

void func_0202a278(void *arg0) {
    void *var_r4;

    var_r4 = M2C_FIELD(arg0, void **, 8);
    if (var_r4 == NULL) {
        return;
    }
    do {
        func_0202a2a0(var_r4);
        var_r4 = M2C_FIELD(var_r4, void **, 0x14);
    } while (var_r4 != NULL);
}
