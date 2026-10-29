/* compiler: 1.2/sp2p3 */
#include "m2c.h"
typedef void (*CB)(u32);
void OSi_ReferSymbol(s32);
void func_0200eb98(void);
void CARD_CheckEnabled(void);
u32 OS_DisableIrq(void);
void OS_RestoreIrq(u32);
void OS_SleepThread(void *);
void OS_WakeupThread(void *);
void OS_WakeupThreadDirect(void *);
void CARDi_IdentifyBackupCore(s32);
void CARDi_Request(void *, s32, s32);
extern u8 cardi_common[];
extern u8 OSi_ThreadInfo[];

s32 CARD_IdentifyBackup(s32 type) {
    u8 *c = cardi_common;
    u32 irq;
    CB cb;
    u32 arg;
    OSi_ReferSymbol(0x2000b80);
    if (type == 0) {
        func_0200eb98();
    }
    CARD_CheckEnabled();
    irq = OS_DisableIrq();
    while (*(u32 *) (c + 0x114) & 4) {
        OS_SleepThread(c + 0x10c);
    }
    *(u32 *) (c + 0x114) |= 4;
    *(u32 *) (c + 0x38) = 0;
    *(u32 *) (c + 0x3c) = 0;
    OS_RestoreIrq(irq);
    CARDi_IdentifyBackupCore(type);
    *(u32 *) (cardi_common + 0x104) = *(u32 *) (OSi_ThreadInfo + 4);
    CARDi_Request(c, 2, 1);
    *(u32 *) (*(u8 **) c + 0xc)  = 0;
    *(u8 **) (*(u8 **) c + 0x10) = c + 0x120;
    *(u32 *) (*(u8 **) c + 0x14) = 1;
    CARDi_Request(c, 6, 1);
    cb  = *(CB *) (c + 0x38);
    arg = *(u32 *) (c + 0x3c);
    irq = OS_DisableIrq();
    *(u32 *) (c + 0x114) &= ~0x4c;
    OS_WakeupThread(c + 0x10c);
    if (*(u32 *) (c + 0x114) & 0x10) {
        OS_WakeupThreadDirect(c + 0x44);
    }
    OS_RestoreIrq(irq);
    if (cb != NULL) {
        cb(arg);
    }
    return **(s32 **) c == 0;
}
