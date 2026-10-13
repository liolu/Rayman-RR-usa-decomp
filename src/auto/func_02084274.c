#include "m2c.h"

void func_02084274(u8 *arg0) {
    u8 temp_r2 = arg0[-2];

    while (arg0[6] > temp_r2 && arg0[7] != 8) {
        arg0 += 8;
    }
}
