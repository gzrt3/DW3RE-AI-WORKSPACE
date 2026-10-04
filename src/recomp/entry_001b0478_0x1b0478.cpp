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

// Function: entry_001b0478
// Address: 0x1b0478 - 0x1b0488
void entry_001b0478_0x1b0478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0478_0x1b0478");
#endif

    ctx->pc = 0x1b0478u;

    // 0x1b0478: 0x24020918  addiu       $v0, $zero, 0x918
    ctx->pc = 0x1b0478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2328));
    // 0x1b047c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B047Cu;
    {
        const bool branch_taken_0x1b047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B047Cu;
        // 0x1b0480: 0x2222818  mult        $a1, $s1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b047c) {
            ctx->pc = 0x1B0488u;
            return;
        }
    }
    ctx->pc = 0x1B0484u;
    // 0x1b0484: 0x2222818  mult        $a1, $s1, $v0
    ctx->pc = 0x1b0484u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    ctx->pc = 0x1b0488u;
}
