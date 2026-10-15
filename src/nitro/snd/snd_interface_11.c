/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void PushCommand_impl(s32, s32, s32, s32, s32);

void SND_LockChannel(s32 arg0, s32 arg1) {
    PushCommand_impl(0x1A, arg0, arg1, 0, 0);
}
