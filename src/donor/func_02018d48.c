/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207ac8c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 state);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern s32 func_02018d48(void);
extern UnkSndCommand *data_020c20f4;
s32 func_02018d48(void) {
    u32 enabled = OS_DisableIrq();
    s32 count   = 0;
    UnkSndCommand *cmd;

    for (cmd = data_020c20f4; cmd != 0; cmd = cmd->next) {
        count++;
    }
    OS_RestoreIrq(enabled);
    return count;
}
