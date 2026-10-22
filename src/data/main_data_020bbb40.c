#include "m2c.h"
extern u8 data_02041e60[];
extern u8 data_02041f60[];
extern u8 data_020c0910[];
extern u8 __read_console[];
extern u8 __write_console[];
extern u8 func_0200b534[];
u32 __files[19] = {0x00000000,
                   0x00000124,
                   0x00000000,
                   0x00000000,
                   0x00000000,
                   0x00000000,
                   0x00000000,
                   (u32) &data_020c0910,
                   0x00000100,
                   (u32) &data_020c0910,
                   0x00000000,
                   0x00000000,
                   0x00000000,
                   0x00000000,
                   0x00000000,
                   (u32) &__read_console,
                   (u32) &__write_console,
                   (u32) &func_0200b534,
                   0x00000000};
