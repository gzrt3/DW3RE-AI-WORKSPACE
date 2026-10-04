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

// Function: entry_002357a8
// Address: 0x2357a8 - 0x2357b8
void entry_002357a8_0x2357a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002357a8_0x2357a8");
#endif

    ctx->pc = 0x2357a8u;

    // 0x2357a8: 0x12600023  beqz        $s3, . + 4 + (0x23 << 2)
    ctx->pc = 0x2357A8u;
    {
        const bool branch_taken_0x2357a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357A8u;
        // 0x2357ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357a8) {
            ctx->pc = 0x235838u;
            return;
        }
    }
    ctx->pc = 0x2357B0u;
    // 0x2357b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2357b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2357b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2357b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2357b8u;
}
