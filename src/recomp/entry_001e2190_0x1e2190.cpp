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

// Function: entry_001e2190
// Address: 0x1e2190 - 0x1e21c0
void entry_001e2190_0x1e2190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2190_0x1e2190");
#endif

    ctx->pc = 0x1e2190u;

    // 0x1e2190: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1e2190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e2194: 0x1482000a  bne         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1E2194u;
    {
        const bool branch_taken_0x1e2194 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E2198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2194u;
        // 0x1e2198: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2194) {
            ctx->pc = 0x1E21C0u;
            return;
        }
    }
    ctx->pc = 0x1E219Cu;
    // 0x1e219c: 0x8f828d38  lw          $v0, -0x72C8($gp)
    ctx->pc = 0x1e219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937912)));
    // 0x1e21a0: 0x28420030  slti        $v0, $v0, 0x30
    ctx->pc = 0x1e21a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1e21a4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1E21A4u;
    {
        const bool branch_taken_0x1e21a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e21a4) {
            ctx->pc = 0x1E21E0u;
            return;
        }
    }
    ctx->pc = 0x1E21ACu;
    // 0x1e21ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e21acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e21b0: 0xaf808d38  sw          $zero, -0x72C8($gp)
    ctx->pc = 0x1e21b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937912), GPR_U32(ctx, 0));
    // 0x1e21b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E21B4u;
    {
        const bool branch_taken_0x1e21b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E21B4u;
        // 0x1e21b8: 0xaf828d3c  sw          $v0, -0x72C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937916), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e21b4) {
            ctx->pc = 0x1E21E0u;
            return;
        }
    }
    ctx->pc = 0x1E21BCu;
    // 0x1e21bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->pc = 0x1e21c0u;
}
