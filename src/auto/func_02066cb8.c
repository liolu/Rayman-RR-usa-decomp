#include "m2c.h"

typedef struct Tri {
    s32 a;
    s32 b;
    s32 c;
} Tri;

void func_02066cb8(Tri *arg0, u8 *arg1, s32 arg2) {
    Tri spC = {0, 0, 0};
    Tri sp0;
    if (arg2 >= 0 && arg2 < 2) {
        sp0 = *(Tri *) (arg1 + (s16) arg2 * 12 + 0x44);
    } else {
        sp0 = spC;
    }
    *arg0 = sp0;
}
