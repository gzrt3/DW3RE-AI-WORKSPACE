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

// Function: entry_001e4770
// Address: 0x1e4770 - 0x1e4798
void entry_001e4770_0x1e4770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e4770_0x1e4770");
#endif

    ctx->pc = 0x1e4770u;

    // 0x1e4770: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x1e4770u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e4774: 0x27838d88  addiu       $v1, $gp, -0x7278
    ctx->pc = 0x1e4774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937992));
    // 0x1e4778: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1e4778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1e477c: 0x3c08004b  lui         $t0, 0x4B
    ctx->pc = 0x1e477cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)75 << 16));
    // 0x1e4780: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1e4780u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e4784: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1e4784u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4788: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1e4788u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e478c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x1e478cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1e4790: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1E4790u;
    {
        const bool branch_taken_0x1e4790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4790u;
        // 0x1e4794: 0x250828a0  addiu       $t0, $t0, 0x28A0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4790) {
            ctx->pc = 0x1E4838u;
            return;
        }
    }
    ctx->pc = 0x1E4798u;
}
