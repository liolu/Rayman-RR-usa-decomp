/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void FX_DivAsync(fx32, fx32);
fx32 FX_GetDivResult(void);

fx32 FX_Div(fx32 a, fx32 b) {
    FX_DivAsync(a, b);
    return FX_GetDivResult();
}
