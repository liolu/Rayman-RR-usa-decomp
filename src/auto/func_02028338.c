#include "m2c.h"

extern s32 data_020c7108[10];
extern s32 data_020c7590[10];

void func_02028338(void) {
    s32 i;

    for (i = 0; i < 0xA; i++) {
        data_020c7590[i] = 0;
        data_020c7108[i] = 0;
    }
}
