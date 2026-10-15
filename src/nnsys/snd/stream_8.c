/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK NNS_FndInitList(M2C_UNK *, M2C_UNK);
extern s32 data_020e9b54;
extern M2C_UNK sStrmList;
extern M2C_UNK func_020b2b08;
extern M2C_UNK func_020b2b80;

void NNS_SndStrmInit(void *arg0) {
    if (data_020e9b54 == 0) {
        NNS_FndInitList(&sStrmList, 0);
        data_020e9b54 = 1;
    }
    M2C_FIELD(arg0, M2C_UNK **, 8)    = &func_020b2b80;
    M2C_FIELD(arg0, void **, 0xC)     = arg0;
    M2C_FIELD(arg0, M2C_UNK **, 0x14) = &func_020b2b08;
    M2C_FIELD(arg0, void **, 0x18)    = arg0;
    M2C_FIELD(arg0, s32 *, 0x44)      = 0;
    M2C_FIELD(arg0, s32 *, 0x48)      = 0;
    M2C_FIELD(arg0, s32 *, 0x24)      = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
    M2C_FIELD(arg0, s32 *, 0x24)      = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~2);
}
