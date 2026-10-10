#include "m2c.h"

M2C_UNK func_02016508(M2C_UNK *);                   /* extern */
M2C_UNK func_0201651c(M2C_UNK, M2C_UNK, s32, s32);  /* extern */
M2C_UNK func_02017a68(M2C_UNK);                     /* extern */
extern M2C_UNK data_020db928;
extern u16 data_020db954;
extern M2C_UNK data_020db958;
extern s32 data_020db978;
extern s32 data_020db97c;
extern s32 data_020db980;

void func_0204a80c(void) {
    if (M2C_FIELD(&data_020db928, s32 *, 8) == 0) {
        return;
    }
    func_02017a68(0);
    func_0201651c(1, 0, data_020db97c, data_020db978);
    func_02016508(&data_020db958);
    *(s32 *) 0x04000358                 = data_020db954 | (data_020db980 << 0x10);
    M2C_FIELD(&data_020db928, s32 *, 8) = 0;
}
