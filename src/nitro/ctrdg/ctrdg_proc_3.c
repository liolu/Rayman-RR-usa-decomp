/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0200eb98();
M2C_UNK CTRDG_TerminateForPulledOut();
extern s32 ctrdg_already_pullout;
extern s32 (*CTRDG_UserCallback)();

void CTRDGi_PulledOutCallback(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        if (ctrdg_already_pullout != 0) {
            return;
        }
        var_r0 = 0;
        if (CTRDG_UserCallback != NULL) {
            var_r0 = CTRDG_UserCallback();
        }
        if (var_r0 != 0) {
            CTRDG_TerminateForPulledOut();
        }
        ctrdg_already_pullout = 1;
        return;
    }
    func_0200eb98();
}
