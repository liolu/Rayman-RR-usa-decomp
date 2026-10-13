#include "engine.h"
#include "m2c.h"

s32 func_0206a7ec(void *);

s32 func_0201ba68(void *arg0, void *arg1, void *arg2);

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

s32 func_020913a0(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Vec3 sp0;
    void *temp_r0;
    void *temp_r0_2;
    void *ptr;
    void *var_r8;

    temp_r0 = (void *) func_0206a7ec((void *) arg0);
    if (temp_r0 == 0) {
        return 0;
    }
    temp_r0_2 = (void *) func_0206a7ec((void *) arg2);
    if (temp_r0_2 == 0) {
        return 0;
    }
    sp0.x = M2C_FIELD(arg3, s32 *, 0) - M2C_FIELD(arg1, s32 *, 0);
    sp0.y = M2C_FIELD(arg3, s32 *, 4) - M2C_FIELD(arg1, s32 *, 4);
    sp0.z = M2C_FIELD(arg3, s32 *, 8) - M2C_FIELD(arg1, s32 *, 8);
    if (func_0201ba68((void *) arg1, &sp0, temp_r0) != 0) {
        return 1;
    }
    if ((temp_r0 != temp_r0_2) && (func_0201ba68((void *) arg1, &sp0, temp_r0_2) != 0)) {
        return 1;
    }
    ptr = M2C_FIELD(temp_r0, void **, 4);
    /* arg3 (dead after the sp0.z computation) is reused as the entry count:
       the countdown must live in r6, the register the dead 4th argument holds. */
    arg3   = M2C_FIELD(ptr, s32 *, 0x24);
    var_r8 = M2C_FIELD(ptr, void **, 0x20);
    while (arg3 > 0) {
        if (M2C_FIELD(var_r8, void **, 4) != temp_r0_2) {
            if (func_0201ba68((void *) arg1, &sp0, M2C_FIELD(var_r8, void **, 4)) != 0) {
                return 1;
            }
        }
        arg3 -= 1;
        var_r8 = (void *) ((s8 *) var_r8 + 8);
    }
    return 0;
}
