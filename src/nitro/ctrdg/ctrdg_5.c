/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 CTRDG_IsExisting();
s32 CTRDGi_IsAgbCartridgeAtInit();

s32 CTRDG_IsOptionCartridge(void) {
    if ((CTRDG_IsExisting() != 0) && (CTRDGi_IsAgbCartridgeAtInit() == 0)) {
        return 1;
    }
    return 0;
}
