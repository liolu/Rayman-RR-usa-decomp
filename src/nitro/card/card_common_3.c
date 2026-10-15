/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_LockCard(M2C_UNK);
M2C_UNK func_02010d00(M2C_UNK, M2C_UNK);

void CARD_LockRom(M2C_UNK arg0) {
    func_02010d00(arg0, 1);
    OS_LockCard(arg0);
}
