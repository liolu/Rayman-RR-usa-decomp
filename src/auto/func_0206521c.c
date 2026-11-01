#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Tri;

s32 func_0206521c(void *arg0, s32 arg1, void *arg2) {
    u8 m = (u8) (1 << arg1);

    if (arg2 != 0) {
        *(Tri *) arg2 = *(Tri *) ((u8 *) arg0 + 0xE8);
    }
    return *((u8 *) arg0 + 0xF5) & m;
}
