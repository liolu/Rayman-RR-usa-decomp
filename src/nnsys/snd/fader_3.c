/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 NNSi_SndFaderGet();

void NNSi_SndFaderSet(void *arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s32 *, 0)   = NNSi_SndFaderGet();
    M2C_FIELD(arg0, s32 *, 4)   = arg1;
    M2C_FIELD(arg0, s32 *, 0xC) = arg2;
    M2C_FIELD(arg0, s32 *, 8)   = 0;
}
