#include "m2c.h"

s32 SND_CountReservedCommand();
M2C_UNK SND_FlushCommand(M2C_UNK);

void func_0201fc54(void) {
    if (SND_CountReservedCommand() <= 0) {
        return;
    }
    SND_FlushCommand(1);
}
