/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207adcc from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
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
extern UnkSndCommand *func_02018bc0(void);
extern UnkSndCommand *data_020c2104;
extern UnkSndCommand *data_020c20f4;
UnkSndCommand *func_02018bc0(void) {
    UnkSndCommand *cmd;
    u32 enabled = OS_DisableIrq();

    cmd = data_020c20f4;
    if (cmd == 0) {
        OS_RestoreIrq(enabled);
        return 0;
    }
    data_020c20f4 = cmd->next;
    if (data_020c20f4 == 0) {
        data_020c2104 = 0;
    }
    OS_RestoreIrq(enabled);
    return cmd;
}
