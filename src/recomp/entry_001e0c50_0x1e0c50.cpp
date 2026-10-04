#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001e0c50
// Address: 0x1e0c50 - 0x1e0c54
void entry_001e0c50_0x1e0c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0c50_0x1e0c50");
#endif

    ctx->pc = 0x1e0c50u;

    // 0x1e0c50: 0xa0a600b3  sb          $a2, 0xB3($a1)
    ctx->pc = 0x1e0c50u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 179), (uint8_t)GPR_U32(ctx, 6));
    ctx->pc = 0x1e0c54u;
}
