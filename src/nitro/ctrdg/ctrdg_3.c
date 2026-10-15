#include "m2c.h"

/* REG_EXMEMCNT (0x04000204): ARM7/ARM9 memory priority control. */
void CTRDGi_RestoreAccessCycle(u32 *arg0) {
    volatile u16 *reg = (volatile u16 *) 0x04000204;

    *reg = (arg0[0] << 2) | (*reg & ~0xC);
    *reg = (arg0[1] << 4) | (*reg & ~0x10);
}

void CTRDGi_ChangeLatestAccessCycle(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((s32) (*(u16 *) 0x04000204 & 0xC) >> 2);
    M2C_FIELD(arg0, s32 *, 4) = (s32) ((s32) (*(u16 *) 0x04000204 & 0x10) >> 4);
    *(u16 *) 0x04000204       = (*(u16 *) 0x04000204 & ~0xC) | 0xC;
    *(u16 *) 0x04000204 &= ~0x10;
}
