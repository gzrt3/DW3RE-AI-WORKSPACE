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

// Function: entry_001b188c
// Address: 0x1b188c - 0x1b18b0
void entry_001b188c_0x1b188c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b188c_0x1b188c");
#endif

    ctx->pc = 0x1b188cu;

    // 0x1b188c: 0x26626280  addiu       $v0, $s3, 0x6280
    ctx->pc = 0x1b188cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 25216));
    // 0x1b1890: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1b1890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1894: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1b1894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b1898: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1B1898u;
    {
        const bool branch_taken_0x1b1898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B189Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1898u;
        // 0x1b189c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1898) {
            ctx->pc = 0x1B18D8u;
            return;
        }
    }
    ctx->pc = 0x1B18A0u;
    // 0x1b18a0: 0x3c100037  lui         $s0, 0x37
    ctx->pc = 0x1b18a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)55 << 16));
    // 0x1b18a4: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x1b18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x1b18a8: 0x24e46280  addiu       $a0, $a3, 0x6280
    ctx->pc = 0x1b18a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 25216));
    // 0x1b18ac: 0x0  nop
    ctx->pc = 0x1b18acu;
    // NOP
    ctx->pc = 0x1b18b0u;
}
