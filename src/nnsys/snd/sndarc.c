#include "m2c.h"

void SymbolDisposeCallback(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0x88) = 0;
}

void FatDisposeCallback(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0x84) = 0;
}

void InfoDisposeCallback(s32 arg0, s32 arg1, void *arg2) {
    M2C_FIELD(arg2, s32 *, 0x8C) = 0;
}
