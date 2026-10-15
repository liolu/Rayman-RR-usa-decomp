/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK OS_WakeupThreadDirect(void *);
M2C_UNK func_0200ce50(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32);
s32 OS_DisableIrq();
M2C_UNK OS_RestoreIrq(s32);
M2C_UNK CTRDGi_InitTaskInfo(M2C_UNK *);
extern void *ctrdgi_task_work;
extern M2C_UNK ctrdgi_task_list;
extern M2C_UNK arc_list;
extern M2C_UNK CTRDGi_TaskThread;

void CTRDGi_InitTaskThread(void *arg0) {
    s32 temp_r4;

    temp_r4 = OS_DisableIrq();
    if (ctrdgi_task_work == NULL) {
        ctrdgi_task_work = arg0;
        CTRDGi_InitTaskInfo(arg0 + 0xC4);
        CTRDGi_InitTaskInfo(&ctrdgi_task_list);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_0200ce50(arg0, &CTRDGi_TaskThread, arg0, &arc_list, 0x400, 0x14);
        OS_WakeupThreadDirect(arg0);
    }
    OS_RestoreIrq(temp_r4);
}
