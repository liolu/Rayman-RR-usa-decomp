/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK SND_FlushCommand(M2C_UNK);
s32 SND_RecvCommandReply(M2C_UNK);
M2C_UNK NNSi_SndPlayerMain();
M2C_UNK func_020b335c();
M2C_UNK NNSi_SndArcStrmMain();

void NNS_SndMain(void) {
    do {

    } while (SND_RecvCommandReply(0) != 0);
    NNSi_SndPlayerMain();
    func_020b335c();
    NNSi_SndArcStrmMain();
    SND_FlushCommand(0);
}
