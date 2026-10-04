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

// Function: entry_001fec7c
// Address: 0x1fec7c - 0x1fec84
void entry_001fec7c_0x1fec7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fec7c_0x1fec7c");
#endif

    ctx->pc = 0x1fec7cu;

    // 0x1fec7c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x1fec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x1fec80: 0xaf839098  sw          $v1, -0x6F68($gp)
    ctx->pc = 0x1fec80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938776), GPR_U32(ctx, 3));
    ctx->pc = 0x1fec84u;
}
