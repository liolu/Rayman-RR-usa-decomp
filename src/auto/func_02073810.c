#include "m2c.h"

extern s32 data_020de218;
extern s32 data_020de214;
void func_020736ec(void);
void func_02073780(void);

void func_02073810(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        if ((arg1 == 0 && data_020de218 == 1) || (arg1 == 1 && data_020de218 == 0)) {
            func_020736ec();
        }
    } else {
        if ((arg1 == 0 && data_020de214 == 1) || (arg1 == 1 && data_020de214 == 0)) {
            func_02073780();
        }
    }
}
