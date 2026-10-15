/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200eb98();
M2C_UNK CARD_TerminateForPulledOut();
extern s32 CARDi_IsPulledOutFlag;
extern s32 (*CARD_UserCallback)();

void CARDi_PulledOutCallback(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (CARDi_IsPulledOutFlag != 0) {
            return;
        }
        var_r0        = 1;
        CARDi_IsPulledOutFlag = 1;
        if (CARD_UserCallback != NULL) {
            var_r0 = CARD_UserCallback();
        }
        if (var_r0 == 0) {
            return;
        }
        CARD_TerminateForPulledOut();
        return;
    }
    func_0200eb98();
}
