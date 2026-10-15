#include "m2c.h"

void **DLExtract(void **arg0, void *arg1) {
    void **temp_r3;
    void *temp_r2;

    temp_r3 = M2C_FIELD(arg1, void ***, 4);
    if (temp_r3 != NULL) {
        *temp_r3 = M2C_FIELD(arg1, void **, 0);
    }
    temp_r2 = M2C_FIELD(arg1, void **, 0);
    if (temp_r2 == NULL) {
        return M2C_FIELD(arg1, void ***, 4);
    }
    M2C_FIELD(temp_r2, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
    return arg0;
}
