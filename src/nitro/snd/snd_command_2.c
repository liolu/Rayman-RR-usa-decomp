/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */

typedef unsigned int u32;
typedef int s32;
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *AllocCommand(void);
extern UnkSndCommand *sFreeListEnd;
extern UnkSndCommand *sFreeList;

/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
UnkSndCommand *AllocCommand(void) {
    UnkSndCommand *cmd;
    u32 enabled = OS_DisableIrq();

    cmd = sFreeList;
    if (cmd == 0) {
        OS_RestoreIrq(enabled);
        return 0;
    }
    sFreeList = cmd->next;
    if (sFreeList == 0) {
        sFreeListEnd = 0;
    }
    OS_RestoreIrq(enabled);
    return cmd;
}
