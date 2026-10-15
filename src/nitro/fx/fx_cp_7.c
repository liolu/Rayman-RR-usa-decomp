/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void FX_InvAsync(fx32);
fx32 FX_GetDivResult(void);

fx32 FX_Inv(fx32 x) {
    FX_InvAsync(x);
    return FX_GetDivResult();
}
