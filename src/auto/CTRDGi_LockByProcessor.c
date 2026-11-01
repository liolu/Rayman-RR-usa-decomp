/* compiler: 1.2/sp2p3 */
#include "m2c.h"

unsigned long OS_DisableIrq(void);
u16 func_0200c55c(void *p);
s32 func_0200c5fc(void *p);
unsigned long OS_RestoreIrq(unsigned long ulState);
void WaitByLoop(s32 n);

void CTRDGi_LockByProcessor(void *p0, u32 *p1) {
    void *lock;
    s32 one;

    lock = (void *) 0x027fffe8;
    one  = 1;
    while (1) {
        p1[1] = OS_DisableIrq();
        p1[0] = func_0200c55c(lock) & 0x40;
        if (p1[0] != 0) {
            return;
        }
        if (func_0200c5fc(p0) == 0) {
            return;
        }
        OS_RestoreIrq(p1[1]);
        WaitByLoop(one);
    }
}
