/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200eb98();
s32 CARD_IsEnabled();

void CARD_CheckEnabled(void) {
    if (CARD_IsEnabled() != 0) {
        return;
    }
    func_0200eb98();
}
