/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 NewSection();
M2C_UNK NNS_FndInitList();

s32 InitHeap(s32 *arg0, s32 arg1) {
    NNS_FndInitList(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (NewSection(arg0) != 0) {
        return 1;
    }
    return 0;
}
