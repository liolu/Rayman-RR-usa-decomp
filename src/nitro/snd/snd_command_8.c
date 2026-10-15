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
extern s32 SND_CountFreeCommand(void);
extern UnkSndCommand *sFreeList;

/* func_0207ac8c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
s32 SND_CountFreeCommand(void) {
    u32 enabled = OS_DisableIrq();
    s32 count   = 0;
    UnkSndCommand *cmd;

    for (cmd = sFreeList; cmd != 0; cmd = cmd->next) {
        count++;
    }
    OS_RestoreIrq(enabled);
    return count;
}
