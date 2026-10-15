#include "m2c.h"

M2C_UNK G3i_LookAt_(M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK, s32);
M2C_UNK func_02073c98();
M2C_UNK func_02073d44();
M2C_UNK func_02073e08();
M2C_UNK func_02073ed0();
extern M2C_UNK data_020bd574;
extern M2C_UNK data_020bd580;
extern M2C_UNK data_020de26c;
extern M2C_UNK data_020de280;

void func_02073bc4(void) {
    if ((M2C_FIELD(&data_020de26c, volatile s32 *, 8) != 0) && (M2C_FIELD(&data_020de26c, volatile s32 *, 0xC) != 0)) {
        M2C_FIELD((void *) 0x04000440, volatile s32 *, 0)    = 2;
        M2C_FIELD((void *) 0x04000440, volatile s32 *, 0x14) = 0;
        G3i_LookAt_(&data_020bd574, &data_020bd580, &data_020de280, 1, 0);
        M2C_FIELD((void *) 0x04000444, volatile s32 *, 0)    = 0;
        M2C_FIELD((void *) 0x04000444, volatile s32 *, 0x2C) = -0x1000;
        M2C_FIELD((void *) 0x04000444, volatile s32 *, 0x2C) = -0x800;
        M2C_FIELD((void *) 0x04000444, volatile s32 *, 0x2C) = -0x2000;
        M2C_FIELD((void *) 0x04000444, volatile s32 *, 0x60) = 0x1F00D0;
        func_02073d44();
        func_02073ed0();
        if (M2C_FIELD(&data_020de26c, volatile s32 *, 0xC) == 2) {
            func_02073e08();
        }
        if (M2C_FIELD(&data_020de26c, volatile s32 *, 0xC) == 1) {
            func_02073c98();
        }
        *(s32 *) 0x04000448 = 1;
    }
}
