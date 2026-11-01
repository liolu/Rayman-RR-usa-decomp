#include "m2c.h"

typedef struct Vec3i {
    s32 a;
    s32 b;
    s32 c;
} Vec3i;

extern u8 *func_02067900(u8 *arg0);

s32 func_0209344c(u8 *arg0, s32 *arg1) {
    u8 *temp_r0;

    temp_r0 = *(u8 **) (arg0 + 4);
    temp_r0 = *(u8 **) (temp_r0 + 8);
    arg1[3] = 0x15;
    if (temp_r0 != 0) {
        temp_r0 = func_02067900(temp_r0);
        if (temp_r0 != 0) {
            *(Vec3i *) arg1 = *(Vec3i *) (temp_r0 + 0x3C);
            return 1;
        }
    }
    arg1[0] = 0;
    arg1[1] = 0;
    arg1[2] = 0;
    return 1;
}
