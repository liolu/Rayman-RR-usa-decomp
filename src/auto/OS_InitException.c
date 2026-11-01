/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 OS_GetConsoleType();
extern u32 OSi_DebuggerHandler;
extern M2C_UNK OSi_ExceptionHandler;
extern s32 OSi_UserExceptionHandler;
void OS_InitException(void) {
    u32 temp_r1;
    u8 *base;
    temp_r1 = *(u32 *) 0x027FFD9C;
    if ((temp_r1 >= 0x02600000U) && (temp_r1 < 0x02800000U)) {
        OSi_DebuggerHandler = temp_r1;
    } else {
        OSi_DebuggerHandler = 0;
    }
    if ((OSi_DebuggerHandler == 0) && !(OS_GetConsoleType() & 0x40000000)) {
        *(M2C_UNK *) 0x027FFD9C      = (u32) &OSi_ExceptionHandler;
        base                         = (u8 *) 0x027E3000;
        *(M2C_UNK **) (base + 0xFDC) = &OSi_ExceptionHandler;
    }
    OSi_UserExceptionHandler = 0;
}
