#include "m2c.h"

extern M2C_UNK tpState;

s32 TP_CheckError(s32 arg0) {
    return M2C_FIELD(&tpState, u16 *, 0x34) & arg0;
}
