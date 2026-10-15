#include "m2c.h"

M2C_UNK func_0202f9b0(M2C_UNK, u8, s32, M2C_UNK, s32, s32, s32);
M2C_UNK func_02030be4(u8, M2C_UNK, s32);
s32 func_0207abe0(u8, M2C_UNK);
M2C_UNK func_0207ac90(M2C_UNK);
M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, M2C_UNK *);
extern M2C_UNK data_020bc03c;
extern u8 data_020bc050;
extern M2C_UNK data_020cf6cc;

void func_0201d108(void) {
    func_02030be4(data_020bc050, 4, 0x186A0);
    func_0202f9b0(0, data_020bc050, *((M2C_UNK *) ((s8 *) &data_020cf6cc + (data_020bc050 * 4))), 0x5000, 0x186A0, 4, 0xC);
    func_0202f9b0(2, data_020bc050, *((M2C_UNK *) ((s8 *) &data_020cf6cc + (data_020bc050 * 4))), 0x20000, 0x186A0, 8, 0xD);
    func_0202f9b0(3, data_020bc050, *((M2C_UNK *) ((s8 *) &data_020cf6cc + (data_020bc050 * 4))), 0xC800, 0x186A0, 8, 0xC);
    func_0202f9b0(1, data_020bc050, *((M2C_UNK *) ((s8 *) &data_020cf6cc + (data_020bc050 * 4))), 0x10, 0x186A0, 4, 0xC);
    if (func_0207abe0(data_020bc050, 0) == 0) {
        return;
    }
    func_0207ac90(0);
    func_0207ad9c(7, data_020bc050, 0, 1, -1, 0xFF, 0xFF, &data_020bc03c);
}
