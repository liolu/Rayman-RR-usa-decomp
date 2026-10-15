#include "m2c.h"

void MI_SetWramBank(s8 arg0) {
    *(s8 *) 0x04000247 = arg0;
}
