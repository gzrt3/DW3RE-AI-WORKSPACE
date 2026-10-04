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

// Function: entry_001e2150
// Address: 0x1e2150 - 0x1e2190
void entry_001e2150_0x1e2150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2150_0x1e2150");
#endif

    ctx->pc = 0x1e2150u;

    // 0x1e2150: 0x8f848d3c  lw          $a0, -0x72C4($gp)
    ctx->pc = 0x1e2150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937916)));
    // 0x1e2154: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1e2154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e2158: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E2158u;
    {
        const bool branch_taken_0x1e2158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1e2158) {
            ctx->pc = 0x1E21E0u;
            return;
        }
    }
    ctx->pc = 0x1E2160u;
    // 0x1e2160: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e2160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x1e2164: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1e2164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1e2168: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E2168u;
    {
        const bool branch_taken_0x1e2168 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2168u;
        // 0x1e216c: 0xaf828d38  sw          $v0, -0x72C8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2168) {
            ctx->pc = 0x1E2190u;
            return;
        }
    }
    ctx->pc = 0x1E2170u;
    // 0x1e2170: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e2170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x1e2174: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x1e2174u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1e2178: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1E2178u;
    {
        const bool branch_taken_0x1e2178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2178) {
            ctx->pc = 0x1E21E0u;
            return;
        }
    }
    ctx->pc = 0x1E2180u;
    // 0x1e2180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e2180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e2184: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1e2184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
    // 0x1e2188: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1E2188u;
    {
        const bool branch_taken_0x1e2188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2188u;
        // 0x1e218c: 0xaf828d3c  sw          $v0, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2188) {
            ctx->pc = 0x1E21E0u;
            return;
        }
    }
    ctx->pc = 0x1E2190u;
}
