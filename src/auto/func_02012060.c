#include "m2c.h"

extern s32 CARD_UserCallback;

void func_02012060(s32 arg0) {
    CARD_UserCallback = arg0;
}
