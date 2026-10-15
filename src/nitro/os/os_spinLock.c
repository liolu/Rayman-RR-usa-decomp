#include "m2c.h"

M2C_UNK func_0200c6bc(M2C_UNK, s32, M2C_UNK *);
extern M2C_UNK func_0200c564;
M2C_UNK func_0200c75c(M2C_UNK, s32, M2C_UNK *);
extern M2C_UNK func_0200c57c;

void OS_UnlockCard(M2C_UNK arg0) {
    func_0200c6bc(arg0, 0x027FFFE0, &func_0200c564);
}

void OS_LockCard(M2C_UNK arg0) {
    func_0200c75c(arg0, 0x027FFFE0, &func_0200c57c);
}
