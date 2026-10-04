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

// Function: entry_001ffc50
// Address: 0x1ffc50 - 0x1ffc54
void entry_001ffc50_0x1ffc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ffc50_0x1ffc50");
#endif

    ctx->pc = 0x1ffc50u;

    // 0x1ffc50: 0xa2606dd3  sb          $zero, 0x6DD3($s3)
    ctx->pc = 0x1ffc50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 28115), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1ffc54u;
}
