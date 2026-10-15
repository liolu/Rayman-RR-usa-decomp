#include "m2c.h"

M2C_UNK func_02035614();

void func_02035908(void *arg0, s32 *arg1) {
    if (*arg1 == 1) {
        func_02035614(arg0, arg1);
    }
    M2C_FIELD(arg0, s32 **, 4) = arg1;
}
