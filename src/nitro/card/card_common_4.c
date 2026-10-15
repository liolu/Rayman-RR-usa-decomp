#include "m2c.h"

extern s32 *cardi_common;

s32 CARD_GetResultCode(void) {
    return *cardi_common;
}
