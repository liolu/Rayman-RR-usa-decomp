/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* Sound_FlushCommand from https://github.com/RonyxDumb/mkds src/arm9/020211e4_Sound_FlushCommand.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed long s32;
typedef int BOOL;
struct SNDCommand {
    struct SNDCommand *llNext;
    s32 id;
    u32 arg[4];
};
extern const struct SNDCommand *SND_RecvCommandReply(u32 flags);
extern BOOL SND_FlushCommand(u32 flags);
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
extern OSIntrMode OS_DisableIrq(void);
extern OSIntrMode OS_RestoreIrq(OSIntrMode state);
extern void OS_SpinWait(u32 cycles);
extern void DC_FlushRange(register const void *startAddr, register u32 nBytes);
extern s32 func_02018424(s32 fifotag, u32 data, BOOL err);
extern struct SNDCommand sCommandArray[256];
extern struct SNDCommand *sWaitingCommandListQueue[8 + 1];
extern struct SNDCommand *sReserveList;
extern struct SNDCommand *sReserveListEnd;
extern s32 sWaitingCommandListQueueWrite;
extern s32 sWaitingCommandListCount;
extern u32 sCurrentTag;
extern void RequestCommandProc(void);
const struct SNDCommand *SND_RecvCommandReply(u32 flags);
BOOL SND_FlushCommand(u32 flags) {
    OSIntrMode oldirq = OS_DisableIrq();

    if (sReserveList == ((void *) 0)) {
        (void) OS_RestoreIrq(oldirq);
        return 1;
    }

    if (sWaitingCommandListCount >= 8) {
        if ((flags & 0x1) == 0) {
            (void) OS_RestoreIrq(oldirq);
            return 0;
        }

        do {
            (void) SND_RecvCommandReply(0x1);
        } while (sWaitingCommandListCount >= 8);
    }

    DC_FlushRange(sCommandArray, sizeof(sCommandArray));

    s32 result = func_02018424(7, (u32) sReserveList, 0);
    if (result < 0) {
        if ((flags & 0x1) == 0) {
            (void) OS_RestoreIrq(oldirq);
            return 0;
        }

        result = func_02018424(7, (u32) sReserveList, 0);
        while (result < 0) {
            (void) OS_RestoreIrq(oldirq);
            OS_SpinWait(100);
            oldirq = OS_DisableIrq();
            result = func_02018424(7, (u32) sReserveList, 0);
        }
    }

    if ((flags & 0x2) != 0) {
        RequestCommandProc();
    }

    sWaitingCommandListQueue[sWaitingCommandListQueueWrite] = sReserveList;

    if (++sWaitingCommandListQueueWrite > 8) {
        sWaitingCommandListQueueWrite = 0;
    }

    sReserveList    = ((void *) 0);
    sReserveListEnd = ((void *) 0);
    sWaitingCommandListCount++;
    sCurrentTag++;

    (void) OS_RestoreIrq(oldirq);
    return 1;
}
void RequestCommandProc(void);
