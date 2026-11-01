/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef void (*RescheduleCb)(void *, void *);

extern u32 data_020c0c48;
extern void *OSi_CurrentThreadPtr;
extern RescheduleCb data_020c0c50;
extern u8 OSi_ThreadInfo[];

unsigned long OS_GetProcMode(void);
s32 OS_SelectThread(void);
s32 OS_SaveContext(void *ctx);
void OS_LoadContext(void *ctx);

void OS_RescheduleThread(void) {
    u8 *info;
    u8 *cur;
    u8 *sel;

    info = OSi_ThreadInfo;
    if (data_020c0c48 != 0) {
        return;
    }
    if (*(u16 *) (info + 2) != 0 || OS_GetProcMode() == 0x12) {
        *(u16 *) info = 1;
        return;
    }
    cur = *(u8 **) OSi_CurrentThreadPtr;
    sel = (u8 *) OS_SelectThread();
    if (cur == sel) {
        return;
    }
    if (sel == 0) {
        return;
    }
    if (*(u32 *) (cur + 0x64) != 2) {
        if (OS_SaveContext(cur) != 0) {
            return;
        }
    }
    if (data_020c0c50 != 0) {
        data_020c0c50(cur, sel);
    }
    if (*(RescheduleCb *) (info + 0xc) != 0) {
        (*(RescheduleCb *) (info + 0xc))(cur, sel);
    }
    *(u8 **) (OSi_ThreadInfo + 4) = sel;
    OS_LoadContext(sel);
}
