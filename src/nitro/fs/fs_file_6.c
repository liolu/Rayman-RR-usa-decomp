/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK FSi_InitRom();
extern s32 is_init;

void FS_Init(s32 arg0) {
    if (is_init != 0) {
        return;
    }
    is_init = 1;
    FSi_InitRom(arg0);
}
