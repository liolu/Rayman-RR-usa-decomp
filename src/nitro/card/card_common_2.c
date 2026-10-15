/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_UnlockCard();
M2C_UNK func_02010c5c(M2C_UNK, M2C_UNK);

void CARD_UnlockRom(M2C_UNK arg0) {
    OS_UnlockCard();
    func_02010c5c(arg0, 1);
}
