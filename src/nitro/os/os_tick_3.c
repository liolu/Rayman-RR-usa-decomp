/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_EnableIrqMask(M2C_UNK);
M2C_UNK OS_SetIrqFunction(M2C_UNK, M2C_UNK *);
M2C_UNK OSi_SetTimerReserved(M2C_UNK);
extern u16 OSi_UseTick;
extern s32 OSi_NeedResetTimer;
extern M2C_UNK OSi_TickCounter;
extern M2C_UNK OSi_CountUpTick;

void OS_InitTick(void) {
    if (OSi_UseTick != 0) {
        return;
    }
    OSi_UseTick = 1;
    OSi_SetTimerReserved(0);
    M2C_FIELD(&OSi_TickCounter, s32 *, 0) = 0;
    M2C_FIELD(&OSi_TickCounter, s32 *, 4) = 0;
    *(s16 *) 0x04000102                 = 0;
    *(s16 *) 0x04000100                 = 0;
    *(s16 *) 0x04000102                 = 0xC1;
    OS_SetIrqFunction(8, &OSi_CountUpTick);
    OS_EnableIrqMask(8);
    OSi_NeedResetTimer = 0;
}
