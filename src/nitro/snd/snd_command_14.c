/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 state);
extern void OS_SpinWait(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *SND_RecvCommandReply(u32 flags);
extern u32 SNDi_GetFinishedCommandTag(void);
extern u32 sFinishedTag;
extern UnkSndCommand *sFreeListEnd;
extern UnkSndCommand *sFreeList;
extern s32 sWaitingCommandListQueueRead;
extern s32 sWaitingCommandListCount;
extern UnkSndCommand *sWaitingCommandListQueue[9];

/* func_0207a818 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *SND_RecvCommandReply(u32 flags) {
    u32 enabled = OS_DisableIrq();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (sFinishedTag == SNDi_GetFinishedCommandTag()) {
            OS_RestoreIrq(enabled);
            OS_SpinWait(100);
            enabled = OS_DisableIrq();
        }
    } else if (sFinishedTag == SNDi_GetFinishedCommandTag()) {
        OS_RestoreIrq(enabled);
        return 0;
    }

    head = sWaitingCommandListQueue[sWaitingCommandListQueueRead];
    sWaitingCommandListQueueRead++;
    if (sWaitingCommandListQueueRead > 8) {
        sWaitingCommandListQueueRead = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (sFreeListEnd != 0) {
        sFreeListEnd->next = head;
    } else {
        sFreeList = head;
    }
    sFreeListEnd = tail;
    sWaitingCommandListCount--;
    sFinishedTag++;

    OS_RestoreIrq(enabled);
    return head;
}
