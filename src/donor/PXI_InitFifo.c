/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207a080 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/pxi/pxi_fifo.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef volatile u16 vu16;
typedef s32 BOOL;
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 state);
extern void OS_ResetRequestIrqMask(u32 mask);
extern void OS_SetIrqFunction(u32 mask, void *handler);
extern u32 OS_EnableIrqMask(u32 mask);
typedef void (*PxiCallback)(u32 tag, u32 data, BOOL err);
extern void PXI_InitFifo(void);
extern void func_02018300(void);
typedef struct UnkPxiSystemWork {
    u8 unk_000[0x388];
    u32 unk_388[2];
} UnkPxiSystemWork;
static inline UnkPxiSystemWork *GetPxiSystemWork(void) {
    return (UnkPxiSystemWork *) 0x027ffc00;
}
extern u16 FifoCtrlInit;
extern PxiCallback FifoRecvCallbackTable[32];
void PXI_InitFifo(void) {
    u32 enabled = OS_DisableIrq();
    s32 i;

    if (!FifoCtrlInit) {
        FifoCtrlInit                  = 1;
        GetPxiSystemWork()->unk_388[0] = 0;
        for (i = 0; i < 32; i++) {
            FifoRecvCallbackTable[i] = 0;
        }
        (*(vu16 *) 0x04000184) = 0xc408;
        OS_ResetRequestIrqMask(0x40000);
        OS_SetIrqFunction(0x40000, func_02018300);
        OS_EnableIrqMask(0x40000);

        for (i = 0;; i++) {
            s32 timeout;
            s32 sync               = (*(vu16 *) 0x04000180) & 0xf;
            (*(vu16 *) 0x04000180) = sync << 8;
            if (sync == 0 && i > 4) {
                break;
            }
            timeout = 1000;
            while (((*(vu16 *) 0x04000180) & 0xf) == sync) {
                if (timeout <= 0) {
                    i = 0;
                    break;
                }
                timeout--;
            }
        }
    }
    OS_RestoreIrq(enabled);
}
void func_02018300(void);
