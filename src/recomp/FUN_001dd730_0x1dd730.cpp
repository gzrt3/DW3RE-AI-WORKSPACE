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

// Function: FUN_001dd730
// Address: 0x1dd730 - 0x1dd740
void FUN_001dd730_0x1dd730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001dd730_0x1dd730");
#endif

    ctx->pc = 0x1dd730u;

    // 0x1dd730: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1dd730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1dd734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1dd734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dd738: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x1dd738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x1dd73c: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x1dd73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    ctx->pc = 0x1dd740u;
}
