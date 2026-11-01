/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 OSi_IrqDma0[];
extern u8 OSi_IrqDma1[];
extern u8 OSi_IrqDma2[];
extern u8 OSi_IrqDma3[];
extern u8 OSi_IrqTimer0[];
extern u8 OSi_IrqTimer1[];
extern u8 OSi_IrqTimer2[];
extern u8 OSi_IrqTimer3[];
extern u8 func_0200c298[];
u32 SDK_AUTOLOAD_DTCM_START[24] = {(u32) &func_0200c298, (u32) &func_0200c298, (u32) &func_0200c298, (u32) &OSi_IrqTimer0,
                                   (u32) &OSi_IrqTimer1, (u32) &OSi_IrqTimer2, (u32) &OSi_IrqTimer3, (u32) &func_0200c298,
                                   (u32) &OSi_IrqDma0,   (u32) &OSi_IrqDma1,   (u32) &OSi_IrqDma2,   (u32) &OSi_IrqDma3,
                                   (u32) &func_0200c298, (u32) &func_0200c298, (u32) &func_0200c298, (u32) &func_0200c298,
                                   (u32) &func_0200c298, (u32) &func_0200c298, (u32) &func_0200c298, (u32) &func_0200c298,
                                   (u32) &func_0200c298, (u32) &func_0200c298, 0x00000000,           0x00000000};
