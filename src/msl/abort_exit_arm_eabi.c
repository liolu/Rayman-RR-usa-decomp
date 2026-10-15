#include "engine.h"
#include "m2c.h"

void exit(M2C_UNK);
M2C_UNK raise(M2C_UNK);
extern M2C_UNK __console_exit;
M2C_UNK __exit(M2C_UNK);
M2C_UNK __destroy_global_chain();

void abort(void) {
    raise(1);
    M2C_FIELD(&__console_exit, s32 *, 0xC) = 1;
    exit(1);
}

void exit(M2C_UNK arg0) {
    if (M2C_FIELD(&__console_exit, s32 *, 0xC) == 0) {
        __destroy_global_chain();
        if (M2C_FIELD(&__console_exit, M2C_UNK(**)(), 4) != NULL) {
            M2C_FIELD(&__console_exit, M2C_UNK(**)(), 4)();
            M2C_FIELD(&__console_exit, M2C_UNK(**)(), 4) = NULL;
        }
    }
    __exit(arg0);
}
