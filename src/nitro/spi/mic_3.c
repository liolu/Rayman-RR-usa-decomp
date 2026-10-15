/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02018424(M2C_UNK, s32, M2C_UNK);

s32 MicStopAutoSampling(void) {
    if (func_02018424(9, 0x03004200, 0) >= 0) {
        return 1;
    }
    return 0;
}
