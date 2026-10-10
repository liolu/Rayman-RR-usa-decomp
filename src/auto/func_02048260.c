#include "m2c.h"

extern s32 (*data_020d0354)();

s32 func_02048260(void) {
    if (data_020d0354 == NULL) {
        return 0;
    }
    return data_020d0354();
}
