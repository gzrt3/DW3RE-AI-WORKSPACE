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

// Function: entry_001e0c74
// Address: 0x1e0c74 - 0x1e0c94
void entry_001e0c74_0x1e0c74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e0c74_0x1e0c74");
#endif

    ctx->pc = 0x1e0c74u;

    // 0x1e0c74: 0x8f898d24  lw          $t1, -0x72DC($gp)
    ctx->pc = 0x1e0c74u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937892)));
    // 0x1e0c78: 0x15200006  bnez        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E0C78u;
    {
        const bool branch_taken_0x1e0c78 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e0c78) {
            ctx->pc = 0x1E0C94u;
            return;
        }
    }
    ctx->pc = 0x1E0C80u;
    // 0x1e0c80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e0c80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c84: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x1e0c84u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c88: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x1e0c88u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e0c8c: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1E0C8Cu;
    {
        const bool branch_taken_0x1e0c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0C8Cu;
        // 0x1e0c90: 0x24180080  addiu       $t8, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0c8c) {
            ctx->pc = 0x1E0D74u;
            return;
        }
    }
    ctx->pc = 0x1E0C94u;
}
