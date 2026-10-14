/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0207a818 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/snd/snd_command.c (license: none), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 OS_DisableIrq(void);
extern u32 OS_RestoreIrq(u32 state);
extern void func_0200e96c(u32 count);
typedef struct UnkSndCommand {
    struct UnkSndCommand *next;
    s32 id;
    u32 arg[4];
} UnkSndCommand;
extern UnkSndCommand *func_02019150(u32 flags);
extern u32 func_020194fc(void);
extern u32 data_020c20f8;
extern UnkSndCommand *data_020c2104;
extern UnkSndCommand *data_020c20f4;
extern s32 data_020c2108;
extern s32 data_020c2110;
extern UnkSndCommand *data_020c2118[9];
UnkSndCommand *func_02019150(u32 flags) {
    u32 enabled = OS_DisableIrq();
    UnkSndCommand *head;
    UnkSndCommand *tail;

    if (flags & 1) {
        while (data_020c20f8 == func_020194fc()) {
            OS_RestoreIrq(enabled);
            func_0200e96c(100);
            enabled = OS_DisableIrq();
        }
    } else if (data_020c20f8 == func_020194fc()) {
        OS_RestoreIrq(enabled);
        return 0;
    }

    head = data_020c2118[data_020c2108];
    data_020c2108++;
    if (data_020c2108 > 8) {
        data_020c2108 = 0;
    }

    tail = head;
    while (tail->next != 0) {
        tail = tail->next;
    }

    if (data_020c2104 != 0) {
        data_020c2104->next = head;
    } else {
        data_020c20f4 = head;
    }
    data_020c2104 = tail;
    data_020c2110--;
    data_020c20f8++;

    OS_RestoreIrq(enabled);
    return head;
}
