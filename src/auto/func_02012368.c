#include "m2c.h"

/* REG_EXMEMCNT (0x04000204): ARM7/ARM9 memory priority control. */
void func_02012368(u32 *arg0) {
    volatile u16 *reg = (volatile u16 *) 0x04000204;

    *reg = (arg0[0] << 2) | (*reg & ~0xC);
    *reg = (arg0[1] << 4) | (*reg & ~0x10);
}
