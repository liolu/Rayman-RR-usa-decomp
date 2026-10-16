#include "m2c.h"

extern void func_0202c3a4(void);
extern struct {
    unsigned long ulCount;
    char pad[0xcc];
    long lD0;
    unsigned long ulD4;
    long *p_lD8;
} data_020c75c8;
extern struct {
    long a;
    unsigned long ulSeed;
} data_020bc538;

void func_0202c334(void) {
    unsigned long i   = 0;
    data_020c75c8.lD0 = 0;
    for (i = 0; i < data_020c75c8.ulCount; i++) {
        data_020bc538.ulSeed   = data_020bc538.ulSeed * 0x41C64E6D + 0x3039;
        data_020c75c8.p_lD8[i] = (data_020bc538.ulSeed >> 16) & 0x7FFF;
    }
    func_0202c3a4();
}
