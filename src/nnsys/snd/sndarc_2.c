#include "m2c.h"

extern void *sCurrent;
typedef struct {
    s32 f0;
    s32 f1;
} M2C_S8;

s32 NNS_SndArcGetFileAddress(u32 arg0) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(sCurrent, void **, 0x84);
    if (arg0 >= (u32) M2C_FIELD(temp_r2, u32 *, 8)) {
        return 0;
    }
    return M2C_FIELD((temp_r2 + (arg0 * 0x10)), s32 *, 0x14);
}

void NNS_SndArcGetFileID(void *arg0) {
    *(M2C_S8 *) ((s8 *) arg0 + 0) = *(M2C_S8 *) ((s8 *) sCurrent + 124);
}
