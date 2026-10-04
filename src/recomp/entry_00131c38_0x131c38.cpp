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

// Function: entry_00131c38
// Address: 0x131c38 - 0x131c3c
void entry_00131c38_0x131c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131c38_0x131c38");
#endif

    ctx->pc = 0x131c38u;

    // 0x131c38: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x131c38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x131c3cu;
}
