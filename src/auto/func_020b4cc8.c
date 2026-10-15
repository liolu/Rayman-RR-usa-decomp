/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK RemoveCommandByPlayer();
M2C_UNK FreeChannel();
M2C_UNK FreePlayer();
extern s32 sPrepareThread;
extern M2C_UNK data_020ea540;

void func_020b4cc8(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    FreeChannel(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x164)(arg0);
    RemoveCommandByPlayer(&data_020ea540, arg0);
    if (sPrepareThread != 0) {
        RemoveCommandByPlayer(sPrepareThread + 0x4E0, arg0);
    }
    FreePlayer(arg0);
}
