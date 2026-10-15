#include "m2c.h"

void *OSi_RemoveMutexLinkFromQueue(void *arg0) {
    void *temp_r1;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0);
    if (temp_r2 != NULL) {
        temp_r1                     = M2C_FIELD(temp_r2, void **, 0x10);
        M2C_FIELD(arg0, void **, 0) = temp_r1;
        if (temp_r1 != NULL) {
            M2C_FIELD(temp_r1, s32 *, 0x14) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 4) = 0;
        }
    }
    return temp_r2;
}
