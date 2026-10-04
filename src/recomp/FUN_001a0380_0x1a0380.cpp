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

// Function: FUN_001a0380
// Address: 0x1a0380 - 0x1a03a8
void FUN_001a0380_0x1a0380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_001a0380_0x1a0380");
#endif

    ctx->pc = 0x1a0380u;

    // 0x1a0380: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1a0380u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0384: 0x240b0004  addiu       $t3, $zero, 0x4
    ctx->pc = 0x1a0384u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1a0388: 0x8ce90174  lw          $t1, 0x174($a3)
    ctx->pc = 0x1a0388u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1a038c: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x1a038cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a0390: 0x8cea0150  lw          $t2, 0x150($a3)
    ctx->pc = 0x1a0390u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 336)));
    // 0x1a0394: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1a0394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0398: 0x39220003  xori        $v0, $t1, 0x3
    ctx->pc = 0x1a0398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)3);
    // 0x1a039c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x1a039cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a03a0: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x1a03a0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a03a4: 0x154e0044  bne         $t2, $t6, . + 4 + (0x44 << 2)
    ctx->pc = 0x1A03A4u;
    {
        const bool branch_taken_0x1a03a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 14));
        if (branch_taken_0x1a03a4) {
            ctx->pc = 0x1A04B8u;
            return;
        }
    }
    ctx->pc = 0x1A03ACu;
}
