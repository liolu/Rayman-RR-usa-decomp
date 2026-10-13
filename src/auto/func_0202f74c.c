#include "m2c.h"

typedef struct {
    char a_cData[0x28];
    char a_cData28[0x54];
} tdstEntry;

extern tdstEntry *data_020cf6b8;

void *func_0202f74c(short wIndex) {
    if (wIndex == -1) {
        return 0;
    }
    return &data_020cf6b8[wIndex].a_cData28;
}
