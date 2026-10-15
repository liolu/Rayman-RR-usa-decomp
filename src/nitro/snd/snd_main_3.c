/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_InitMutex(M2C_UNK *);
M2C_UNK SND_CommandInit();
M2C_UNK SND_AlarmInit();
extern s32 data_020c20d8;
extern M2C_UNK sSndMutex;

void SND_Init(void) {
    if (data_020c20d8 != 0) {
        return;
    }
    data_020c20d8 = 1;
    OS_InitMutex(&sSndMutex);
    SND_CommandInit();
    SND_AlarmInit();
}
