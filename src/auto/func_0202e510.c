#include "m2c.h"

extern void *func_020413b4(long lA, void *p_vB);
extern void *func_0202e7d8(long lA);
extern unsigned short *func_0204141c(long lA, void *p_vB, void *p_vC, long lD);
extern void *func_0204bd2c(unsigned short usA, long lB);
extern void func_0207bb40(void *p_vA, long lB, long lC, long lD);
extern void func_0202e870(void *p_vA, void *p_vB);
extern void func_0202e860(void *p_vA, void *p_vB);
extern void func_0202e858(void *p_vA, void *p_vB);
extern void func_0202e868(void *p_vA, void *p_vB);
extern void func_02041da8(unsigned short *p_usA);

void *func_0202e510(void *p_vArg) {
    void *p_vRes = func_020413b4(0x26, p_vArg);
    if (p_vRes == 0) {
        unsigned short *p_usData;
        void *p_vTmp;
        p_vRes   = func_0202e7d8(1);
        p_usData = func_0204141c(0x26, p_vArg, p_vRes, 4);
        if (p_usData[0] != 0xFFFF) {
            p_vTmp = func_0204bd2c(p_usData[0], 1);
            switch (p_usData[1]) {
                case 1:
                    func_0207bb40(p_vTmp, 10, 5, 3);
                    func_0202e870(p_vRes, p_vTmp);
                    break;
                case 2:
                    func_0202e860(p_vRes, p_vTmp);
                    break;
                case 3:
                    func_0202e858(p_vRes, p_vTmp);
                    break;
                case 4:
                    func_0202e868(p_vRes, p_vTmp);
                    break;
                default:
                    while (1) {
                    }
            }
        }
        func_02041da8(p_usData);
    }
    return p_vRes;
}
