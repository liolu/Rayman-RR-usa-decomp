#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Tri;

void func_0202c700(void *arg0, s32 arg1, s32 *arg2);

void func_020821f4(void *arg0, void *arg1) {
    Tri t;

    if (((s32 *) arg0)[4] == 0) {
        *(Tri *) arg1 = *(Tri *) arg0;
        return;
    }
    t = *(Tri *) arg0;
    func_0202c700(arg1, ((s32 *) ((s32 *) arg0)[4])[9], (s32 *) &t);
}
