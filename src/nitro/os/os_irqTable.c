#include "m2c.h"

M2C_UNK OSi_IrqCallback(M2C_UNK);

void OSi_IrqTimer3(void) {
    OSi_IrqCallback(7);
}

void OSi_IrqTimer2(void) {
    OSi_IrqCallback(6);
}

void OSi_IrqTimer1(void) {
    OSi_IrqCallback(5);
}

void OSi_IrqTimer0(void) {
    OSi_IrqCallback(4);
}

void OSi_IrqDma3(void) {
    OSi_IrqCallback(3);
}

void OSi_IrqDma2(void) {
    OSi_IrqCallback(2);
}

void OSi_IrqDma1(void) {
    OSi_IrqCallback(1);
}

void OSi_IrqDma0(void) {
    OSi_IrqCallback(0);
}
