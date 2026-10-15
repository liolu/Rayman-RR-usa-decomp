#include "m2c.h"

M2C_UNK func_02001588(void *, void *, M2C_UNK);

void func_02031898(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) & 4) {
        func_02001588(arg0 + 0x304, arg0 + 0x78, 0x64);
        func_02001588(arg0 + 0x2A0, arg0 + 0xDC, 0x64);
    }
    func_02001588(arg0 + 0x78, arg0 + 0xDC, 0x64);
}
