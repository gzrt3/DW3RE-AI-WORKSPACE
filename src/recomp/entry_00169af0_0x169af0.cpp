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

// Function: entry_00169af0
// Address: 0x169af0 - 0x169af4
void entry_00169af0_0x169af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00169af0_0x169af0");
#endif

    ctx->pc = 0x169af0u;

    // 0x169af0: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x169af0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x169af4u;
}
