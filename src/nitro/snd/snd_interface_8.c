/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void PushCommand_impl(s32, s32, s32, s32, s32);

void SND_SetChannelPan(s32 arg0, s32 arg1) {
    PushCommand_impl(0x15, arg0, arg1, 0, 0);
}
