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

// Function: entry_001b1a58
// Address: 0x1b1a58 - 0x1b1a74
void entry_001b1a58_0x1b1a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b1a58_0x1b1a58");
#endif

    ctx->pc = 0x1b1a58u;

    // 0x1b1a58: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1A58u;
    {
        const bool branch_taken_0x1b1a58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A58u;
        // 0x1b1a5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a58) {
            ctx->pc = 0x1B1A84u;
            return;
        }
    }
    ctx->pc = 0x1B1A60u;
    // 0x1b1a60: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1A60u;
    {
        const bool branch_taken_0x1b1a60 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1A60u;
        // 0x1b1a64: 0xae608d08  sw          $zero, -0x72F8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294937864), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1a60) {
            ctx->pc = 0x1B1A74u;
            return;
        }
    }
    ctx->pc = 0x1B1A68u;
    // 0x1b1a68: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1b1a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1b1a6c: 0x8c4377c0  lw          $v1, 0x77C0($v0)
    ctx->pc = 0x1b1a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3777C0u));
    // 0x1b1a70: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1b1a70u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    ctx->pc = 0x1b1a74u;
}
