/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 OS_DisableIrq(void);
void OS_RestoreIrq(s32 irq);

void MIi_DmaSetParams(s32 i, s32 a, s32 b, s32 c) {
    s32 *p;
    s32 irq;

    irq                                  = OS_DisableIrq();
    p                                    = (s32 *) (0x40000b0 + i * 12);
    *(s32 *) (0x4000000 + 0xb0 + i * 12) = a;
    p[1]                                 = b;
    p[2]                                 = c;
    OS_RestoreIrq(irq);
}
