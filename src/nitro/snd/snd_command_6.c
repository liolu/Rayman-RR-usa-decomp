/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 SND_CountReservedCommand();
s32 SND_CountFreeCommand();

s32 SND_CountWaitingCommand(void) {
    s32 temp_r4;

    temp_r4 = SND_CountFreeCommand();
    return (0x100 - temp_r4) - SND_CountReservedCommand();
}
