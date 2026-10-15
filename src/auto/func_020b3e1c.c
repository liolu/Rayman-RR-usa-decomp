/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 NNS_SndArcGetFileAddress(M2C_UNK);
extern M2C_UNK func_020b3ce8;
extern M2C_UNK ReadMemoryStream;
extern M2C_UNK func_020b3d0c;
extern M2C_UNK OpenMemoryStream;
extern M2C_UNK func_020b3d40;
extern M2C_UNK ReadFileStream;
extern M2C_UNK CloseFileStream;
extern M2C_UNK OpenFileStream;

void func_020b3e1c(void *arg0, M2C_UNK arg1) {
    if (NNS_SndArcGetFileAddress(arg1) == 0) {
        M2C_FIELD(arg0, M2C_UNK **, 0x160) = &OpenFileStream;
        M2C_FIELD(arg0, M2C_UNK **, 0x164) = &CloseFileStream;
        M2C_FIELD(arg0, M2C_UNK **, 0x168) = &ReadFileStream;
        M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_020b3d40;
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x160) = &OpenMemoryStream;
    M2C_FIELD(arg0, M2C_UNK **, 0x164) = &func_020b3d0c;
    M2C_FIELD(arg0, M2C_UNK **, 0x168) = &ReadMemoryStream;
    M2C_FIELD(arg0, M2C_UNK **, 0x16C) = &func_020b3ce8;
}
