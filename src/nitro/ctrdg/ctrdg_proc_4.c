/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200eb98();
extern s16 CTRDGi_Work;

void CTRDGi_CallbackForInitModuleInfo(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        CTRDGi_Work = 1;
        return;
    }
    func_0200eb98();
}
