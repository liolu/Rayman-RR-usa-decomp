/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 func_0208b540[];
extern u8 func_0208b64c[];
extern u8 func_0208b7a4[];
extern u8 func_0208b8b8[];
extern u8 func_0208b954[];
extern u8 func_02093998[];
extern u8 func_02093c1c[];
extern u8 func_02093df4[];
extern u8 func_02094168[];
extern u8 func_0209431c[];
extern u8 func_02094b74[];
extern u8 func_0209533c[];
extern u8 func_02095848[];
extern u8 func_0209599c[];
extern u8 func_02095bd8[];
extern u8 func_02095e74[];
extern u8 func_020960ec[];
extern u8 func_020961f4[];
extern u8 func_02096264[];
extern u8 func_020962fc[];
extern u8 func_02096384[];
extern u8 func_020964b4[];
extern u8 func_0209651c[];
extern u8 func_020965b0[];
extern u8 func_0209660c[];
extern u8 func_02096638[];
extern u8 func_02096680[];
extern u8 func_020966ac[];
extern u8 func_020966cc[];
extern u8 func_02096a00[];
extern u8 func_02096b28[];
extern u8 func_02096bac[];
extern u8 func_02096eb8[];
extern u8 func_02097100[];
extern u8 func_02097668[];
extern u8 func_020976ec[];
extern u8 func_02097970[];
extern u8 func_02097b80[];
extern u8 func_02097d0c[];
extern u8 func_0209811c[];
extern u8 func_020981f4[];
extern u8 func_020982a4[];
extern u8 func_0209831c[];
extern u8 func_020986d4[];
extern u8 func_02098880[];
extern u8 func_020988a0[];
extern u8 func_02098928[];
extern u8 func_0209895c[];
extern u8 func_02098974[];
extern u8 func_020989bc[];
extern u8 func_020989d4[];
extern u8 func_020989fc[];
extern u8 func_02098a98[];
extern u8 func_02098c10[];
extern u8 func_02098d5c[];
extern u8 func_02098da4[];
extern u8 func_02098e38[];
extern u8 func_020990fc[];
extern u8 func_02099254[];
extern u8 func_020992f8[];
extern u8 func_0209932c[];
extern u8 func_0209967c[];
extern u8 func_020996d8[];
extern u8 func_020996e0[];
extern u8 func_02099888[];
extern u8 func_0209a370[];
extern u8 func_0209a56c[];
extern u8 func_0209a7a8[];
extern u8 func_0209a890[];
extern u8 func_0209a8e8[];
extern u8 func_0209a99c[];
extern u8 func_0209a9c8[];
extern u8 func_0209ab34[];
extern u8 func_0209ad60[];
extern u8 func_0209ad80[];
extern u8 func_0209aec0[];
extern u8 func_0209b03c[];
extern u8 func_0209b060[];
extern u8 func_0209b164[];

