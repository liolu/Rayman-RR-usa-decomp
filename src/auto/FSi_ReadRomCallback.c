/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u32 fsi_default_dma_no;
extern void FSi_OnRomReadDone(void);
void func_020115ec(u32, void *, void *, s32, void (*)(void), void *, s32);

s32 FSi_ReadRomCallback(void *a0, void *a1, void *a2) {
    s32 unused;

    func_020115ec(fsi_default_dma_no, a2, a1, unused, FSi_OnRomReadDone, a0, 1);
    return 6;
}
