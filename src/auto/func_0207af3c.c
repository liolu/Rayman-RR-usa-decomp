#include "m2c.h"

s32 func_0205488c(s32);
extern s32 sCaptureLock;
extern s32 data_020dfe5c;

void func_0207af3c(void) {
    if (data_020dfe5c == 0) {
        return;
    }
    sCaptureLock = func_0205488c(data_020dfe5c * 4);
}