u32 data_020bf128[371] = {0x00000001, (u32) &func_02098d5c, 0x00000000, (u32) &func_02098e38, 0x00000001, (u32) &func_02098c10,
                          0x00000001, (u32) &func_02098e38, 0x00000001, (u32) &func_02098e38, 0x00000001, (u32) &func_02098e38,
                          0x00000001, (u32) &func_02098e38, 0x00000001, (u32) &func_02098e38, 0x00000001, (u32) &func_02098a98,
                          0x00000001, (u32) &func_02098e38, 0x00000001, (u32) &func_02098e38, 0x00000001, (u32) &func_02098e38,
                          0x00000001, (u32) &func_02098e38, 0x00000001, (u32) &func_02098da4, 0x00000000, (u32) &func_02099254,
                          0x00000000, (u32) &func_02099254, 0x00000000, (u32) &func_0209932c, 0x00000000, (u32) &func_0209932c,
                          0x00000000, (u32) &func_0209932c, 0x00000000, (u32) &func_0209932c, 0x00000000, (u32) &func_0209932c,
                          0x00000000, (u32) &func_0209932c, 0x00000000, (u32) &func_0209932c, 0x00000000, (u32) &func_0209932c,
                          0x00000000, (u32) &func_0209932c, 0x00000000, (u32) &func_0209932c, 0x00000000, (u32) &func_020992f8,
                          0x00000000, (u32) &func_0209932c, 0x00000000, (u32) &func_0209932c, 0x00000000, (u32) &func_0209932c,
                          0x00000000, (u32) &func_020990fc, 0x00000000, (u32) &func_020990fc, 0x00000000, (u32) &func_020990fc,
                          0x00000000, (u32) &func_020990fc, 0x00000000, (u32) &func_020990fc, 0x00000000, (u32) &func_020990fc,
                          0x00000000, (u32) &func_0209a370, 0x00000000, (u32) &func_0209a7a8, 0x00000000, (u32) &func_0209a7a8,
                          0x00000000, (u32) &func_0209a7a8, 0x00000000, (u32) &func_0209a7a8, 0x00000000, (u32) &func_0209a8e8,
                          0x00000000, (u32) &func_0209a8e8, 0x00000000, (u32) &func_0209967c, 0x00000001, (u32) &func_020996e0,
                          0x00000001, (u32) &func_0209967c, 0x00000001, (u32) &func_020996e0, 0x00000001, (u32) &func_0209a890,
                          0x00000000, (u32) &func_0209a890, 0x00000000, (u32) &func_020966ac, 0x00000000, (u32) &func_0209ad60,
                          0x00000000, (u32) &func_0209a99c, 0x00000000, (u32) &func_0209a9c8, 0x00000000, (u32) &func_0209a9c8,
                          0x00000000, (u32) &func_0209a9c8, 0x00000000, (u32) &func_0209ab34, 0x00000000, (u32) &func_0209ab34,
                          0x00000000, (u32) &func_0209aec0, 0x00000000, (u32) &func_0209aec0, 0x00000000, (u32) &func_0209aec0,
                          0x00000000, (u32) &func_0209aec0, 0x00000000, (u32) &func_0209ad80, 0x00000000, (u32) &func_0209aec0,
                          0x00000000, (u32) &func_02099888, 0x00000000, (u32) &func_0209b03c, 0x00000000, (u32) &func_0209b060,
                          0x00000000, (u32) &func_0209b164, 0x00000000, (u32) &func_0209a56c, 0x00000000, (u32) &func_02094b74,
                          0x00000000, (u32) &func_02094b74, 0x00000000, (u32) &func_02094b74, 0x00000000, (u32) &func_0209533c,
                          0x00000001, (u32) &func_0209533c, 0x00000001, (u32) &func_02095e74, 0x00000001, (u32) &func_02095e74,
                          0x00000001, (u32) &func_02095e74, 0x00000001, (u32) &func_020960ec, 0x00000000, (u32) &func_0209599c,
                          0x00000001, (u32) &func_0209599c, 0x00000001, (u32) &func_0209599c, 0x00000001, (u32) &func_0209599c,
                          0x00000001, (u32) &func_02095bd8, 0x00000001, (u32) &func_02095bd8, 0x00000001, (u32) &func_02095bd8,
                          0x00000001, (u32) &func_02095bd8, 0x00000001, (u32) &func_02095bd8, 0x00000001, (u32) &func_02095bd8,
                          0x00000001, (u32) &func_02095bd8, 0x00000001, (u32) &func_02095bd8, 0x00000001, (u32) &func_02095bd8,
                          0x00000001, (u32) &func_02095bd8, 0x00000001, (u32) &func_02095848, 0x00000000, (u32) &func_02095848,
                          0x00000000, (u32) &func_020961f4, 0x00000000, (u32) &func_02096264, 0x00000000, (u32) &func_020962fc,
                          0x00000001, (u32) &func_020962fc, 0x00000001, (u32) &func_020965b0, 0x00000000, (u32) &func_02096384,
                          0x00000000, (u32) &func_02096384, 0x00000000, (u32) &func_020964b4, 0x00000001, (u32) &func_0209651c,
                          0x00000000, (u32) &func_0209431c, 0x00000000, (u32) &func_02096bac, 0x00000001, (u32) &func_02096b28,
                          0x00000001, (u32) &func_02096bac, 0x00000001, (u32) &func_02096bac, 0x00000001, (u32) &func_02094168,
                          0x00000001, (u32) &func_02094168, 0x00000001, (u32) &func_02093998, 0x00000001, (u32) &func_02093c1c,
                          0x00000001, (u32) &func_02093c1c, 0x00000001, (u32) &func_02093df4, 0x00000000, (u32) &func_02093df4,
                          0x00000000, (u32) &func_02099888, 0x00000000, (u32) &func_02099888, 0x00000000, (u32) &func_02099888,
                          0x00000000, (u32) &func_02099888, 0x00000000, (u32) &func_02099888, 0x00000000, (u32) &func_02099888,
                          0x00000000, (u32) &func_02097d0c, 0x00000000, (u32) &func_02097d0c, 0x00000000, (u32) &func_020966cc,
                          0x00000001, (u32) &func_020966cc, 0x00000001, (u32) &func_02097100, 0x00000001, (u32) &func_02097100,
                          0x00000001, (u32) &func_02097100, 0x00000001, (u32) &func_02097100, 0x00000001, (u32) &func_02097100,
                          0x00000001, (u32) &func_02097100, 0x00000001, (u32) &func_020976ec, 0x00000000, (u32) &func_020976ec,
                          0x00000000, (u32) &func_020976ec, 0x00000000, (u32) &func_02097970, 0x00000000, (u32) &func_02096a00,
                          0x00000001, (u32) &func_02096a00, 0x00000001, (u32) &func_02096a00, 0x00000001, (u32) &func_02097668,
                          0x00000000, (u32) &func_02097b80, 0x00000000, (u32) &func_02096bac, 0x00000001, (u32) &func_02096bac,
                          0x00000001, (u32) &func_02096bac, 0x00000001, (u32) &func_0209a9c8, 0x00000000, (u32) &func_02096eb8,
                          0x00000000, (u32) &func_02096eb8, 0x00000000, (u32) &func_02096eb8, 0x00000000, (u32) &func_02096eb8,
                          0x00000000, (u32) &func_0209811c, 0x00000001, (u32) &func_0209831c, 0x00000001, (u32) &func_0209811c,
                          0x00000001, (u32) &func_020981f4, 0x00000001, (u32) &func_020982a4, 0x00000001, (u32) &func_020986d4,
                          0x00000000, (u32) &func_020986d4, 0x00000000, (u32) &func_02098880, 0x00000000, (u32) &func_020988a0,
                          0x00000000, (u32) &func_020988a0, 0x00000000, (u32) &func_02098928, 0x00000000, (u32) &func_0209895c,
                          0x00000000, (u32) &func_02098974, 0x00000000, (u32) &func_020989bc, 0x00000000, (u32) &func_020989d4,
                          0x00000000, (u32) &func_020989fc, 0x00000001, (u32) &func_020989fc, 0x00000001, (u32) &func_020989fc,
                          0x00000001, (u32) &func_020996d8, 0x00000000, (u32) &func_020996d8, 0x00000001, (u32) &func_020996d8,
                          0x00000000, (u32) &func_020996d8, 0x00000000, (u32) &func_020996d8, 0x00000000, (u32) &func_020996d8,
                          0x00000000, (u32) &func_020996d8, 0x00000000, (u32) &func_020996d8, 0x00000000, (u32) &func_0209660c,
                          0x00000000, (u32) &func_02096638, 0x00000000, (u32) &func_02096680, 0x00000000, (u32) &func_0208b540,
                          0x00000001, (u32) &func_0208b540, 0x00000001, (u32) &func_0208b64c, 0x00000001, (u32) &func_0208b64c,
                          0x00000001, (u32) &func_0208b64c, 0x00000001, (u32) &func_0208b64c, 0x00000001, (u32) &func_0208b7a4,
                          0x00000001, (u32) &func_0208b8b8, 0x00000001, (u32) &func_0208b954, 0x00000001};
