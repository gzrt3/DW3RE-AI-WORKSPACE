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

// Function: entry_001c6350
// Address: 0x1c6350 - 0x1c6354
void entry_001c6350_0x1c6350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c6350_0x1c6350");
#endif

    ctx->pc = 0x1c6350u;

    // 0x1c6350: 0xa20702e3  sb          $a3, 0x2E3($s0)
    ctx->pc = 0x1c6350u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 739), (uint8_t)GPR_U32(ctx, 7));
    ctx->pc = 0x1c6354u;
}
