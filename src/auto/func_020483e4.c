#include "m2c.h"

extern M2C_UNK (*data_020d035c)();

void func_020483e4(void) {
    if (data_020d035c == NULL) {
        return;
    }
    data_020d035c();
}
