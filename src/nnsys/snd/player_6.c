#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020e96f0;
extern M2C_UNK data_020e96ec;

void NNS_SndPlayerSetAllocatableChannel(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020e96f0 + (arg0 * 0x24))) = arg1;
}

void NNS_SndPlayerSetPlayableSeqCount(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020e96ec + (arg0 * 0x24))) = (s32) (u16) arg1;
}
