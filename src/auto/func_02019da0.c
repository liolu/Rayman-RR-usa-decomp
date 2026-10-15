#include "m2c.h"

M2C_UNK func_0207ad9c(M2C_UNK, u8, M2C_UNK, M2C_UNK, s32, s32, s32, s32);
extern u8 data_020bbfe4;
extern M2C_UNK data_020c3c24;

typedef struct {
    s32 x;
    s32 y;
} Pair;

typedef struct {
    s16 state;
    s16 mode;
    u8 pad0[0x10];
    s32 x;
    s32 y;
    u8 pad1[0x8];
} Ent;

extern Ent data_020c3c2c[];

s32 func_02019da0(s32 arg0, Pair *arg1) {
    s32 temp_ip;

    if (M2C_FIELD(&data_020c3c24, s16 *, 2) == 0) {
        func_0207ad9c(1, data_020bbfe4, 0, 2, -1, 0xFF, 0xFF, 0);
        return 0x7FFF;
    }
    if (arg0 >= 0x10) {
        func_0207ad9c(1, data_020bbfe4, 0, 5, -1, 0xFF, 0xFF, 0);
        return 0x7FFF;
    }
    temp_ip = arg0 * 0x24;
    if (data_020c3c2c[arg0].state > 2) {
        func_0207ad9c(1, data_020bbfe4, 0, 6, -1, 0xFF, 0xFF, 0);
        return 0x7FFF;
    }
    data_020c3c2c[arg0].x    = arg1->x;
    data_020c3c2c[arg0].y    = arg1->y;
    data_020c3c2c[arg0].mode = 4;
    return 0;
}
