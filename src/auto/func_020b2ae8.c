#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020e96ec;

void func_020b2ae8(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020e96ec + (arg0 * 0x24))) = (s32) (u16) arg1;
}
