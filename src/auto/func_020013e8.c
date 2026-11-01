#include "m2c.h"

s32 func_02003cfc();

s8 *func_020013e8(s8 *arg0) {
    s32 i = 0;
    s32 j = func_02003cfc() - 1;
    s8 t;

    if (j > 0) {
        do {
            t       = arg0[i];
            arg0[i] = arg0[j];
            arg0[j] = t;
            i++;
            j--;
        } while (i < j);
    }
    return arg0;
}
