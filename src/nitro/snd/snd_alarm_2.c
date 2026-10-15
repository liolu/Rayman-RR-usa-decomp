#include "m2c.h"

extern M2C_UNK sCallbackTable;

u8 SNDi_SetAlarmHandler(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r3;
    void *temp_r1;

    temp_r3                                           = arg0 * 0xC;
    *((M2C_UNK *) ((s8 *) &sCallbackTable + temp_r3)) = arg1;
    temp_r1                                           = (M2C_UNK *) ((s8 *) &sCallbackTable + temp_r3);
    M2C_FIELD(temp_r1, volatile s32 *, 4)             = arg2;
    M2C_FIELD(temp_r1, volatile u8 *, 8)              = (u8) (M2C_FIELD(temp_r1, volatile u8 *, 8) + 1);
    return M2C_FIELD(temp_r1, volatile u8 *, 8);
}

void SNDi_IncAlarmId(s32 arg0) {
    s32 temp_r1;

    temp_r1                     = (arg0 * 0xC) + (s32) &sCallbackTable;
    M2C_FIELD(temp_r1, u8 *, 8) = (u8) (M2C_FIELD(temp_r1, u8 *, 8) + 1);
}
