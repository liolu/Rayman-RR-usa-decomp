/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OSi_ExitThread(s32);
M2C_UNK OS_InitContext(void *, M2C_UNK (*)(s32));
M2C_UNK OS_LoadContext(void *);
extern s32 OSi_StackForDestructor;

void OSi_ExitThread_ArgSpecified(void *arg0, s32 arg1) {
    if (OSi_StackForDestructor != 0) {
        OS_InitContext(arg0, OSi_ExitThread);
        M2C_FIELD(arg0, s32 *, 4)    = arg1;
        M2C_FIELD(arg0, s32 *, 0)    = (s32) (M2C_FIELD(arg0, s32 *, 0) | 0x80);
        M2C_FIELD(arg0, s32 *, 0x64) = 1;
        OS_LoadContext(arg0);
        return;
    }
    OSi_ExitThread(arg1);
}
