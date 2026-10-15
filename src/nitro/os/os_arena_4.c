/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_SetArenaLo(M2C_UNK, s32);
M2C_UNK OS_SetArenaHi(M2C_UNK, s32);
s32 OS_GetInitArenaLo(M2C_UNK);
s32 OS_GetInitArenaHi(M2C_UNK);
extern s32 OSi_Initialized;

void OS_InitArena(void) {
    if (OSi_Initialized != 0) {
        return;
    }
    OSi_Initialized = 1;
    OS_SetArenaHi(0, OS_GetInitArenaHi(0));
    OS_SetArenaLo(0, OS_GetInitArenaLo(0));
    OS_SetArenaLo(2, 0);
    OS_SetArenaHi(2, 0);
    OS_SetArenaHi(3, OS_GetInitArenaHi(3));
    OS_SetArenaLo(3, OS_GetInitArenaLo(3));
    OS_SetArenaHi(4, OS_GetInitArenaHi(4));
    OS_SetArenaLo(4, OS_GetInitArenaLo(4));
    OS_SetArenaHi(5, OS_GetInitArenaHi(5));
    OS_SetArenaLo(5, OS_GetInitArenaLo(5));
    OS_SetArenaHi(6, OS_GetInitArenaHi(6));
    OS_SetArenaLo(6, OS_GetInitArenaLo(6));
}
