#include "m2c.h"

extern void OS_LockMutex(void *p_vM);
extern void FS_SeekFile(void *p_vF, long lPos, long lOrigin);
extern void DC_FlushRange(void *p_vA, unsigned long ulSize);
extern long FS_ReadFile(void *p_vF, void *p_vDst, long lSize);
extern void *func_02041d5c(long lSize, long lB);
extern void func_02040d18(void *p_vA, void *p_vB, long lC, long lD);
extern void func_02041da8(void *p_vA);
extern void func_0200d578(void *p_vM);
extern char data_020c0a5c[];
extern char data_020cfa2c[];

void func_02040e34(void *p_vDst, unsigned long ulPos, long lSize) {
    long lSp;
    void *p_vTmp;
    OS_LockMutex(data_020c0a5c);
    if (ulPos & 0x40000000) {
        FS_SeekFile(data_020cfa2c, ulPos ^ 0x40000000, 0);
        DC_FlushRange(&lSp, 4);
        FS_ReadFile(data_020cfa2c, &lSp, 4);
        p_vTmp = func_02041d5c(lSp, 4);
        DC_FlushRange(p_vTmp, lSp);
        FS_ReadFile(data_020cfa2c, p_vTmp, lSp);
        func_02040d18(p_vTmp, p_vDst, lSp, lSize);
        func_02041da8(p_vTmp);
    } else {
        FS_SeekFile(data_020cfa2c, ulPos, 0);
        DC_FlushRange(p_vDst, lSize);
        FS_ReadFile(data_020cfa2c, p_vDst, lSize);
    }
    func_0200d578(data_020c0a5c);
}
